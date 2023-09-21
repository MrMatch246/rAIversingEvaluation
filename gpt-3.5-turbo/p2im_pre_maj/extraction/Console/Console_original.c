java.nio.HeapByteBuffer[pos=0 lim=0 cap=0]
////>>0x00000410>>_init>>////

int _init(EVP_PKEY_CTX *ctx)

{
  uart_stdio_init();
  return (int)ctx;
}


////>>0x0000041c>>_fini>>////

/* WARNING: Unknown calling convention */

void _fini(void)

{
  return;
}


////>>0x00000428>>_sbrk_r>>////

void * _sbrk_r(_reent *r,ptrdiff_t incr)

{
  uint state_00;
  ptrdiff_t incr_local;
  _reent *r_local;
  uint state;
  void *res;
  
  state_00 = irq_disable();
  res = heap_top;
  if ((&_eram < heap_top + incr) || (heap_top + incr < &_sheap)) {
    r->_errno = 0xc;
    res = (void *)0xffffffff;
  }
  else {
    heap_top = heap_top + incr;
  }
  irq_restore(state_00);
  return res;
}


////>>0x00000490>>_read_r>>////

_ssize_t _read_r(_reent *r,int fd,void *buffer,size_t count)

{
  int iVar1;
  size_t count_local;
  void *buffer_local;
  int fd_local;
  _reent *r_local;
  
  iVar1 = uart_stdio_read((char *)buffer,count);
  return iVar1;
}


////>>0x000004b2>>_write_r>>////

_ssize_t _write_r(_reent *r,int fd,void *data,size_t count)

{
  int iVar1;
  size_t count_local;
  void *data_local;
  int fd_local;
  _reent *r_local;
  
  iVar1 = uart_stdio_write((char *)data,count);
  return iVar1;
}


////>>0x000004d4>>_close_r>>////

int _close_r(_reent *r,int fd)

{
  int fd_local;
  _reent *r_local;
  
  r->_errno = 0x13;
  return -1;
}


////>>0x000004f2>>_lseek_r>>////

_off_t _lseek_r(_reent *r,int fd,_off_t pos,int dir)

{
  int dir_local;
  _off_t pos_local;
  int fd_local;
  _reent *r_local;
  
  r->_errno = 0x13;
  return -1;
}


////>>0x00000514>>_fstat_r>>////

int _fstat_r(_reent *r,int fd,stat *st)

{
  stat *st_local;
  int fd_local;
  _reent *r_local;
  
  r->_errno = 0x13;
  return -1;
}


////>>0x00000534>>_isatty_r>>////

int _isatty_r(_reent *r,int fd)

{
  int iVar1;
  int fd_local;
  _reent *r_local;
  
  r->_errno = 0;
  if (((fd == 0) || (fd == 1)) || (fd == 2)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


////>>0x00000566>>bitarithm_lsb>>////

uint bitarithm_lsb(uint v)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint v_local;
  
  bVar2 = (byte)v;
  bVar3 = (byte)(v >> 8);
  bVar4 = (byte)(v >> 0x10);
  bVar1 = (byte)(v >> 0x18);
  uVar5 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1
                                  | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) <<
                                1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                  (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1
                                  | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) <<
                                1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                  (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1
                                  | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) <<
                                1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                  (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1
                                  | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) <<
                                1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
  if (v == 0) {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


////>>0x0000058e>>clist_rpush>>////

void clist_rpush(clist_node_t *list,clist_node_t *new_node)

{
  clist_node_t *new_node_local;
  clist_node_t *list_local;
  
  if (list->next == (list_node *)0x0) {
    new_node->next = new_node;
  }
  else {
    new_node->next = list->next->next;
    list->next->next = new_node;
  }
  list->next = new_node;
  return;
}


////>>0x000005ca>>clist_lpop>>////

clist_node_t * clist_lpop(clist_node_t *list)

{
  list_node *plVar1;
  clist_node_t *list_local;
  clist_node_t *first;
  
  if (list->next == (list_node *)0x0) {
    plVar1 = (list_node *)0x0;
  }
  else {
    plVar1 = list->next->next;
    if (plVar1 == list->next) {
      list->next = (list_node *)0x0;
    }
    else {
      list->next->next = plVar1->next;
    }
  }
  return plVar1;
}


////>>0x00000610>>sched_run>>////

/* WARNING: Unknown calling convention */

int sched_run(void)

{
  thread_t *ptVar1;
  uint uVar2;
  list_node *plVar3;
  int iVar4;
  thread_t *active_thread;
  int nextrq;
  clist_node_t *__m____;
  thread_t *next_thread;
  
  ptVar1 = sched_active_thread;
  sched_context_switch_request = 0;
  uVar2 = bitarithm_lsb(runqueue_bitcache);
  plVar3 = (sched_runqueues[uVar2].next)->next;
  if (ptVar1 == (thread_t *)(plVar3 + -2)) {
    iVar4 = 0;
  }
  else {
    if ((ptVar1 != (thread_t *)0x0) && (ptVar1->status == '\t')) {
      ptVar1->status = '\n';
    }
    *(undefined *)&plVar3[-1].next = 9;
    sched_active_pid = *(kernel_pid_t *)((int)&plVar3[-1].next + 2);
    iVar4 = 1;
    sched_active_thread = (thread_t *)(plVar3 + -2);
  }
  return iVar4;
}


////>>0x00000698>>sched_set_status>>////

void sched_set_status(thread_t *process,uint status)

{
  uint status_local;
  thread_t *process_local;
  
  if (status < 9) {
    if ((8 < process->status) &&
       (clist_lpop(sched_runqueues + process->priority),
       sched_runqueues[process->priority].next == (list_node *)0x0)) {
      runqueue_bitcache = runqueue_bitcache & ~(1 << process->priority);
    }
  }
  else if (process->status < 9) {
    clist_rpush(sched_runqueues + process->priority,&process->rq_entry);
    runqueue_bitcache = runqueue_bitcache | 1 << process->priority;
  }
  process->status = (uint8_t)status;
  return;
}


////>>0x00000738>>sched_switch>>////

void sched_switch(uint16_t other_prio)

{
  int iVar1;
  uint16_t other_prio_local;
  uint16_t current_prio;
  thread_t *active_thread;
  int on_runqueue;
  
  if ((sched_active_thread->status < 9) || (other_prio < sched_active_thread->priority)) {
    iVar1 = irq_is_in();
    if (iVar1 == 0) {
      thread_yield_higher();
    }
    else {
      sched_context_switch_request = 1;
    }
  }
  return;
}


////>>0x00000794>>sched_task_exit>>////

/* WARNING: Unknown calling convention */

void sched_task_exit(void)

{
  irq_disable();
  sched_threads[sched_active_pid] = (thread_t *)0x0;
  sched_num_threads = sched_num_threads + -1;
  sched_set_status(sched_active_thread,0);
  sched_active_thread = (thread_t *)0x0;
                    
  cpu_switch_context_exit();
}


////>>0x000007dc>>thread_stack_init>>////

char * thread_stack_init(thread_task_func_t task_func,void *arg,void *stack_start,int stack_size)

{
  uint uVar1;
  int stack_size_local;
  void *stack_start_local;
  void *arg_local;
  thread_task_func_t task_func_local;
  int i_1;
  int i;
  uint32_t *stk;
  
  uVar1 = stack_size + (int)stack_start & 0xfffffffc;
  stk = (uint32_t *)(uVar1 - 4);
  *stk = 0x77777777;
  if (((uint)stk & 7) != 0) {
    stk = (uint32_t *)(uVar1 - 8);
    *stk = 0x88888888;
  }
  stk[-1] = 0x1000000;
  stk[-2] = (uint32_t)task_func;
  stk[-3] = 0x795;
  stk = stk + -4;
  *stk = 0;
  for (i = 3; 0 < i; i = i + -1) {
    stk = stk + -1;
    *stk = i;
  }
  stk = stk + -1;
  *stk = (uint32_t)arg;
  for (i_1 = 0xb; 3 < i_1; i_1 = i_1 + -1) {
    stk = stk + -1;
    *stk = i_1;
  }
  stk[-1] = 0xfffffffd;
  return (char *)(stk + -1);
}


////>>0x000008b8>>thread_isr_stack_usage>>////

/* WARNING: Unknown calling convention */

int thread_isr_stack_usage(void)

{
  ptrdiff_t num_used_words;
  uint32_t *ptr;
  
  for (ptr = (uint32_t *)isr_stack; (*ptr == 0xe7fee7fe && (ptr < &heap_top)); ptr = ptr + 1) {
  }
  return ((int)&heap_top - (int)ptr >> 2) << 2;
}


////>>0x00000900>>thread_isr_stack_pointer>>////

/* WARNING: Unknown calling convention */

void * thread_isr_stack_pointer(void)

{
  void *pvVar1;
  uint32_t result;
  void *msp;
  
  pvVar1 = (void *)getMainStackPointer();
  return pvVar1;
}


////>>0x0000091c>>thread_isr_stack_start>>////

/* WARNING: Unknown calling convention */

void * thread_isr_stack_start(void)

{
  return isr_stack;
}


////>>0x00000930>>cpu_switch_context_exit>>////

/* WARNING: Unknown calling convention */

void cpu_switch_context_exit(void)

{
  irq_enable();
  software_interrupt(1);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x0000093c>>thread_yield_higher>>////


/* WARNING: Unknown calling convention */

void thread_yield_higher(void)

{
  _DAT_e000ed04 = _DAT_e000ed04 | 0x10000000;
  return;
}


////>>0x00000958>>isr_pendsv>>////

/* WARNING: Unknown calling convention */

void isr_pendsv(void)

{
  bool bVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_lr;
  code **ppcVar3;
  
  iVar2 = getProcessStackPointer();
  *(undefined4 *)(iVar2 + -4) = unaff_r11;
  *(undefined4 *)(iVar2 + -8) = unaff_r10;
  *(undefined4 *)(iVar2 + -0xc) = unaff_r9;
  *(undefined4 *)(iVar2 + -0x10) = unaff_r8;
  *(undefined4 *)(iVar2 + -0x14) = unaff_r7;
  *(undefined4 *)(iVar2 + -0x18) = unaff_r6;
  *(undefined4 *)(iVar2 + -0x1c) = unaff_r5;
  *(undefined4 *)(iVar2 + -0x20) = unaff_r4;
  *(undefined4 *)(iVar2 + -0x24) = in_lr;
  sched_active_thread->sp = (char *)(undefined4 *)(iVar2 + -0x24);
  isr_svc();
  sched_run();
  UNRECOVERED_JUMPTABLE = *(code **)sched_active_thread->sp;
  ppcVar3 = (code **)((int)sched_active_thread->sp + 0x24);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setProcessStackPointer(ppcVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00000988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,ppcVar3);
  return;
}


////>>0x00000974>>isr_svc>>////

/* WARNING: Unknown calling convention */

void isr_svc(void)

{
  bool bVar1;
  code *UNRECOVERED_JUMPTABLE;
  code **ppcVar2;
  
  sched_run();
  UNRECOVERED_JUMPTABLE = *(code **)sched_active_thread->sp;
  ppcVar2 = (code **)((int)sched_active_thread->sp + 0x24);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setProcessStackPointer(ppcVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00000988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,ppcVar2);
  return;
}


////>>0x00000978>>context_restore>>////

void context_restore(void)

{
  bool bVar1;
  code *UNRECOVERED_JUMPTABLE;
  code **ppcVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)sched_active_thread->sp;
  ppcVar2 = (code **)((int)sched_active_thread->sp + 0x24);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setProcessStackPointer(ppcVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00000988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,ppcVar2);
  return;
}


////>>0x00000990>>post_startup>>////

/* WARNING: Unknown calling convention */

void post_startup(void)

{
  return;
}


////>>0x0000099c>>reset_handler_default>>////

/* WARNING: Unknown calling convention */

void reset_handler_default(void)

{
  uint32_t uStack_18;
  uint32_t *top;
  uint32_t *src;
  uint32_t *dst;
  
  top = &uStack_18;
  src = (uint32_t *)&_etext;
  pre_startup();
  dst = (uint32_t *)isr_stack;
  while (dst < &uStack_18) {
    *dst = 0xe7fee7fe;
    dst = dst + 1;
  }
  dst = (uint32_t *)&heap_top;
  while (dst < &sched_num_threads) {
    *dst = *src;
    src = src + 1;
    dst = dst + 1;
  }
  dst = (uint32_t *)&sched_num_threads;
  while (dst < &_sheap) {
    *dst = 0;
    dst = dst + 1;
  }
  post_startup();
  board_init();
  __libc_init_array();
  kernel_init();
  return;
}


////>>0x00000a30>>nmi_default>>////

/* WARNING: Unknown calling convention */

void nmi_default(void)

{
                    
  core_panic(PANIC_NMI_HANDLER,"NMI HANDLER");
}


////>>0x00000a40>>_stack_size_left>>////

int _stack_size_left(uint32_t required)

{
  uint32_t required_local;
  uint32_t *sp;
  
  return (int)(&stack0xe000ffe8 + -required);
}


////>>0x00000a64>>hard_fault_default>>////

/* WARNING: Unknown calling convention */

void hard_fault_default(void)

{
  uint32_t *sp;
  uint32_t corrupted;
  uint32_t unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  uint in_lr;
  
  if ((&_eram < &stack0x00000000) || (&stack0x00000000 < isr_stack + 0x159)) {
    corrupted = 1;
    register0x00000054 = (BADSPACEBASE *)&heap_top;
  }
  else {
    corrupted = 0;
  }
  if ((in_lr & 4) == 0) {
    sp = (uint32_t *)getMainStackPointer();
  }
  else {
    sp = (uint32_t *)getProcessStackPointer();
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_r11;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(uint32_t *)((int)register0x00000054 + -0x20) = unaff_r4;
                    
  hard_fault_handler(sp,corrupted,in_lr,(uint32_t *)((int)register0x00000054 + -0x20));
}


////>>0x00000aa8>>hard_fault_handler>>////



void hard_fault_handler(uint32_t *sp,uint32_t corrupted,uint32_t exc_return,
                       uint32_t *r4_to_r11_stack)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint32_t *r4_to_r11_stack_local;
  uint32_t exc_return_local;
  uint32_t corrupted_local;
  uint32_t *sp_local;
  int stack_left;
  uint32_t psr;
  uint32_t lr;
  uint32_t r12;
  uint32_t r3;
  uint32_t r2;
  uint32_t r1;
  uint32_t r0;
  uint32_t afsr;
  uint32_t dfsr;
  uint32_t hfsr;
  uint32_t cfsr;
  uint32_t mmfar;
  uint32_t bfar;
  uint32_t *orig_sp;
  uint32_t pc;
  
  uVar6 = _DAT_e000ed3c;
  uVar5 = _DAT_e000ed38;
  uVar4 = _DAT_e000ed34;
  uVar3 = _DAT_e000ed30;
  uVar2 = _DAT_e000ed2c;
  uVar1 = _DAT_e000ed28;
  pc = 0;
  if (isr_stack._0_4_ != -0x18011802) {
    puts("\nISR stack overflowed");
  }
  if (corrupted == 0) {
    uVar8 = *sp;
    uVar9 = sp[1];
    uVar10 = sp[2];
    uVar11 = sp[4];
    uVar12 = sp[5];
    pc = sp[6];
    puts("\nContext before hardfault:");
    iprintf("   r0: 0x%08lx\n   r1: 0x%08lx\n   r2: 0x%08lx\n   r3: 0x%08lx\n",uVar8,uVar9,uVar10);
    iprintf("  r12: 0x%08lx\n   lr: 0x%08lx\n   pc: 0x%08lx\n  psr: 0x%08lx\n\n",uVar11,uVar12,pc);
  }
  else {
    puts("Stack pointer corrupted, reset to top of stack");
  }
  puts("FSR/FAR:");
  iprintf(" CFSR: 0x%08lx\n",uVar1);
  iprintf(" HFSR: 0x%08lx\n",uVar2);
  iprintf(" DFSR: 0x%08lx\n",uVar3);
  iprintf(" AFSR: 0x%08lx\n",uVar6);
  if ((uVar1 & 0x8000) != 0) {
    iprintf(" BFAR: 0x%08lx\n",uVar5);
  }
  if ((uVar1 & 0x80) != 0) {
    iprintf("MMFAR: 0x%08lx\n",uVar4);
  }
  puts("Misc");
  iprintf("EXC_RET: 0x%08lx\n",exc_return);
  if (corrupted == 0) {
    puts("Attempting to reconstruct state for debugging...");
    iprintf("In GDB:\n  set $pc=0x%lx\n  frame 0\n  bt\n",pc);
    iVar7 = _stack_size_left(0x158);
    if (iVar7 < 0) {
      iprintf("\nISR stack overflowed by at least %d bytes.\n",-iVar7);
    }
  }
  software_bkpt(1);
                    
  core_panic(PANIC_HARD_FAULT,"HARD FAULT HANDLER");
}


////>>0x00000c80>>mem_manage_default>>////

/* WARNING: Unknown calling convention */

void mem_manage_default(void)

{
                    
  core_panic(PANIC_MEM_MANAGE,"MEM MANAGE HANDLER");
}


////>>0x00000c90>>bus_fault_default>>////

/* WARNING: Unknown calling convention */

void bus_fault_default(void)

{
                    
  core_panic(PANIC_BUS_FAULT,"BUS FAULT HANDLER");
}


////>>0x00000ca0>>usage_fault_default>>////

/* WARNING: Unknown calling convention */

void usage_fault_default(void)

{
                    
  core_panic(PANIC_USAGE_FAULT,"USAGE FAULT HANDLER");
}


////>>0x00000cb0>>debug_mon_default>>////

/* WARNING: Unknown calling convention */

void debug_mon_default(void)

{
                    
  core_panic(PANIC_DEBUG_MON,"DEBUG MON HANDLER");
}


////>>0x00000cc0>>dummy_handler_default>>////

/* WARNING: Unknown calling convention */

void dummy_handler_default(void)

{
                    
  core_panic(PANIC_DUMMY_HANDLER,"DUMMY HANDLER");
}


////>>0x00000cd0>>irq_disable>>////

/* WARNING: Unknown calling convention */

uint irq_disable(void)

{
  bool bVar1;
  uint uVar2;
  uint32_t result;
  uint32_t mask;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  return uVar2;
}


////>>0x00000cf0>>irq_enable>>////

/* WARNING: Unknown calling convention */

uint irq_enable(void)

{
  bool bVar1;
  uint uVar2;
  uint32_t result;
  
  enableIRQinterrupts();
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  return uVar2;
}


////>>0x00000d0c>>irq_restore>>////

void irq_restore(uint state)

{
  bool bVar1;
  uint state_local;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((state & 1) == 1);
  }
  return;
}


////>>0x00000d2a>>irq_is_in>>////

/* WARNING: Unknown calling convention */

int irq_is_in(void)

{
  bool bVar1;
  uint uVar2;
  uint32_t result;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1f;
  }
  return uVar2;
}


////>>0x00000d44>>bitband_addr>>////

void * bitband_addr(void *ptr,uintptr_t bit)

{
  uintptr_t bit_local;
  void *ptr_local;
  
  return (void *)(bit * 4 + ((uint)ptr & 0xf0000000 | ((uint)ptr & 0xfffff) << 5) + 0x2000000);
}


////>>0x00000d76>>bit_clear32>>////

void bit_clear32(uint32_t *ptr,uint8_t bit)

{
  undefined4 *puVar1;
  uint8_t bit_local;
  uint32_t *ptr_local;
  
  puVar1 = (undefined4 *)bitband_addr(ptr,(uint)bit);
  *puVar1 = 0;
  return;
}


////>>0x00000d9c>>cpu_errata_fixes>>////

/* WARNING: Unknown calling convention */

void cpu_errata_fixes(void)

{
  bit_clear32((uint32_t *)0x40048040,'\0');
  return;
}


////>>0x00000db0>>pre_startup>>////

/* WARNING: Unknown calling convention */

void pre_startup(void)

{
  wdog_disable();
  cpu_errata_fixes();
  return;
}


////>>0x00000dc0>>dummy_handler>>////

/* WARNING: Unknown calling convention */

void dummy_handler(void)

{
  dummy_handler_default();
  return;
}


////>>0x00000dcc>>wdog_disable>>////


/* WARNING: Unknown calling convention */

void wdog_disable(void)

{
  _DAT_4005200e = 0xd928;
  _DAT_40052000 = 0xd2;
  return;
}


////>>0x00000df4>>uart_stdio_init>>////

/* WARNING: Unknown calling convention */

void uart_stdio_init(void)

{
  uart_init(0,0x1c200,isrpipe_write_one + 1,&uart_stdio_isrpipe);
  return;
}


////>>0x00000e14>>uart_stdio_read>>////

int uart_stdio_read(char *buffer,int count)

{
  int iVar1;
  int count_local;
  char *buffer_local;
  
  iVar1 = isrpipe_read(&uart_stdio_isrpipe,buffer,count);
  return iVar1;
}


////>>0x00000e38>>uart_stdio_write>>////

int uart_stdio_write(char *buffer,int len)

{
  int len_local;
  char *buffer_local;
  
  uart_write(0,(uint8_t *)buffer,len);
  return len;
}


////>>0x00000e58>>pm_off>>////

/* WARNING: Unknown calling convention */

void pm_off(void)

{
  irq_disable();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x00000e64>>board_init>>////


/* WARNING: Unknown calling convention */

void board_init(void)

{
  _DAT_40048038 = _DAT_40048038 | 0x200;
  _DAT_40049048 = _DAT_40049048 & 0xfefff8ff;
  cpu_init();
  gpio_init(0x2056,GPIO_OUT);
  gpio_init(0x511a,GPIO_OUT);
  gpio_init(0x2055,GPIO_OUT);
  gpio_set(0x2056);
  gpio_set(0x511a);
  gpio_set(0x2055);
  return;
}


////>>0x00000ed8>>cpu_print_last_instruction>>////

/* WARNING: Unknown calling convention */

void cpu_print_last_instruction(void)

{
  undefined4 in_lr;
  uint32_t *lr_ptr;
  
  iprintf("%p\n",in_lr);
  return;
}


////>>0x00000ef8>>panic_arch>>////

/* WARNING: Unknown calling convention */

void panic_arch(void)

{
  return;
}


////>>0x00000f04>>core_panic>>////

void core_panic(core_panic_t crash_code,char *message)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  char *message_local;
  core_panic_t crash_code_local;
  
  message_local = message;
  crash_code_local = crash_code;
  if (crashed == 0) {
    crashed = 1;
    if (crash_code == PANIC_ASSERT_FAIL) {
      cpu_print_last_instruction();
    }
    iprintf("*** RIOT kernel panic:\n%s\n\n",message_local);
    ps();
    iprintf("\n");
    iprintf("*** halted.\n\n");
  }
  irq_disable();
  panic_arch();
  uStack_14 = 0xf4d;
  pm_off();
  uStack_18 = (int)&uStack_18 + 1;
  auto_init();
  iprintf("main(): This is RIOT! (Version: 2018.04-vm-HEAD)\n");
  main();
  return;
}


////>>0x00000f5c>>main_trampoline>>////

void * main_trampoline(void *arg)

{
  void *arg_local;
  
  auto_init();
  iprintf("main(): This is RIOT! (Version: 2018.04-vm-HEAD)\n");
  main();
  return (void *)0x0;
}


////>>0x00000f80>>idle_thread>>////

void * idle_thread(void *arg)

{
  void *arg_local;
  
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x00000f8c>>kernel_init>>////

/* WARNING: Unknown calling convention */

void kernel_init(void)

{
  irq_disable();
  thread_create(idle_stack,0x100,'\x0f',0xc,idle_thread + 1,(void *)0x0,idle_name);
  thread_create(main_stack,0x600,'\a',0xc,main_trampoline + 1,(void *)0x0,main_name);
                    
  cpu_switch_context_exit();
}


////>>0x00000fec>>cib_init>>////

void cib_init(cib_t *cib,uint size)

{
  uint size_local;
  cib_t *cib_local;
  cib_t c;
  
  if ((size & size - 1) != 0) {
                    
    core_panic(PANIC_ASSERT_FAIL,"FAILED ASSERTION.");
  }
  cib->read_count = 0;
  cib->write_count = 0;
  cib->mask = size - 1;
  return;
}


////>>0x00001034>>thread_add_to_list>>////

void thread_add_to_list(list_node_t *list,thread_t *thread)

{
  thread_t *thread_local;
  list_node_t *list_local;
  thread_t *list_entry;
  clist_node_t *__m____;
  list_node_t *new_node;
  uint16_t my_prio;
  
  if (thread->status < 9) {
    list_local = list;
    while ((list_local->next != (list_node *)0x0 &&
           (*(byte *)((int)&list_local->next[-1].next + 1) <= thread->priority))) {
      list_local = list_local->next;
    }
    (thread->rq_entry).next = list_local->next;
    list_local->next = &thread->rq_entry;
    return;
  }
                    
  core_panic(PANIC_ASSERT_FAIL,"FAILED ASSERTION.");
}


////>>0x000010a0>>thread_measure_stack_free>>////

uintptr_t thread_measure_stack_free(char *stack)

{
  char *stack_local;
  uintptr_t space_free;
  uintptr_t *stackp;
  
  for (stackp = (uintptr_t *)stack; (uintptr_t *)*stackp == stackp; stackp = stackp + 1) {
  }
  return (int)stackp - (int)stack;
}


////>>0x000010d4>>thread_create>>////

kernel_pid_t
thread_create(char *stack,int stacksize,char priority,int flags,thread_task_func_t function,
             void *arg,char *name)

{
  uint state_00;
  char *pcVar1;
  int iVar2;
  uint stack_size;
  thread_t *process;
  int flags_local;
  char priority_local;
  int stacksize_local;
  char *stack_local;
  uint state;
  uintptr_t *stackmax;
  thread_t *cb;
  uintptr_t misalignment;
  int total_stacksize;
  uintptr_t *stackp;
  kernel_pid_t i;
  kernel_pid_t pid;
  
  if ((byte)priority < 0x10) {
    stacksize_local = stacksize;
    stack_local = stack;
    if (((uint)stack & 3) != 0) {
      iVar2 = 4 - ((uint)stack & 3);
      stack_local = stack + iVar2;
      stacksize_local = stacksize - iVar2;
    }
    stack_size = stacksize_local - 0x30U & 0xfffffffc;
    process = (thread_t *)(stack_local + stack_size);
    if ((flags & 8U) == 0) {
      *(char **)stack_local = stack_local;
    }
    else {
      for (stackp = (uintptr_t *)stack_local; stackp < stack_local + stack_size; stackp = stackp + 1
          ) {
        *stackp = (uintptr_t)stackp;
      }
    }
    state_00 = irq_disable();
    pid = 0;
    for (i = 1; i < 0x21; i = i + 1) {
      if (sched_threads[i] == (thread_t *)0x0) {
        pid = i;
        break;
      }
    }
    if (pid == 0) {
      irq_restore(state_00);
      pid = -0x8b;
    }
    else {
      sched_threads[pid] = process;
      process->pid = pid;
      pcVar1 = thread_stack_init(function,arg,stack_local,stack_size);
      process->sp = pcVar1;
      process->stack_start = stack_local;
      process->stack_size = stacksize;
      process->name = name;
      process->priority = priority;
      process->status = '\0';
      (process->rq_entry).next = (list_node *)0x0;
      process->wait_data = (void *)0x0;
      (process->msg_waiters).next = (list_node *)0x0;
      cib_init(&process->msg_queue,0);
      process->msg_array = (msg_t *)0x0;
      sched_num_threads = sched_num_threads + 1;
      if ((flags & 1U) == 0) {
        sched_set_status(process,10);
        if ((flags & 4U) == 0) {
          irq_restore(state_00);
          sched_switch((ushort)(byte)priority);
          return pid;
        }
      }
      else {
        sched_set_status(process,1);
      }
      irq_restore(state_00);
    }
  }
  else {
    pid = -0x16;
  }
  return pid;
}


////>>0x00001274>>cpu_init>>////

/* WARNING: Unknown calling convention */

void cpu_init(void)

{
  cortexm_init();
  DAT_4007e000 = DAT_4007e000 | 0x28;
  kinetis_mcg_init();
  periph_init();
  return;
}


////>>0x0000129c>>mutex_lock>>////

void mutex_lock(mutex_t *mutex)

{
  mutex_t *mutex_local;
  
  _mutex_lock(mutex,1);
  return;
}


////>>0x000012b4>>isrpipe_write_one>>////

int isrpipe_write_one(isrpipe_t *isrpipe,char c)

{
  int iVar1;
  char c_local;
  isrpipe_t *isrpipe_local;
  int res;
  
  iVar1 = tsrb_add_one(&isrpipe->tsrb,c);
  mutex_unlock(&isrpipe->mutex);
  return iVar1;
}


////>>0x000012e2>>isrpipe_read>>////

int isrpipe_read(isrpipe_t *isrpipe,char *buffer,size_t count)

{
  int iVar1;
  size_t count_local;
  char *buffer_local;
  isrpipe_t *isrpipe_local;
  int res;
  
  while( true ) {
    iVar1 = tsrb_get(&isrpipe->tsrb,buffer,count);
    if (iVar1 != 0) break;
    mutex_lock(&isrpipe->mutex);
  }
  return iVar1;
}


////>>0x00001318>>NVIC_EnableIRQ>>////

void NVIC_EnableIRQ(IRQn_Type IRQn)

{
  IRQn_Type IRQn_local;
  
  *(int *)(((uint)(int)IRQn >> 5) * 4 + -0x1fff1f00) = 1 << (IRQn & 0x1fU);
  return;
}


////>>0x00001348>>cortexm_isr_end>>////

/* WARNING: Unknown calling convention */

void cortexm_isr_end(void)

{
  if (sched_context_switch_request != 0) {
    thread_yield_higher();
  }
  return;
}


////>>0x00001360>>bitband_addr>>////

void * bitband_addr(void *ptr,uintptr_t bit)

{
  uintptr_t bit_local;
  void *ptr_local;
  
  return (void *)(bit * 4 + ((uint)ptr & 0xf0000000 | ((uint)ptr & 0xfffff) << 5) + 0x2000000);
}


////>>0x00001392>>bit_set32>>////

void bit_set32(uint32_t *ptr,uint8_t bit)

{
  undefined4 *puVar1;
  uint8_t bit_local;
  uint32_t *ptr_local;
  
  puVar1 = (undefined4 *)bitband_addr(ptr,(uint)bit);
  *puVar1 = 1;
  return;
}


////>>0x000013b8>>uart_init>>////

/* WARNING: Removing unreachable block (ram,0x0000142e) */

int uart_init(uart_t uart,uint32_t baudrate,uart_rx_cb_t rx_cb,void *arg)

{
  void *arg_local;
  uart_rx_cb_t rx_cb_local;
  uint32_t baudrate_local;
  uart_t uart_local;
  
  if (uart == 0) {
    config[0].rx_cb = rx_cb;
    config[0].arg = arg;
    uart_init_pins(0);
    bit_set32((uint32_t *)&DAT_40048034,'\n');
    uart_init_uart(0,baudrate);
    return 0;
  }
                    
  core_panic(PANIC_ASSERT_FAIL,"FAILED ASSERTION.");
}


////>>0x00001448>>uart_init_pins>>////

void uart_init_pins(uart_t uart)

{
  uart_t uart_local;
  
  if (uart_config[uart].pin_rx != 0xffff) {
    gpio_init_port(uart_config[uart].pin_rx,uart_config[uart].pcr_rx);
  }
  if (uart_config[uart].pin_tx != 0xffff) {
    gpio_init_port(uart_config[uart].pin_tx,uart_config[uart].pcr_tx);
  }
  return;
}


////>>0x000014c4>>uart_init_uart>>////

void uart_init_uart(uart_t uart,uint32_t baudrate)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint32_t baudrate_local;
  uart_t uart_local;
  uint8_t txfifo_size;
  uint8_t brfa;
  uint16_t ubd;
  uint32_t clk;
  UART_Type *dev;
  
  pbVar1 = (byte *)uart_config[uart].dev;
  uVar2 = uart_config[uart].freq;
  pbVar1[3] = pbVar1[3] & 0xf3;
  pbVar1[2] = uart_config[uart].mode;
  uVar3 = uVar2 / (baudrate << 4);
  *pbVar1 = (byte)(uVar3 >> 8) & 0x1f;
  pbVar1[1] = (byte)uVar3;
  pbVar1[10] = (byte)((uVar2 << 2) / baudrate + 1 >> 1) & 0x1f;
  pbVar1[0x10] = pbVar1[0x10] | 0x88;
  if ((pbVar1[0x10] & 0x70) == 0) {
    pbVar1[0x13] = 0;
  }
  else {
    pbVar1[0x13] = (char)(2 << (pbVar1[0x10] >> 4 & 7)) - 1;
  }
  pbVar1[0x15] = 1;
  pbVar1[0x11] = 0xc0;
  pbVar1[3] = pbVar1[3] | 0x2c;
  NVIC_EnableIRQ(uart_config[uart].irqn);
  return;
}


////>>0x000015d0>>uart_write>>////

void uart_write(uart_t uart,uint8_t *data,size_t len)

{
  void *pvVar1;
  size_t len_local;
  uint8_t *data_local;
  uart_t uart_local;
  UART_Type *dev;
  size_t i;
  
  pvVar1 = uart_config[uart].dev;
  for (i = 0; i < len; i = i + 1) {
    do {
    } while (-1 < *(char *)((int)pvVar1 + 4));
    *(uint8_t *)((int)pvVar1 + 7) = data[i];
  }
  return;
}


////>>0x00001628>>irq_handler_uart>>////

void irq_handler_uart(uart_t uart)

{
  uart_t uart_local;
  uint8_t data;
  UART_Type *dev;
  
  if (((*(byte *)((int)uart_config[uart].dev + 4) & 0x20) != 0) &&
     (config[uart].rx_cb != (uart_rx_cb_t)0x0)) {
    (*config[uart].rx_cb)(config[uart].arg,*(uint8_t *)((int)uart_config[uart].dev + 7));
  }
  cortexm_isr_end();
  return;
}


////>>0x00001688>>isr_uart0_rx_tx>>////

/* WARNING: Unknown calling convention */

void isr_uart0_rx_tx(void)

{
  irq_handler_uart(0);
  return;
}


////>>0x00001696>>bitband_addr>>////

void * bitband_addr(void *ptr,uintptr_t bit)

{
  uintptr_t bit_local;
  void *ptr_local;
  
  return (void *)(bit * 4 + ((uint)ptr & 0xf0000000 | ((uint)ptr & 0xfffff) << 5) + 0x2000000);
}


////>>0x000016c8>>bit_set32>>////

void bit_set32(uint32_t *ptr,uint8_t bit)

{
  undefined4 *puVar1;
  uint8_t bit_local;
  uint32_t *ptr_local;
  
  puVar1 = (undefined4 *)bitband_addr(ptr,(uint)bit);
  *puVar1 = 1;
  return;
}


////>>0x000016ec>>bit_set8>>////

void bit_set8(uint8_t *ptr,uint8_t bit)

{
  undefined *puVar1;
  uint8_t bit_local;
  uint8_t *ptr_local;
  
  puVar1 = (undefined *)bitband_addr(ptr,(uint)bit);
  *puVar1 = 1;
  return;
}


////>>0x00001710>>bit_clear8>>////

void bit_clear8(uint8_t *ptr,uint8_t bit)

{
  undefined *puVar1;
  uint8_t bit_local;
  uint8_t *ptr_local;
  
  puVar1 = (undefined *)bitband_addr(ptr,(uint)bit);
  *puVar1 = 0;
  return;
}


////>>0x00001734>>kinetis_mcg_disable_pll>>////

/* WARNING: Unknown calling convention */

void kinetis_mcg_disable_pll(void)

{
  bit_clear8(&DAT_40064005,'\x06');
  return;
}


////>>0x00001748>>kinetis_mcg_set_fll_factor>>////

void kinetis_mcg_set_fll_factor(kinetis_mcg_fll_t factor)

{
  kinetis_mcg_fll_t factor_local;
  
  DAT_40064003 = factor | DAT_40064003 & ~KINETIS_MCG_FLL_FACTOR_2929;
  return;
}


////>>0x00001778>>kinetis_mcg_enable_osc>>////

/* WARNING: Removing unreachable block (ram,0x0000179c) */
/* WARNING: Removing unreachable block (ram,0x000017b2) */
/* WARNING: Removing unreachable block (ram,0x000017c0) */
/* WARNING: Unknown calling convention */

void kinetis_mcg_enable_osc(void)

{
  DAT_40064001 = DAT_40064001 & 0xcf | 0x20;
  bit_clear8(&DAT_40064001,'\x02');
  return;
}


////>>0x000017dc>>kinetis_mcg_init_erclk32k>>////


/* WARNING: Unknown calling convention */

void kinetis_mcg_init_erclk32k(void)

{
  bit_set32((uint32_t *)&DAT_4004803c,'\x1d');
  if ((_DAT_4003d010 & 0x100) == 0) {
    _DAT_4003d010 = 0x104;
  }
  _DAT_40047000 = _DAT_40047000 & 0xfff3ffff | 0x80000;
  return;
}


////>>0x0000182c>>kinetis_mcg_init_mcgirclk>>////

/* WARNING: Removing unreachable block (ram,0x0000187c) */
/* WARNING: Removing unreachable block (ram,0x0000186a) */
/* WARNING: Removing unreachable block (ram,0x00001898) */
/* WARNING: Unknown calling convention */

void kinetis_mcg_init_mcgirclk(void)

{
  uint8_t tmp;
  
  DAT_40064008 = DAT_40064008 & 0xd0;
  bit_set8(&DAT_40064001,'\0');
  bit_clear8(&DAT_40064000,'\x01');
  bit_clear8(&DAT_40064000,'\0');
  return;
}


////>>0x000018bc>>kinetis_mcg_set_fei>>////

/* WARNING: Unknown calling convention */

void kinetis_mcg_set_fei(void)

{
  kinetis_mcg_set_fll_factor(KINETIS_MCG_FLL_FACTOR_1464);
  DAT_40064000 = DAT_40064000 & 0x3b | 4;
  bit_clear8(&DAT_40064001,'\x01');
  do {
  } while ((DAT_40064006 & 0x10) == 0);
  do {
  } while ((DAT_40064006 & 0xc) != 0);
  current_mode = KINETIS_MCG_MODE_FEI;
  return;
}


////>>0x0000191c>>kinetis_mcg_set_fee>>////

/* WARNING: Unknown calling convention */

void kinetis_mcg_set_fee(void)

{
  kinetis_mcg_enable_osc();
  kinetis_mcg_set_fll_factor(KINETIS_MCG_FLL_FACTOR_1920);
  DAT_40064000 = DAT_40064000 & 0x3b;
  do {
  } while ((DAT_40064006 & 0xc) != 0);
  current_mode = KINETIS_MCG_MODE_FEE;
  return;
}


////>>0x00001960>>kinetis_mcg_set_fbi>>////

/* WARNING: Unknown calling convention */

void kinetis_mcg_set_fbi(void)

{
  kinetis_mcg_set_fll_factor(KINETIS_MCG_FLL_FACTOR_1464);
  bit_clear8(&DAT_40064001,'\x01');
  DAT_40064000 = DAT_40064000 & 0x3b | 0x44;
  do {
  } while ((DAT_40064006 & 0xc) != 4);
  do {
  } while ((DAT_40064006 & 0x10) == 0);
  current_mode = KINETIS_MCG_MODE_FBI;
  return;
}


////>>0x000019c0>>kinetis_mcg_set_fbe>>////

/* WARNING: Unknown calling convention */

void kinetis_mcg_set_fbe(void)

{
  kinetis_mcg_enable_osc();
  kinetis_mcg_set_fll_factor(KINETIS_MCG_FLL_FACTOR_1920);
  bit_clear8(&DAT_40064001,'\x01');
  DAT_40064000 = DAT_40064000 & 0x3b | 0x80;
  do {
  } while ((DAT_40064006 & 0xc) != 8);
  kinetis_mcg_disable_pll();
  current_mode = KINETIS_MCG_MODE_FBE;
  return;
}


////>>0x00001a18>>kinetis_mcg_set_blpi>>////

/* WARNING: Unknown calling convention */

void kinetis_mcg_set_blpi(void)

{
  bit_set8(&DAT_40064001,'\x01');
  kinetis_mcg_disable_pll();
  current_mode = KINETIS_MCG_MODE_BLPI;
  return;
}


////>>0x00001a3c>>kinetis_mcg_set_blpe>>////

/* WARNING: Unknown calling convention */

void kinetis_mcg_set_blpe(void)

{
  bit_set8(&DAT_40064001,'\x01');
  kinetis_mcg_disable_pll();
  current_mode = KINETIS_MCG_MODE_BLPE;
  return;
}


////>>0x00001a60>>kinetis_mcg_set_pbe>>////

/* WARNING: Unknown calling convention */

void kinetis_mcg_set_pbe(void)

{
  bit_clear8(&DAT_40064001,'\x01');
  DAT_40064000 = DAT_40064000 & 0x3f | 0x80;
  do {
  } while ((DAT_40064006 & 0xc) != 8);
  bit_set8(&DAT_40064005,'\x06');
  do {
  } while ((DAT_40064006 & 0x20) == 0);
  do {
  } while ((DAT_40064006 & 0x40) == 0);
  current_mode = KINETIS_MCG_MODE_PBE;
  return;
}


////>>0x00001ad4>>kinetis_mcg_set_pee>>////

/* WARNING: Unknown calling convention */

void kinetis_mcg_set_pee(void)

{
  DAT_40064000 = DAT_40064000 & 0x3f;
  do {
  } while ((DAT_40064006 & 0xc) != 0xc);
  current_mode = KINETIS_MCG_MODE_PEE;
  return;
}


////>>0x00001b10>>kinetis_mcg_set_mode>>////

int kinetis_mcg_set_mode(kinetis_mcg_mode_t mode)

{
  int iVar1;
  kinetis_mcg_mode_t mode_local;
  
  if (mode < KINETIS_MCG_MODE_NUMOF) {
    do {
      switch(mcg_mode_routing[current_mode][mode]) {
      case '\0':
        kinetis_mcg_set_fei();
        break;
      case '\x01':
        kinetis_mcg_set_fee();
        break;
      case '\x02':
        kinetis_mcg_set_fbi();
        break;
      case '\x03':
        kinetis_mcg_set_fbe();
        break;
      case '\x04':
        kinetis_mcg_set_blpi();
        break;
      case '\x05':
        kinetis_mcg_set_blpe();
        break;
      case '\x06':
        kinetis_mcg_set_pbe();
        break;
      case '\a':
        kinetis_mcg_set_pee();
        break;
      default:
        return -1;
      }
    } while (mode != current_mode);
    iVar1 = 0;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


////>>0x00001bb8>>kinetis_mcg_set_safe_mode>>////

/* WARNING: Unknown calling convention */

void kinetis_mcg_set_safe_mode(void)

{
  if ((DAT_40064001 & 2) != 0) {
    bit_clear8(&DAT_40064001,'\x01');
  }
  if ((DAT_40064005 & 0x40) != 0) {
    if ((DAT_40064000 & 0xc0) == 0) {
      DAT_40064000 = DAT_40064000 & 0x3f | 0x80;
      do {
      } while ((DAT_40064006 & 0xc) != 8);
    }
    bit_clear8(&DAT_40064005,'\x06');
    do {
    } while ((DAT_40064006 & 0x20) != 0);
  }
  kinetis_mcg_set_fll_factor(KINETIS_MCG_FLL_FACTOR_640);
  DAT_40064000 = DAT_40064000 & 0x3b | 4;
  do {
  } while ((DAT_40064006 & 0x10) == 0);
  do {
  } while ((DAT_40064006 & 0xc) != 0);
  current_mode = KINETIS_MCG_MODE_FEI;
  return;
}


////>>0x00001c84>>kinetis_mcg_init>>////


/* WARNING: Unknown calling convention */

void kinetis_mcg_init(void)

{
  uint state;
  uint mask;
  
  state = irq_disable();
  kinetis_mcg_set_safe_mode();
  _DAT_40048044 = 0x220000;
  DAT_4006400c = 0;
  DAT_40064000 = DAT_40064000 & 199 | 0x38;
  DAT_40064004 = 0x13;
  DAT_40064005 = 0;
  kinetis_mcg_init_mcgirclk();
  kinetis_mcg_init_erclk32k();
  kinetis_mcg_set_mode(KINETIS_MCG_MODE_PEE);
  irq_restore(state);
  return;
}


////>>0x00001cf0>>cortexm_isr_end>>////

/* WARNING: Unknown calling convention */

void cortexm_isr_end(void)

{
  if (sched_context_switch_request != 0) {
    thread_yield_higher();
  }
  return;
}


////>>0x00001d08>>bitband_addr>>////

void * bitband_addr(void *ptr,uintptr_t bit)

{
  uintptr_t bit_local;
  void *ptr_local;
  
  return (void *)(bit * 4 + ((uint)ptr & 0xf0000000 | ((uint)ptr & 0xfffff) << 5) + 0x2000000);
}


////>>0x00001d3a>>bit_set32>>////

void bit_set32(uint32_t *ptr,uint8_t bit)

{
  undefined4 *puVar1;
  uint8_t bit_local;
  uint32_t *ptr_local;
  
  puVar1 = (undefined4 *)bitband_addr(ptr,(uint)bit);
  *puVar1 = 1;
  return;
}


////>>0x00001d5e>>port>>////

PORT_Type * port(gpio_t pin)

{
  gpio_t pin_local;
  
  return (PORT_Type *)(pin & 0x7000 | 0x40048000);
}


////>>0x00001d80>>gpio>>////

GPIO_Type * gpio(gpio_t pin)

{
  gpio_t pin_local;
  
  return (GPIO_Type *)(pin & 0x1c0 | 0x400ff000);
}


////>>0x00001da2>>port_num>>////

int port_num(gpio_t pin)

{
  gpio_t pin_local;
  
  return pin >> 6 & 7;
}


////>>0x00001dc0>>pin_num>>////

int pin_num(gpio_t pin)

{
  gpio_t pin_local;
  
  return pin & 0x3f;
}


////>>0x00001ddc>>clk_en>>////

void clk_en(gpio_t pin)

{
  int iVar1;
  gpio_t pin_local;
  
  iVar1 = port_num(pin);
  bit_set32((uint32_t *)&DAT_40048038,(char)iVar1 + '\t');
  return;
}


////>>0x00001e0c>>get_ctx>>////

int get_ctx(int port,int pin)

{
  int pin_local;
  int port_local;
  
  return isr_map[(pin >> 3) + port * 4] >> ((pin & 7U) << 2) & 0xf;
}


////>>0x00001e44>>write_map>>////

void write_map(int port,int pin,int ctx)

{
  int iVar1;
  int ctx_local;
  int pin_local;
  int port_local;
  
  iVar1 = pin >> 3;
  isr_map[iVar1 + port * 4] = isr_map[iVar1 + port * 4] & ~(0xf << ((pin & 7U) << 2));
  isr_map[iVar1 + port * 4] = isr_map[iVar1 + port * 4] | ctx << ((pin & 7U) << 2);
  return;
}


////>>0x00001ec4>>ctx_clear>>////

void ctx_clear(int port,int pin)

{
  int ctx_00;
  int pin_local;
  int port_local;
  int ctx;
  
  ctx_00 = get_ctx(port,pin);
  write_map(port,pin,ctx_00);
  return;
}


////>>0x00001eea>>gpio_init>>////

int gpio_init(gpio_t pin,gpio_mode_t mode)

{
  uint uVar1;
  GPIO_Type *pGVar2;
  PORT_Type *pPVar3;
  int iVar4;
  gpio_mode_t mode_local;
  gpio_t pin_local;
  
  gpio_init_port(pin,0);
  if ((char)mode < '\0') {
    uVar1 = pin_num(pin);
    pGVar2 = gpio(pin);
    pGVar2->PDDR = pGVar2->PDDR | 1 << (uVar1 & 0xff);
  }
  else {
    uVar1 = pin_num(pin);
    pGVar2 = gpio(pin);
    pGVar2->PDDR = pGVar2->PDDR & ~(1 << (uVar1 & 0xff));
  }
  pPVar3 = port(pin);
  iVar4 = pin_num(pin);
  pPVar3->PCR[iVar4] = mode & 0x23 | 0x100;
  return 0;
}


////>>0x00001f80>>gpio_init_port>>////

void gpio_init_port(gpio_t pin,uint32_t pcr)

{
  PORT_Type *pPVar1;
  int iVar2;
  int pin_00;
  uint uVar3;
  uint32_t pcr_local;
  gpio_t pin_local;
  uint32_t isr_state;
  
  clk_en(pin);
  pPVar1 = port(pin);
  iVar2 = pin_num(pin);
  uVar3 = pPVar1->PCR[iVar2];
  pPVar1 = port(pin);
  iVar2 = pin_num(pin);
  pPVar1->PCR[iVar2] = pcr;
  if ((uVar3 & 0xf0000) != 0) {
    iVar2 = port_num(pin);
    pin_00 = pin_num(pin);
    ctx_clear(iVar2,pin_00);
  }
  return;
}


////>>0x00001ff6>>gpio_set>>////

void gpio_set(gpio_t pin)

{
  uint uVar1;
  GPIO_Type *pGVar2;
  gpio_t pin_local;
  
  uVar1 = pin_num(pin);
  pGVar2 = gpio(pin);
  pGVar2->PSOR = 1 << (uVar1 & 0xff);
  return;
}


////>>0x00002028>>irq_handler>>////

void irq_handler(PORT_Type *port,int port_num)

{
  int iVar1;
  uint uVar2;
  int port_num_local;
  PORT_Type *port_local;
  int ctx;
  uint32_t status;
  int i;
  
  uVar2 = port->ISFR;
  for (i = 0; i < 0x20; i = i + 1) {
    if (((uVar2 & 1 << (i & 0xffU)) != 0) && ((port->PCR[i] & 0xf0000) != 0)) {
      port->ISFR = 1 << (i & 0xffU);
      iVar1 = get_ctx(port_num,i);
      (*isr_ctx[iVar1].cb)(isr_ctx[iVar1].arg);
    }
  }
  cortexm_isr_end();
  return;
}


////>>0x000020b8>>isr_porta>>////

/* WARNING: Unknown calling convention */

void isr_porta(void)

{
  irq_handler((PORT_Type *)0x40049000,0);
  return;
}


////>>0x000020cc>>isr_portb>>////

/* WARNING: Unknown calling convention */

void isr_portb(void)

{
  irq_handler((PORT_Type *)0x4004a000,1);
  return;
}


////>>0x000020e0>>isr_portc>>////

/* WARNING: Unknown calling convention */

void isr_portc(void)

{
  irq_handler((PORT_Type *)0x4004b000,2);
  return;
}


////>>0x000020f4>>isr_portd>>////

/* WARNING: Unknown calling convention */

void isr_portd(void)

{
  irq_handler((PORT_Type *)0x4004c000,3);
  return;
}


////>>0x00002108>>isr_porte>>////

/* WARNING: Unknown calling convention */

void isr_porte(void)

{
  irq_handler((PORT_Type *)0x4004d000,4);
  return;
}


////>>0x0000211c>>ps>>////

/* WARNING: Unknown calling convention */

void ps(void)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  uintptr_t uVar5;
  thread_t *ptVar6;
  char *pcVar7;
  char queued_name [2];
  int stacksz;
  char *queued;
  char *sname;
  int state;
  thread_t *p;
  void *isr_sp;
  void *isr_start;
  int isr_usage;
  kernel_pid_t i;
  int overall_used;
  int overall_stacksz;
  
  queued_name[0] = '_';
  queued_name[1] = 'Q';
  overall_used = 0;
  iprintf("\tpid | %-21s| %-9sQ | pri | stack  ( used) | base addr  | current     \n",&DAT_000070b8,
          "state");
  iVar2 = thread_isr_stack_usage();
  pvVar3 = thread_isr_stack_start();
  pvVar4 = thread_isr_stack_pointer();
  iprintf("\t  - | isr_stack            | -        - |   - | %6i (%5i) | %10p | %10p\n",0x200,iVar2,
          pvVar3,pvVar4);
  overall_stacksz = 0x200;
  if (0 < iVar2) {
    overall_used = iVar2;
  }
  for (i = 1; i < 0x21; i = i + 1) {
    ptVar6 = sched_threads[i];
    if (ptVar6 != (thread_t *)0x0) {
      bVar1 = ptVar6->status;
      pcVar7 = state_names[bVar1];
      iVar2 = ptVar6->stack_size;
      overall_stacksz = iVar2 + overall_stacksz;
      uVar5 = thread_measure_stack_free(ptVar6->stack_start);
      iVar2 = iVar2 - uVar5;
      overall_used = iVar2 + overall_used;
      iprintf("\t%3hi | %-20s | %-8s %.1s | %3i | %6i (%5i) | %10p | %10p \n",(int)ptVar6->pid,
              ptVar6->name,pcVar7,queued_name + (8 < bVar1),(uint)ptVar6->priority,
              ptVar6->stack_size,iVar2,ptVar6->stack_start,ptVar6->sp);
    }
  }
  iprintf("\t%5s %-21s|%13s%6s %6i (%5i)\n",&DAT_00007190,&DAT_00007194,&DAT_00007190,&DAT_00007190,
          overall_stacksz,overall_used);
  return;
}


////>>0x00002270>>tsrb_empty>>////

int tsrb_empty(tsrb_t *rb)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  tsrb_t *rb_local;
  
  uVar2 = rb->writes;
  bVar3 = rb->reads == uVar2;
  if (bVar3) {
    uVar2 = 1;
  }
  bVar1 = (byte)uVar2;
  if (!bVar3) {
    bVar1 = 0;
  }
  return (uint)bVar1;
}


////>>0x00002294>>tsrb_full>>////

int tsrb_full(tsrb_t *rb)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  tsrb_t *rb_local;
  
  uVar2 = rb->size;
  bVar3 = rb->writes - rb->reads == uVar2;
  if (bVar3) {
    uVar2 = 1;
  }
  bVar1 = (byte)uVar2;
  if (!bVar3) {
    bVar1 = 0;
  }
  return (uint)bVar1;
}


////>>0x000022be>>_push>>////

void _push(tsrb_t *rb,char c)

{
  uint uVar1;
  char c_local;
  tsrb_t *rb_local;
  
  uVar1 = rb->writes;
  rb->writes = uVar1 + 1;
  rb->buf[uVar1 & rb->size - 1] = c;
  return;
}


////>>0x000022f0>>_pop>>////

char _pop(tsrb_t *rb)

{
  uint uVar1;
  tsrb_t *rb_local;
  
  uVar1 = rb->reads;
  rb->reads = uVar1 + 1;
  return rb->buf[uVar1 & rb->size - 1];
}


////>>0x0000231c>>tsrb_get>>////

int tsrb_get(tsrb_t *rb,char *dst,size_t n)

{
  char cVar1;
  int iVar2;
  size_t n_local;
  char *dst_local;
  tsrb_t *rb_local;
  size_t tmp;
  
  dst_local = dst;
  tmp = n;
  while ((tmp != 0 && (iVar2 = tsrb_empty(rb), iVar2 == 0))) {
    cVar1 = _pop(rb);
    *dst_local = cVar1;
    tmp = tmp - 1;
    dst_local = dst_local + 1;
  }
  return n - tmp;
}


////>>0x00002364>>tsrb_add_one>>////

int tsrb_add_one(tsrb_t *rb,char c)

{
  int iVar1;
  char c_local;
  tsrb_t *rb_local;
  
  iVar1 = tsrb_full(rb);
  if (iVar1 == 0) {
    _push(rb,c);
    iVar1 = 0;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


////>>0x00002396>>periph_init>>////

/* WARNING: Unknown calling convention */

void periph_init(void)

{
  rtc_init();
  return;
}


////>>0x000023a4>>main>>////

/* WARNING: Unknown calling convention */

int main(void)

{
  char line_buf [128];
  
  startForkserver(0);
  puts("Welcome to RIOT!");
                    
  shell_run((shell_command_t *)0x0,line_buf,0x80);
}


////>>0x000023c8>>aflCall>>////

/* WARNING: Unknown calling convention */

uint32_t aflCall(uint32_t a0,uint32_t a1,int32_t a2)

{
  software_interrupt(0x3f);
  return a0;
}


////>>0x000023d0>>startForkserver>>////

int startForkserver(int ticks)

{
  uint32_t uVar1;
  int ticks_local;
  
  if (noHyperCall == 0) {
    uVar1 = aflCall(1,ticks,0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


////>>0x00002400>>auto_init>>////

/* WARNING: Unknown calling convention */

void auto_init(void)

{
  return;
}


////>>0x0000240c>>list_remove_head>>////

list_node_t * list_remove_head(list_node_t *list)

{
  list_node *plVar1;
  list_node_t *list_local;
  list_node_t *head;
  
  plVar1 = list->next;
  if (plVar1 != (list_node *)0x0) {
    list->next = plVar1->next;
  }
  return plVar1;
}


////>>0x00002434>>_mutex_lock>>////

int _mutex_lock(mutex_t *mutex,int blocking)

{
  thread_t *thread;
  uint state;
  int iVar1;
  int blocking_local;
  mutex_t *mutex_local;
  uint irqstate;
  thread_t *me;
  
  state = irq_disable();
  thread = sched_active_thread;
  if ((mutex->queue).next == (list_node *)0x0) {
    (mutex->queue).next = (list_node *)0xffffffff;
    irq_restore(state);
    iVar1 = 1;
  }
  else if (blocking == 0) {
    irq_restore(state);
    iVar1 = 0;
  }
  else {
    sched_set_status(sched_active_thread,2);
    if ((mutex->queue).next == (list_node *)0xffffffff) {
      (mutex->queue).next = &thread->rq_entry;
      ((mutex->queue).next)->next = (list_node *)0x0;
    }
    else {
      thread_add_to_list(&mutex->queue,thread);
    }
    irq_restore(state);
    thread_yield_higher();
    iVar1 = 1;
  }
  return iVar1;
}


////>>0x000024bc>>mutex_unlock>>////

void mutex_unlock(mutex_t *mutex)

{
  byte bVar1;
  uint state;
  list_node_t *plVar2;
  mutex_t *mutex_local;
  uint16_t process_priority;
  uint irqstate;
  clist_node_t *__m____;
  list_node_t *next;
  thread_t *process;
  
  state = irq_disable();
  if ((mutex->queue).next == (list_node *)0x0) {
    irq_restore(state);
  }
  else if ((mutex->queue).next == (list_node *)0xffffffff) {
    (mutex->queue).next = (list_node *)0x0;
    irq_restore(state);
  }
  else {
    plVar2 = list_remove_head(&mutex->queue);
    sched_set_status((thread_t *)(plVar2 + -2),10);
    if ((mutex->queue).next == (list_node *)0x0) {
      (mutex->queue).next = (list_node *)0xffffffff;
    }
    bVar1 = *(byte *)((int)&plVar2[-1].next + 1);
    irq_restore(state);
    sched_switch((ushort)bVar1);
  }
  return;
}


////>>0x00002538>>NVIC_SetPriority>>////

void NVIC_SetPriority(IRQn_Type IRQn,uint32_t priority)

{
  uint32_t priority_local;
  IRQn_Type IRQn_local;
  
  if (IRQn < DMA0_IRQn) {
    (&DAT_e000ed14)[(byte)IRQn & 0xf] = (char)((priority & 0xff) << 4);
  }
  else {
    *(char *)(IRQn + -0x1fff1c00) = (char)((priority & 0xff) << 4);
  }
  return;
}


////>>0x0000258c>>cortexm_init>>////


/* WARNING: Unknown calling convention */

void cortexm_init(void)

{
  uint i;
  
  _DAT_e000ed08 = 0;
  NVIC_SetPriority(PendSV_IRQn,1);
  NVIC_SetPriority(SVCall_IRQn,1);
  for (i = 0; i < 0x66; i = i + 1) {
    NVIC_SetPriority((IRQn_Type)i,1);
  }
  _DAT_e000ed10 = _DAT_e000ed10 | 0x10;
  _DAT_e000ed14 = _DAT_e000ed14 | 0x200;
  return;
}


////>>0x000025f4>>rtc_init>>////

/* WARNING: Unknown calling convention */

void rtc_init(void)

{
  rtt_init();
  return;
}


////>>0x00002600>>rtc_set_time>>////

int rtc_set_time(tm *time)

{
  uint32_t counter;
  tm *time_local;
  time_t t;
  
  counter = mktime((tm *)time);
  rtt_set_counter(counter);
  return 0;
}


////>>0x00002624>>rtc_get_time>>////

int rtc_get_time(tm *time)

{
  tm *time_local;
  time_t t;
  
  t._0_4_ = rtt_get_counter();
  t._4_4_ = 0;
  gmtime_r((time_t *)&t,(tm *)time);
  return 0;
}


////>>0x00002654>>rtc_set_alarm>>////

int rtc_set_alarm(tm *time,rtc_alarm_cb_t cb,void *arg)

{
  uint32_t alarm;
  void *arg_local;
  rtc_alarm_cb_t cb_local;
  tm *time_local;
  time_t t;
  
  alarm = mktime((tm *)time);
  rtc_callback.cb = cb;
  rtt_set_alarm(alarm,rtc_cb + 1,arg);
  return 0;
}


////>>0x00002690>>rtc_get_alarm>>////

int rtc_get_alarm(tm *time)

{
  tm *time_local;
  time_t t;
  
  t._0_4_ = rtt_get_alarm();
  t._4_4_ = 0;
  gmtime_r((time_t *)&t,(tm *)time);
  return 0;
}


////>>0x000026c0>>rtc_clear_alarm>>////

/* WARNING: Unknown calling convention */

void rtc_clear_alarm(void)

{
  rtt_clear_alarm();
  rtc_callback.cb = (rtc_alarm_cb_t)0x0;
  return;
}


////>>0x000026d8>>rtc_poweron>>////

/* WARNING: Unknown calling convention */

void rtc_poweron(void)

{
  rtt_poweron();
  return;
}


////>>0x000026e4>>rtc_poweroff>>////

/* WARNING: Unknown calling convention */

void rtc_poweroff(void)

{
  rtt_poweroff();
  return;
}


////>>0x000026f0>>rtc_cb>>////

void rtc_cb(void *arg)

{
  void *arg_local;
  
  if (rtc_callback.cb != (rtc_alarm_cb_t)0x0) {
    (*rtc_callback.cb)(arg);
  }
  return;
}


////>>0x00002714>>NVIC_EnableIRQ>>////

void NVIC_EnableIRQ(IRQn_Type IRQn)

{
  IRQn_Type IRQn_local;
  
  *(int *)(((uint)(int)IRQn >> 5) * 4 + -0x1fff1f00) = 1 << (IRQn & 0x1fU);
  return;
}


////>>0x00002744>>NVIC_SetPriority>>////

void NVIC_SetPriority(IRQn_Type IRQn,uint32_t priority)

{
  uint32_t priority_local;
  IRQn_Type IRQn_local;
  
  if (IRQn < DMA0_IRQn) {
    (&DAT_e000ed14)[(byte)IRQn & 0xf] = (char)((priority & 0xff) << 4);
  }
  else {
    *(char *)(IRQn + -0x1fff1c00) = (char)((priority & 0xff) << 4);
  }
  return;
}


////>>0x00002798>>cortexm_isr_end>>////

/* WARNING: Unknown calling convention */

void cortexm_isr_end(void)

{
  if (sched_context_switch_request != 0) {
    thread_yield_higher();
  }
  return;
}


////>>0x000027b0>>rtt_init>>////


/* WARNING: Unknown calling convention */

void rtt_init(void)

{
  RTC_Type *rtt;
  
  _DAT_4004803c = _DAT_4004803c | 0x20000000;
  if ((_DAT_4003d014 & 1) != 0) {
    _DAT_4003d000 = 0;
  }
  _DAT_4003d010 = 0x104;
  _DAT_4003d008 = 0xffffff42;
  _DAT_4003d01c = 0;
  rtt_poweron();
  return;
}


////>>0x0000281c>>rtt_get_counter>>////

/* WARNING: Removing unreachable block (ram,0x00002840) */
/* WARNING: Removing unreachable block (ram,0x0000284c) */

/* WARNING: Unknown calling convention */

uint32_t rtt_get_counter(void)

{
  RTC_Type *rtt;
  int i;
  uint32_t t;
  
  return _DAT_4003d000;
}


////>>0x0000285c>>rtt_set_counter>>////



void rtt_set_counter(uint32_t counter)

{
  uint32_t counter_local;
  RTC_Type *rtt;
  
  _DAT_4003d000 = counter;
  _DAT_4003d014 = _DAT_4003d014 & 0xffffffef | 0x10;
  return;
}


////>>0x00002894>>rtt_set_alarm>>////



void rtt_set_alarm(uint32_t alarm,rtt_cb_t cb,void *arg)

{
  void *arg_local;
  rtt_cb_t cb_local;
  uint32_t alarm_local;
  RTC_Type *rtt;
  
  _DAT_4003d008 = alarm - 1;
  _DAT_4003d01c = _DAT_4003d01c & 0xfffffffb | 4;
  rtt_callback.alarm_cb = cb;
  rtt_callback.alarm_arg = arg;
  NVIC_SetPriority(RTC_IRQn,10);
  NVIC_EnableIRQ(RTC_IRQn);
  return;
}


////>>0x000028f0>>rtt_get_alarm>>////


/* WARNING: Unknown calling convention */

uint32_t rtt_get_alarm(void)

{
  RTC_Type *rtt;
  
  return _DAT_4003d008 + 1;
}


////>>0x00002910>>rtt_clear_alarm>>////


/* WARNING: Unknown calling convention */

void rtt_clear_alarm(void)

{
  RTC_Type *rtt;
  
  _DAT_4003d01c = _DAT_4003d01c & 0xfffffffb;
  _DAT_4003d008 = 0;
  rtt_callback.alarm_cb = (rtt_cb_t)0x0;
  rtt_callback.alarm_arg = (void *)0x0;
  return;
}


////>>0x0000294c>>rtt_poweron>>////


/* WARNING: Unknown calling convention */

void rtt_poweron(void)

{
  RTC_Type *rtt;
  
  _DAT_4003d014 = _DAT_4003d014 | 0x10;
  return;
}


////>>0x00002970>>rtt_poweroff>>////


/* WARNING: Unknown calling convention */

void rtt_poweroff(void)

{
  RTC_Type *rtt;
  
  _DAT_4003d014 = _DAT_4003d014 & 0xffffffef;
  return;
}


////>>0x00002994>>isr_rtc>>////


/* WARNING: Unknown calling convention */

void isr_rtc(void)

{
  RTC_Type *rtt;
  
  if (((_DAT_4003d014 & 4) != 0) && (rtt_callback.alarm_cb != (rtt_cb_t)0x0)) {
    _DAT_4003d01c = _DAT_4003d01c & 0xfffffffb;
    (*rtt_callback.alarm_cb)(rtt_callback.alarm_arg);
  }
  if (((_DAT_4003d014 & 2) != 0) && (rtt_callback.overflow_cb != (rtt_cb_t)0x0)) {
    (*rtt_callback.overflow_cb)(rtt_callback.overflow_arg);
  }
  cortexm_isr_end();
  return;
}


////>>0x00002a00>>_putchar>>////

void _putchar(int c)

{
  int c_local;
  
  putchar(c);
  return;
}


////>>0x00002a18>>find_handler>>////

shell_command_handler_t find_handler(shell_command_t *command_list,char *command)

{
  int iVar1;
  char *command_local;
  shell_command_t *command_list_local;
  shell_command_t *command_lists [2];
  uint i;
  shell_command_t *entry;
  
  command_lists[0] = command_list;
  command_lists[1] = (shell_command_t *)&_shell_command_list;
  i = 0;
  do {
    if (1 < i) {
      return (shell_command_handler_t)0x0;
    }
    entry = command_lists[i];
    if (entry != (shell_command_t *)0x0) {
      for (; entry->name != (char *)0x0; entry = entry + 1) {
        iVar1 = strcmp(entry->name,command);
        if (iVar1 == 0) {
          return entry->handler;
        }
      }
    }
    i = i + 1;
  } while( true );
}


////>>0x00002a88>>print_help>>////

void print_help(shell_command_t *command_list)

{
  shell_command_t *command_list_local;
  shell_command_t *command_lists [2];
  uint i;
  shell_command_t *entry;
  
  iprintf("%-20s %s\n","Command","Description");
  puts("---------------------------------------");
  command_lists[0] = command_list;
  command_lists[1] = (shell_command_t *)&_shell_command_list;
  for (i = 0; i < 2; i = i + 1) {
    entry = command_lists[i];
    if (entry != (shell_command_t *)0x0) {
      for (; entry->name != (char *)0x0; entry = entry + 1) {
        iprintf("%-20s %s\n",entry->name,entry->desc);
      }
    }
  }
  return;
}


////>>0x00002b10>>handle_input_line>>////

void handle_input_line(shell_command_t *command_list,char *line)

{
  int iVar1;
  char *pcVar2;
  char *line_local;
  shell_command_t *command_list_local;
  shell_command_handler_t handler;
  char___0_ *argv;
  uint local_34;
  char quote_char;
  char *d;
  char *c;
  char **arg;
  uint i;
  int contains_esc_seq;
  uint argc;
  char *pos;
  
  argc = 0;
  contains_esc_seq = 0;
  pos = line;
  while( true ) {
    line_local = line;
    command_list_local = command_list;
    if (0x20 < (byte)*pos) {
      if ((*pos == '\"') || (*pos == '\'')) {
        quote_char = *pos;
        do {
          pcVar2 = pos + 1;
          if (*pcVar2 == '\0') {
            pos = pcVar2;
            puts(handle_input_line::INCORRECT_QUOTING);
            return;
          }
          if (*pcVar2 == '\\') {
            contains_esc_seq = contains_esc_seq + 1;
            pos = pos + 2;
            pcVar2 = pos;
            if (*pos == '\0') {
              puts(handle_input_line::INCORRECT_QUOTING);
              return;
            }
          }
          pos = pcVar2;
        } while (quote_char != *pos);
        if (0x20 < (byte)pos[1]) {
          puts(handle_input_line::INCORRECT_QUOTING);
          return;
        }
      }
      else {
        do {
          if (*pos == '\\') {
            contains_esc_seq = contains_esc_seq + 1;
            pos = pos + 1;
            if (*pos == '\0') {
              puts(handle_input_line::INCORRECT_QUOTING);
              return;
            }
          }
          pos = pos + 1;
          if (*pos == 0x22) {
            puts(handle_input_line::INCORRECT_QUOTING);
            return;
          }
        } while (0x20 < (byte)*pos);
      }
      argc = argc + 1;
    }
    if (*pos == '\0') break;
    *pos = '\0';
    pos = pos + 1;
  }
  if (argc != 0) {
    local_34 = argc;
    argv = (char___0_ *)((int)&line_local - ((argc + 1) * 4 + 7 & 0xfffffff8));
    *(char **)((int)argv + argc * 4) = (char *)0x0;
    pos = line;
    for (i = 0; arg = (char **)argv, i < argc; i = i + 1) {
      for (; *pos == '\0'; pos = pos + 1) {
      }
      if ((*pos == '\"') || (*pos == '\'')) {
        pos = pos + 1;
      }
      *(char **)((int)argv + i * 4) = pos;
      for (; *pos != '\0'; pos = pos + 1) {
      }
    }
    for (; (contains_esc_seq != 0 && (*arg != (char *)0x0)); arg = arg + 1) {
      for (c = *arg; *c != '\0'; c = c + 1) {
        if (*c == '\\') {
          for (d = c; *d != '\0'; d = d + 1) {
            *d = d[1];
          }
          contains_esc_seq = contains_esc_seq + -1;
          if (contains_esc_seq == 0) break;
        }
      }
    }
    handler = find_handler(command_list,*(char **)argv);
    if (handler == (shell_command_handler_t)0x0) {
      iVar1 = strcmp("help",*(char **)argv);
      if (iVar1 == 0) {
        print_help(command_list_local);
      }
      else {
        iprintf("shell: command not found: %s\n",*(undefined4 *)argv);
      }
    }
    else {
      (*handler)(argc,(char **)argv);
    }
  }
  return;
}


////>>0x00002d94>>readline>>////

int readline(char *buf,size_t size)

{
  int c_00;
  byte bVar1;
  bool bVar2;
  size_t size_local;
  char *buf_local;
  int c;
  char *line_buf_ptr;
  
  line_buf_ptr = buf;
  while( true ) {
    if ((int)(size - 1) <= (int)line_buf_ptr - (int)buf) {
      return -1;
    }
    c_00 = getchar();
    if (c_00 < 0) break;
    if ((c_00 == 0xd) || (c_00 == 10)) {
      *line_buf_ptr = '\0';
      _putchar(0xd);
      _putchar(10);
      bVar2 = line_buf_ptr == buf;
      if (bVar2) {
        buf = (char *)0x1;
      }
      bVar1 = (byte)buf;
      if (!bVar2) {
        bVar1 = 0;
      }
      return (uint)bVar1;
    }
    if ((c_00 == 8) || (c_00 == 0x7f)) {
      if (line_buf_ptr != buf) {
        line_buf_ptr = line_buf_ptr + -1;
        *line_buf_ptr = '\0';
        _putchar(8);
        _putchar(0x20);
        _putchar(8);
      }
    }
    else {
      *line_buf_ptr = (char)c_00;
      _putchar(c_00);
      line_buf_ptr = line_buf_ptr + 1;
    }
  }
  return 1;
}


////>>0x00002e48>>print_prompt>>////

/* WARNING: Unknown calling convention */

void print_prompt(void)

{
  _putchar(0x3e);
  _putchar(0x20);
  fflush(*(FILE **)(_impure_ptr + 8));
  return;
}


////>>0x00002e6c>>shell_run>>////

void shell_run(shell_command_t *shell_commands,char *line_buf,int len)

{
  int iVar1;
  int len_local;
  char *line_buf_local;
  shell_command_t *shell_commands_local;
  int res;
  
  print_prompt();
  do {
    iVar1 = readline(line_buf,len);
    if (iVar1 == 0) {
      handle_input_line(shell_commands,line_buf);
    }
    print_prompt();
  } while( true );
}


////>>0x00002e9c>>_reboot_handler>>////

int _reboot_handler(int argc,char **argv)

{
  char **argv_local;
  int argc_local;
  
  pm_reboot();
  return 0;
}


////>>0x00002eb4>>_ps_handler>>////

int _ps_handler(int argc,char **argv)

{
  char **argv_local;
  int argc_local;
  
  ps();
  return 0;
}


////>>0x00002ecc>>probe>>////

void probe(int num,saul_reg_t *dev)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  saul_reg_t *dev_local;
  int num_local;
  phydat_t res;
  int dim;
  
  iVar1 = saul_reg_read(dev,&res);
  if (iVar1 < 1) {
    iprintf("error: failed to read from device #%i\n",num);
  }
  else {
    pcVar3 = dev->name;
    pcVar2 = saul_class_to_str(dev->driver->type);
    iprintf("Reading from #%i (%s|%s)\n",num,pcVar3,pcVar2);
    phydat_dump(&res,(uint8_t)iVar1);
  }
  return;
}


////>>0x00002f30>>probe_all>>////

/* WARNING: Unknown calling convention */

void probe_all(void)

{
  int i;
  saul_reg_t *dev;
  
  i = 0;
  for (dev = saul_reg; dev != (saul_reg_t *)0x0; dev = dev->next) {
    probe(i,dev);
    puts("");
    i = i + 1;
  }
  return;
}


////>>0x00002f74>>list>>////

/* WARNING: Unknown calling convention */

void list(void)

{
  char *pcVar1;
  int i;
  saul_reg_t *dev;
  
  dev = saul_reg;
  i = 0;
  if (saul_reg == (saul_reg_t *)0x0) {
    puts("No devices found");
  }
  else {
    puts("ID\tClass\t\tName");
  }
  for (; dev != (saul_reg_t *)0x0; dev = dev->next) {
    pcVar1 = saul_class_to_str(dev->driver->type);
    iprintf("#%i\t%s\t%s\n",i,pcVar1,dev->name);
    i = i + 1;
  }
  return;
}


////>>0x00002fe0>>read>>////

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t pos;
  saul_reg_t *dev_00;
  char **argv_local;
  int argc_local;
  saul_reg_t *dev;
  int num;
  
  if (__fd < 3) {
                    /* WARNING: Load size is inaccurate */
    pos = iprintf("usage: %s %s <device id>|all\n",*__buf,*(undefined4 *)((int)__buf + 4));
  }
  else {
    pos = strcmp(*(char **)((int)__buf + 8),"all");
    if (pos == 0) {
      probe_all();
    }
    else {
      pos = atoi(*(char **)((int)__buf + 8));
      dev_00 = saul_reg_find_nth(pos);
      if (dev_00 == (saul_reg_t *)0x0) {
        pos = puts("error: undefined device id given");
      }
      else {
        probe(pos,dev_00);
      }
    }
  }
  return pos;
}


////>>0x0000305c>>write>>////

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  int iVar2;
  char **argv_local;
  int argc_local;
  phydat_t data;
  int dim;
  saul_reg_t *dev;
  int num;
  int i;
  
  if (__fd < 4) {
                    /* WARNING: Load size is inaccurate */
    sVar1 = iprintf("usage: %s %s <device id> <value 0> [<value 1> [<value 2]]\n",*__buf,
                    *(undefined4 *)((int)__buf + 4));
  }
  else {
    num = atoi(*(char **)((int)__buf + 8));
    dev = saul_reg_find_nth(num);
    if (dev == (saul_reg_t *)0x0) {
      sVar1 = puts("error: undefined device given");
    }
    else {
      memset(&data,0,8);
      if (5 < __fd) {
        __fd = 6;
      }
      dim = __fd + -3;
      for (i = 0; i < dim; i = i + 1) {
        iVar2 = atoi(*(char **)((i + 3) * 4 + (int)__buf));
        data.val[i] = (int16_t)iVar2;
      }
      iprintf("Writing to device #%i - %s\n",num,dev->name);
      phydat_dump(&data,(uint8_t)dim);
      iVar2 = saul_reg_write(dev,&data);
      if (iVar2 < 1) {
        if (iVar2 == -0x86) {
          sVar1 = iprintf("error: device #%i is not writable\n",num);
        }
        else {
          sVar1 = iprintf("error: failure to write to device #%i\n",num);
        }
      }
      else {
        sVar1 = iprintf("data successfully written to device #%i\n",num);
      }
    }
  }
  return sVar1;
}


////>>0x0000316c>>_saul>>////

int _saul(int argc,char **argv)

{
  int iVar1;
  size_t in_r2;
  char **argv_local;
  int argc_local;
  
  if (argc < 2) {
    list();
  }
  else {
    iVar1 = strcmp(argv[1],"read");
    if (iVar1 == 0) {
      read(argc,argv,in_r2);
    }
    else {
      iVar1 = strcmp(argv[1],"write");
      if (iVar1 == 0) {
        write(argc,argv,in_r2);
      }
      else {
        iprintf("usage: %s read|write\n",*argv);
      }
    }
  }
  return 0;
}


////>>0x000031e0>>_alarm_handler>>////

void _alarm_handler(void *arg)

{
  void *arg_local;
  
  puts("The alarm rang");
  return;
}


////>>0x000031fc>>dow>>////

int dow(int year,int month,int day)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int day_local;
  int month_local;
  int year_local;
  
  iVar2 = month;
  if (month < 3) {
    iVar2 = 1;
  }
  bVar1 = (byte)iVar2;
  if (2 < month) {
    bVar1 = 0;
  }
  iVar3 = year - (uint)bVar1;
  iVar2 = iVar3;
  if (iVar3 < 0) {
    iVar2 = iVar3 + 3;
  }
  return ((((iVar2 >> 2) + iVar3) - iVar3 / 100) + iVar3 / 400 + dow::t[month + -1] + day) % 7;
}


////>>0x0000328c>>_parse_time>>////

int _parse_time(char **argv,tm *time)

{
  long lVar1;
  int iVar2;
  tm *time_local;
  char **argv_local;
  char *end;
  short i;
  
  lVar1 = strtol(*argv,&end,10);
  i = (short)lVar1;
  time->tm_year = i + -0x76c;
  lVar1 = strtol(end + 1,&end,10);
  i = (short)lVar1;
  time->tm_mon = i + -1;
  lVar1 = strtol(end + 1,&end,10);
  i = (short)lVar1;
  time->tm_mday = (int)i;
  lVar1 = strtol(argv[1],&end,10);
  i = (short)lVar1;
  time->tm_hour = (int)i;
  lVar1 = strtol(end + 1,&end,10);
  i = (short)lVar1;
  time->tm_min = (int)i;
  lVar1 = strtol(end + 1,&end,10);
  i = (short)lVar1;
  time->tm_sec = (int)i;
  iVar2 = dow(time->tm_year + 0x76c,time->tm_mon + 1,time->tm_mday);
  time->tm_wday = iVar2;
  time->tm_isdst = -1;
  return 0;
}


////>>0x00003378>>_print_time>>////

int _print_time(tm *time)

{
  tm *time_local;
  
  iprintf("%04i-%02i-%02i %02i:%02i:%02i\n",time->tm_year + 0x76c,time->tm_mon + 1,time->tm_mday,
          time->tm_hour,time->tm_min,time->tm_sec);
  return 0;
}


////>>0x000033c0>>_rtc_getalarm>>////

/* WARNING: Unknown calling convention */

int _rtc_getalarm(void)

{
  int iVar1;
  tm t;
  
  iVar1 = rtc_get_alarm(&t);
  if (iVar1 != 0) {
    puts("rtc: error getting alarm");
  }
  else {
    _print_time(&t);
  }
  return (uint)(iVar1 != 0);
}


////>>0x000033f4>>_rtc_setalarm>>////

int _rtc_setalarm(char **argv)

{
  int iVar1;
  char **argv_local;
  tm now;
  
  iVar1 = _parse_time(argv,&now);
  if (iVar1 == 0) {
    iVar1 = rtc_set_alarm(&now,_alarm_handler + 1,(void *)0x0);
    if (iVar1 == -1) {
      puts("rtc: error setting alarm");
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


////>>0x00003444>>_rtc_gettime>>////

/* WARNING: Unknown calling convention */

int _rtc_gettime(void)

{
  int iVar1;
  tm t;
  
  iVar1 = rtc_get_time(&t);
  if (iVar1 != 0) {
    puts("rtc: error getting time");
  }
  else {
    _print_time(&t);
  }
  return (uint)(iVar1 != 0);
}


////>>0x00003478>>_rtc_settime>>////

int _rtc_settime(char **argv)

{
  int iVar1;
  char **argv_local;
  tm now;
  
  iVar1 = _parse_time(argv,&now);
  if (iVar1 == 0) {
    iVar1 = rtc_set_time(&now);
    if (iVar1 == -1) {
      puts("rtc: error setting time");
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


////>>0x000034c0>>_rtc_usage>>////

/* WARNING: Unknown calling convention */

int _rtc_usage(void)

{
  puts("usage: rtc <command> [arguments]");
  puts("commands:");
  puts("\tpoweron\t\tpower the interface on");
  puts("\tpoweroff\tpower the interface off");
  puts("\tclearalarm\tdeactivate the current alarm");
  puts("\tgetalarm\tprint the currently alarm time");
  puts("\tsetalarm YYYY-MM-DD HH:MM:SS\n\t\t\tset an alarm for the specified time");
  puts("\tgettime\t\tprint the current time");
  puts("\tsettime YYYY-MM-DD HH:MM:SS\n\t\t\tset the current time");
  return 0;
}


////>>0x00003524>>_rtc_handler>>////

int _rtc_handler(int argc,char **argv)

{
  int iVar1;
  char **argv_local;
  int argc_local;
  
  if (argc < 2) {
    _rtc_usage();
    iVar1 = 1;
  }
  else {
    iVar1 = strncmp(argv[1],"poweron",7);
    if (iVar1 == 0) {
      rtc_poweron();
    }
    else {
      iVar1 = strncmp(argv[1],"poweroff",8);
      if (iVar1 == 0) {
        rtc_poweroff();
      }
      else {
        iVar1 = strncmp(argv[1],"clearalarm",8);
        if (iVar1 == 0) {
          rtc_clear_alarm();
        }
        else {
          iVar1 = strncmp(argv[1],"getalarm",8);
          if (iVar1 == 0) {
            _rtc_getalarm();
          }
          else {
            iVar1 = strncmp(argv[1],"setalarm",8);
            if ((iVar1 == 0) && (argc == 4)) {
              _rtc_setalarm(argv + 2);
            }
            else {
              iVar1 = strncmp(argv[1],"gettime",7);
              if (iVar1 == 0) {
                _rtc_gettime();
              }
              else {
                iVar1 = strncmp(argv[1],"settime",7);
                if ((iVar1 != 0) || (argc != 4)) {
                  iprintf("unknown command or missing parameters: %s\n\n",argv[1]);
                  _rtc_usage();
                  return 1;
                }
                _rtc_settime(argv + 2);
              }
            }
          }
        }
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


////>>0x00003658>>NVIC_SystemReset>>////

/* WARNING: Unknown calling convention */

void NVIC_SystemReset(void)

{
  DataSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x00003688>>pm_reboot>>////

/* WARNING: Unknown calling convention */

void pm_reboot(void)

{
  NVIC_SystemReset();
  return;
}


////>>0x00003694>>phydat_dump>>////

void phydat_dump(phydat_t *data,uint8_t dim)

{
  size_t sVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  uint8_t dim_local;
  phydat_t *data_local;
  char num [8];
  size_t len;
  char scale_prefix;
  uint8_t i;
  
  if ((data == (phydat_t *)0x0) || (3 < dim)) {
    puts("Unable to display data object");
  }
  else {
    iprintf("Data:");
    for (i = '\0'; i < dim; i = i + '\x01') {
      if (data->unit < 0x14) {
        uVar4 = 1 << (uint)data->unit & 0x8018f;
        bVar5 = uVar4 != 0;
        if (bVar5) {
          uVar4 = 1;
        }
        cVar3 = (char)uVar4;
        if (!bVar5) {
          cVar3 = '\0';
        }
        if (cVar3 == '\0') goto LAB_000036ee;
        scale_prefix = '\0';
      }
      else {
LAB_000036ee:
        scale_prefix = phydat_prefix_from_scale(data->scale);
      }
      iprintf("\t");
      if (dim < 2) {
        iprintf("     ");
      }
      else {
        iprintf("[%u] ",(uint)i);
      }
      if (scale_prefix == '\0') {
        if (data->scale == '\0') {
          iprintf("%6d",(int)data->val[i]);
        }
        else if ((data->scale + 4 < 0 == SCARRY4((int)data->scale,4)) && (data->scale < '\0')) {
          sVar1 = fmt_s16_dfp(num,data->val[i],(int)data->scale);
          num[sVar1] = '\0';
          iprintf("%s",num);
        }
        else {
          iprintf("%iE%i",(int)data->val[i],(int)data->scale);
        }
      }
      else {
        iprintf("%6d %c",(int)data->val[i],(uint)(byte)scale_prefix);
      }
      pcVar2 = phydat_unit_to_str(data->unit);
      iprintf("%s\n",pcVar2);
    }
  }
  return;
}


////>>0x00003810>>phydat_unit_to_str>>////

char * phydat_unit_to_str(uint8_t unit)

{
  char *pcVar1;
  uint8_t unit_local;
  
  switch(unit) {
  case '\x02':
    pcVar1 = &DAT_000077ec;
    break;
  case '\x03':
    pcVar1 = &DAT_000077f0;
    break;
  case '\x04':
    pcVar1 = "K";
    break;
  case '\x05':
    pcVar1 = "lx";
    break;
  case '\x06':
    pcVar1 = "m";
    break;
  case '\a':
    pcVar1 = "m^2";
    break;
  case '\b':
    pcVar1 = "m^3";
    break;
  case '\t':
    pcVar1 = "g";
    break;
  case '\n':
    pcVar1 = "dps";
    break;
  case '\v':
    pcVar1 = "G";
    break;
  case '\f':
    pcVar1 = "A";
    break;
  case '\r':
    pcVar1 = "V";
    break;
  case '\x0e':
    pcVar1 = "Gs";
    break;
  case '\x0f':
    pcVar1 = "Bar";
    break;
  case '\x10':
    pcVar1 = "Pa";
    break;
  case '\x11':
    pcVar1 = "cd";
    break;
  default:
    pcVar1 = "";
    break;
  case '\x13':
    pcVar1 = "%";
    break;
  case '\x15':
    pcVar1 = "ppm";
  }
  return pcVar1;
}


////>>0x00003918>>phydat_prefix_from_scale>>////

char phydat_prefix_from_scale(int8_t scale)

{
  char cVar1;
  int8_t scale_local;
  
  switch(scale) {
  case '\x02':
    cVar1 = 'h';
    break;
  case '\x03':
    cVar1 = 'k';
    break;
  case '\x06':
    cVar1 = 'M';
    break;
  case '\t':
    cVar1 = 'G';
    break;
  case '\f':
    cVar1 = 'T';
    break;
  case '\x0f':
    cVar1 = 'P';
    break;
  case -0xf:
    cVar1 = 'f';
    break;
  default:
    cVar1 = '\0';
    break;
  case -0xc:
    cVar1 = 'p';
    break;
  case -9:
    cVar1 = 'n';
    break;
  case -6:
    cVar1 = 'u';
    break;
  case -3:
    cVar1 = 'm';
  }
  return cVar1;
}


////>>0x000039e8>>saul_class_to_str>>////

char * saul_class_to_str(uint8_t class_id)

{
  char *pcVar1;
  uint8_t class_id_local;
  
  switch(class_id) {
  case '\0':
    pcVar1 = "CLASS_UNDEF";
    break;
  case '@':
    pcVar1 = "ACT_ANY";
    break;
  case 'B':
    pcVar1 = "ACT_LED_RGB";
    break;
  case 'C':
    pcVar1 = "ACT_SERVO";
    break;
  case 'D':
    pcVar1 = "ACT_MOTOR";
    break;
  case 'E':
    pcVar1 = "ACT_SWITCH";
    break;
  case 'F':
    pcVar1 = "ACT_DIMMER";
    break;
  case 0x80:
    pcVar1 = "SENSE_ANY";
    break;
  case 0x81:
    pcVar1 = "SENSE_BTN";
    break;
  case 0x82:
    pcVar1 = "SENSE_TEMP";
    break;
  case 0x83:
    pcVar1 = "SENSE_HUM";
    break;
  case 0x84:
    pcVar1 = "SENSE_LIGHT";
    break;
  case 0x85:
    pcVar1 = "SENSE_ACCEL";
    break;
  case 0x86:
    pcVar1 = "SENSE_MAG";
    break;
  case 0x87:
    pcVar1 = "SENSE_GYRO";
    break;
  case 0x88:
    pcVar1 = "SENSE_COLOR";
    break;
  case 0x89:
    pcVar1 = "SENSE_PRESS";
    break;
  case 0x8a:
    pcVar1 = "SENSE_ANALOG";
    break;
  case 0x8b:
    pcVar1 = "SENSE_UV";
    break;
  case 0x8c:
    pcVar1 = "SENSE_OBJTEMP";
    break;
  case 0x8d:
    pcVar1 = "SENSE_PULSE_COUNT";
    break;
  case 0x8e:
    pcVar1 = "SENSE_DISTANCE";
    break;
  case 0x8f:
    pcVar1 = "SENSE_CO2";
    break;
  default:
    if (class_id == 0xff) {
      return "CLASS_ANY";
    }
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x12':
  case '\x13':
  case '\x14':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '\x19':
  case '\x1a':
  case '\x1b':
  case '\x1c':
  case '\x1d':
  case '\x1e':
  case '\x1f':
  case ' ':
  case '!':
  case '\"':
  case '#':
  case '$':
  case '%':
  case '&':
  case '\'':
  case '(':
  case ')':
  case '*':
  case '+':
  case ',':
  case '-':
  case '.':
  case '/':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
  case ':':
  case ';':
  case '<':
  case '=':
  case '>':
  case '?':
  case 'A':
  case 'G':
  case 'H':
  case 'I':
  case 'J':
  case 'K':
  case 'L':
  case 'M':
  case 'N':
  case 'O':
  case 'P':
  case 'Q':
  case 'R':
  case 'S':
  case 'T':
  case 'U':
  case 'V':
  case 'W':
  case 'X':
  case 'Y':
  case 'Z':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'a':
  case 'b':
  case 'c':
  case 'd':
  case 'e':
  case 'f':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
  case 'l':
  case 'm':
  case 'n':
  case 'o':
  case 'p':
  case 'q':
  case 'r':
  case 's':
  case 't':
  case 'u':
  case 'v':
  case 'w':
  case 'x':
  case 'y':
  case 'z':
  case '{':
  case '|':
  case '}':
  case '~':
  case '\x7f':
    pcVar1 = "CLASS_UNKNOWN";
  }
  return pcVar1;
}


////>>0x00003d24>>saul_reg_find_nth>>////

saul_reg_t * saul_reg_find_nth(int pos)

{
  int pos_local;
  int i;
  saul_reg_t *tmp;
  
  i = 0;
  for (tmp = saul_reg; (i < pos && (tmp != (saul_reg_t *)0x0)); tmp = tmp->next) {
    i = i + 1;
  }
  return tmp;
}


////>>0x00003d64>>saul_reg_read>>////

int saul_reg_read(saul_reg_t *dev,phydat_t *res)

{
  int iVar1;
  phydat_t *res_local;
  saul_reg_t *dev_local;
  
  if (dev == (saul_reg_t *)0x0) {
    iVar1 = -0x13;
  }
  else {
    iVar1 = (*dev->driver->read)(dev->dev,res);
  }
  return iVar1;
}


////>>0x00003d94>>saul_reg_write>>////

int saul_reg_write(saul_reg_t *dev,phydat_t *data)

{
  int iVar1;
  phydat_t *data_local;
  saul_reg_t *dev_local;
  
  if (dev == (saul_reg_t *)0x0) {
    iVar1 = -0x13;
  }
  else {
    iVar1 = (*dev->driver->write)(dev->dev,data);
  }
  return iVar1;
}


////>>0x00003dc4>>fmt_u32_dec>>////

size_t fmt_u32_dec(char *out,uint32_t val)

{
  uint32_t val_local;
  char *out_local;
  char *ptr;
  uint32_t tmp;
  size_t len;
  
  len = 1;
  if (val < 1000000000) {
    for (tmp = 10; tmp <= val; tmp = tmp * 10) {
      len = len + 1;
    }
  }
  else {
    len = 10;
  }
  if (out != (char *)0x0) {
    ptr = out + len;
    val_local = val;
    do {
      ptr = ptr + -1;
      *ptr = (char)(val_local % 10) + '0';
      val_local = val_local / 10;
    } while (val_local != 0);
  }
  return len;
}


////>>0x00003e58>>fmt_s32_dec>>////

size_t fmt_s32_dec(char *out,int32_t val)

{
  size_t sVar1;
  int32_t val_local;
  char *out_local;
  uint negative;
  
  val_local = val;
  out_local = out;
  if (-(val >> 0x1f) != 0) {
    if (out != (char *)0x0) {
      out_local = out + 1;
      *out = '-';
    }
    val_local = -val;
  }
  sVar1 = fmt_u32_dec(out_local,val_local);
  return -(val >> 0x1f) + sVar1;
}


////>>0x00003e9e>>fmt_s16_dfp>>////

size_t fmt_s16_dfp(char *out,int16_t val,int fp_digits)

{
  size_t sVar1;
  int fp_digits_local;
  int16_t val_local;
  char *out_local;
  
  sVar1 = fmt_s32_dfp(out,(int)val,fp_digits);
  return sVar1;
}


////>>0x00003ec4>>fmt_s32_dfp>>////

size_t fmt_s32_dfp(char *out,int32_t val,int fp_digits)

{
  size_t sVar1;
  uint val_00;
  int iVar2;
  int fp_digits_local;
  int32_t val_local;
  char *out_local;
  uint div_len;
  int32_t abs;
  uint32_t e;
  int32_t div;
  uint pos;
  
  if (fp_digits + 7 < 0 != SCARRY4(fp_digits,7)) {
                    
    core_panic(PANIC_ASSERT_FAIL,"FAILED ASSERTION.");
  }
  pos = 0;
  if (fp_digits == 0) {
    pos = fmt_s32_dec(out,val);
  }
  else if (fp_digits < 1) {
    val_00 = (uint)val / _tenmap[-fp_digits];
    div = val - _tenmap[-fp_digits] * val_00;
    if (div < 0) {
      div = -div;
    }
    if ((val_00 == 0) && (val < 0)) {
      if (out != (char *)0x0) {
        *out = '-';
      }
      pos = 1;
    }
    if (out == (char *)0x0) {
      sVar1 = fmt_s32_dec((char *)0x0,val_00);
      pos = sVar1 + 1 + pos;
    }
    else {
      sVar1 = fmt_s32_dec(out + pos,val_00);
      iVar2 = pos + sVar1;
      pos = iVar2 + 1;
      out[iVar2] = '.';
      sVar1 = fmt_s32_dec(out + pos,div);
      fmt_lpad(out + pos,sVar1,-fp_digits,'0');
    }
    pos = -fp_digits + pos;
  }
  else {
    sVar1 = fmt_s32_dec(out,val);
    if (out != (char *)0x0) {
      memset(out + sVar1,0x30,fp_digits);
    }
    pos = fp_digits + sVar1;
  }
  return pos;
}


////>>0x00003ff4>>fmt_lpad>>////

size_t fmt_lpad(char *out,size_t in_len,size_t pad_len,char pad_char)

{
  size_t sVar1;
  char pad_char_local;
  size_t pad_len_local;
  size_t in_len_local;
  char *out_local;
  size_t n;
  
  sVar1 = in_len;
  if ((in_len < pad_len) && (sVar1 = pad_len, out != (char *)0x0)) {
    memmove(out + (pad_len - in_len),out,in_len);
    memset(out,(uint)(byte)pad_char,pad_len - in_len);
  }
  return sVar1;
}


////>>0x00004042>>atoi>>////

int atoi(char *__nptr)

{
  long lVar1;
  
  lVar1 = strtol(__nptr,(char **)0x0,10);
  return lVar1;
}


////>>0x0000404c>>__sflush_r>>////

undefined4 __sflush_r(uint *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  
  uVar4 = *(ushort *)(param_2 + 3);
  uVar3 = (uint)uVar4;
  if ((int)(uVar3 << 0x1c) < 0) {
    iVar1 = param_2[4];
    if (iVar1 != 0) {
      iVar5 = uVar3 << 0x1e;
      bVar9 = iVar5 == 0;
      iVar7 = *param_2;
      if (bVar9) {
        iVar5 = param_2[5];
      }
      *param_2 = iVar1;
      if (!bVar9) {
        iVar5 = 0;
      }
      param_2[2] = iVar5;
      for (iVar7 = iVar7 - iVar1; 0 < iVar7; iVar7 = iVar7 - iVar5) {
        iVar5 = (*(code *)param_2[10])(param_1,param_2[8],iVar1,iVar7);
        if (iVar5 < 1) {
          *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
          return 0xffffffff;
        }
        iVar1 = iVar1 + iVar5;
      }
    }
  }
  else {
    if ((param_2[1] < 1) && (param_2[0x10] < 1)) {
      return 0;
    }
    pcVar6 = (code *)param_2[0xb];
    if (pcVar6 == (code *)0x0) {
      return 0;
    }
    uVar8 = *param_1;
    *param_1 = 0;
    if ((uVar4 & 0x1000) == 0) {
      iVar1 = (*pcVar6)(param_1,param_2[8],uVar3 & 0x1000,1);
      if ((iVar1 == -1) && (uVar3 = *param_1, uVar3 != 0)) {
        if ((uVar3 == 0x1d) || (uVar3 == 0x16)) {
          *param_1 = uVar8;
          return 0;
        }
        uVar4 = *(ushort *)(param_2 + 3);
        goto LAB_00004104;
      }
    }
    else {
      iVar1 = param_2[0x15];
    }
    if (((int)((uint)*(ushort *)(param_2 + 3) << 0x1d) < 0) &&
       (iVar1 = iVar1 - param_2[1], param_2[0xd] != 0)) {
      iVar1 = iVar1 - param_2[0x10];
    }
    iVar1 = (*(code *)param_2[0xb])(param_1,param_2[8],iVar1,0);
    uVar4 = *(ushort *)(param_2 + 3);
    if ((iVar1 == -1) &&
       ((0x1d < *param_1 || (-1 < (int)((0x20400001U >> (*param_1 & 0xff)) << 0x1f))))) {
LAB_00004104:
      *(ushort *)(param_2 + 3) = uVar4 | 0x40;
      return 0xffffffff;
    }
    param_2[1] = 0;
    *param_2 = param_2[4];
    if (((int)((uint)uVar4 << 0x13) < 0) && ((iVar1 != -1 || (*param_1 == 0)))) {
      param_2[0x15] = iVar1;
    }
    piVar2 = (int *)param_2[0xd];
    *param_1 = uVar8;
    if (piVar2 != (int *)0x0) {
      if (piVar2 != param_2 + 0x11) {
        _free_r(param_1);
      }
      param_2[0xd] = 0;
      return 0;
    }
  }
  return 0;
}


////>>0x00004158>>_fflush_r>>////

undefined4 _fflush_r(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2[4] != 0) {
    if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
      __sinit();
    }
    if (param_2 == &__sf_fake_stdin) {
      param_2 = *(undefined4 **)(param_1 + 4);
    }
    else if (param_2 == (undefined4 *)&__sf_fake_stdout) {
      param_2 = *(undefined4 **)(param_1 + 8);
    }
    else if (param_2 == (undefined4 *)&__sf_fake_stderr) {
      param_2 = *(undefined4 **)(param_1 + 0xc);
    }
    if (*(short *)(param_2 + 3) != 0) {
      if ((-1 < (int)(param_2[0x19] << 0x1f)) && (-1 < (int)*(short *)(param_2 + 3) << 0x16)) {
        __retarget_lock_acquire_recursive(param_2[0x16]);
      }
      uVar1 = __sflush_r(param_1,param_2);
      if ((int)(param_2[0x19] << 0x1f) < 0) {
        return uVar1;
      }
      if ((int)((uint)*(ushort *)(param_2 + 3) << 0x16) < 0) {
        return uVar1;
      }
      __retarget_lock_release_recursive(param_2[0x16]);
      return uVar1;
    }
  }
  return 0;
}


////>>0x000041d0>>fflush>>////

int fflush(FILE *__stream)

{
  int iVar1;
  
  if (__stream == (FILE *)0x0) {
    iVar1 = _fwalk_reent(&impure_data,0x4159);
    return iVar1;
  }
  iVar1 = _fflush_r(_impure_ptr,__stream);
  return iVar1;
}


////>>0x000041f4>>std>>////

void std(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = param_2;
  param_1[0x19] = 0;
  *(undefined2 *)((int)param_1 + 0xe) = param_3;
  param_1[6] = 0;
  memset(param_1 + 0x17,0,8);
  param_1[9] = 0x4dc9;
  param_1[10] = 0x4def;
  param_1[0xb] = 0x4e27;
  param_1[8] = param_1;
  param_1[0xc] = 0x4e4b;
  return;
}


////>>0x0000423c>>_cleanup_r>>////

void _cleanup_r(undefined4 param_1)

{
  _fwalk_reent(param_1,0x4159);
  return;
}


////>>0x00004248>>__sfmoreglue>>////

undefined4 * __sfmoreglue(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (param_2 + -1) * 0x68;
  puVar1 = (undefined4 *)_malloc_r(param_1,iVar2 + 0x74);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = param_2;
    puVar1[2] = puVar1 + 3;
    memset(puVar1 + 3,0,iVar2 + 0x68);
  }
  return puVar1;
}


////>>0x00004274>>__sfp_lock_acquire>>////

void __sfp_lock_acquire(void)

{
  __retarget_lock_acquire_recursive(&__lock___sfp_recursive_mutex);
  return;
}


////>>0x00004280>>__sfp_lock_release>>////

void __sfp_lock_release(void)

{
  __retarget_lock_release_recursive(&__lock___sfp_recursive_mutex);
  return;
}


////>>0x0000428c>>__sinit_lock_acquire>>////

void __sinit_lock_acquire(void)

{
  __retarget_lock_acquire_recursive(&__lock___sinit_recursive_mutex);
  return;
}


////>>0x00004298>>__sinit_lock_release>>////

void __sinit_lock_release(void)

{
  __retarget_lock_release_recursive(&__lock___sinit_recursive_mutex);
  return;
}


////>>0x000042a4>>__sinit>>////

void __sinit(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  __sinit_lock_acquire();
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    puVar2 = &impure_data;
    *(undefined4 *)(param_1 + 0x28) = 0x423d;
    if (param_1 == &impure_data) {
      puVar2 = (undefined1 *)0x1;
    }
    if (param_1 == &impure_data) {
      *(undefined1 **)(param_1 + 0x18) = puVar2;
    }
    uVar1 = __sfp(param_1);
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar1 = __sfp(param_1);
    *(undefined4 *)(param_1 + 8) = uVar1;
    uVar1 = __sfp(param_1);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    std(*(undefined4 *)(param_1 + 4),4,0);
    std(*(undefined4 *)(param_1 + 8),9,1);
    std(*(undefined4 *)(param_1 + 0xc),0x12,2);
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  __sinit_lock_release();
  return;
}


////>>0x00004314>>__sfp>>////

int * __sfp(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  
  __sfp_lock_acquire();
  if (DAT_1fff029c == 0) {
    __sinit(&impure_data);
  }
  ppiVar3 = (int **)&DAT_1fff02cc;
  do {
    piVar1 = ppiVar3[1];
    piVar2 = ppiVar3[2];
    while (piVar1 = (int *)((int)piVar1 + -1), -1 < (int)piVar1) {
      if (*(short *)(piVar2 + 3) == 0) {
        piVar2[3] = -0xffff;
        piVar2[0x19] = 0;
        __retarget_lock_init_recursive(piVar2 + 0x16);
        __sfp_lock_release();
        piVar2[1] = 0;
        piVar2[2] = 0;
        piVar2[4] = 0;
        piVar2[5] = 0;
        *piVar2 = 0;
        piVar2[6] = 0;
        memset(piVar2 + 0x17,0,8);
        piVar2[0xd] = 0;
        piVar2[0xe] = 0;
        piVar2[0x12] = 0;
        piVar2[0x13] = 0;
        return piVar2;
      }
      piVar2 = piVar2 + 0x1a;
    }
    if (*ppiVar3 == (int *)0x0) {
      piVar1 = (int *)__sfmoreglue(param_1,4);
      *ppiVar3 = piVar1;
      if (piVar1 == (int *)0x0) {
        __sfp_lock_release();
        *param_1 = 0xc;
        return (int *)0x0;
      }
    }
    ppiVar3 = (int **)*ppiVar3;
  } while( true );
}


////>>0x000043a0>>_fwalk>>////

uint _fwalk(int param_1,code *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  piVar2 = (int *)(param_1 + 0x48);
  uVar4 = 0;
  do {
    iVar5 = piVar2[1];
    iVar3 = piVar2[2];
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      if ((1 < *(ushort *)(iVar3 + 0xc)) && (*(short *)(iVar3 + 0xe) != -1)) {
        uVar1 = (*param_2)(iVar3);
        uVar4 = uVar4 | uVar1;
      }
      iVar3 = iVar3 + 0x68;
    }
    piVar2 = (int *)*piVar2;
  } while (piVar2 != (int *)0x0);
  return uVar4;
}


////>>0x000043da>>_fwalk_reent>>////

uint _fwalk_reent(int param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  piVar3 = (int *)(param_1 + 0x48);
  uVar5 = 0;
  do {
    iVar6 = piVar3[1];
    iVar4 = piVar3[2];
    while (iVar6 = iVar6 + -1, -1 < iVar6) {
      if ((1 < *(ushort *)(iVar4 + 0xc)) && (iVar2 = *(short *)(iVar4 + 0xe) + 1, iVar2 != 0)) {
        uVar1 = (*param_2)(param_1,iVar4,param_3,iVar2,param_4);
        uVar5 = uVar5 | uVar1;
      }
      iVar4 = iVar4 + 0x68;
    }
    piVar3 = (int *)*piVar3;
  } while (piVar3 != (int *)0x0);
  return uVar5;
}


////>>0x00004418>>getchar>>////



int getchar(void)

{
  int iVar1;
  
  iVar1 = _impure_ptr;
  if ((_impure_ptr != 0) && (*(int *)(_impure_ptr + 0x18) == 0)) {
    __sinit(_impure_ptr);
  }
  iVar1 = _getc_r(iVar1,*(undefined4 *)(iVar1 + 4));
  return iVar1;
}


////>>0x0000443c>>gmtime_r>>////

/* WARNING: Removing unreachable block (ram,0x000044a8) */

tm * gmtime_r(time_t *__timer,tm *__tp)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  time_t tVar7;
  time_t tVar8;
  uint uVar9;
  bool bVar10;
  
  tVar7 = *__timer;
  tVar8 = __timer[1];
  iVar1 = __aeabi_ldivmod(tVar7,tVar8,0x15180,0);
  uVar3 = 0x15180;
  __aeabi_ldivmod(tVar7,tVar8,0x15180,0);
  bVar10 = (int)uVar3 < 0;
  if (bVar10) {
    uVar3 = uVar3 + 0x15180;
  }
  if (bVar10) {
    uVar2 = iVar1 + 0xafa6b;
  }
  else {
    uVar2 = iVar1 + 0xafa6c;
  }
  __tp->tm_hour = uVar3 / 0xe10;
  __tp->tm_min = (uVar3 % 0xe10) / 0x3c;
  __tp->tm_sec = (uVar3 % 0xe10) % 0x3c;
  __tp->tm_wday = (uVar2 + 3) % 7;
  uVar3 = uVar2;
  if ((int)uVar2 < 0) {
    uVar3 = uVar2 - 0x23ab0;
  }
  uVar2 = (uVar3 / 0x23ab1) * -0x23ab1 + uVar2;
  uVar4 = ((uVar2 / 0x8eac + uVar2) - uVar2 / 0x5b4) - uVar2 / 0x23ab0;
  uVar6 = uVar4 / 0x16d;
  uVar2 = (uVar6 / 100 - uVar4 / 0x5b4) + uVar2 + uVar6 * -0x16d;
  uVar9 = uVar2 * 5 + 2;
  uVar4 = uVar9 / 0x99;
  if (uVar9 < 0x5fa) {
    iVar1 = 2;
  }
  else {
    iVar1 = -10;
  }
  uVar9 = uVar4 + iVar1;
  iVar1 = (uVar3 / 0x23ab1) * 400 + uVar6;
  if (uVar9 < 2) {
    iVar1 = iVar1 + 1;
  }
  if (uVar2 < 0x132) {
    if (((uVar6 & 3) == 0) && (uVar6 != (uVar6 / 100) * 100)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (uint)(uVar6 % 400 == 0);
    }
    iVar5 = uVar2 + 0x3b + uVar3;
  }
  else {
    iVar5 = uVar2 - 0x132;
  }
  __tp->tm_yday = iVar5;
  __tp->tm_mday = (uVar2 + 1) - (uVar4 * 0x99 + 2) / 5;
  __tp->tm_mon = uVar9;
  __tp->tm_year = iVar1 + -0x76c;
  __tp->tm_isdst = 0;
  return __tp;
}


////>>0x0000459c>>__libc_init_array>>////

void __libc_init_array(EVP_PKEY_CTX *param_1)

{
  code **ppcVar1;
  int iVar2;
  
  ppcVar1 = (code **)&__fini_array_end;
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + 1) {
    param_1 = (EVP_PKEY_CTX *)(**ppcVar1)();
    ppcVar1 = ppcVar1 + 1;
  }
  _init(param_1);
  ppcVar1 = (code **)&__fini_array_end;
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + 1) {
    (**ppcVar1)();
    ppcVar1 = ppcVar1 + 1;
  }
  return;
}


////>>0x000045e4>>__retarget_lock_init_recursive>>////

void __retarget_lock_init_recursive(void)

{
  return;
}


////>>0x000045e6>>__retarget_lock_acquire>>////

void __retarget_lock_acquire(void)

{
  return;
}


////>>0x000045e8>>__retarget_lock_acquire_recursive>>////

void __retarget_lock_acquire_recursive(void)

{
  return;
}


////>>0x000045ea>>__retarget_lock_release>>////

void __retarget_lock_release(void)

{
  return;
}


////>>0x000045ec>>__retarget_lock_release_recursive>>////

void __retarget_lock_release_recursive(void)

{
  return;
}


////>>0x000045ee>>memmove>>////

void * memmove(void *__dest,void *__src,size_t __n)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)((int)__src + __n);
  if ((__src < __dest) && (__dest < puVar2)) {
    puVar1 = (undefined *)(__n + (int)__dest);
    while (puVar1 != (undefined *)__dest) {
      puVar2 = puVar2 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar2;
    }
  }
  else {
    puVar1 = (undefined *)((int)__dest + -1);
    for (; (undefined *)__src != puVar2; __src = (void *)((int)__src + 1)) {
      puVar1 = puVar1 + 1;
      *puVar1 = *__src;
                    /* WARNING: Load size is inaccurate */
    }
  }
  return __dest;
}


////>>0x00004622>>memset>>////

void * memset(void *__s,int __c,size_t __n)

{
  undefined *puVar1;
  
  for (puVar1 = (undefined *)__s; puVar1 != (undefined *)(__n + (int)__s); puVar1 = puVar1 + 1) {
    *puVar1 = (char)__c;
  }
  return __s;
}


////>>0x00004634>>validate_structure>>////

void validate_structure(uint *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint *local_20;
  uint local_1c;
  undefined4 uStack_18;
  
  local_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  if (0x3b < *param_1) {
    div((int)&local_20,*param_1);
    uVar2 = param_1[1] + (int)local_20;
    param_1[1] = uVar2;
    if ((int)local_1c < 0) {
      uVar2 = uVar2 - 1;
      *param_1 = local_1c + 0x3c;
    }
    else {
      *param_1 = local_1c;
    }
    if ((int)local_1c < 0) {
      param_1[1] = uVar2;
    }
  }
  if (0x3b < param_1[1]) {
    div((int)&local_20,param_1[1]);
    bVar5 = (int)local_1c < 0;
    uVar3 = param_1[2] + (int)local_20;
    param_1[2] = uVar3;
    uVar2 = local_1c;
    if (bVar5) {
      uVar2 = local_1c + 0x3c;
      uVar3 = uVar3 - 1;
    }
    if (!bVar5) {
      param_1[1] = uVar2;
    }
    if (bVar5) {
      param_1[1] = uVar2;
    }
    if (bVar5) {
      param_1[2] = uVar3;
    }
  }
  if (0x17 < param_1[2]) {
    div((int)&local_20,param_1[2]);
    bVar5 = (int)local_1c < 0;
    uVar3 = param_1[3] + (int)local_20;
    param_1[3] = uVar3;
    uVar2 = local_1c;
    if (bVar5) {
      uVar2 = local_1c + 0x18;
      uVar3 = uVar3 - 1;
    }
    if (!bVar5) {
      param_1[2] = uVar2;
    }
    if (bVar5) {
      param_1[2] = uVar2;
    }
    if (bVar5) {
      param_1[3] = uVar3;
    }
  }
  if (0xb < param_1[4]) {
    div((int)&local_20,param_1[4]);
    bVar5 = (int)local_1c < 0;
    uVar2 = param_1[5] + (int)local_20;
    param_1[5] = uVar2;
    if (bVar5) {
      local_1c = local_1c + 0xc;
      uVar2 = uVar2 - 1;
    }
    if (!bVar5) {
      param_1[4] = local_1c;
    }
    if (bVar5) {
      param_1[4] = local_1c;
    }
    if (bVar5) {
      param_1[5] = uVar2;
    }
  }
  uVar2 = param_1[5];
  if ((uVar2 & 3) == 0) {
    if (uVar2 == (uVar2 / 100) * 100) {
      if ((uVar2 + 0x76c) % 400 == 0) {
        iVar4 = 0x1d;
      }
      else {
        iVar4 = 0x1c;
      }
    }
    else {
      iVar4 = 0x1d;
    }
  }
  else {
    iVar4 = 0x1c;
  }
  if ((int)param_1[3] < 1) {
    while ((int)param_1[3] < 1) {
      uVar2 = param_1[4];
      param_1[4] = uVar2 - 1;
      if (uVar2 - 1 == 0xffffffff) {
        uVar3 = param_1[5];
        uVar2 = uVar3 - 1;
        param_1[4] = 0xb;
        param_1[5] = uVar2;
        if ((uVar2 & 3) == 0) {
          if (uVar2 == (uVar2 / 100) * 100) {
            if ((uVar3 + 0x76b) % 400 == 0) {
              iVar4 = 0x1d;
            }
            else {
              iVar4 = 0x1c;
            }
          }
          else {
            iVar4 = 0x1d;
          }
        }
        else {
          iVar4 = 0x1c;
        }
      }
      iVar1 = iVar4;
      if (param_1[4] != 1) {
        iVar1 = *(int *)(&DAYS_IN_MONTH + param_1[4] * 4);
      }
      param_1[3] = iVar1 + param_1[3];
    }
  }
  else {
    while( true ) {
      uVar2 = param_1[4];
      iVar1 = iVar4;
      if (uVar2 != 1) {
        iVar1 = *(int *)(&DAYS_IN_MONTH + uVar2 * 4);
      }
      if ((int)param_1[3] <= iVar1) break;
      param_1[3] = param_1[3] - iVar1;
      param_1[4] = uVar2 + 1;
      if (uVar2 + 1 == 0xc) {
        uVar3 = param_1[5];
        uVar2 = uVar3 + 1;
        param_1[4] = 0;
        param_1[5] = uVar2;
        if ((uVar2 & 3) == 0) {
          if (uVar2 % 100 == 0) {
            if ((uVar3 + 0x76d) % 400 == 0) {
              iVar4 = 0x1d;
            }
            else {
              iVar4 = 0x1c;
            }
          }
          else {
            iVar4 = 0x1d;
          }
        }
        else {
          iVar4 = 0x1c;
        }
      }
    }
  }
  return;
}


////>>0x000047e4>>mktime>>////

/* WARNING: Removing unreachable block (ram,0x00004ab2) */

time_t mktime(tm *__tp)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  time_t tVar15;
  bool bVar16;
  
  piVar2 = (int *)__gettzinfo();
  validate_structure(__tp);
  uVar11 = __tp->tm_year;
  iVar10 = __tp->tm_mday + -1 + *(int *)(&_DAYS_BEFORE_MONTH + __tp->tm_mon * 4);
  if (((1 < __tp->tm_mon) && ((uVar11 & 3) == 0)) &&
     ((uVar11 != (uVar11 / 100) * 100 || (uVar11 + 0x76c == ((uVar11 + 0x76c) / 400) * 400)))) {
    iVar10 = iVar10 + 1;
  }
  __tp->tm_yday = iVar10;
  if (20000 < (int)&DAT_00002710 + uVar11) {
    return -1;
  }
  if ((int)uVar11 < 0x47) {
    if (uVar11 != 0x46) {
      for (uVar8 = 0x45; (int)uVar11 < (int)uVar8; uVar8 = uVar8 - 1) {
        if ((uVar8 & 3) == 0) {
          if (uVar8 == (uVar8 / 100) * 100) {
            if ((uVar8 + 0x76c) % 400 == 0) {
              iVar6 = 0x16e;
            }
            else {
              iVar6 = 0x16d;
            }
          }
          else {
            iVar6 = 0x16e;
          }
        }
        else {
          iVar6 = 0x16d;
        }
        iVar10 = iVar10 - iVar6;
      }
      if ((uVar8 & 3) == 0) {
        if (uVar11 == (uVar11 / 100) * 100) {
          iVar6 = 0x16d;
          if ((uVar11 + 0x76c) % 400 == 0) {
            iVar6 = 0x16e;
          }
        }
        else {
          iVar6 = 0x16e;
        }
      }
      else {
        iVar6 = 0x16d;
      }
      iVar10 = iVar10 - iVar6;
    }
  }
  else {
    uVar8 = 0x46;
    do {
      if ((uVar8 & 3) == 0) {
        if (uVar8 % 100 == 0) {
          if ((uVar8 + 0x76c) % 400 == 0) {
            iVar6 = 0x16e;
          }
          else {
            iVar6 = 0x16d;
          }
        }
        else {
          iVar6 = 0x16e;
        }
      }
      else {
        iVar6 = 0x16d;
      }
      uVar8 = uVar8 + 1;
      iVar10 = iVar10 + iVar6;
    } while (uVar11 != uVar8);
  }
  lVar1 = (longlong)iVar10 * 0x15180 +
          (longlong)(__tp->tm_hour * 0xe10 + __tp->tm_min * 0x3c + __tp->tm_sec);
  uVar14 = (uint)lVar1;
  iVar6 = (int)((ulonglong)lVar1 >> 0x20);
  __tz_lock();
  _tzset_unlocked();
  uVar8 = _daylight;
  if (_daylight == 0) {
LAB_00004934:
    tVar15 = uVar14 + piVar2[10];
  }
  else {
    uVar13 = __tp->tm_isdst;
    uVar12 = uVar13;
    if (0 < (int)uVar13) {
      uVar12 = 1;
    }
    if ((piVar2[1] == __tp->tm_year + 0x76c) || (iVar4 = __tzcalc_limits(), iVar4 != 0)) {
      uVar9 = piVar2[0x14];
      uVar3 = piVar2[0x12];
      uVar7 = piVar2[10];
      uVar8 = uVar3 - uVar7;
      iVar4 = (piVar2[0x13] - ((int)uVar7 >> 0x1f)) - (uint)(uVar3 < uVar7);
      if (((int)((iVar6 - iVar4) - (uint)(uVar14 < uVar8)) < 0 ==
           (SBORROW4(iVar6,iVar4) != SBORROW4(iVar6 - iVar4,(uint)(uVar14 < uVar8)))) &&
         (iVar5 = (piVar2[0x13] - ((int)uVar9 >> 0x1f)) - (uint)(uVar3 < uVar9),
         bVar16 = uVar14 < uVar3 - uVar9,
         (int)((iVar6 - iVar5) - (uint)bVar16) < 0 !=
         (SBORROW4(iVar6,iVar5) != SBORROW4(iVar6 - iVar5,(uint)bVar16)))) goto LAB_00004a88;
      uVar3 = piVar2[8] - uVar9;
      iVar5 = (piVar2[9] - ((int)uVar9 >> 0x1f)) - (uint)((uint)piVar2[8] < uVar9);
      if (*piVar2 != 0) {
        if ((int)((iVar6 - iVar5) - (uint)(uVar14 < uVar3)) < 0 ==
            (SBORROW4(iVar6,iVar5) != SBORROW4(iVar6 - iVar5,(uint)(uVar14 < uVar3))))
        goto LAB_0000491e;
LAB_0000492a:
        uVar8 = 0;
        if ((int)uVar13 < 0) goto LAB_00004934;
LAB_00004a14:
        uVar13 = uVar12 ^ uVar8;
        uVar12 = uVar8;
        if (uVar13 == 1) {
          if (uVar8 == 0) {
            iVar6 = uVar9 - uVar7;
          }
          else {
            iVar6 = uVar7 - uVar9;
          }
          iVar4 = __tp->tm_mday;
          uVar14 = uVar14 + iVar6;
          __tp->tm_sec = __tp->tm_sec + iVar6;
          validate_structure(__tp);
          iVar4 = __tp->tm_mday - iVar4;
          if (iVar4 != 0) {
            if (iVar4 < 2) {
              if (iVar4 == -2 || iVar4 + 2 < 0 != SCARRY4(iVar4,2)) {
                iVar4 = 1;
              }
            }
            else {
              iVar4 = -1;
            }
            iVar6 = iVar4 + __tp->tm_yday;
            iVar10 = iVar10 + iVar4;
            if (iVar6 < 0) {
              uVar8 = uVar11 - 1;
              if ((uVar8 & 3) == 0) {
                if (uVar8 == (uVar8 / 100) * 100) {
                  iVar6 = 0x16d;
                  if ((uVar11 + 0x76b) % 400 != 0) {
                    iVar6 = 0x16c;
                  }
                }
                else {
                  iVar6 = 0x16d;
                }
              }
              else {
                iVar6 = 0x16c;
              }
            }
            else {
              if ((uVar11 & 3) == 0) {
                if (uVar11 == (uVar11 / 100) * 100) {
                  iVar4 = 0x16d;
                  if ((uVar11 + 0x76c) % 400 == 0) {
                    iVar4 = 0x16e;
                  }
                }
                else {
                  iVar4 = 0x16e;
                }
              }
              else {
                iVar4 = 0x16d;
              }
              if (iVar4 <= iVar6) {
                iVar6 = iVar6 - iVar4;
              }
            }
            __tp->tm_yday = iVar6;
          }
        }
        goto LAB_00004a88;
      }
      if ((int)((iVar6 - iVar5) - (uint)(uVar14 < uVar3)) < 0 !=
          (SBORROW4(iVar6,iVar5) != SBORROW4(iVar6 - iVar5,(uint)(uVar14 < uVar3)))) {
LAB_0000491e:
        if ((int)((iVar6 - iVar4) - (uint)(uVar14 < uVar8)) < 0 ==
            (SBORROW4(iVar6,iVar4) != SBORROW4(iVar6 - iVar4,(uint)(uVar14 < uVar8))))
        goto LAB_0000492a;
      }
      if (-1 < (int)uVar13) {
        uVar8 = 1;
        goto LAB_00004a14;
      }
    }
    else {
LAB_00004a88:
      uVar8 = uVar12;
      if (uVar12 != 1) goto LAB_00004934;
    }
    tVar15 = uVar14 + piVar2[0x14];
    uVar8 = 1;
  }
  __tz_unlock();
  __tp->tm_isdst = uVar8;
  __tp->tm_wday = (iVar10 + 4U) % 7;
  return tVar15;
}


////>>0x00004b34>>_free_r>>////

void _free_r(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int **extraout_r1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    return;
  }
  ppiVar5 = (int **)(param_2 + -4);
  if (*(int *)(param_2 + -4) < 0) {
    ppiVar5 = (int **)((int)ppiVar5 + *(int *)(param_2 + -4));
  }
  __malloc_lock();
  ppiVar3 = (int **)&__malloc_free_list;
  if (__malloc_free_list == (int **)0x0) {
    ppiVar5[1] = (int *)0x0;
    ppiVar2 = extraout_r1;
    __malloc_free_list = ppiVar5;
  }
  else {
    ppiVar4 = __malloc_free_list;
    if (ppiVar5 < __malloc_free_list) {
      ppiVar2 = (int **)*ppiVar5;
      ppiVar3 = (int **)((int)ppiVar5 + (int)ppiVar2);
      bVar6 = __malloc_free_list == ppiVar3;
      if (bVar6) {
        ppiVar3 = (int **)*__malloc_free_list;
        __malloc_free_list = (int **)__malloc_free_list[1];
      }
      ppiVar5[1] = (int *)__malloc_free_list;
      __malloc_free_list = ppiVar5;
      if (bVar6) {
        ppiVar3 = (int **)((int)ppiVar3 + (int)ppiVar2);
        *ppiVar5 = (int *)ppiVar3;
      }
    }
    else {
      do {
        ppiVar3 = ppiVar4;
        ppiVar4 = (int **)ppiVar3[1];
        if (ppiVar4 == (int **)0x0) break;
      } while (ppiVar4 <= ppiVar5);
      ppiVar2 = (int **)*ppiVar3;
      if ((int **)((int)ppiVar3 + (int)ppiVar2) == ppiVar5) {
        ppiVar2 = (int **)((int)ppiVar2 + (int)*ppiVar5);
        *ppiVar3 = (int *)ppiVar2;
        if (ppiVar4 == (int **)((int)ppiVar3 + (int)ppiVar2)) {
          piVar1 = *ppiVar4;
          ppiVar3[1] = ppiVar4[1];
          ppiVar2 = (int **)((int)ppiVar2 + (int)piVar1);
          *ppiVar3 = (int *)ppiVar2;
        }
      }
      else if (ppiVar5 < (int **)((int)ppiVar3 + (int)ppiVar2)) {
        *param_1 = 0xc;
      }
      else {
        ppiVar2 = (int **)((int)ppiVar5 + (int)*ppiVar5);
        bVar6 = ppiVar4 == ppiVar2;
        if (bVar6) {
          ppiVar2 = (int **)*ppiVar4;
          ppiVar4 = (int **)ppiVar4[1];
        }
        ppiVar5[1] = (int *)ppiVar4;
        if (bVar6) {
          ppiVar2 = (int **)((int)ppiVar2 + (int)*ppiVar5);
          *ppiVar5 = (int *)ppiVar2;
        }
        ppiVar3[1] = (int *)ppiVar5;
      }
    }
  }
  __malloc_unlock(param_1,ppiVar2,ppiVar3,param_4);
  return;
}


////>>0x00004bd0>>_malloc_r>>////

uint _malloc_r(_reent *param_1,uint param_2)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar6 = (param_2 + 3 & 0xfffffffc) + 8;
  if (uVar6 < 0xc) {
    uVar6 = 0xc;
  }
  if (((int)uVar6 < 0) || (uVar6 < param_2)) {
    param_1->_errno = 0xc;
  }
  else {
    __malloc_lock();
    puVar1 = __malloc_free_list;
    for (puVar5 = __malloc_free_list; puVar5 != (uint *)0x0; puVar5 = (uint *)puVar5[1]) {
      uVar4 = *puVar5 - uVar6;
      if (-1 < (int)uVar4) {
        if (0xb < uVar4) {
          *puVar5 = uVar4;
          puVar5 = (uint *)((int)puVar5 + uVar4);
          goto LAB_00004c34;
        }
        if (puVar1 == puVar5) {
          __malloc_free_list = (uint *)puVar5[1];
        }
        if (puVar1 != puVar5) {
          puVar1[1] = (uint)(uint *)puVar5[1];
        }
        goto LAB_00004c42;
      }
      puVar1 = puVar5;
    }
    if (__malloc_sbrk_start == (void *)0x0) {
      __malloc_sbrk_start = _sbrk_r(param_1,0);
    }
    puVar1 = (uint *)_sbrk_r(param_1,uVar6);
    if ((puVar1 != (uint *)0xffffffff) &&
       ((puVar5 = (uint *)((int)puVar1 + 3U & 0xfffffffc), puVar1 == puVar5 ||
        (pvVar2 = _sbrk_r(param_1,(int)puVar5 - (int)puVar1), pvVar2 != (void *)0xffffffff)))) {
LAB_00004c34:
      *puVar5 = uVar6;
LAB_00004c42:
      __malloc_unlock(param_1);
      uVar6 = (int)puVar5 + 0xbU & 0xfffffff8;
      iVar3 = uVar6 - (int)(puVar5 + 1);
      if (iVar3 == 0) {
        return uVar6;
      }
      *(uint *)((int)puVar5 + iVar3) = (int)(puVar5 + 1) - uVar6;
      return uVar6;
    }
    param_1->_errno = 0xc;
    __malloc_unlock(param_1);
  }
  return 0;
}


////>>0x00004c84>>iprintf>>////

int iprintf(char *__format,...)

{
  int iVar1;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  char *pcVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = _impure_ptr;
  pcVar2 = __format;
  uStack_c = in_r1;
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  if ((_impure_ptr != 0) && (*(int *)(_impure_ptr + 0x18) == 0)) {
    __sinit(_impure_ptr);
  }
  iVar1 = _vfprintf_r(iVar1,*(undefined4 *)(iVar1 + 8),__format,&uStack_c,pcVar2,&uStack_c);
  return iVar1;
}


////>>0x00004cb4>>putchar>>////

int putchar(int __c)

{
  int iVar1;
  undefined4 in_r3;
  
  iVar1 = _impure_ptr;
  if ((_impure_ptr != 0) && (*(int *)(_impure_ptr + 0x18) == 0)) {
    __sinit(_impure_ptr);
  }
  iVar1 = _putc_r(iVar1,__c,*(undefined4 *)(iVar1 + 8),in_r3);
  return iVar1;
}


////>>0x00004cdc>>_puts_r>>////

undefined4 _puts_r(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    __sinit();
  }
  ppcVar4 = *(char ***)(param_1 + 8);
  if (*(int *)(param_1 + 0x18) == 0) {
    __sinit(param_1);
  }
  if (ppcVar4 == (char **)&__sf_fake_stdin) {
    ppcVar4 = *(char ***)(param_1 + 4);
  }
  else if (ppcVar4 == (char **)&__sf_fake_stdout) {
    ppcVar4 = *(char ***)(param_1 + 8);
  }
  else if (ppcVar4 == (char **)&__sf_fake_stderr) {
    ppcVar4 = *(char ***)(param_1 + 0xc);
  }
  if ((-1 < (int)ppcVar4[0x19] << 0x1f) && (-1 < (int)((uint)*(ushort *)(ppcVar4 + 3) << 0x16))) {
    __retarget_lock_acquire_recursive(ppcVar4[0x16]);
  }
  if ((((int)((uint)*(ushort *)(ppcVar4 + 3) << 0x1c) < 0) && (ppcVar4[4] != (char *)0x0)) ||
     (iVar2 = __swsetup_r(param_1,ppcVar4), iVar2 == 0)) {
    pcVar6 = (char *)(param_2 + -1);
    do {
      while( true ) {
        pcVar6 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar3 = ppcVar4[2] + -1;
        ppcVar4[2] = pcVar3;
        if (cVar1 == '\0') {
          if (-1 < (int)pcVar3) {
            pcVar6 = *ppcVar4;
            uVar5 = 10;
            *ppcVar4 = pcVar6 + 1;
            *pcVar6 = '\n';
            goto LAB_00004d64;
          }
          iVar2 = __swbuf_r(param_1,10,ppcVar4);
          if (iVar2 != -1) {
            uVar5 = 10;
            goto LAB_00004d64;
          }
          goto LAB_00004d60;
        }
        if (((int)pcVar3 < 0) && (((int)pcVar3 < (int)ppcVar4[6] || (cVar1 == '\n')))) break;
        pcVar3 = *ppcVar4;
        *ppcVar4 = pcVar3 + 1;
        *pcVar3 = cVar1;
      }
      iVar2 = __swbuf_r(param_1,cVar1,ppcVar4);
    } while (iVar2 != -1);
  }
LAB_00004d60:
  uVar5 = 0xffffffff;
LAB_00004d64:
  if ((-1 < (int)ppcVar4[0x19] << 0x1f) && (-1 < (int)((uint)*(ushort *)(ppcVar4 + 3) << 0x16))) {
    __retarget_lock_release_recursive(ppcVar4[0x16]);
  }
  return uVar5;
}


////>>0x00004db8>>puts>>////

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = _puts_r(_impure_ptr,__s);
  return iVar1;
}


////>>0x00004dc8>>__sread>>////

void __sread(_reent *param_1,int param_2,void *param_3,size_t param_4)

{
  _ssize_t _Var1;
  uint uVar2;
  bool bVar3;
  
  _Var1 = _read_r(param_1,(int)*(short *)(param_2 + 0xe),param_3,param_4);
  bVar3 = -1 < _Var1;
  if (bVar3) {
    uVar2 = *(int *)(param_2 + 0x54) + _Var1;
  }
  else {
    uVar2 = *(ushort *)(param_2 + 0xc) & 0xffffefff;
  }
  if (bVar3) {
    *(uint *)(param_2 + 0x54) = uVar2;
  }
  if (!bVar3) {
    *(short *)(param_2 + 0xc) = (short)uVar2;
  }
  return;
}


////>>0x00004dea>>__seofread>>////

undefined4 __seofread(void)

{
  return 0;
}


////>>0x00004dee>>__swrite>>////

void __swrite(_reent *param_1,int param_2,void *param_3,size_t param_4)

{
  if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x17) < 0) {
    _lseek_r(param_1,(int)*(short *)(param_2 + 0xe),0,2);
  }
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  _write_r(param_1,(int)*(short *)(param_2 + 0xe),param_3,param_4);
  return;
}


////>>0x00004e26>>__sseek>>////

void __sseek(_reent *param_1,int param_2,_off_t param_3,int param_4)

{
  _off_t _Var1;
  ushort uVar2;
  bool bVar3;
  
  _Var1 = _lseek_r(param_1,(int)*(short *)(param_2 + 0xe),param_3,param_4);
  bVar3 = _Var1 == -1;
  if (bVar3) {
    uVar2 = *(ushort *)(param_2 + 0xc) & 0xefff;
  }
  else {
    *(_off_t *)(param_2 + 0x54) = _Var1;
    uVar2 = *(ushort *)(param_2 + 0xc) | 0x1000;
  }
  if (bVar3) {
    *(ushort *)(param_2 + 0xc) = uVar2;
  }
  if (!bVar3) {
    *(ushort *)(param_2 + 0xc) = uVar2;
  }
  return;
}


////>>0x00004e4a>>__sclose>>////

void __sclose(_reent *param_1,int param_2)

{
  _close_r(param_1,(int)*(short *)(param_2 + 0xe));
  return;
}


////>>0x00004e52>>strcmp>>////

int strcmp(char *__s1,char *__s2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  
  do {
    uVar2 = (uint)(byte)*__s1;
    bVar1 = *__s2;
    bVar3 = uVar2 == 1;
    if (uVar2 != 0) {
      bVar3 = uVar2 == bVar1;
    }
    __s1 = (char *)((byte *)__s1 + 1);
    __s2 = (char *)((byte *)__s2 + 1);
  } while (bVar3);
  return uVar2 - bVar1;
}


////>>0x00004e66>>strncmp>>////

int strncmp(char *__s1,char *__s2,size_t __n)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  if (__n == 0) {
    iVar2 = 0;
  }
  else {
    pbVar3 = (byte *)(__s2 + -1);
    pbVar1 = (byte *)__s1;
    do {
      uVar4 = (uint)*pbVar1;
      pbVar3 = pbVar3 + 1;
      if ((uVar4 != *pbVar3) || (pbVar1 + 1 == (byte *)(__s1 + __n))) break;
      pbVar1 = pbVar1 + 1;
    } while (uVar4 != 0);
    iVar2 = uVar4 - *pbVar3;
  }
  return iVar2;
}


////>>0x00004e8c>>_strtol_l.isra.0>>////

uint _strtol_l_isra_0(undefined4 *param_1,byte *param_2,byte **param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar9 = param_2;
  do {
    pbVar8 = pbVar9;
    pbVar9 = pbVar8 + 1;
    uVar2 = (uint)*pbVar8;
    uVar3 = (byte)(&DAT_00007a99)[uVar2] & 8;
  } while (((&DAT_00007a99)[uVar2] & 8) != 0);
  if (uVar2 == 0x2d) {
    uVar2 = (uint)*pbVar9;
    uVar3 = 1;
    pbVar9 = pbVar8 + 2;
  }
  else if (uVar2 == 0x2b) {
    uVar2 = (uint)*pbVar9;
    pbVar9 = pbVar8 + 2;
  }
  if (param_4 == 0) {
    if (uVar2 != 0x30) {
      param_4 = 10;
      goto LAB_00004ed6;
    }
  }
  else if ((param_4 != 0x10) || (uVar2 != 0x30)) goto LAB_00004ed6;
  if ((*pbVar9 & 0xdf) == 0x58) {
    uVar2 = (uint)pbVar9[1];
    param_4 = 0x10;
    pbVar9 = pbVar9 + 2;
  }
  else {
    uVar2 = 0x30;
    if (param_4 == 0) {
      param_4 = 8;
    }
  }
LAB_00004ed6:
  uVar6 = uVar3 + 0x7fffffff;
  iVar5 = 0;
  uVar7 = uVar6 / param_4;
  uVar1 = 0;
  do {
    uVar4 = uVar2 - 0x30;
    if (9 < uVar4) {
      if (uVar2 - 0x41 < 0x1a) {
        uVar4 = uVar2 - 0x37;
      }
      else {
        if (0x19 < uVar2 - 0x61) break;
        uVar4 = uVar2 - 0x57;
      }
    }
    if ((int)param_4 <= (int)uVar4) break;
    if (iVar5 != -1) {
      if ((uVar7 < uVar1) || ((uVar7 == uVar1 && ((int)(uVar6 - param_4 * uVar7) < (int)uVar4)))) {
        iVar5 = -1;
      }
      else {
        uVar1 = uVar1 * param_4 + uVar4;
        iVar5 = 1;
      }
    }
    uVar2 = (uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
  if (iVar5 == -1) {
    *param_1 = 0x22;
    uVar1 = uVar6;
    if (param_3 == (byte **)0x0) {
      return uVar6;
    }
  }
  else {
    if (uVar3 != 0) {
      uVar1 = -uVar1;
    }
    if (param_3 == (byte **)0x0) {
      return uVar1;
    }
    if (iVar5 == 0) goto LAB_00004f64;
  }
  param_2 = pbVar9 + -1;
LAB_00004f64:
  *param_3 = param_2;
  return uVar1;
}


////>>0x00004f80>>_strtol_r>>////

uint _strtol_r(undefined4 *param_1,byte *param_2,byte **param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar9 = param_2;
  do {
    pbVar8 = pbVar9;
    pbVar9 = pbVar8 + 1;
    uVar2 = (uint)*pbVar8;
    uVar3 = (byte)(&DAT_00007a99)[uVar2] & 8;
  } while (((&DAT_00007a99)[uVar2] & 8) != 0);
  if (uVar2 == 0x2d) {
    uVar2 = (uint)*pbVar9;
    uVar3 = 1;
    pbVar9 = pbVar8 + 2;
  }
  else if (uVar2 == 0x2b) {
    uVar2 = (uint)*pbVar9;
    pbVar9 = pbVar8 + 2;
  }
  if (param_4 == 0) {
    if (uVar2 != 0x30) {
      param_4 = 10;
      goto LAB_00004ed6;
    }
  }
  else if ((param_4 != 0x10) || (uVar2 != 0x30)) goto LAB_00004ed6;
  if ((*pbVar9 & 0xdf) == 0x58) {
    uVar2 = (uint)pbVar9[1];
    param_4 = 0x10;
    pbVar9 = pbVar9 + 2;
  }
  else {
    uVar2 = 0x30;
    if (param_4 == 0) {
      param_4 = 8;
    }
  }
LAB_00004ed6:
  uVar6 = uVar3 + 0x7fffffff;
  iVar5 = 0;
  uVar7 = uVar6 / param_4;
  uVar1 = 0;
  do {
    uVar4 = uVar2 - 0x30;
    if (9 < uVar4) {
      if (uVar2 - 0x41 < 0x1a) {
        uVar4 = uVar2 - 0x37;
      }
      else {
        if (0x19 < uVar2 - 0x61) break;
        uVar4 = uVar2 - 0x57;
      }
    }
    if ((int)param_4 <= (int)uVar4) break;
    if (iVar5 != -1) {
      if ((uVar7 < uVar1) || ((uVar7 == uVar1 && ((int)(uVar6 - param_4 * uVar7) < (int)uVar4)))) {
        iVar5 = -1;
      }
      else {
        uVar1 = uVar1 * param_4 + uVar4;
        iVar5 = 1;
      }
    }
    uVar2 = (uint)*pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
  if (iVar5 == -1) {
    *param_1 = 0x22;
    uVar1 = uVar6;
    if (param_3 == (byte **)0x0) {
      return uVar6;
    }
  }
  else {
    if (uVar3 != 0) {
      uVar1 = -uVar1;
    }
    if (param_3 == (byte **)0x0) {
      return uVar1;
    }
    if (iVar5 == 0) goto LAB_00004f64;
  }
  param_2 = pbVar9 + -1;
LAB_00004f64:
  *param_3 = param_2;
  return uVar1;
}


////>>0x00004f84>>strtol>>////

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = _strtol_l_isra_0(_impure_ptr,__nptr,__endptr,__base);
  return lVar1;
}


////>>0x00004f98>>__tzcalc_limits>>////

undefined4 __tzcalc_limits(uint param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  puVar1 = (uint *)__gettzinfo();
  if ((int)param_1 < 0x7b2) {
    uVar2 = 0;
  }
  else {
    iVar6 = (param_1 - 0x7b2) * 0x16d + ((int)(param_1 - 0x7b1) >> 2) +
            (param_1 - 0x76d) / 0xffffff9c + (param_1 - 0x641) / 400;
    puVar1[1] = param_1;
    uVar10 = (uint)(param_1 % 400 == 0);
    puVar5 = puVar1;
    do {
      uVar3 = puVar5[5];
      if (*(char *)(puVar5 + 2) == 'J') {
        if ((((param_1 & 3) == 0) && (param_1 % 100 != 0)) || (param_1 % 400 == 0)) {
          if ((int)uVar3 < 0x3c) {
            iVar4 = 0;
          }
          else {
            iVar4 = 1;
          }
        }
        else {
          iVar4 = 0;
        }
        iVar4 = iVar4 + iVar6 + uVar3 + -1;
      }
      else if (*(char *)(puVar5 + 2) == 'D') {
        iVar4 = iVar6 + uVar3;
      }
      else {
        uVar7 = uVar10;
        if (((param_1 & 3) == 0) && (param_1 % 100 != 0)) {
          uVar7 = 1;
        }
        iVar8 = 0;
        iVar4 = iVar6;
        while( true ) {
          iVar8 = iVar8 + 1;
          if ((int)puVar5[3] <= iVar8) break;
          iVar4 = iVar4 + *(int *)(&UNK_00007b98 + iVar8 * 4 + uVar7 * 0x30);
        }
        iVar9 = uVar3 - (iVar4 + 4U) % 7;
        if (iVar9 < 0) {
          iVar9 = iVar9 + 7;
        }
        for (iVar9 = (puVar5[4] - 1) * 7 + iVar9;
            *(int *)(&UNK_00007b98 + iVar8 * 4 + uVar7 * 0x30) <= iVar9; iVar9 = iVar9 + -7) {
        }
        iVar4 = iVar4 + iVar9;
      }
      uVar3 = puVar5[10] + iVar4 * 0x15180 + puVar5[6];
      puVar5[8] = uVar3;
      puVar5[9] = (int)uVar3 >> 0x1f;
      puVar5 = puVar5 + 10;
    } while (puVar1 + 0x14 != puVar5);
    uVar3 = puVar1[9];
    uVar10 = puVar1[0x13];
    *puVar1 = (uint)((int)((uVar3 - uVar10) - (uint)(puVar1[8] < puVar1[0x12])) < 0 !=
                    (SBORROW4(uVar3,uVar10) !=
                    SBORROW4(uVar3 - uVar10,(uint)(puVar1[8] < puVar1[0x12]))));
    uVar2 = 1;
  }
  return uVar2;
}


////>>0x000050e8>>__tz_lock>>////

void __tz_lock(void)

{
  __retarget_lock_acquire(&__lock___tz_mutex);
  return;
}


////>>0x000050f4>>__tz_unlock>>////

void __tz_unlock(void)

{
  __retarget_lock_release(&__lock___tz_mutex);
  return;
}


////>>0x00005100>>_tzset_unlocked>>////

void _tzset_unlocked(void)

{
  _tzset_unlocked_r(_impure_ptr);
  return;
}


////>>0x0000510c>>_tzset_unlocked_r>>////

void _tzset_unlocked_r(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined uVar7;
  char *pcVar8;
  bool bVar9;
  ushort *puVar10;
  int *piVar11;
  ushort *puVar12;
  int *piVar13;
  ushort local_3c;
  ushort local_3a;
  ushort local_38;
  ushort local_36;
  ushort local_34;
  ushort local_32;
  int local_30;
  char *local_2c [2];
  
  iVar1 = __gettzinfo();
  pcVar2 = (char *)_getenv_r(param_1,&DAT_00007a5c);
  if (pcVar2 == (char *)0x0) {
    _tzname = &DAT_00007a5f;
    DAT_1fff02e8 = &DAT_00007a5f;
    _daylight = pcVar2;
    _timezone = pcVar2;
    free(prev_tzenv);
    prev_tzenv = (char *)0x0;
  }
  else if ((prev_tzenv == (char *)0x0) || (iVar4 = strcmp(pcVar2,prev_tzenv), iVar4 != 0)) {
    free(prev_tzenv);
    sVar3 = strlen(pcVar2);
    prev_tzenv = (char *)_malloc_r(param_1,sVar3 + 1);
    if (prev_tzenv != (char *)0x0) {
      strcpy(prev_tzenv,pcVar2);
    }
    if (*pcVar2 == ':') {
      pcVar2 = pcVar2 + 1;
    }
    iVar4 = siscanf(pcVar2,"%10[^0-9,+-]%n",&__tzname_std,&local_30);
    if (0 < iVar4) {
      pcVar8 = pcVar2 + local_30;
      if (pcVar2[local_30] == '-') {
        pcVar8 = pcVar8 + 1;
        iVar4 = -1;
      }
      else {
        if (pcVar2[local_30] == '+') {
          pcVar8 = pcVar8 + 1;
        }
        iVar4 = 1;
      }
      local_3a = 0;
      local_38 = 0;
      puVar10 = &local_3a;
      piVar11 = &local_30;
      puVar12 = &local_38;
      piVar13 = &local_30;
      iVar5 = siscanf(pcVar8,"%hu%n:%hu%n:%hu%n",&local_3c,&local_30,&local_3a,&local_30,&local_38,
                      &local_30);
      if (0 < iVar5) {
        *(uint *)(iVar1 + 0x28) =
             ((uint)local_3c * 0xe10 + (uint)local_3a * 0x3c + (uint)local_38) * iVar4;
        _tzname = &__tzname_std;
        pcVar8 = pcVar8 + local_30;
        iVar4 = siscanf(pcVar8,"%10[^0-9,+-]%n",&__tzname_dst,&local_30,puVar10,piVar11,puVar12,
                        piVar13);
        if (iVar4 < 1) {
          DAT_1fff02e8 = _tzname;
          _timezone = *(char **)(iVar1 + 0x28);
          _daylight = (char *)0x0;
        }
        else {
          DAT_1fff02e8 = &__tzname_dst;
          pcVar2 = pcVar8 + local_30;
          if (pcVar8[local_30] == '-') {
            pcVar2 = pcVar2 + 1;
            iVar4 = -1;
          }
          else {
            if (pcVar8[local_30] == '+') {
              pcVar2 = pcVar2 + 1;
            }
            iVar4 = 1;
          }
          local_3c = 0;
          local_3a = 0;
          local_38 = 0;
          local_30 = 0;
          iVar5 = siscanf(pcVar2,"%hu%n:%hu%n:%hu%n",&local_3c,&local_30,&local_3a,&local_30,
                          &local_38,&local_30);
          if (iVar5 < 1) {
            iVar4 = *(int *)(iVar1 + 0x28) + -0xe10;
          }
          else {
            iVar4 = ((uint)local_3c * 0xe10 + (uint)local_3a * 0x3c + (uint)local_38) * iVar4;
          }
          *(int *)(iVar1 + 0x50) = iVar4;
          pcVar2 = pcVar2 + local_30;
          bVar9 = false;
          iVar4 = iVar1;
          while( true ) {
            if (*pcVar2 == ',') {
              pcVar2 = pcVar2 + 1;
            }
            if (*pcVar2 == 'M') {
              iVar5 = siscanf(pcVar2,"M%hu%n.%hu%n.%hu%n",&local_36,&local_30,&local_34,&local_30,
                              &local_32,&local_30);
              if (iVar5 != 3) {
                return;
              }
              if (0xb < local_36 - 1) {
                return;
              }
              if (4 < local_34 - 1) {
                return;
              }
              if (6 < local_32) {
                return;
              }
              *(uint *)(iVar4 + 0xc) = (uint)local_36;
              *(uint *)(iVar4 + 0x10) = (uint)local_34;
              *(undefined *)(iVar4 + 8) = 0x4d;
              *(uint *)(iVar4 + 0x14) = (uint)local_32;
              pcVar8 = pcVar2 + local_30;
            }
            else {
              if (*pcVar2 == 'J') {
                pcVar2 = pcVar2 + 1;
                uVar7 = 0x4a;
              }
              else {
                uVar7 = 0x44;
              }
              uVar6 = strtoul(pcVar2,local_2c,10);
              local_32 = (ushort)uVar6;
              pcVar8 = local_2c[0];
              if (local_2c[0] == pcVar2) {
                if (bVar9) {
                  *(undefined *)(iVar1 + 0x30) = 0x4d;
                  *(undefined4 *)(iVar1 + 0x34) = 0xb;
                  *(undefined4 *)(iVar1 + 0x38) = 1;
                  *(undefined4 *)(iVar1 + 0x3c) = 0;
                }
                else {
                  *(undefined *)(iVar1 + 8) = 0x4d;
                  *(undefined4 *)(iVar1 + 0xc) = 3;
                  *(undefined4 *)(iVar1 + 0x10) = 2;
                  *(undefined4 *)(iVar1 + 0x14) = 0;
                }
              }
              else {
                *(undefined *)(iVar4 + 8) = uVar7;
                *(ulong *)(iVar4 + 0x14) = uVar6 & 0xffff;
              }
            }
            local_3c = 2;
            local_3a = 0;
            local_38 = 0;
            local_30 = 0;
            if (*pcVar8 == '/') {
              siscanf(pcVar8,"/%hu%n:%hu%n:%hu%n",&local_3c,&local_30,&local_3a,&local_30,&local_38,
                      &local_30);
            }
            *(uint *)(iVar4 + 0x18) =
                 (uint)local_3c * 0xe10 + (uint)local_3a * 0x3c + (uint)local_38;
            iVar4 = iVar4 + 0x28;
            pcVar2 = pcVar8 + local_30;
            if (bVar9) break;
            bVar9 = true;
          }
          __tzcalc_limits(*(undefined4 *)(iVar1 + 4));
          _timezone = *(char **)(iVar1 + 0x28);
          _daylight = (char *)(*(int *)(iVar1 + 0x50) - (int)_timezone);
          if (_daylight != (char *)0x0) {
            _daylight = (char *)0x1;
          }
        }
      }
    }
  }
  return;
}


////>>0x00005404>>__swbuf_r>>////

uint __swbuf_r(int param_1,uint param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    __sinit();
  }
  if (param_3 == &__sf_fake_stdin) {
    param_3 = *(int **)(param_1 + 4);
  }
  else if (param_3 == (int *)&__sf_fake_stdout) {
    param_3 = *(int **)(param_1 + 8);
  }
  else if (param_3 == (int *)&__sf_fake_stderr) {
    param_3 = *(int **)(param_1 + 0xc);
  }
  param_3[2] = param_3[6];
  uVar2 = (uint)*(ushort *)(param_3 + 3);
  iVar1 = uVar2 << 0x1c;
  if (((iVar1 < 0) && (uVar2 = param_3[4], uVar2 != 0)) ||
     (iVar1 = __swsetup_r(param_1,param_3,iVar1,uVar2,param_4), iVar1 == 0)) {
    iVar1 = *param_3 - param_3[4];
    param_2 = param_2 & 0xff;
    if ((iVar1 < param_3[5]) || (iVar1 = _fflush_r(param_1,param_3), iVar1 == 0)) {
      param_3[2] = param_3[2] + -1;
      puVar3 = (undefined *)*param_3;
      *param_3 = (int)(puVar3 + 1);
      *puVar3 = (char)param_2;
      if (param_3[5] != iVar1 + 1) {
        if (-1 < (int)((uint)*(ushort *)(param_3 + 3) << 0x1f)) {
          return param_2;
        }
        if (param_2 != 10) {
          return param_2;
        }
      }
      iVar1 = _fflush_r(param_1,param_3);
      if (iVar1 == 0) {
        return param_2;
      }
    }
  }
  return 0xffffffff;
}


////>>0x000054a8>>__swsetup_r>>////

uint __swsetup_r(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = _impure_ptr;
  if ((_impure_ptr != 0) && (*(int *)(_impure_ptr + 0x18) == 0)) {
    __sinit(_impure_ptr);
  }
  if (param_2 == &__sf_fake_stdin) {
    param_2 = *(undefined4 **)(iVar2 + 4);
  }
  else if (param_2 == (undefined4 *)&__sf_fake_stdout) {
    param_2 = *(undefined4 **)(iVar2 + 8);
  }
  else if (param_2 == (undefined4 *)&__sf_fake_stderr) {
    param_2 = *(undefined4 **)(iVar2 + 0xc);
  }
  uVar4 = (uint)*(ushort *)(param_2 + 3);
  uVar3 = *(ushort *)(param_2 + 3);
  if (-1 < (int)(uVar4 << 0x1c)) {
    if (-1 < (int)(uVar4 << 0x1b)) {
      *param_1 = 9;
      goto LAB_000054d8;
    }
    if ((int)(uVar4 << 0x1d) < 0) {
      if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
        if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
          _free_r(param_1);
        }
        param_2[0xd] = 0;
      }
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xffdb;
      param_2[1] = 0;
      *param_2 = param_2[4];
    }
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 8;
  }
  if ((param_2[4] == 0) && ((*(ushort *)(param_2 + 3) & 0x280) != 0x200)) {
    __smakebuf_r(param_1,param_2);
  }
  uVar1 = *(ushort *)(param_2 + 3);
  uVar4 = (uint)uVar1;
  uVar3 = *(ushort *)(param_2 + 3);
  uVar5 = uVar4 & 1;
  if ((uVar1 & 1) == 0) {
    if (-1 < (int)(uVar4 << 0x1e)) {
      uVar5 = param_2[5];
    }
    param_2[2] = uVar5;
  }
  else {
    param_2[2] = 0;
    param_2[6] = -param_2[5];
  }
  if (param_2[4] != 0) {
    return 0;
  }
  if ((uVar1 & 0x80) == 0) {
    return uVar4 & 0x80;
  }
LAB_000054d8:
  *(ushort *)(param_2 + 3) = uVar3 | 0x40;
  return 0xffffffff;
}


////>>0x00005584>>div>>////

div_t div(int __numer,int __denom)

{
  uint in_r2;
  int iVar1;
  uint uVar2;
  div_t dVar3;
  
  uVar2 = (uint)__denom / in_r2;
  iVar1 = __denom - in_r2 * uVar2;
  if (__denom < 0) {
    if (0 < iVar1) {
      uVar2 = uVar2 - 1;
      iVar1 = iVar1 + in_r2;
    }
  }
  else if (iVar1 < 0) {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 - in_r2;
  }
  *(uint *)__numer = uVar2;
  *(int *)(__numer + 4) = iVar1;
  dVar3.rem = __denom;
  dVar3.quot = __numer;
  return dVar3;
}


////>>0x000055ac>>_getc_r>>////

uint _getc_r(int param_1,byte **param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    __sinit();
  }
  if (param_2 == (byte **)&__sf_fake_stdin) {
    param_2 = *(byte ***)(param_1 + 4);
  }
  else if (param_2 == (byte **)&__sf_fake_stdout) {
    param_2 = *(byte ***)(param_1 + 8);
  }
  else if (param_2 == (byte **)&__sf_fake_stderr) {
    param_2 = *(byte ***)(param_1 + 0xc);
  }
  if ((-1 < (int)param_2[0x19] << 0x1f) && (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x16))) {
    __retarget_lock_acquire_recursive(param_2[0x16]);
  }
  pbVar2 = param_2[1];
  param_2[1] = pbVar2 + -1;
  if ((int)(pbVar2 + -1) < 0) {
    uVar1 = __srget_r(param_1,param_2);
  }
  else {
    pbVar2 = *param_2;
    *param_2 = pbVar2 + 1;
    uVar1 = (uint)*pbVar2;
  }
  if ((-1 < (int)param_2[0x19] << 0x1f) && (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x16))) {
    __retarget_lock_release_recursive(param_2[0x16]);
  }
  return uVar1;
}


////>>0x0000562c>>_findenv_r>>////

char * _findenv_r(undefined4 param_1,char *param_2,int *param_3)

{
  char cVar1;
  char **ppcVar2;
  int iVar3;
  char *pcVar4;
  char **ppcVar5;
  size_t __n;
  
  __env_lock();
  pcVar4 = param_2;
  if (environ != (char **)0x0) {
    do {
      cVar1 = *pcVar4;
      if (cVar1 == '\0') {
        __n = (int)pcVar4 - (int)param_2;
        ppcVar2 = environ;
        while( true ) {
          ppcVar5 = ppcVar2;
          if (*ppcVar5 == (char *)0x0) break;
          iVar3 = strncmp(*ppcVar5,param_2,__n);
          ppcVar2 = ppcVar5 + 1;
          if ((iVar3 == 0) && (pcVar4 = *ppcVar5, pcVar4[__n] == '=')) {
            *param_3 = (int)ppcVar5 - (int)environ >> 2;
            __env_unlock(param_1);
            return pcVar4 + __n + 1;
          }
        }
        break;
      }
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '=');
  }
  __env_unlock(param_1);
  return (char *)0x0;
}


////>>0x000056a0>>_getenv_r>>////

void _getenv_r(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  _findenv_r(param_1,param_2,&uStack_c,param_4,param_1);
  return;
}


////>>0x000056b0>>__gettzinfo>>////

undefined1 * __gettzinfo(void)

{
  return &tzinfo;
}


////>>0x000056b8>>__swhatbuf_r>>////

undefined4 __swhatbuf_r(_reent *param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  stat sStack_68;
  
  if ((*(short *)(param_2 + 0xe) < 0) ||
     (iVar1 = _fstat_r(param_1,(int)*(short *)(param_2 + 0xe),&sStack_68), iVar1 < 0)) {
    *param_4 = 0;
    if ((int)((uint)*(ushort *)(param_2 + 0xc) << 0x18) < 0) {
      uVar2 = 0x40;
      goto LAB_000056f8;
    }
  }
  else {
    *param_4 = (uint)((sStack_68.st_mode & 0xf000) == 0x2000);
  }
  uVar2 = 0x400;
LAB_000056f8:
  *param_3 = uVar2;
  return 0;
}


////>>0x00005700>>__smakebuf_r>>////

void __smakebuf_r(_reent *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  _reent *local_18;
  int *local_14;
  
  if (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x1e)) {
    local_18 = param_1;
    local_14 = param_2;
    uVar1 = __swhatbuf_r(param_1,param_2,&local_18,&local_14);
    iVar2 = _malloc_r(param_1,local_18);
    if (iVar2 != 0) {
      param_1->__cleanup = _cleanup_r + 1;
      *param_2 = iVar2;
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x80;
      param_2[5] = (int)local_18;
      param_2[4] = iVar2;
      if ((local_14 != (int *)0x0) &&
         (iVar2 = _isatty_r(param_1,(int)*(short *)((int)param_2 + 0xe)), iVar2 != 0)) {
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfffc | 1;
      }
      *(ushort *)(param_2 + 3) = uVar1 | *(ushort *)(param_2 + 3);
      return;
    }
    if ((int)(short)*(ushort *)(param_2 + 3) << 0x16 < 0) {
      return;
    }
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfffc | 2;
  }
  *param_2 = (int)param_2 + 0x47;
  param_2[4] = (int)param_2 + 0x47;
  param_2[5] = 1;
  return;
}


////>>0x00005780>>free>>////

void free(void *__ptr)

{
  _free_r(_impure_ptr,__ptr);
  return;
}


////>>0x00005790>>__malloc_lock>>////

void __malloc_lock(void)

{
  __retarget_lock_acquire_recursive(&__lock___malloc_recursive_mutex);
  return;
}


////>>0x0000579c>>__malloc_unlock>>////

void __malloc_unlock(void)

{
  __retarget_lock_release_recursive(&__lock___malloc_recursive_mutex);
  return;
}


////>>0x000057a8>>__sfputc_r>>////

int __sfputc_r(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = param_3[2] + -1;
  param_3[2] = iVar1;
  if ((iVar1 < 0) && ((iVar1 < (int)param_3[6] || (param_2 == 10)))) {
    iVar1 = __swbuf_r();
    return iVar1;
  }
  puVar2 = (undefined *)*param_3;
  *param_3 = puVar2 + 1;
  *puVar2 = (char)param_2;
  return param_2;
}


////>>0x000057d2>>__sfputs_r>>////

int __sfputs_r(undefined4 param_1,undefined4 param_2,undefined *param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = param_3 + param_4;
  iVar3 = param_4;
  do {
    if (param_3 == puVar2) {
      return 0;
    }
    iVar1 = __sfputc_r(param_1,*param_3,param_2,param_4,iVar3);
    param_4 = iVar1 + 1;
    param_3 = param_3 + 1;
  } while (param_4 != 0);
  return iVar1;
}


////>>0x000057f8>>_vfprintf_r>>////

/* WARNING: Removing unreachable block (ram,0x000059f0) */

int _vfprintf_r(int param_1,undefined4 *param_2,byte *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  byte *pbVar6;
  int unaff_r7;
  byte *pbVar7;
  int *local_8c;
  uint local_88;
  int local_84;
  undefined4 uStack_80;
  int local_7c;
  int local_74;
  byte local_70;
  undefined local_6f;
  undefined local_6e;
  undefined local_45;
  undefined4 local_30;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    __sinit();
  }
  if (param_2 == &__sf_fake_stdin) {
    param_2 = *(undefined4 **)(param_1 + 4);
  }
  else if (param_2 == (undefined4 *)&__sf_fake_stdout) {
    param_2 = *(undefined4 **)(param_1 + 8);
  }
  else if (param_2 == (undefined4 *)&__sf_fake_stderr) {
    param_2 = *(undefined4 **)(param_1 + 0xc);
  }
  if ((-1 < (int)(param_2[0x19] << 0x1f)) && (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x16))) {
    __retarget_lock_acquire_recursive(param_2[0x16]);
  }
  if (((-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x1c)) || (param_2[4] == 0)) &&
     (iVar2 = __swsetup_r(param_1,param_2), iVar2 != 0)) {
    if ((-1 < (int)(param_2[0x19] << 0x1f)) && (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x16)))
    {
      __retarget_lock_release_recursive(param_2[0x16]);
    }
    return -1;
  }
  local_74 = 0;
  local_6f = 0x20;
  local_6e = 0x30;
  pbVar7 = param_3;
  local_8c = param_4;
LAB_0000588e:
  pbVar6 = pbVar7;
  if (*pbVar6 != 0) goto code_r0x00005896;
  goto LAB_0000589a;
code_r0x00005896:
  pbVar7 = pbVar6 + 1;
  if (*pbVar6 == 0x25) {
LAB_0000589a:
    iVar2 = (int)pbVar6 - (int)param_3;
    if (iVar2 != 0) {
      iVar3 = __sfputs_r(param_1,param_2,param_3,iVar2);
      if (iVar3 == -1) {
LAB_00005a06:
        if ((-1 < (int)(param_2[0x19] << 0x1f)) &&
           (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x16))) {
          __retarget_lock_release_recursive(param_2[0x16]);
        }
        if ((int)((uint)*(ushort *)(param_2 + 3) << 0x19) < 0) {
          return -1;
        }
        return local_74;
      }
      local_74 = local_74 + iVar2;
    }
    if (*pbVar6 == 0) goto LAB_00005a06;
    local_84 = -1;
    uStack_80 = 0;
    local_88 = 0;
    local_7c = 0;
    local_45 = 0;
    local_30 = 0;
    pbVar7 = pbVar6 + 1;
    while( true ) {
      pbVar6 = pbVar7 + 1;
      pvVar4 = memchr("#-0+ ",(uint)*pbVar7,5);
      if (pvVar4 == (void *)0x0) break;
      local_88 = 1 << ((int)pvVar4 - 0x7bfcU & 0xff) | local_88;
      pbVar7 = pbVar6;
    }
    if ((int)(local_88 << 0x1b) < 0) {
      local_45 = 0x20;
    }
    if ((int)(local_88 << 0x1c) < 0) {
      local_45 = 0x2b;
    }
    if (*pbVar7 == 0x2a) {
      piVar5 = local_8c + 1;
      local_7c = *local_8c;
      local_8c = piVar5;
      if (local_7c < 0) {
        local_7c = -local_7c;
        local_88 = local_88 | 2;
      }
    }
    else {
      bVar1 = false;
      iVar2 = local_7c;
      pbVar6 = pbVar7;
      while( true ) {
        if (9 < *pbVar6 - 0x30) break;
        iVar2 = iVar2 * 10 + (*pbVar6 - 0x30);
        bVar1 = true;
        pbVar6 = pbVar6 + 1;
      }
      if (bVar1) {
        local_7c = iVar2;
      }
    }
    if (*pbVar6 == 0x2e) {
      if (pbVar6[1] == 0x2a) {
        local_84 = *local_8c;
        if (local_84 < 0) {
          local_84 = -1;
        }
        pbVar6 = pbVar6 + 2;
        local_8c = local_8c + 1;
      }
      else {
        bVar1 = false;
        local_84 = 0;
        iVar2 = 0;
        while( true ) {
          pbVar6 = pbVar6 + 1;
          if (9 < *pbVar6 - 0x30) break;
          iVar2 = iVar2 * 10 + (*pbVar6 - 0x30);
          bVar1 = true;
        }
        if (bVar1) {
          local_84 = iVar2;
        }
      }
    }
    pvVar4 = memchr(&DAT_00007c02,(uint)*pbVar6,3);
    if (pvVar4 != (void *)0x0) {
      local_88 = local_88 | 0x40 << ((int)pvVar4 - 0x7c02U & 0xff);
      pbVar6 = pbVar6 + 1;
    }
    param_3 = pbVar6 + 1;
    local_70 = *pbVar6;
    pvVar4 = memchr("efgEFG",(uint)local_70,6);
    if (pvVar4 == (void *)0x0) {
      unaff_r7 = _printf_i(param_1,&local_88,param_2,0x57d3,&local_8c);
      if (unaff_r7 == -1) goto LAB_00005a06;
    }
    else {
      local_8c = (int *)(((int)local_8c + 7U & 0xfffffff8) + 8);
    }
    local_74 = local_74 + unaff_r7;
    pbVar7 = param_3;
  }
  goto LAB_0000588e;
}


////>>0x00005a58>>_printf_common>>////

undefined4
_printf_common(undefined4 param_1,uint *param_2,uint *param_3,undefined4 param_4,code *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar4 = param_2[4];
  if ((int)param_2[4] < (int)param_2[2]) {
    uVar4 = param_2[2];
  }
  *param_3 = uVar4;
  if (*(char *)((int)param_2 + 0x43) != '\0') {
    *param_3 = uVar4 + 1;
  }
  if ((int)(*param_2 << 0x1a) < 0) {
    *param_3 = *param_3 + 2;
  }
  if ((*param_2 & 6) == 0) {
    for (iVar1 = 0; iVar1 < (int)(param_2[3] - *param_3); iVar1 = iVar1 + 1) {
      iVar3 = (*param_5)(param_1,param_4,(int)param_2 + 0x19,1);
      if (iVar3 == -1) goto LAB_00005afc;
    }
  }
  uVar4 = (uint)*(byte *)((int)param_2 + 0x43);
  if (uVar4 != 0) {
    uVar4 = 1;
  }
  if ((int)(*param_2 << 0x1a) < 0) {
    *(undefined *)((int)param_2 + uVar4 + 0x43) = 0x30;
    *(undefined *)((int)param_2 + uVar4 + 0x44) = *(undefined *)((int)param_2 + 0x45);
    uVar4 = uVar4 + 2;
  }
  iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x43,uVar4);
  if (iVar1 == -1) {
LAB_00005afc:
    uVar2 = 0xffffffff;
  }
  else {
    uVar4 = param_2[3];
    bVar6 = (*param_2 & 6) == 4;
    if (bVar6) {
      uVar4 = uVar4 - *param_3;
    }
    if (bVar6) {
      uVar4 = uVar4 & ~((int)uVar4 >> 0x1f);
    }
    else {
      uVar4 = 0;
    }
    if ((int)param_2[4] < (int)param_2[2]) {
      uVar4 = uVar4 + (param_2[2] - param_2[4]);
    }
    for (uVar5 = 0; uVar4 != uVar5; uVar5 = uVar5 + 1) {
      iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x1a,1);
      if (iVar1 == -1) goto LAB_00005afc;
    }
    uVar2 = 0;
  }
  return uVar2;
}


////>>0x00005b34>>_printf_i>>////

code * _printf_i(undefined4 param_1,uint *param_2,undefined4 param_3,code *param_4,uint **param_5)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  void *pvVar6;
  int iVar7;
  char *__s;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint **ppuVar11;
  char **ppcVar12;
  uint uVar13;
  char *pcVar14;
  uint *puVar15;
  undefined4 uVar16;
  code *local_24;
  
  bVar2 = *(byte *)(param_2 + 6);
  __s = (char *)((int)param_2 + 0x43);
  puVar15 = param_2;
  uVar16 = param_3;
  local_24 = param_4;
  if (0x78 < bVar2) {
switchD_00005b70_caseD_65:
    *(byte *)((int)param_2 + 0x42) = bVar2;
LAB_00005bdc:
    __s = (char *)((int)param_2 + 0x42);
    uVar8 = 1;
LAB_00005d28:
    param_2[4] = uVar8;
    *(undefined *)((int)param_2 + 0x43) = 0;
    goto LAB_00005c84;
  }
  if (bVar2 < 99) {
    if (bVar2 == 0) goto LAB_00005d06;
    if (bVar2 == 0x58) {
      pcVar5 = "0123456789ABCDEF";
      *(undefined *)((int)param_2 + 0x45) = 0x58;
      goto LAB_00005ca8;
    }
    goto switchD_00005b70_caseD_65;
  }
  switch(bVar2) {
  case 99:
    uVar8 = **param_5;
    *param_5 = *param_5 + 1;
    *(char *)((int)param_2 + 0x42) = (char)uVar8;
    goto LAB_00005bdc;
  case 100:
  case 0x69:
    uVar10 = *param_2;
    puVar9 = *param_5;
    if ((int)(uVar10 << 0x18) < 0) {
      uVar8 = *puVar9;
      *param_5 = puVar9 + 1;
    }
    else {
      uVar8 = *puVar9;
      *param_5 = puVar9 + 1;
      if ((uVar10 & 0x40) != 0) {
        uVar8 = (uint)(short)uVar8;
      }
    }
    if ((int)uVar8 < 0) {
      uVar8 = -uVar8;
      *(undefined *)((int)param_2 + 0x43) = 0x2d;
    }
    pcVar5 = "0123456789ABCDEF";
    uVar10 = 10;
    goto LAB_00005c36;
  default:
    goto switchD_00005b70_caseD_65;
  case 0x6e:
    ppuVar11 = (uint **)*param_5;
    uVar10 = *param_2;
    uVar8 = param_2[5];
    *param_5 = (uint *)(ppuVar11 + 1);
    puVar9 = *ppuVar11;
    if (((int)(uVar10 << 0x18) < 0) || (-1 < (int)(uVar10 << 0x19))) {
      *puVar9 = uVar8;
    }
    else {
      *(short *)puVar9 = (short)uVar8;
    }
LAB_00005d06:
    param_2[4] = 0;
    goto LAB_00005c84;
  case 0x6f:
  case 0x75:
    puVar9 = *param_5;
    uVar8 = *param_2;
    *param_5 = puVar9 + 1;
    if (((int)(uVar8 << 0x18) < 0) || (-1 < (int)(uVar8 << 0x19))) {
      uVar8 = *puVar9;
    }
    else {
      uVar8 = (uint)*(ushort *)puVar9;
    }
    pcVar5 = "0123456789ABCDEF";
    if (bVar2 == 0x6f) {
      uVar10 = 8;
    }
    else {
      uVar10 = 10;
    }
    break;
  case 0x70:
    *param_2 = *param_2 | 0x20;
  case 0x78:
    pcVar5 = "0123456789abcdef";
    *(undefined *)((int)param_2 + 0x45) = 0x78;
LAB_00005ca8:
    uVar10 = *param_2;
    uVar8 = **param_5;
    *param_5 = *param_5 + 1;
    if ((-1 < (int)(uVar10 << 0x18)) && ((int)(uVar10 << 0x19) < 0)) {
      uVar8 = uVar8 & 0xffff;
    }
    if ((int)(uVar10 << 0x1f) < 0) {
      *param_2 = uVar10 | 0x20;
    }
    if (uVar8 == 0) {
      *param_2 = *param_2 & 0xffffffdf;
    }
    uVar10 = 0x10;
    break;
  case 0x73:
    ppcVar12 = (char **)*param_5;
    *param_5 = (uint *)(ppcVar12 + 1);
    __s = *ppcVar12;
    pvVar6 = memchr(__s,0,param_2[1]);
    if (pvVar6 != (void *)0x0) {
      param_2[1] = (int)pvVar6 - (int)__s;
    }
    uVar8 = param_2[1];
    goto LAB_00005d28;
  }
  *(undefined *)((int)param_2 + 0x43) = 0;
LAB_00005c36:
  uVar13 = param_2[1];
  param_2[2] = uVar13;
  if (-1 < (int)uVar13) {
    *param_2 = *param_2 & 0xfffffffb;
  }
  pcVar14 = __s;
  if ((uVar8 != 0) || (uVar13 != 0)) {
    do {
      pcVar14 = pcVar14 + -1;
      *pcVar14 = pcVar5[uVar8 - uVar10 * (uVar8 / uVar10)];
      bVar1 = uVar10 <= uVar8;
      uVar8 = uVar8 / uVar10;
    } while (bVar1);
  }
  if (((uVar10 == 8) && ((int)(*param_2 << 0x1f) < 0)) && ((int)param_2[1] <= (int)param_2[4])) {
    pcVar14[-1] = '0';
    pcVar14 = pcVar14 + -1;
  }
  param_2[4] = (int)__s - (int)pcVar14;
  __s = pcVar14;
LAB_00005c84:
  iVar3 = _printf_common(param_1,param_2,&local_24,param_3,param_4,puVar15,uVar16);
  if ((iVar3 == -1) || (iVar3 = (*param_4)(param_1,param_3,__s,param_2[4]), iVar3 == -1)) {
LAB_00005c98:
    pcVar4 = (code *)0xffffffff;
  }
  else {
    if ((int)(*param_2 << 0x1e) < 0) {
      for (iVar3 = 0; iVar3 < (int)(param_2[3] - (int)local_24); iVar3 = iVar3 + 1) {
        iVar7 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
        if (iVar7 == -1) goto LAB_00005c98;
      }
    }
    pcVar4 = (code *)param_2[3];
    if ((int)(code *)param_2[3] < (int)local_24) {
      pcVar4 = local_24;
    }
  }
  return pcVar4;
}


////>>0x00005d80>>_putc_r>>////

uint _putc_r(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    __sinit();
  }
  if (param_3 == &__sf_fake_stdin) {
    param_3 = *(undefined4 **)(param_1 + 4);
  }
  else if (param_3 == (undefined4 *)&__sf_fake_stdout) {
    param_3 = *(undefined4 **)(param_1 + 8);
  }
  else if (param_3 == (undefined4 *)&__sf_fake_stderr) {
    param_3 = *(undefined4 **)(param_1 + 0xc);
  }
  if ((-1 < (int)(param_3[0x19] << 0x1f)) && (-1 < (int)((uint)*(ushort *)(param_3 + 3) << 0x16))) {
    __retarget_lock_acquire_recursive(param_3[0x16]);
  }
  iVar1 = param_3[2] + -1;
  param_3[2] = iVar1;
  if ((iVar1 < 0) && ((iVar1 < (int)param_3[6] || ((param_2 & 0xff) == 10)))) {
    param_2 = __swbuf_r(param_1,param_2,param_3);
  }
  else {
    puVar2 = (undefined *)*param_3;
    *param_3 = puVar2 + 1;
    *puVar2 = (char)param_2;
    param_2 = param_2 & 0xff;
  }
  if ((-1 < (int)(param_3[0x19] << 0x1f)) && (-1 < (int)((uint)*(ushort *)(param_3 + 3) << 0x16))) {
    __retarget_lock_release_recursive(param_3[0x16]);
  }
  return param_2;
}


////>>0x00005e10>>__srget_r>>////

uint __srget_r(int param_1,byte **param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    __sinit();
  }
  if (param_2 == (byte **)&__sf_fake_stdin) {
    param_2 = *(byte ***)(param_1 + 4);
  }
  else if (param_2 == (byte **)&__sf_fake_stdout) {
    param_2 = *(byte ***)(param_1 + 8);
  }
  else if (param_2 == (byte **)&__sf_fake_stderr) {
    param_2 = *(byte ***)(param_1 + 0xc);
  }
  iVar1 = __srefill_r(param_1,param_2);
  if (iVar1 == 0) {
    param_2[1] = param_2[1] + -1;
    pbVar3 = *param_2;
    *param_2 = pbVar3 + 1;
    uVar2 = (uint)*pbVar3;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


////>>0x00005e68>>siscanf>>////

int siscanf(char *__s,char *__format,...)

{
  int iVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  char *local_80;
  size_t local_7c;
  undefined2 local_74;
  undefined2 local_72;
  char *local_70;
  size_t local_6c;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_38;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_74 = 0x204;
  local_80 = __s;
  local_70 = __s;
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  local_7c = strlen(__s);
  local_5c = 0x4deb;
  local_4c = 0;
  local_38 = 0;
  local_72 = 0xffff;
  local_6c = local_7c;
  iVar1 = __ssvfiscanf_r(_impure_ptr,&local_80,__format,&uStack_8);
  return iVar1;
}


////>>0x00005ebc>>strcpy>>////

char * strcpy(char *__dest,char *__src)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = __dest;
  do {
    cVar1 = *__src;
    *pcVar2 = cVar1;
    __src = __src + 1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return __dest;
}


////>>0x00005ecc>>strlen>>////

size_t strlen(char *__s)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = __s;
  do {
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
  return (size_t)(pcVar2 + (-1 - (int)__s));
}


////>>0x00005edc>>_strtoul_l.isra.0>>////

uint _strtoul_l_isra_0(undefined4 *param_1,byte *param_2,byte **param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pbVar8 = param_2;
  do {
    pbVar7 = pbVar8;
    pbVar8 = pbVar7 + 1;
    uVar2 = (uint)*pbVar7;
    bVar3 = (&DAT_00007a99)[uVar2] & 8;
  } while (((&DAT_00007a99)[uVar2] & 8) != 0);
  if (uVar2 == 0x2d) {
    uVar2 = (uint)*pbVar8;
    bVar3 = 1;
    pbVar8 = pbVar7 + 2;
  }
  else if (uVar2 == 0x2b) {
    uVar2 = (uint)*pbVar8;
    pbVar8 = pbVar7 + 2;
  }
  if (param_4 == 0) {
    if (uVar2 != 0x30) {
      param_4 = 10;
      goto LAB_00005f26;
    }
  }
  else if ((param_4 != 0x10) || (uVar2 != 0x30)) goto LAB_00005f26;
  if ((*pbVar8 & 0xdf) == 0x58) {
    uVar2 = (uint)pbVar8[1];
    param_4 = 0x10;
    pbVar8 = pbVar8 + 2;
  }
  else {
    uVar2 = 0x30;
    if (param_4 == 0) {
      param_4 = 8;
    }
  }
LAB_00005f26:
  iVar4 = 0;
  uVar6 = 0xffffffff / param_4;
  uVar1 = 0;
  do {
    uVar5 = uVar2 - 0x30;
    if (9 < uVar5) {
      if (uVar2 - 0x41 < 0x1a) {
        uVar5 = uVar2 - 0x37;
      }
      else {
        if (0x19 < uVar2 - 0x61) break;
        uVar5 = uVar2 - 0x57;
      }
    }
    if ((int)param_4 <= (int)uVar5) break;
    if (((iVar4 < 0) || (uVar6 < uVar1)) ||
       ((uVar6 == uVar1 && ((int)~(param_4 * uVar6) < (int)uVar5)))) {
      iVar4 = -1;
    }
    else {
      uVar1 = uVar1 * param_4 + uVar5;
      iVar4 = 1;
    }
    uVar2 = (uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
  } while( true );
  if (iVar4 < 0) {
    *param_1 = 0x22;
    uVar1 = 0xffffffff;
    if (param_3 == (byte **)0x0) {
      return 0xffffffff;
    }
  }
  else {
    if (bVar3 != 0) {
      uVar1 = -uVar1;
    }
    if (param_3 == (byte **)0x0) {
      return uVar1;
    }
    if (iVar4 == 0) goto LAB_00005fb8;
  }
  param_2 = pbVar8 + -1;
LAB_00005fb8:
  *param_3 = param_2;
  return uVar1;
}


////>>0x00005fd4>>_strtoul_r>>////

uint _strtoul_r(undefined4 *param_1,byte *param_2,byte **param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pbVar8 = param_2;
  do {
    pbVar7 = pbVar8;
    pbVar8 = pbVar7 + 1;
    uVar2 = (uint)*pbVar7;
    bVar3 = (&DAT_00007a99)[uVar2] & 8;
  } while (((&DAT_00007a99)[uVar2] & 8) != 0);
  if (uVar2 == 0x2d) {
    uVar2 = (uint)*pbVar8;
    bVar3 = 1;
    pbVar8 = pbVar7 + 2;
  }
  else if (uVar2 == 0x2b) {
    uVar2 = (uint)*pbVar8;
    pbVar8 = pbVar7 + 2;
  }
  if (param_4 == 0) {
    if (uVar2 != 0x30) {
      param_4 = 10;
      goto LAB_00005f26;
    }
  }
  else if ((param_4 != 0x10) || (uVar2 != 0x30)) goto LAB_00005f26;
  if ((*pbVar8 & 0xdf) == 0x58) {
    uVar2 = (uint)pbVar8[1];
    param_4 = 0x10;
    pbVar8 = pbVar8 + 2;
  }
  else {
    uVar2 = 0x30;
    if (param_4 == 0) {
      param_4 = 8;
    }
  }
LAB_00005f26:
  iVar4 = 0;
  uVar6 = 0xffffffff / param_4;
  uVar1 = 0;
  do {
    uVar5 = uVar2 - 0x30;
    if (9 < uVar5) {
      if (uVar2 - 0x41 < 0x1a) {
        uVar5 = uVar2 - 0x37;
      }
      else {
        if (0x19 < uVar2 - 0x61) break;
        uVar5 = uVar2 - 0x57;
      }
    }
    if ((int)param_4 <= (int)uVar5) break;
    if (((iVar4 < 0) || (uVar6 < uVar1)) ||
       ((uVar6 == uVar1 && ((int)~(param_4 * uVar6) < (int)uVar5)))) {
      iVar4 = -1;
    }
    else {
      uVar1 = uVar1 * param_4 + uVar5;
      iVar4 = 1;
    }
    uVar2 = (uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
  } while( true );
  if (iVar4 < 0) {
    *param_1 = 0x22;
    uVar1 = 0xffffffff;
    if (param_3 == (byte **)0x0) {
      return 0xffffffff;
    }
  }
  else {
    if (bVar3 != 0) {
      uVar1 = -uVar1;
    }
    if (param_3 == (byte **)0x0) {
      return uVar1;
    }
    if (iVar4 == 0) goto LAB_00005fb8;
  }
  param_2 = pbVar8 + -1;
LAB_00005fb8:
  *param_3 = param_2;
  return uVar1;
}


////>>0x00005fd8>>strtoul>>////

ulong strtoul(char *__nptr,char **__endptr,int __base)

{
  ulong uVar1;
  
  uVar1 = _strtoul_l_isra_0(_impure_ptr,__nptr,__endptr,__base);
  return uVar1;
}


////>>0x00005fec>>__env_lock>>////

void __env_lock(void)

{
  __retarget_lock_acquire_recursive(&__lock___env_recursive_mutex);
  return;
}


////>>0x00005ff8>>__env_unlock>>////

void __env_unlock(void)

{
  __retarget_lock_release_recursive(&__lock___env_recursive_mutex);
  return;
}


////>>0x00006010>>memchr>>////

void * memchr(void *__s,int __c,size_t __n)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  byte *pbVar6;
  uint *puVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  
  uVar9 = __c & 0xff;
  if ((int)__n < 0x10) {
joined_r0x00006070:
    do {
      if (__n == 0) {
        return (void *)0x0;
      }
                    /* WARNING: Load size is inaccurate */
      puVar7 = (uint *)((int)__s + 1);
      bVar1 = *__s;
      __n = __n - 1;
      __s = puVar7;
    } while (bVar1 != uVar9);
  }
  else {
    uVar10 = (uint)__s & 7;
    while( true ) {
      if (uVar10 == 0) {
        uVar10 = uVar9 | uVar9 << 8;
        uVar10 = uVar10 | uVar10 << 0x10;
        uVar11 = __n & 0xfffffff8;
        do {
          puVar7 = (uint *)((int)__s + 8);
                    /* WARNING: Load size is inaccurate */
          uVar11 = uVar11 - 8;
          uVar12 = *__s ^ uVar10;
          uVar13 = *(uint *)((int)__s + 4) ^ uVar10;
          cVar2 = -((char)uVar12 == '\0');
          cVar3 = -((char)(uVar12 >> 8) == '\0');
          cVar4 = -((char)(uVar12 >> 0x10) == '\0');
          cVar5 = -((char)(uVar12 >> 0x18) == '\0');
          uVar12 = CONCAT13(cVar5,CONCAT12(cVar4,CONCAT11(cVar3,cVar2)));
          bVar14 = (char)uVar13 != '\0';
          bVar15 = (char)(uVar13 >> 8) != '\0';
          bVar16 = (char)(uVar13 >> 0x10) != '\0';
          bVar17 = (char)(uVar13 >> 0x18) != '\0';
          uVar13 = CONCAT13(bVar17 * cVar5 - !bVar17,
                            CONCAT12(bVar16 * cVar4 - !bVar16,
                                     CONCAT11(bVar15 * cVar3 - !bVar15,bVar14 * cVar2 - !bVar14)));
          if (uVar13 != 0) {
            if (uVar12 == 0) {
              pbVar8 = (byte *)((int)__s + 5);
              uVar12 = uVar13;
            }
            else {
              pbVar8 = (byte *)((int)__s + 1);
            }
            if ((uVar12 & 1) == 0) {
              bVar14 = (uVar12 & 0x100) == 0;
              pbVar6 = pbVar8 + 1;
              if (bVar14) {
                bVar14 = (uVar12 & 0x18000) == 0;
                pbVar6 = pbVar8 + 2;
              }
              pbVar8 = pbVar6;
              if (bVar14) {
                pbVar8 = pbVar8 + 1;
              }
            }
            return pbVar8 + -1;
          }
          __s = puVar7;
        } while (uVar11 != 0);
        __n = __n & 7;
        goto joined_r0x00006070;
      }
                    /* WARNING: Load size is inaccurate */
      puVar7 = (uint *)((int)__s + 1);
      __n = __n - 1;
      if (*__s == uVar9) break;
      uVar10 = (uint)puVar7 & 7;
      __s = puVar7;
      if (__n == 0) {
        return (void *)0x0;
      }
    }
  }
  return (byte *)((int)puVar7 + -1);
}


////>>0x000060b0>>memcpy>>////

void * memcpy(void *__dest,void *__src,size_t __n)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = (undefined *)(__n + (int)__src);
  puVar3 = (undefined *)((int)__dest + -1);
  if ((undefined *)__src != puVar2) {
    do {
                    /* WARNING: Load size is inaccurate */
      puVar1 = (undefined *)((int)__src + 1);
      puVar3 = puVar3 + 1;
      *puVar3 = *__src;
      __src = puVar1;
    } while (puVar1 != puVar2);
    return __dest;
  }
  return __dest;
}


////>>0x000060cc>>_realloc_r>>////

void * _realloc_r(undefined4 param_1,void *param_2,uint param_3,undefined4 param_4)

{
  void *pvVar1;
  uint uVar2;
  
  if (param_2 != (void *)0x0) {
    if (param_3 == 0) {
      _free_r();
      pvVar1 = (void *)0x0;
    }
    else {
      uVar2 = _malloc_usable_size_r();
      pvVar1 = param_2;
      if ((uVar2 < param_3) && (pvVar1 = (void *)_malloc_r(param_1,param_3), pvVar1 != (void *)0x0))
      {
        memcpy(pvVar1,param_2,param_3);
        _free_r(param_1,param_2);
      }
    }
    return pvVar1;
  }
  pvVar1 = (void *)_malloc_r(param_1,param_3,param_3,param_4);
  return pvVar1;
}


////>>0x00006118>>_sungetc_r>>////

uint _sungetc_r(undefined4 param_1,uint param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == 0xffffffff) {
LAB_00006120:
    param_2 = 0xffffffff;
  }
  else {
    *(ushort *)(param_3 + 3) = *(ushort *)(param_3 + 3) & 0xffdf;
    uVar2 = param_3[1];
    param_2 = param_2 & 0xff;
    if (param_3[0xd] == 0) {
      uVar3 = *param_3;
      if (((param_3[4] != 0) && (param_3[4] < uVar3)) && (*(byte *)(uVar3 - 1) == param_2)) {
        *param_3 = uVar3 - 1;
        param_3[1] = uVar2 + 1;
        return param_2;
      }
      param_3[0xf] = uVar3;
      param_3[0x10] = uVar2;
      param_3[0xd] = (uint)(param_3 + 0x11);
      param_3[0xe] = 3;
      *(undefined *)((int)param_3 + 0x46) = (char)param_2;
      *param_3 = (uint)(undefined *)((int)param_3 + 0x46);
      uVar2 = 1;
    }
    else {
      if (((int)param_3[0xe] <= (int)uVar2) &&
         (iVar1 = __submore(param_1,param_3,uVar2,param_3[0xe],param_4), iVar1 != 0))
      goto LAB_00006120;
      uVar2 = *param_3;
      *param_3 = uVar2 - 1;
      *(char *)(uVar2 - 1) = (char)param_2;
      uVar2 = param_3[1] + 1;
    }
    param_3[1] = uVar2;
  }
  return param_2;
}


////>>0x00006192>>__ssrefill_r>>////

undefined4 __ssrefill_r(undefined4 param_1,undefined4 *param_2)

{
  if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
    if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
      _free_r();
    }
    param_2[1] = param_2[0x10];
    param_2[0xd] = 0;
    if (param_2[0x10] != 0) {
      *param_2 = param_2[0xf];
      return 0;
    }
  }
  *param_2 = param_2[4];
  param_2[1] = 0;
  *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x20;
  return 0xffffffff;
}


////>>0x000061cc>>__ssvfiscanf_r>>////

/* WARNING: Removing unreachable block (ram,0x00006482) */

int __ssvfiscanf_r(undefined4 param_1,byte **param_2,byte *param_3,int **param_4)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int **local_2b0;
  undefined auStack_2ac [256];
  uint local_1ac;
  undefined4 local_1a8;
  uint local_1a4;
  int local_1a0;
  int local_19c;
  undefined *local_198;
  int local_194;
  undefined4 local_30;
  code *local_2c;
  
  local_1a0 = 0;
  local_19c = 0;
  local_30 = 0x6119;
  local_2c = __ssrefill_r + 1;
  local_2b0 = param_4;
  local_198 = auStack_2ac;
LAB_000061f6:
  while( true ) {
    while( true ) {
      uVar5 = (uint)*param_3;
      if (uVar5 == 0) {
        return local_1a0;
      }
      uVar3 = (byte)(&DAT_00007a99)[uVar5] & 8;
      pbVar4 = param_3 + 1;
      if (((&DAT_00007a99)[uVar5] & 8) == 0) break;
      while (((param_3 = pbVar4, 0 < (int)param_2[1] ||
              (iVar1 = (*local_2c)(param_1,param_2), iVar1 == 0)) &&
             ((int)((uint)(byte)(&DAT_00007a99)[**param_2] << 0x1c) < 0))) {
        local_19c = local_19c + 1;
        param_2[1] = param_2[1] + -1;
        *param_2 = *param_2 + 1;
      }
    }
    if (uVar5 == 0x25) break;
LAB_00006352:
    if (((int)param_2[1] < 1) && (iVar1 = (*local_2c)(param_1,param_2), iVar1 != 0))
    goto LAB_00006380;
    if (**param_2 != uVar5) {
      return local_1a0;
    }
    *param_2 = *param_2 + 1;
    local_19c = local_19c + 1;
    param_2[1] = param_2[1] + -1;
    param_3 = pbVar4;
  }
  local_1a4 = uVar3;
  local_1ac = uVar3;
  if (param_3[1] == 0x2a) {
    pbVar4 = param_3 + 2;
    local_1ac = 0x10;
  }
  while( true ) {
    uVar3 = (uint)*pbVar4;
    if (9 < uVar3 - 0x30) break;
    pbVar4 = pbVar4 + 1;
    local_1a4 = (local_1a4 * 10 + uVar3) - 0x30;
  }
  pvVar2 = memchr(&DAT_00007c02,uVar3,3);
  if (pvVar2 != (void *)0x0) {
    local_1ac = 1 << ((int)pvVar2 - 0x7c02U & 0xff) | local_1ac;
    pbVar4 = pbVar4 + 1;
  }
  param_3 = pbVar4 + 1;
  uVar3 = (uint)*pbVar4;
  if (uVar3 < 0x79) {
    if (0x57 < uVar3) {
      switch(uVar3) {
      default:
        goto switchD_000062c0_caseD_59;
      case 0x5b:
        param_3 = (byte *)__sccl(auStack_2ac,param_3);
        local_1ac = local_1ac | 0x40;
        local_194 = 1;
        break;
      case 99:
        local_1ac = local_1ac | 0x40;
        local_194 = 0;
        break;
      case 100:
      case 0x75:
        local_1a8 = 10;
LAB_000063a0:
        if (uVar3 < 0x6f) {
          local_194 = 3;
        }
        else {
          local_194 = 4;
        }
        break;
      case 0x65:
      case 0x66:
      case 0x67:
switchD_000062c0_caseD_65:
        local_194 = 5;
        break;
      case 0x69:
        local_1a8 = 0;
        local_194 = 3;
        break;
      case 0x6e:
        if (-1 < (int)(local_1ac << 0x1b)) {
          if ((int)(local_1ac << 0x1f) < 0) {
            *(short *)*local_2b0 = (short)local_19c;
            local_2b0 = local_2b0 + 1;
          }
          else {
            **local_2b0 = local_19c;
            local_2b0 = local_2b0 + 1;
          }
        }
        goto LAB_000061f6;
      case 0x6f:
        local_1a8 = 8;
        local_194 = 4;
        break;
      case 0x70:
        local_1ac = local_1ac | 0x20;
      case 0x58:
      case 0x78:
        local_1ac = local_1ac | 0x200;
        local_1a8 = 0x10;
        goto LAB_000063a0;
      case 0x73:
        local_194 = 2;
      }
LAB_000063ac:
      if (((int)param_2[1] < 1) && (iVar1 = (*local_2c)(param_1,param_2), iVar1 != 0))
      goto LAB_00006380;
      if (-1 < (int)(local_1ac << 0x19)) {
        while ((int)((uint)(byte)(&DAT_00007a99)[**param_2] << 0x1c) < 0) {
          local_19c = local_19c + 1;
          pbVar4 = param_2[1];
          param_2[1] = pbVar4 + -1;
          if ((int)(pbVar4 + -1) < 1) {
            iVar1 = (*local_2c)(param_1,param_2);
            if (iVar1 != 0) goto LAB_00006380;
          }
          else {
            *param_2 = *param_2 + 1;
          }
        }
      }
      if (local_194 < 3) {
        iVar1 = _scanf_chars(param_1,&local_1ac,param_2,&local_2b0);
      }
      else {
        if (4 < local_194) goto LAB_000061f6;
        iVar1 = _scanf_i(param_1,&local_1ac,param_2,&local_2b0);
      }
      if (iVar1 == 1) {
        return local_1a0;
      }
      if (iVar1 == 2) {
LAB_00006380:
        if (local_1a0 == 0) {
LAB_00006388:
          local_1a0 = -1;
        }
        else if ((*(ushort *)(param_2 + 3) & 0x40) != 0) {
          local_1a0 = -1;
        }
        return local_1a0;
      }
      goto LAB_000061f6;
    }
    pbVar4 = param_3;
    if (uVar3 == 0x25) goto LAB_00006352;
    if (uVar3 < 0x26) {
      if (uVar3 != 0) goto switchD_000062c0_caseD_59;
      goto LAB_00006388;
    }
    if (uVar3 - 0x45 < 3) goto switchD_000062c0_caseD_65;
  }
switchD_000062c0_caseD_59:
  local_194 = 3;
  local_1a8 = 10;
  goto LAB_000063ac;
}


////>>0x000064bc>>_scanf_chars>>////

undefined4 _scanf_chars(undefined4 param_1,uint *param_2,byte **param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  byte **ppbVar3;
  byte *pbVar4;
  byte *unaff_r6;
  byte *pbVar5;
  int iVar6;
  
  if (param_2[2] == 0) {
    if (param_2[6] == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0xffffffff;
    }
    param_2[2] = uVar2;
  }
  if (-1 < (int)(*param_2 << 0x1b)) {
    ppbVar3 = (byte **)*param_4;
    *param_4 = ppbVar3 + 1;
    unaff_r6 = *ppbVar3;
  }
  iVar6 = 0;
  do {
    uVar2 = param_2[6];
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        if (*(char *)(param_2[5] + (uint)**param_3) == '\0') {
          if (iVar6 == 0) {
            return 1;
          }
LAB_0000654a:
          if (((*param_2 & 0x10) == 0) && (param_2[3] = param_2[3] + 1, param_2[6] != 0)) {
            *unaff_r6 = 0;
          }
          param_2[4] = iVar6 + param_2[4];
          return 0;
        }
      }
      else if ((uVar2 != 2) || ((int)((uint)(byte)(&DAT_00007a99)[**param_3] << 0x1c) < 0))
      goto LAB_0000654a;
    }
    pbVar5 = unaff_r6;
    if (-1 < (int)(*param_2 << 0x1b)) {
      pbVar5 = unaff_r6 + 1;
      *unaff_r6 = **param_3;
    }
    pbVar4 = param_3[1];
    *param_3 = *param_3 + 1;
    uVar2 = param_2[2] - 1;
    param_3[1] = pbVar4 + -1;
    iVar6 = iVar6 + 1;
    param_2[2] = uVar2;
    unaff_r6 = pbVar5;
    if ((uVar2 == 0) ||
       (((int)(pbVar4 + -1) < 1 &&
        (iVar1 = (*(code *)param_2[0x60])(param_1,param_3,uVar2,(code *)param_2[0x60],param_4),
        iVar1 != 0)))) goto LAB_0000654a;
  } while( true );
}


////>>0x0000656c>>_scanf_i>>////

undefined4 _scanf_i(undefined4 param_1,uint *param_2,byte **param_3,undefined4 *param_4)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int unaff_r9;
  int iVar12;
  undefined *local_34 [4];
  
  local_34[0] = &DAT_00007c2f;
  local_34[1] = &DAT_00007c32;
  local_34[2] = &DAT_00007c35;
  pcVar1 = _strtol_r;
  if (param_2[6] != 3) {
    pcVar1 = _strtoul_r;
  }
  uVar7 = param_2[2];
  uVar5 = uVar7 - 1;
  if (0x15c < uVar5) {
    unaff_r9 = uVar7 - 0x15d;
    uVar7 = 0x15d;
  }
  if (0x15c < uVar5) {
    param_2[2] = uVar7;
  }
  puVar11 = param_2 + 7;
  if (uVar5 < 0x15d) {
    unaff_r9 = 0;
  }
  *param_2 = *param_2 | 0xd00;
  iVar12 = 0;
  puVar10 = puVar11;
  do {
    pvVar2 = memchr(local_34[iVar12],(uint)**param_3,2);
    if (pvVar2 != (void *)0x0) {
      if (iVar12 == 1) {
        if (param_2[1] == 0) {
          param_2[1] = 8;
          *param_2 = *param_2 | 0x200;
        }
        uVar5 = *param_2 & 0xfffffaff;
LAB_000065f4:
        *param_2 = uVar5;
      }
      else if (iVar12 == 2) {
        if ((*param_2 & 0x600) != 0x200) goto LAB_00006624;
        param_2[1] = 0x10;
        uVar5 = *param_2 | 0x100;
        goto LAB_000065f4;
      }
      uVar5 = param_2[2];
      param_2[2] = uVar5 - 1;
      if (uVar5 != 0) {
        pbVar6 = *param_3;
        *param_3 = pbVar6 + 1;
        puVar9 = (uint *)((int)puVar10 + 1);
        *(byte *)puVar10 = *pbVar6;
        pbVar6 = param_3[1];
        param_3[1] = pbVar6 + -1;
        puVar10 = puVar9;
        if (((int)(pbVar6 + -1) < 1) &&
           (iVar3 = (*(code *)param_2[0x60])(param_1,param_3), iVar3 != 0)) {
          iVar12 = 0;
          goto LAB_000066ca;
        }
      }
    }
LAB_00006624:
    iVar12 = iVar12 + 1;
  } while (iVar12 != 3);
  if (param_2[1] == 0) {
    param_2[1] = 10;
  }
  __sccl(param_2[5],"01234567]" + (8 - param_2[1]));
  iVar12 = 0;
  while( true ) {
    puVar9 = puVar10;
    if (param_2[2] == 0) break;
    pbVar6 = *param_3;
    uVar5 = (uint)*pbVar6;
    if (*(char *)(param_2[5] + uVar5) == '\0') break;
    if ((uVar5 == 0x30) && ((int)(*param_2 << 0x14) < 0)) {
      iVar12 = iVar12 + 1;
      if (unaff_r9 != 0) {
        unaff_r9 = unaff_r9 + -1;
        param_2[2] = param_2[2] + 1;
      }
    }
    else {
      *param_2 = *param_2 & 0xfffff6ff;
      puVar9 = (uint *)((int)puVar10 + 1);
      *(byte *)puVar10 = *pbVar6;
    }
    pbVar6 = param_3[1];
    param_3[1] = pbVar6 + -1;
    if ((int)(pbVar6 + -1) < 1) {
      iVar3 = (*(code *)param_2[0x60])(param_1,param_3);
      if (iVar3 != 0) break;
    }
    else {
      *param_3 = *param_3 + 1;
    }
    param_2[2] = param_2[2] - 1;
    puVar10 = puVar9;
  }
LAB_000066ca:
  if ((int)(*param_2 << 0x17) < 0) {
    if (puVar11 < puVar9) {
      (*(code *)param_2[0x5f])(param_1,*(byte *)((int)puVar9 + -1),param_3);
      puVar9 = (uint *)((int)puVar9 + -1);
    }
    if (puVar9 == puVar11) {
      return 1;
    }
  }
  if ((*param_2 & 0x10) == 0) {
    *(byte *)puVar9 = 0;
    uVar4 = (*(pcVar1 + 1))(param_1,puVar11,0,param_2[1]);
    puVar8 = (undefined4 *)*param_4;
    uVar5 = *param_2;
    *param_4 = puVar8 + 1;
    puVar8 = (undefined4 *)*puVar8;
    if ((uVar5 & 0x20) == 0) {
      if ((int)(uVar5 << 0x1f) < 0) {
        *(short *)puVar8 = (short)uVar4;
      }
      else {
        *puVar8 = uVar4;
      }
    }
    else {
      *puVar8 = uVar4;
    }
    param_2[3] = param_2[3] + 1;
  }
  param_2[4] = (uint)((int)puVar9 + param_2[4] + (iVar12 - (int)puVar11));
  return 0;
}


////>>0x00006754>>lflush>>////

int lflush(FILE *param_1)

{
  int iVar1;
  
  if ((*(ushort *)&param_1->_IO_read_base & 9) == 9) {
    iVar1 = fflush(param_1);
    return iVar1;
  }
  return 0;
}


////>>0x00006768>>__srefill_r>>////

undefined4
__srefill_r(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  
  if ((param_1 != (undefined4 *)0x0) && (param_1[6] == 0)) {
    __sinit();
  }
  if (param_2 == &__sf_fake_stdin) {
    param_2 = (undefined4 *)param_1[1];
  }
  else if (param_2 == (undefined4 *)&__sf_fake_stdout) {
    param_2 = (undefined4 *)param_1[2];
  }
  else if (param_2 == (undefined4 *)&__sf_fake_stderr) {
    param_2 = (undefined4 *)param_1[3];
  }
  uVar4 = *(ushort *)(param_2 + 3);
  param_2[1] = 0;
  uVar5 = (uint)*(ushort *)(param_2 + 3);
  if ((int)(uVar5 << 0x1a) < 0) {
    return 0xffffffff;
  }
  if ((int)(uVar5 << 0x1d) < 0) {
    if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
      if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
        _free_r(param_1);
      }
      param_2[1] = param_2[0x10];
      param_2[0xd] = 0;
      if (param_2[0x10] != 0) {
        *param_2 = param_2[0xf];
        return 0;
      }
    }
  }
  else {
    if (-1 < (int)(uVar5 << 0x1b)) {
      *param_1 = 9;
      uVar4 = uVar4 | 0x40;
      goto LAB_000067b8;
    }
    if ((int)(uVar5 << 0x1c) < 0) {
      iVar2 = _fflush_r(param_1,param_2,uVar5 << 0x1c,uVar5,param_4);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      param_2[2] = 0;
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfff7;
      param_2[6] = 0;
    }
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 4;
  }
  if (param_2[4] == 0) {
    __smakebuf_r(param_1,param_2);
  }
  uVar4 = *(ushort *)(param_2 + 3);
  uVar1 = *(undefined2 *)(param_2 + 3);
  if ((uVar4 & 3) != 0) {
    *(undefined2 *)(param_2 + 3) = 1;
    _fwalk(&impure_data,0x6755);
    *(undefined2 *)(param_2 + 3) = uVar1;
    if ((uVar4 & 9) == 9) {
      __sflush_r(param_1,param_2);
    }
  }
  uVar3 = param_2[4];
  *param_2 = uVar3;
  iVar2 = (*(code *)param_2[9])(param_1,param_2[8],uVar3,param_2[5]);
  param_2[1] = iVar2;
  if (0 < iVar2) {
    return 0;
  }
  uVar4 = *(ushort *)(param_2 + 3);
  if (iVar2 != 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = uVar4 | 0x20;
  }
  if (iVar2 != 0) {
    param_2[1] = uVar3;
    uVar4 = uVar4 | 0x40;
  }
LAB_000067b8:
  *(ushort *)(param_2 + 3) = uVar4;
  return 0xffffffff;
}


////>>0x0000687c>>__sccl>>////

byte * __sccl(int param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar4 = (uint)*param_2;
  bVar7 = uVar4 == 0x5e;
  if (bVar7) {
    uVar4 = (uint)param_2[1];
    param_2 = param_2 + 2;
  }
  else {
    param_2 = param_2 + 1;
  }
  iVar3 = param_1 + -1;
  do {
    iVar3 = iVar3 + 1;
    *(bool *)iVar3 = bVar7;
  } while (iVar3 != param_1 + 0xff);
  if (uVar4 == 0) {
    pbVar1 = param_2 + -1;
  }
  else {
LAB_000068aa:
    do {
      uVar5 = uVar4;
      *(bool *)(param_1 + uVar5) = !bVar7;
      param_2 = param_2 + 1;
      while( true ) {
        uVar4 = (uint)param_2[-1];
        if (uVar4 != 0x2d) break;
        uVar6 = (uint)*param_2;
        if ((uVar6 == 0x5d) || (uVar2 = uVar5, (int)uVar6 < (int)uVar5)) goto LAB_000068aa;
        do {
          uVar2 = uVar2 + 1;
          *(bool *)(param_1 + uVar2) = !bVar7;
        } while ((int)uVar2 < (int)uVar6);
        iVar3 = ~uVar5 + uVar6;
        if ((int)uVar6 <= (int)uVar5) {
          iVar3 = 0;
        }
        uVar5 = uVar5 + 1 + iVar3;
        param_2 = param_2 + 2;
      }
      pbVar1 = param_2;
    } while ((uVar4 != 0x5d) && (pbVar1 = param_2 + -1, uVar4 != 0));
  }
  return pbVar1;
}


////>>0x000068f0>>__submore>>////

undefined4 __submore(undefined4 param_1,void **param_2)

{
  void *pvVar1;
  void *__n;
  
  if ((void **)param_2[0xd] == param_2 + 0x11) {
    pvVar1 = (void *)_malloc_r(param_1,0x400);
    if (pvVar1 != (void *)0x0) {
      param_2[0xe] = flash_configuration_field;
      param_2[0xd] = pvVar1;
      *(undefined *)((int)pvVar1 + 0x3ff) = *(undefined *)((int)param_2 + 0x46);
      *(undefined *)((int)pvVar1 + 0x3fe) = *(undefined *)((int)param_2 + 0x45);
      *(undefined *)((int)pvVar1 + 0x3fd) = *(undefined *)(param_2 + 0x11);
      *param_2 = (void *)((int)pvVar1 + 0x3fd);
      return 0;
    }
  }
  else {
    __n = param_2[0xe];
    pvVar1 = (void *)_realloc_r(param_1,param_2[0xd],(void *)((int)__n << 1));
    if (pvVar1 != (void *)0x0) {
      memcpy((void *)((int)pvVar1 + (int)__n),pvVar1,(size_t)__n);
      param_2[0xd] = pvVar1;
      param_2[0xe] = (void *)((int)__n << 1);
      *param_2 = (void *)((int)pvVar1 + (int)__n);
      return 0;
    }
  }
  return 0xffffffff;
}


////>>0x00006964>>_malloc_usable_size_r>>////

int _malloc_usable_size_r(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + -4) + -4;
  if (*(int *)(param_2 + -4) < 0) {
    iVar1 = iVar1 + *(int *)(param_2 + iVar1);
  }
  return iVar1;
}


////>>0x00006974>>__aeabi_ldivmod>>////

int __aeabi_ldivmod(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined local_8 [8];
  
  if ((param_4 == 0) && (param_3 == 0)) {
    if (param_2 < 0) {
      param_1 = 0;
      param_2 = -0x80000000;
    }
    else if (param_2 != 0 || param_1 != 0) {
      param_2 = 0x7fffffff;
      param_1 = -1;
    }
    iVar1 = __aeabi_idiv0(param_1,param_2);
    return iVar1;
  }
  if (param_2 < 0) {
    iVar1 = -param_2 - (uint)(param_1 != 0);
    if (param_4 < 0) {
      iVar1 = __udivmoddi4(-param_1,iVar1,-param_3,-param_4 - (uint)(param_3 != 0),local_8);
      return iVar1;
    }
    iVar1 = __udivmoddi4(-param_1,iVar1,param_3,param_4,local_8);
    return -iVar1;
  }
  if (param_4 < 0) {
    iVar1 = __udivmoddi4(param_1,param_2,-param_3,-param_4 - (uint)(param_3 != 0),local_8);
    return -iVar1;
  }
  iVar1 = __udivmoddi4();
  return iVar1;
}


////>>0x00006a14>>__udivmoddi4>>////

/* WARNING: Removing unreachable block (ram,0x00006ca0) */

ulonglong __udivmoddi4(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  ulonglong uVar11;
  
  if (param_4 == 0) {
    if (param_2 < param_3) {
      iVar2 = LZCOUNT(param_3);
      uVar5 = param_3;
      if (iVar2 != 0) {
        uVar5 = param_3 << iVar2;
        param_2 = param_1 >> (0x20U - iVar2 & 0xff) | param_2 << iVar2;
        param_1 = param_1 << iVar2;
      }
      uVar6 = uVar5 >> 0x10;
      uVar8 = param_2 / uVar6;
      uVar3 = param_1 >> 0x10 | (param_2 - uVar6 * uVar8) * 0x10000;
      uVar1 = uVar8 * (uVar5 & 0xffff);
      uVar4 = uVar8;
      if (uVar3 <= uVar1 && uVar1 - uVar3 != 0) {
        bVar10 = CARRY4(uVar5,uVar3);
        uVar3 = uVar5 + uVar3;
        uVar4 = uVar8 - 1;
        if ((bVar10 == false) && (uVar3 <= uVar1 && uVar1 - uVar3 != 0)) {
          uVar4 = uVar8 - 2;
          uVar3 = uVar3 + uVar5;
        }
      }
      uVar8 = (uVar3 - uVar1) / uVar6;
      uVar6 = param_1 & 0xffff | ((uVar3 - uVar1) - uVar6 * uVar8) * 0x10000;
      uVar3 = uVar8 * (uVar5 & 0xffff);
      uVar1 = uVar8;
      if (uVar6 <= uVar3 && uVar3 - uVar6 != 0) {
        bVar10 = CARRY4(uVar5,uVar6);
        uVar6 = uVar5 + uVar6;
        uVar1 = uVar8 - 1;
        if ((bVar10 == false) && (uVar6 <= uVar3 && uVar3 - uVar6 != 0)) {
          uVar1 = uVar8 - 2;
          uVar6 = uVar6 + uVar5;
        }
      }
      uVar6 = uVar6 - uVar3;
      uVar1 = uVar1 | uVar4 << 0x10;
      uVar5 = 0;
    }
    else {
      if (param_3 == 0) {
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE = (code *)software_udf(0xff,0x6abc);
        uVar11 = (*UNRECOVERED_JUMPTABLE)();
        return uVar11;
      }
      iVar2 = LZCOUNT(param_3);
      if (iVar2 == 0) {
        param_2 = param_2 - param_3;
        uVar9 = param_3 >> 0x10;
        uVar7 = param_3 & 0xffff;
        uVar5 = 1;
        uVar4 = param_3;
      }
      else {
        uVar4 = param_3 << iVar2;
        uVar9 = uVar4 >> 0x10;
        uVar1 = param_2 >> (0x20U - iVar2 & 0xff);
        uVar5 = param_1 >> (0x20U - iVar2 & 0xff) | param_2 << iVar2;
        uVar3 = uVar1 / uVar9;
        uVar7 = uVar4 & 0xffff;
        uVar8 = uVar5 >> 0x10 | (uVar1 - uVar9 * uVar3) * 0x10000;
        uVar6 = uVar3 * uVar7;
        param_1 = param_1 << iVar2;
        uVar1 = uVar3;
        if (uVar8 <= uVar6 && uVar6 - uVar8 != 0) {
          bVar10 = CARRY4(uVar4,uVar8);
          uVar8 = uVar4 + uVar8;
          uVar1 = uVar3 - 1;
          if ((bVar10 == false) && (uVar8 <= uVar6 && uVar6 - uVar8 != 0)) {
            uVar1 = uVar3 - 2;
            uVar8 = uVar8 + uVar4;
          }
        }
        uVar3 = (uVar8 - uVar6) / uVar9;
        param_2 = uVar5 & 0xffff | ((uVar8 - uVar6) - uVar9 * uVar3) * 0x10000;
        uVar6 = uVar3 * uVar7;
        uVar5 = uVar3;
        if (param_2 <= uVar6 && uVar6 - param_2 != 0) {
          bVar10 = CARRY4(uVar4,param_2);
          param_2 = uVar4 + param_2;
          uVar5 = uVar3 - 1;
          if ((bVar10 == false) && (param_2 <= uVar6 && uVar6 - param_2 != 0)) {
            uVar5 = uVar3 - 2;
            param_2 = param_2 + uVar4;
          }
        }
        param_2 = param_2 - uVar6;
        uVar5 = uVar5 | uVar1 << 0x10;
      }
      uVar8 = param_2 / uVar9;
      uVar6 = param_1 >> 0x10 | (param_2 - uVar9 * uVar8) * 0x10000;
      uVar1 = uVar7 * uVar8;
      uVar3 = uVar8;
      if (uVar6 <= uVar1 && uVar1 - uVar6 != 0) {
        bVar10 = CARRY4(uVar4,uVar6);
        uVar6 = uVar4 + uVar6;
        uVar3 = uVar8 - 1;
        if ((bVar10 == false) && (uVar6 <= uVar1 && uVar1 - uVar6 != 0)) {
          uVar3 = uVar8 - 2;
          uVar6 = uVar6 + uVar4;
        }
      }
      uVar8 = (uVar6 - uVar1) / uVar9;
      uVar6 = param_1 & 0xffff | ((uVar6 - uVar1) - uVar9 * uVar8) * 0x10000;
      uVar7 = uVar7 * uVar8;
      uVar1 = uVar8;
      if (uVar6 <= uVar7 && uVar7 - uVar6 != 0) {
        bVar10 = CARRY4(uVar4,uVar6);
        uVar6 = uVar4 + uVar6;
        uVar1 = uVar8 - 1;
        if ((bVar10 == false) && (uVar6 <= uVar7 && uVar7 - uVar6 != 0)) {
          uVar1 = uVar8 - 2;
          uVar6 = uVar6 + uVar4;
        }
      }
      uVar6 = uVar6 - uVar7;
      uVar1 = uVar1 | uVar3 << 0x10;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar6 >> LZCOUNT(param_3);
      param_5[1] = 0;
    }
  }
  else if (param_2 < param_4) {
    if (param_5 != (uint *)0x0) {
      *param_5 = param_1;
      param_5[1] = param_2;
      return 0;
    }
    uVar1 = 0;
    uVar5 = 0;
  }
  else {
    iVar2 = LZCOUNT(param_4);
    if (iVar2 != 0) {
      uVar7 = 0x20 - iVar2;
      uVar3 = param_3 >> (uVar7 & 0xff) | param_4 << iVar2;
      uVar9 = uVar3 >> 0x10;
      uVar1 = param_2 >> (uVar7 & 0xff);
      uVar5 = param_1 >> (uVar7 & 0xff) | param_2 << iVar2;
      uVar6 = uVar1 / uVar9;
      uVar4 = uVar5 >> 0x10 | (uVar1 - uVar9 * uVar6) * 0x10000;
      uVar8 = uVar6 * (uVar3 & 0xffff);
      param_1 = param_1 << iVar2;
      uVar1 = uVar6;
      if (uVar4 <= uVar8 && uVar8 - uVar4 != 0) {
        bVar10 = CARRY4(uVar3,uVar4);
        uVar4 = uVar3 + uVar4;
        uVar1 = uVar6 - 1;
        if ((bVar10 == false) && (uVar4 <= uVar8 && uVar8 - uVar4 != 0)) {
          uVar1 = uVar6 - 2;
          uVar4 = uVar4 + uVar3;
        }
      }
      uVar6 = (uVar4 - uVar8) / uVar9;
      uVar4 = uVar5 & 0xffff | ((uVar4 - uVar8) - uVar9 * uVar6) * 0x10000;
      uVar8 = uVar6 * (uVar3 & 0xffff);
      uVar5 = uVar6;
      if (uVar4 <= uVar8 && uVar8 - uVar4 != 0) {
        bVar10 = CARRY4(uVar3,uVar4);
        uVar4 = uVar3 + uVar4;
        uVar5 = uVar6 - 1;
        if ((bVar10 == false) && (uVar4 <= uVar8 && uVar8 - uVar4 != 0)) {
          uVar5 = uVar6 - 2;
          uVar4 = uVar4 + uVar3;
        }
      }
      uVar5 = uVar5 | uVar1 << 0x10;
      uVar11 = (ulonglong)uVar5 * (ulonglong)(param_3 << iVar2);
      if (CONCAT44(uVar4 - uVar8,param_1) < uVar11) {
        uVar11 = uVar11 - CONCAT44(uVar3,param_3 << iVar2);
        uVar5 = uVar5 - 1;
      }
      if (param_5 != (uint *)0x0) {
        uVar1 = ((uVar4 - uVar8) - (int)(uVar11 >> 0x20)) - (uint)(param_1 < (uint)uVar11);
        *param_5 = uVar1 << (uVar7 & 0xff) | param_1 - (uint)uVar11 >> iVar2;
        param_5[1] = uVar1 >> iVar2;
      }
      return (ulonglong)uVar5;
    }
    if ((param_4 < param_2) || (param_3 <= param_1)) {
      bVar10 = param_1 < param_3;
      param_1 = param_1 - param_3;
      param_2 = (param_2 - param_4) - (uint)bVar10;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    uVar5 = 0;
    if (param_5 != (uint *)0x0) {
      *param_5 = param_1;
      param_5[1] = param_2;
    }
  }
  return CONCAT44(uVar5,uVar1);
}


////>>0x00006cd4>>__aeabi_idiv0>>////

void __aeabi_idiv0(void)

{
  return;
}

