
////>>0x00103000>>_DT_INIT>>////

void _DT_INIT(void)

{
  __gmon_start__();
  return;
}


////>>0x00103020>>FUN_00103020>>////

void FUN_00103020(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x0)();
  return;
}


////>>0x00103030>>__errno_location>>////



int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return piVar1;
}


////>>0x00103040>>printf>>////



int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}


////>>0x00103050>>sprintf>>////



int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}


////>>0x00103060>>gettext>>////

void gettext(void)

{
  gettext();
  return;
}


////>>0x00103070>>free>>////



void free(void *__ptr)

{
  free(__ptr);
  return;
}


////>>0x00103080>>print_version_info>>////



void Application::print_version_info(void)

{
  print_version_info();
  return;
}


////>>0x00103090>>Application>>////

void __thiscall Application::Application(Application *this,int param_1,char **param_2,char *param_3)

{
  Application(this,param_1,param_2,param_3);
  return;
}


////>>0x001030a0>>strerror>>////



char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = strerror(__errnum);
  return pcVar1;
}


////>>0x001030b0>>strlen>>////



size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}


////>>0x001030c0>>memcmp>>////



int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}


////>>0x001030d0>>strncmp>>////



int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1;
}


////>>0x001030e0>>memcpy>>////



void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}


////>>0x001030f0>>execv>>////



int execv(char *__path,char **__argv)

{
  int iVar1;
  
  iVar1 = execv(__path,__argv);
  return iVar1;
}


////>>0x00103100>>strcpy>>////



char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}


////>>0x00103110>>dbe_sprintf>>////

void dbe_sprintf(void)

{
  dbe_sprintf();
  return;
}


////>>0x00103120>>operator.new>>////



void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


////>>0x00103130>>operator.delete>>////



void operator_delete(void *param_1,ulong param_2)

{
  operator_delete(param_1,param_2);
  return;
}


////>>0x00103140>>strrchr>>////



char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strrchr(__s,__c);
  return pcVar1;
}


////>>0x00103150>>malloc>>////



void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}


////>>0x00103160>>exit>>////



void exit(int __status)

{
                    
  exit(__status);
}


////>>0x00103170>>putchar>>////



int putchar(int __c)

{
  int iVar1;
  
  iVar1 = putchar(__c);
  return iVar1;
}


////>>0x00103180>>strcmp>>////



int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}


////>>0x00103190>>fprintf>>////



int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = fprintf(__stream,__format);
  return iVar1;
}


////>>0x001031a0>>puts>>////



int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}


////>>0x001031b0>>snprintf>>////



int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}


////>>0x001031c0>>memmove>>////



void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}


////>>0x001031d0>>realloc>>////



void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}


////>>0x001031e0>>_Unwind_Resume>>////

void _Unwind_Resume(void)

{
                    
  _Unwind_Resume();
}


////>>0x001031f0>>sbrk>>////



void * sbrk(intptr_t __delta)

{
  void *pvVar1;
  
  pvVar1 = sbrk(__delta);
  return pvVar1;
}


////>>0x00103200>>~Application>>////

void __thiscall Application::~Application(Application *this)

{
  ~Application(this);
  return;
}


////>>0x00103210>>__cxa_finalize>>////

void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}


////>>0x00103220>>FUN_00103220>>////

char * FUN_00103220(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = strrchr(param_1,0x2f);
  if (pcVar1 != (char *)0x0) {
    param_1 = pcVar1 + 1;
  }
  return param_1;
}


////>>0x0010323c>>FUN_0010323c>>////

void FUN_0010323c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00123d58;
  Application::~Application((Application *)param_1);
  return;
}


////>>0x0010324c>>FUN_0010324c>>////

void FUN_0010324c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00123d58;
  Application::~Application((Application *)param_1);
  operator_delete(param_1,0x68);
  return;
}


////>>0x0010326d>>FUN_0010326d>>////

void FUN_0010326d(void)

{
  do {
    invalidInstructionException();
  } while( true );
}


////>>0x00103280>>entry>>////

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  __libc_start_main(FUN_00103370,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x001032b0>>FUN_001032b0>>////

/* WARNING: Removing unreachable block (ram,0x001032c3) */
/* WARNING: Removing unreachable block (ram,0x001032cf) */

void FUN_001032b0(void)

{
  return;
}


////>>0x001032e0>>FUN_001032e0>>////

/* WARNING: Removing unreachable block (ram,0x00103304) */
/* WARNING: Removing unreachable block (ram,0x00103310) */

void FUN_001032e0(void)

{
  return;
}


////>>0x00103320>>_FINI_0>>////

void _FINI_0(void)

{
  if (DAT_00124108 != '\0') {
    return;
  }
  __cxa_finalize(PTR_LOOP_001240f8);
  FUN_001032b0();
  DAT_00124108 = 1;
  return;
}


////>>0x00103360>>_INIT_0>>////

void _INIT_0(void)

{
  FUN_001032e0();
  return;
}


////>>0x00103370>>FUN_00103370>>////



undefined8 FUN_00103370(int param_1,char **param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long *this;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  char **__argv;
  long lVar8;
  int *piVar9;
  undefined **ppuVar10;
  size_t __n;
  ulong uVar11;
  int iVar12;
  bool bVar13;
  
  this = (long *)operator_new(0x68);
                    /* try { // try from 0010339a to 0010339e has its CatchHandler @ 00103424 */
  Application::Application((Application *)this,param_1,param_2,(char *)0x0);
  *(int *)((long)this + 0x5c) = param_1;
  *this = (long)&PTR_FUN_00123d58;
  this[0xc] = (long)param_2;
  if (param_1 == 1) {
LAB_001033f3:
    FUN_001037d0();
                    
    exit(0);
  }
  param_2 = param_2 + 1;
  iVar12 = 1;
  while( true ) {
    if (param_1 <= iVar12) {
      uVar7 = FUN_00103220(this[4]);
      pcVar5 = (char *)gettext("%s: error: expected argument after options\n");
      fprintf(_stderr,pcVar5,uVar7);
      (**(code **)(*this + 8))(this);
      return 0;
    }
    pcVar5 = *param_2;
    if (*pcVar5 != '-') break;
    iVar2 = strcmp(pcVar5,"--help");
    if (iVar2 == 0) goto LAB_001033f3;
    iVar2 = strcmp(pcVar5,"--version");
    if (iVar2 == 0) {
LAB_00103415:
      Application::print_version_info();
                    
      exit(0);
    }
    iVar2 = strcmp(pcVar5,"-v");
    if (iVar2 == 0) goto LAB_00103415;
    param_2 = param_2 + 1;
    iVar2 = strcmp(pcVar5,"--verbose");
    if (iVar2 != 0) {
      iVar12 = strcmp(pcVar5,"--check");
      pcVar4 = (char *)FUN_00103220(this[4]);
      if (iVar12 == 0) {
        pcVar5 = (char *)gettext("%s: error: --check is not implemented yet\n");
        fprintf(_stderr,pcVar5,pcVar4);
                    
        exit(1);
      }
      pcVar6 = (char *)gettext("%s: error: unknown option %s\n");
      goto LAB_001035be;
    }
    _DAT_0012410c = 1;
    iVar12 = iVar12 + 1;
  }
  param_1 = param_1 - iVar12;
  pcVar4 = "";
  if (param_1 != 1) {
    pcVar4 = param_2[1];
  }
  iVar2 = 0;
  iVar12 = -1;
  for (ppuVar10 = &PTR_s_archive_00123c60; *ppuVar10 != (char *)0x0; ppuVar10 = ppuVar10 + 3) {
    iVar3 = strcmp(pcVar5,*ppuVar10);
    if (iVar3 == 0) {
      if (ppuVar10[1] != (char *)0x0) {
        iVar3 = strcmp(pcVar4,ppuVar10[1]);
        if (iVar3 != 0) {
          if (iVar12 == -1) {
            iVar12 = iVar2;
          }
          goto LAB_00103506;
        }
        param_1 = param_1 + -1;
        param_2 = param_2 + 1;
      }
      puVar1 = (&PTR_s_gp_archive_00123c70)[(long)iVar2 * 3];
      __argv = (char **)malloc((long)(param_1 + 3) << 3);
      lVar8 = this[4];
      iVar12 = FUN_00103220(lVar8);
      pcVar4 = (char *)dbe_sprintf("%.*s%s",iVar12 - (int)lVar8,lVar8,puVar1);
      lVar8 = (&DAT_00123c68)[(long)iVar2 * 3];
      *__argv = pcVar4;
      if (lVar8 == 0) {
        pcVar5 = (char *)dbe_sprintf("--whoami=%s %s",this[5],pcVar5);
      }
      else {
        pcVar5 = (char *)dbe_sprintf("--whoami=%s %s %s",this[5],pcVar5);
      }
      __argv[1] = pcVar5;
      __n = (ulong)(param_1 - 1) * 8;
      if (param_1 < 1) {
        __n = 0;
      }
      memcpy(__argv + 2,param_2 + 1,__n);
      lVar8 = (ulong)(param_1 - 1) * 8 + 0x10;
      if (param_1 < 1) {
        lVar8 = 0x10;
      }
      bVar13 = _DAT_0012410c != 0;
      *(undefined8 *)((long)__argv + lVar8) = 0;
      if (bVar13) {
        puts("gprofng::exec");
        uVar11 = 0;
        while( true ) {
          if (__argv[uVar11] == (char *)0x0) break;
          printf("%5d: %s\n",uVar11 & 0xffffffff);
          uVar11 = uVar11 + 1;
        }
        putchar(10);
      }
      execv(*__argv,__argv);
      piVar9 = __errno_location();
      pcVar5 = strerror(*piVar9);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = "NULL";
      }
      pcVar4 = *__argv;
      pcVar6 = (char *)gettext("%s failed: %s\n");
LAB_001035be:
      fprintf(_stderr,pcVar6,pcVar4,pcVar5);
      goto LAB_001035cf;
    }
LAB_00103506:
    iVar2 = iVar2 + 1;
  }
  uVar7 = FUN_00103220(this[4]);
  if (iVar12 == -1) {
    pcVar4 = "%s: error: keyword \'%s\' is not supported\n";
  }
  else {
    if (*pcVar4 != '\0') {
      pcVar6 = (char *)gettext("%s %s: error: qualifier \'%s\' is not supported\n");
      fprintf(_stderr,pcVar6,uVar7,pcVar5,pcVar4);
      goto LAB_001035cf;
    }
    pcVar4 = "%s %s: error: no qualifier\n";
  }
  pcVar4 = (char *)gettext(pcVar4);
  fprintf(_stderr,pcVar4,uVar7,pcVar5);
LAB_001035cf:
                    
  exit(1);
}


////>>0x001037d0>>FUN_001037d0>>////

void FUN_001037d0(long param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  pcVar2 = (char *)gettext("Usage: %s [OPTION(S)] COMMAND [KEYWORD] [ARGUMENTS]\n");
  printf(pcVar2,uVar1);
  pcVar2 = (char *)gettext(
                          "\nThis is the driver for the GPROFNG tools suite to gather and analyze performance data.\n\nOptions:\n\n --version           print the version number and exit.\n --help              print usage information and exit.\n --check             verify if the hardware and software environment is supported.\n --verbose {on|off}  enable (on) or disable (off) verbose mode; the default is \"off\".\n\nCommands:\n\nThe driver supports various commands. These are listed below.\n\nIt is also possible to invoke the lower level commands directly, but since these \nare subject to change, in particular the options, we recommend to use the driver.\n\nThe man pages for the commands below can be viewed using the command name with\n\"gprofng\" replaced by \"gp\" and the spaces replaced by a dash (\"-\"). For\nexample the man page name for \"gprofng collect app\" is \"gp-collect-app\".\n\nThe following combination of commands and keywords are supported:\n\nCollect performance data\n\n gprofng collect app     collect application performance data.\n\nDisplay the performance results\n\n gprofng display text    display the performance data in ASCII format.\n gprofng display html    generate an HTML file from one or more experiments.\n gprofng display src     display source or disassembly with compiler annotations.\n\nMiscellaneous commands\n\n gprofng archive         include binaries and source code in an experiment directory.\n\nEnvironment:\n\nThe following environment variables are supported:\n\n GPROFNG_MAX_CALL_STACK_DEPTH  set the depth of the call stack (default is 256).\n\n GPROFNG_USE_JAVA_OPTIONS      may be set when profiling a C/C++ application\n                               that uses dlopen() to execute Java code.\n\n GPROFNG_SSH_REMOTE_DISPLAY    use this variable to define the ssh command\n                               executed by the remote display tool.\n\n GPROFNG_SKIP_VALIDATION       set this variable to disable checking hardware,\n                               system, and Java versions.\n\n GPROFNG_ALLOW_CORE_DUMP       set this variable to allow a core file to be\n                ..." /* TRUNCATED STRING LITERAL */
                          );
  printf(pcVar2);
  return;
}


////>>0x00103810>>FUN_00103810>>////

int FUN_00103810(long param_1)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar2 = *(char **)(param_1 + 0x18);
  cVar1 = *pcVar2;
  if (cVar1 == 'n') {
    pcVar5 = pcVar2 + 1;
    *(char **)(param_1 + 0x18) = pcVar5;
    cVar1 = pcVar2[1];
    if (9 < (byte)(cVar1 - 0x30U)) {
      return 0;
    }
    bVar3 = true;
  }
  else {
    if (9 < (byte)(cVar1 - 0x30U)) {
      return 0;
    }
    bVar3 = false;
    pcVar5 = pcVar2;
  }
  iVar6 = 0;
  iVar4 = (int)(char)(cVar1 + -0x30);
  do {
    pcVar5 = pcVar5 + 1;
    *(char **)(param_1 + 0x18) = pcVar5;
    iVar6 = iVar4 + iVar6 * 10;
    if (9 < (byte)(*pcVar5 - 0x30U)) {
      if (bVar3) {
        iVar6 = -iVar6;
      }
      return iVar6;
    }
    iVar4 = (int)(char)(*pcVar5 - 0x30U);
  } while (iVar6 <= (int)((0x7fffffffU - iVar4) / 10));
  return -1;
}


////>>0x001038c0>>FUN_001038c0>>////

undefined8 FUN_001038c0(long param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 == 0) {
    pcVar1 = *(char **)(param_1 + 0x18);
    if (*pcVar1 == '\0') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = pcVar1 + 1;
    param_2 = (int)*pcVar1;
  }
  if (param_2 != 0x68) {
    if (param_2 != 0x76) {
      return 0;
    }
    FUN_00103810();
    if (**(char **)(param_1 + 0x18) != '_') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  FUN_00103810();
  if (**(char **)(param_1 + 0x18) != '_') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  return 1;
}


////>>0x00103920>>FUN_00103920>>////

undefined4 * FUN_00103920(long param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  
  pcVar1 = *(char **)(param_1 + 0x18);
  if (*pcVar1 == 'T') {
    *(char **)(param_1 + 0x18) = pcVar1 + 1;
    if (pcVar1[1] == '_') {
      iVar2 = *(int *)(param_1 + 0x28);
      *(char **)(param_1 + 0x18) = pcVar1 + 2;
      if (iVar2 < *(int *)(param_1 + 0x2c)) {
        lVar4 = 0;
LAB_00103965:
        puVar3 = (undefined4 *)((long)iVar2 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)(puVar3 + 1) = 0;
        *(int *)(param_1 + 0x28) = iVar2 + 1;
        *puVar3 = 5;
        *(long *)(puVar3 + 4) = lVar4;
        return puVar3;
      }
    }
    else if (pcVar1[1] != 'n') {
      iVar2 = FUN_00103810();
      lVar4 = (long)(iVar2 + 1);
      if ((-1 < iVar2 + 1) && (**(char **)(param_1 + 0x18) == '_')) {
        iVar2 = *(int *)(param_1 + 0x28);
        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        if (*(int *)(param_1 + 0x2c) != iVar2 && iVar2 <= *(int *)(param_1 + 0x2c))
        goto LAB_00103965;
      }
    }
  }
  return (undefined4 *)0x0;
}


////>>0x001039b0>>FUN_001039b0>>////

undefined8 FUN_001039b0(long param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = *(char **)(param_1 + 0x18);
  if (*pcVar1 == '_') {
    *(char **)(param_1 + 0x18) = pcVar1 + 1;
    if (pcVar1[1] == '_') {
      *(char **)(param_1 + 0x18) = pcVar1 + 2;
      iVar2 = FUN_00103810();
      if (iVar2 < 0) {
        return 0;
      }
      if (9 < iVar2) {
        if (**(char **)(param_1 + 0x18) != '_') {
          return 0;
        }
        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      }
    }
    else {
      iVar2 = FUN_00103810();
      if (iVar2 < 0) {
        return 0;
      }
    }
  }
  return 1;
}


////>>0x00103a20>>FUN_00103a20>>////

void FUN_00103a20(undefined *param_1,undefined param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x100);
  if (lVar1 != 0xff) {
    *(long *)(param_1 + 0x100) = lVar1 + 1;
    param_1[lVar1] = param_2;
    param_1[0x108] = param_2;
    return;
  }
  param_1[0xff] = 0;
  (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
  *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
  *(undefined8 *)(param_1 + 0x100) = 1;
  *param_1 = param_2;
  param_1[0x108] = param_2;
  return;
}


////>>0x00103aa0>>FUN_00103aa0>>////

int * FUN_00103aa0(int *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  if ((int)param_2 < 0) {
    return param_1;
  }
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  uVar2 = param_2 & 7;
  uVar3 = param_2;
  if (uVar2 != 0) {
    if (*param_1 != 0x2f) {
      return (int *)0x0;
    }
    param_1 = *(int **)(param_1 + 6);
    uVar3 = param_2 - 1;
    if (param_1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (uVar2 != 1) {
      if (uVar2 != 2) {
        if (uVar2 != 3) {
          if (uVar2 != 4) {
            if (uVar2 != 5) {
              if (uVar2 != 6) {
                if (*param_1 != 0x2f) {
                  return (int *)0x0;
                }
                param_1 = *(int **)(param_1 + 6);
                uVar3 = param_2 - 2;
                if (param_1 == (int *)0x0) {
                  return (int *)0x0;
                }
              }
              if (*param_1 != 0x2f) {
                return (int *)0x0;
              }
              param_1 = *(int **)(param_1 + 6);
              uVar3 = uVar3 - 1;
              if (param_1 == (int *)0x0) {
                return (int *)0x0;
              }
            }
            if (*param_1 != 0x2f) {
              return (int *)0x0;
            }
            param_1 = *(int **)(param_1 + 6);
            uVar3 = uVar3 - 1;
            if (param_1 == (int *)0x0) {
              return (int *)0x0;
            }
          }
          if (*param_1 != 0x2f) {
            return (int *)0x0;
          }
          param_1 = *(int **)(param_1 + 6);
          uVar3 = uVar3 - 1;
          if (param_1 == (int *)0x0) {
            return (int *)0x0;
          }
        }
        if (*param_1 != 0x2f) {
          return (int *)0x0;
        }
        param_1 = *(int **)(param_1 + 6);
        uVar3 = uVar3 - 1;
        if (param_1 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      if (*param_1 != 0x2f) {
        return (int *)0x0;
      }
      param_1 = *(int **)(param_1 + 6);
      uVar3 = uVar3 - 1;
      goto joined_r0x00103b8e;
    }
  }
  while( true ) {
    if (*param_1 != 0x2f) {
      return (int *)0x0;
    }
    if (uVar3 == 0) {
      return *(int **)(param_1 + 4);
    }
    piVar1 = *(int **)(param_1 + 6);
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 != 0x2f) {
      return (int *)0x0;
    }
    piVar1 = *(int **)(piVar1 + 6);
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 != 0x2f) {
      return (int *)0x0;
    }
    piVar1 = *(int **)(piVar1 + 6);
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 != 0x2f) {
      return (int *)0x0;
    }
    piVar1 = *(int **)(piVar1 + 6);
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 != 0x2f) {
      return (int *)0x0;
    }
    piVar1 = *(int **)(piVar1 + 6);
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 != 0x2f) {
      return (int *)0x0;
    }
    piVar1 = *(int **)(piVar1 + 6);
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 != 0x2f) {
      return (int *)0x0;
    }
    piVar1 = *(int **)(piVar1 + 6);
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 != 0x2f) break;
    param_1 = *(int **)(piVar1 + 6);
    uVar3 = uVar3 - 8;
joined_r0x00103b8e:
    if (param_1 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}


////>>0x00103c20>>FUN_00103c20>>////

int * FUN_00103c20(long param_1,long param_2)

{
  ulong uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar6;
  int iVar5;
  
  if (*(long *)(param_1 + 0x120) == 0) {
    *(undefined4 *)(param_1 + 0x130) = 1;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x10);
    uVar6 = uVar1 & 0xffffffff;
    piVar2 = *(int **)(*(long *)(*(long *)(param_1 + 0x120) + 8) + 0x18);
    if ((int)(uint)uVar1 < 0) {
      return piVar2;
    }
    if (piVar2 != (int *)0x0) {
      uVar3 = (uint)uVar1 & 7;
      if ((uVar1 & 7) != 0) {
        if (*piVar2 != 0x2f) {
          return (int *)0x0;
        }
        piVar2 = *(int **)(piVar2 + 6);
        iVar5 = (int)uVar6;
        uVar4 = iVar5 - 1;
        uVar6 = (ulong)uVar4;
        if (piVar2 == (int *)0x0) {
          return (int *)0x0;
        }
        if (uVar3 != 1) {
          if (uVar3 != 2) {
            if (uVar3 != 3) {
              if (uVar3 != 4) {
                if (uVar3 != 5) {
                  if (uVar3 != 6) {
                    if (*piVar2 != 0x2f) {
                      return (int *)0x0;
                    }
                    piVar2 = *(int **)(piVar2 + 6);
                    uVar4 = iVar5 - 2;
                    if (piVar2 == (int *)0x0) {
                      return (int *)0x0;
                    }
                  }
                  if (*piVar2 != 0x2f) {
                    return (int *)0x0;
                  }
                  piVar2 = *(int **)(piVar2 + 6);
                  uVar4 = uVar4 - 1;
                  if (piVar2 == (int *)0x0) {
                    return (int *)0x0;
                  }
                }
                if (*piVar2 != 0x2f) {
                  return (int *)0x0;
                }
                piVar2 = *(int **)(piVar2 + 6);
                uVar4 = uVar4 - 1;
                if (piVar2 == (int *)0x0) {
                  return (int *)0x0;
                }
              }
              if (*piVar2 != 0x2f) {
                return (int *)0x0;
              }
              piVar2 = *(int **)(piVar2 + 6);
              uVar4 = uVar4 - 1;
              if (piVar2 == (int *)0x0) {
                return (int *)0x0;
              }
            }
            if (*piVar2 != 0x2f) {
              return (int *)0x0;
            }
            piVar2 = *(int **)(piVar2 + 6);
            uVar4 = uVar4 - 1;
            if (piVar2 == (int *)0x0) {
              return (int *)0x0;
            }
          }
          if (*piVar2 != 0x2f) {
            return (int *)0x0;
          }
          piVar2 = *(int **)(piVar2 + 6);
          uVar4 = uVar4 - 1;
          goto joined_r0x00103d27;
        }
      }
      while (*piVar2 == 0x2f) {
        if ((int)uVar6 == 0) {
          return *(int **)(piVar2 + 4);
        }
        piVar2 = *(int **)(piVar2 + 6);
        if (piVar2 == (int *)0x0) {
          return (int *)0x0;
        }
        if (*piVar2 != 0x2f) {
          return (int *)0x0;
        }
        piVar2 = *(int **)(piVar2 + 6);
        if (piVar2 == (int *)0x0) {
          return (int *)0x0;
        }
        if (*piVar2 != 0x2f) {
          return (int *)0x0;
        }
        piVar2 = *(int **)(piVar2 + 6);
        if (piVar2 == (int *)0x0) {
          return (int *)0x0;
        }
        if (*piVar2 != 0x2f) {
          return (int *)0x0;
        }
        piVar2 = *(int **)(piVar2 + 6);
        if (piVar2 == (int *)0x0) {
          return (int *)0x0;
        }
        if (*piVar2 != 0x2f) {
          return (int *)0x0;
        }
        piVar2 = *(int **)(piVar2 + 6);
        if (piVar2 == (int *)0x0) {
          return (int *)0x0;
        }
        if (*piVar2 != 0x2f) {
          return (int *)0x0;
        }
        piVar2 = *(int **)(piVar2 + 6);
        if (piVar2 == (int *)0x0) {
          return (int *)0x0;
        }
        if (*piVar2 != 0x2f) {
          return (int *)0x0;
        }
        piVar2 = *(int **)(piVar2 + 6);
        if (piVar2 == (int *)0x0) {
          return (int *)0x0;
        }
        if (*piVar2 != 0x2f) {
          return (int *)0x0;
        }
        piVar2 = *(int **)(piVar2 + 6);
        uVar4 = (int)uVar6 - 8;
joined_r0x00103d27:
        uVar6 = (ulong)uVar4;
        if (piVar2 == (int *)0x0) {
          return (int *)0x0;
        }
      }
    }
  }
  return (int *)0x0;
}


////>>0x00103dc0>>FUN_00103dc0>>////

int * FUN_00103dc0(undefined8 param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (param_2 == (int *)0x0) {
    return (int *)0x0;
  }
LAB_00103dee:
  switch(*param_2) {
  case 0:
  case 6:
  case 0x18:
    goto LAB_00103e3a;
  case 1:
  case 2:
  case 3:
  case 4:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    break;
  case 5:
    piVar1 = (int *)FUN_00103c20(param_1,param_2);
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 != 0x2f) {
      return (int *)0x0;
    }
    return piVar1;
  case 7:
  case 8:
    goto switchD_00103dfd_caseD_7;
  default:
    uVar2 = *param_2 - 0x27;
    if (uVar2 < 0x36) {
      if ((1L << ((byte)uVar2 & 0x3f) & 0x20006718000801U) != 0) {
        return (int *)0x0;
      }
      if (uVar2 == 0xc) goto switchD_00103dfd_caseD_7;
    }
  }
  piVar1 = (int *)FUN_00103dc0(param_1,*(undefined8 *)(param_2 + 4));
  if (piVar1 != (int *)0x0) {
    return piVar1;
  }
switchD_00103dfd_caseD_7:
  param_2 = *(int **)(param_2 + 6);
  if (param_2 == (int *)0x0) {
LAB_00103e3a:
    return (int *)0x0;
  }
  goto LAB_00103dee;
}


////>>0x00103e70>>FUN_00103e70>>////

void FUN_00103e70(char *param_1,char *param_2)

{
  char *pcVar1;
  size_t sVar2;
  long lVar3;
  char cVar4;
  
  sVar2 = strlen(param_2);
  if (sVar2 != 0) {
    pcVar1 = param_2 + sVar2;
    lVar3 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *param_2;
      if (lVar3 == 0xff) {
        param_2 = param_2 + 1;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        *(undefined8 *)(param_1 + 0x100) = 1;
        *param_1 = cVar4;
        param_1[0x108] = cVar4;
        if (pcVar1 == param_2) {
          return;
        }
        cVar4 = *param_2;
        lVar3 = 1;
      }
      param_2 = param_2 + 1;
      *(long *)(param_1 + 0x100) = lVar3 + 1;
      param_1[lVar3] = cVar4;
      param_1[0x108] = cVar4;
      lVar3 = lVar3 + 1;
    } while (pcVar1 != param_2);
  }
  return;
}


////>>0x00103f30>>FUN_00103f30>>////

void FUN_00103f30(char *param_1,ulong param_2)

{
  size_t sVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  char local_48 [40];
  
  pcVar3 = local_48;
  sprintf(local_48,"%d",param_2 & 0xffffffff);
  sVar1 = strlen(local_48);
  if (sVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x100);
    do {
      cVar4 = *pcVar3;
      if (lVar2 == 0xff) {
        pcVar3 = pcVar3 + 1;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        *(undefined8 *)(param_1 + 0x100) = 1;
        *param_1 = cVar4;
        param_1[0x108] = cVar4;
        if (pcVar3 == local_48 + sVar1) {
          return;
        }
        cVar4 = *pcVar3;
        lVar2 = 1;
      }
      pcVar3 = pcVar3 + 1;
      *(long *)(param_1 + 0x100) = lVar2 + 1;
      param_1[lVar2] = cVar4;
      param_1[0x108] = cVar4;
      lVar2 = lVar2 + 1;
    } while (local_48 + sVar1 != pcVar3);
  }
  return;
}


////>>0x00104010>>FUN_00104010>>////

void FUN_00104010(char *param_1,int param_2,uint param_3)

{
  size_t sVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  char local_48 [32];
  
  pcVar5 = local_48;
  if (param_2 == 0x59) {
    lVar3 = 2;
    pcVar6 = "$N";
  }
  else if (param_2 == 0x5a) {
    lVar3 = 3;
    pcVar6 = "$TT";
  }
  else {
    if (param_2 != 0x58) {
      *(undefined4 *)(param_1 + 0x130) = 1;
      goto LAB_00104047;
    }
    lVar3 = 2;
    pcVar6 = "$T";
  }
  lVar4 = *(long *)(param_1 + 0x100);
  cVar7 = *pcVar6;
  if (lVar4 == 0xff) {
    param_1[0xff] = '\0';
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *param_1 = cVar7;
    lVar2 = 1;
    cVar7 = pcVar6[1];
    *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
LAB_0010415d:
    lVar4 = lVar2 + 1;
    *(long *)(param_1 + 0x100) = lVar4;
    param_1[lVar2] = cVar7;
    param_1[0x108] = cVar7;
    if (lVar3 != 3) goto LAB_00104047;
    cVar7 = pcVar6[2];
    if (lVar4 != 0xff) goto LAB_0010418e;
    param_1[0xff] = '\0';
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
    lVar3 = 1;
    lVar4 = 0;
  }
  else {
    lVar2 = lVar4 + 1;
    *(long *)(param_1 + 0x100) = lVar2;
    param_1[lVar4] = cVar7;
    param_1[0x108] = cVar7;
    cVar7 = pcVar6[1];
    if (lVar2 != 0xff) goto LAB_0010415d;
    param_1[0xff] = '\0';
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
    *(undefined8 *)(param_1 + 0x100) = 1;
    *param_1 = cVar7;
    param_1[0x108] = cVar7;
    if (lVar3 != 3) goto LAB_00104047;
    cVar7 = pcVar6[2];
    lVar4 = 1;
LAB_0010418e:
    lVar3 = lVar4 + 1;
  }
  *(long *)(param_1 + 0x100) = lVar3;
  param_1[lVar4] = cVar7;
  param_1[0x108] = cVar7;
LAB_00104047:
  sprintf(local_48,"%d",(ulong)param_3);
  sVar1 = strlen(local_48);
  if (sVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x100);
    do {
      cVar7 = *pcVar5;
      if (lVar3 == 0xff) {
        pcVar5 = pcVar5 + 1;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        *(undefined8 *)(param_1 + 0x100) = 1;
        *param_1 = cVar7;
        param_1[0x108] = cVar7;
        if (local_48 + sVar1 == pcVar5) {
          return;
        }
        cVar7 = *pcVar5;
        lVar3 = 1;
      }
      pcVar5 = pcVar5 + 1;
      *(long *)(param_1 + 0x100) = lVar3 + 1;
      param_1[lVar3] = cVar7;
      param_1[0x108] = cVar7;
      lVar3 = lVar3 + 1;
    } while (local_48 + sVar1 != pcVar5);
  }
  return;
}


////>>0x001042b0>>FUN_001042b0>>////

void FUN_001042b0(void *param_1,size_t param_2,void **param_3)

{
  void *pvVar1;
  void *__size;
  void *pvVar2;
  
  pvVar2 = param_3[1];
  __size = param_3[2];
  pvVar1 = (void *)(param_2 + 1 + (long)pvVar2);
  if (__size < pvVar1) {
    if (*(int *)(param_3 + 3) != 0) {
      return;
    }
    if ((__size != (void *)0x0) || (__size = (void *)0x2, (void *)0x2 < pvVar1)) {
      do {
        __size = (void *)((long)__size * 2);
      } while (__size < pvVar1);
    }
    pvVar1 = realloc(*param_3,(size_t)__size);
    if (pvVar1 == (void *)0x0) {
      free(*param_3);
      *(undefined4 *)(param_3 + 3) = 1;
      *param_3 = (void *)0x0;
      *(undefined (*) [16])(param_3 + 1) = (undefined  [16])0x0;
      return;
    }
    *param_3 = pvVar1;
    param_3[2] = __size;
    if (*(int *)(param_3 + 3) != 0) {
      return;
    }
    pvVar2 = param_3[1];
  }
  else if (*(int *)(param_3 + 3) != 0) {
    return;
  }
  memcpy((void *)((long)pvVar2 + (long)*param_3),param_1,param_2);
  *(undefined *)((long)*param_3 + param_2 + (long)param_3[1]) = 0;
  param_3[1] = (void *)((long)param_3[1] + param_2);
  return;
}


////>>0x00104380>>FUN_00104380>>////

void * FUN_00104380(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *local_28;
  undefined local_20 [16];
  int local_10;
  
  local_28 = (void *)0x0;
  local_10 = 0;
  local_20 = (undefined  [16])0x0;
  iVar1 = FUN_0011d2a0(param_1,param_2,&local_28);
  if (iVar1 == 0) {
    free(local_28);
    *param_3 = 0;
    local_28 = (void *)0x0;
  }
  else {
    uVar2 = 1;
    if (local_10 == 0) {
      uVar2 = local_20._8_8_;
    }
    *param_3 = uVar2;
  }
  return local_28;
}


////>>0x00104400>>cplus_demangle>>////

/* WARNING: Type propagation algorithm not settling */

uint * cplus_demangle(uint **param_1,uint param_2,undefined8 param_3,byte *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *__s;
  size_t sVar6;
  char *pcVar7;
  void *pvVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar18;
  char *pcVar19;
  uint **ppuVar20;
  byte *extraout_RDX;
  undefined **ppuVar21;
  long lVar22;
  byte bVar23;
  ushort uVar24;
  uint **unaff_R13;
  uint **ppuVar25;
  bool bVar26;
  byte bVar27;
  uint *local_e0;
  int local_d0;
  uint *local_c8;
  undefined local_c0 [16];
  int local_b0;
  uint **local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined local_88 [16];
  uint **local_78;
  code *local_70;
  byte *local_68;
  long local_60;
  uint local_58;
  undefined4 local_54;
  int local_50;
  undefined8 local_48;
  byte *pbVar17;
  
  bVar27 = 0;
  if ((param_2 & 0x3c104) == 0) {
    param_2 = param_2 | 0x100;
  }
  if ((param_2 & 0x20100) != 0) {
    local_c8 = (uint *)0x0;
    local_70 = FUN_001186e0;
    unaff_R13 = &local_c8;
    local_b0 = 0;
    local_58 = (uint)((param_2 & 8) != 0);
    local_88._8_8_ = 0;
    local_50 = (int)(param_2 << 0xd) >> 0x1f;
    local_68 = (byte *)0x0;
    local_60 = 0;
    local_54 = 0;
    local_48 = 0;
    local_c0 = (undefined  [16])0x0;
    pbVar11 = param_4;
    local_78 = unaff_R13;
    if (*(byte *)param_1 != 0x5f) goto LAB_001045af;
    puVar5 = local_c8;
    if (*(byte *)((long)param_1 + 1) != 0x52) {
      if ((*(byte *)((long)param_1 + 1) == 0x5a) && (*(byte *)((long)param_1 + 2) == 0x4e)) {
        pbVar18 = (byte *)((long)param_1 + 3);
        local_54 = 0xffffffff;
        local_88._8_8_ = 0;
        local_88._0_8_ = pbVar18;
        pbVar11 = pbVar18;
        pbVar16 = (byte *)0x0;
        if (*(byte *)((long)param_1 + 3) != 0) {
          do {
            pbVar17 = pbVar16;
            pbVar16 = pbVar17 + 1;
            local_88._8_8_ = pbVar16;
            bVar14 = *pbVar11;
            if (((bVar14 != 0x5f) && (((&DAT_0011fbc0)[(ulong)bVar14 * 2] & 0x8c) == 0)) &&
               ((param_4 = pbVar11, 0x1c < (byte)(bVar14 - 0x24) ||
                ((0x10400401UL >> ((ulong)(bVar14 - 0x24) & 0x3f) & 1) == 0)))) goto LAB_001045b1;
            pbVar11 = pbVar11 + 1;
          } while (*pbVar11 != 0);
          if (pbVar16 != (byte *)0x0) {
            bVar26 = true;
            uVar15 = (uint)pbVar16 & 3;
            pbVar10 = pbVar16;
            if (((ulong)pbVar16 & 3) == 0) goto LAB_00104b12;
            pbVar11 = pbVar17;
            if (uVar15 == 1) {
LAB_00104ae3:
              pbVar10 = pbVar16 + -1;
              bVar14 = pbVar18[(long)pbVar10];
              if (!bVar26) goto LAB_00104afb;
              while (pbVar9 = pbVar16, bVar14 != 0x45) {
LAB_00104afb:
                do {
                  bVar26 = bVar14 == 0x2e;
                  local_88._8_8_ = pbVar10;
                  if (pbVar10 == (byte *)0x0) goto LAB_001045af;
LAB_00104b12:
                  pbVar11 = pbVar10 + -1;
                  if ((bVar26) &&
                     (pbVar9 = pbVar10, ((byte *)((long)param_1 + 2))[(long)pbVar10] == 0x45))
                  goto LAB_00104cf8;
                  local_88._8_8_ = pbVar11;
                  if ((((byte *)((long)param_1 + 2))[(long)pbVar10] == 0x2e) &&
                     (pbVar9 = pbVar11, ((byte *)((long)param_1 + 2))[(long)pbVar11] == 0x45))
                  goto LAB_00104cf8;
                  local_88._8_8_ = pbVar10 + -2;
                  pbVar16 = pbVar10 + -3;
                  if ((((byte *)((long)param_1 + 2))[(long)pbVar11] == 0x2e) &&
                     (pbVar9 = pbVar10 + -2, ((byte *)((long)param_1 + 1))[(long)pbVar11] == 0x45))
                  goto LAB_00104cf8;
                  local_88._8_8_ = pbVar16;
                  bVar14 = *(byte *)((long)param_1 + (long)pbVar11);
                  pbVar10 = pbVar10 + -4;
                } while (((byte *)((long)param_1 + 1))[(long)pbVar11] != 0x2e);
              }
            }
            else {
              pbVar9 = pbVar16;
              if (uVar15 == 2) {
LAB_00104abd:
                pbVar16 = pbVar9 + -1;
                if ((!bVar26) || (pbVar18[(long)pbVar16] != 0x45)) {
                  local_88._8_8_ = pbVar16;
                  bVar26 = pbVar18[(long)pbVar16] == 0x2e;
                  goto LAB_00104ae3;
                }
              }
              else if (pbVar18[(long)pbVar17] != 0x45) {
                local_88._8_8_ = pbVar17;
                bVar26 = pbVar18[(long)pbVar17] == 0x2e;
                pbVar9 = pbVar17;
                goto LAB_00104abd;
              }
            }
LAB_00104cf8:
            pbVar16 = pbVar9 + -1;
            if (((byte *)((long)param_1 + 2))[(long)pbVar9] == 0x45) {
              local_88._8_8_ = pbVar16;
              if ((byte *)0x13 < pbVar16) {
                iVar3 = memcmp(pbVar18 + (long)(pbVar9 + -0x14),&DAT_0011e0fe,3);
                if (iVar3 == 0) {
                  do {
                    FUN_00117730(&local_a8,local_88);
                    param_4 = pbVar11;
                    puVar5 = local_c8;
                    if (((uint)local_60 != 0) || (local_a8 == (uint **)0x0)) goto LAB_001045b1;
                  } while (local_68 < pbVar16);
                  if ((CONCAT44(uStack_9c,uStack_a0) == 0x11) && (*(byte *)local_a8 == 0x68)) {
                    uVar15 = 0;
                    lVar22 = 0;
                    do {
                      lVar22 = lVar22 + 1;
                      bVar14 = *(byte *)((long)local_a8 + lVar22);
                      uVar13 = (uint)(char)bVar14;
                      pbVar11 = (byte *)(ulong)uVar13;
                      if ((byte)(bVar14 - 0x30) < 10) {
                        pbVar11 = (byte *)(ulong)(uVar13 - 0x30);
                      }
                      else if ((5 < (byte)(bVar14 + 0x9f)) ||
                              (pbVar11 = (byte *)(ulong)(uVar13 - 0x57), (int)(uVar13 - 0x57) < 0))
                      goto LAB_001045af;
                      uVar15 = uVar15 | 1 << ((byte)pbVar11 & 0x1f);
                    } while (lVar22 != 0x10);
                    uVar12 = 0;
                    for (; (ushort)uVar15 != 0; uVar15 = (uint)(ushort)((ushort)uVar15 >> 1)) {
                      pbVar11 = (byte *)(ulong)(uVar15 & 1);
                      uVar12 = (uVar12 + 1) - (ulong)((short)(uVar15 & 1) == 0);
                    }
                    if (4 < uVar12) {
                      param_4 = (byte *)0x0;
                      local_68 = (byte *)0x0;
                      if ((param_2 & 8) == 0) {
                        local_88._8_8_ = pbVar9 + -0x14;
                      }
                      do {
                        if ((local_68 != (byte *)0x0) && (local_60 == 0)) {
                          (*local_70)(&DAT_0011e14b,2,local_78);
                        }
                        FUN_00117730(&local_a8,local_88);
                        FUN_00117a70(local_88);
                      } while (local_68 < (ulong)local_88._8_8_);
                      uVar15 = (uint)local_60;
                      goto LAB_00104c34;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_001045af:
      param_4 = pbVar11;
      puVar5 = (uint *)0x0;
      goto LAB_001045b1;
    }
    pbVar11 = (byte *)(ulong)*(byte *)((long)param_1 + 2);
    pbVar18 = (byte *)((long)param_1 + 2);
    local_88._8_8_ = 0;
    local_88._0_8_ = pbVar18;
    if (((&DAT_0011fbc0)[(long)pbVar11 * 2] & 0x80) == 0) goto LAB_001045af;
    param_4 = pbVar11;
    if (*(byte *)((long)param_1 + 2) != 0) {
      param_4 = (byte *)0x0;
      do {
        if ((char)pbVar11 == '.') break;
        param_4 = param_4 + 1;
        local_88._8_8_ = param_4;
        if ((*pbVar18 != 0x5f) && (((&DAT_0011fbc0)[(ulong)*pbVar18 * 2] & 0x8c) == 0))
        goto LAB_001045b1;
        pbVar16 = pbVar18 + 1;
        pbVar11 = (byte *)(ulong)*pbVar16;
        pbVar18 = pbVar18 + 1;
      } while (*pbVar16 != 0);
    }
    FUN_00118720(local_88,1);
    puVar5 = local_c8;
    if ((uint)local_60 == 0) {
      uVar15 = 0;
      if (local_68 < (ulong)local_88._8_8_) {
        local_60 = 0x100000000;
        FUN_00118720(local_88,0);
        uVar15 = (uint)local_60;
      }
      uVar15 = uVar15 | local_68 != (byte *)local_88._8_8_;
LAB_00104c34:
      puVar5 = local_c8;
      if (uVar15 != 0) goto LAB_001045b1;
      FUN_00118640(unaff_R13,1);
      if (local_b0 == 0) {
        *(undefined *)(local_c0._0_8_ + (long)local_c8) = 0;
      }
      if (local_c8 != (uint *)0x0) {
        return local_c8;
      }
    }
    else {
LAB_001045b1:
      free(puVar5);
    }
    if ((param_2 & 0x20000) != 0) {
      return (uint *)0x0;
    }
  }
  if ((param_2 & 0x4100) != 0) {
    puVar5 = (uint *)FUN_00104380(param_1,param_2,local_88);
    if (puVar5 != (uint *)0x0) {
      return puVar5;
    }
    if ((param_2 & 0x4000) != 0) {
      return (uint *)0x0;
    }
  }
  if (((param_2 & 4) != 0) &&
     (puVar5 = (uint *)FUN_00104380(param_1,0x25,local_88), puVar5 != (uint *)0x0)) {
    return puVar5;
  }
  if ((param_2 & 0x8000) != 0) {
    iVar3 = strncmp((char *)param_1,"_ada_",5);
    pcVar7 = "\x02\b\x02";
    if (iVar3 == 0) {
      param_1 = (uint **)((long)param_1 + 5);
    }
    puVar5 = (uint *)0x0;
    bVar14 = *(byte *)param_1;
    uVar24 = *(ushort *)(&DAT_0011fbc0 + (ulong)bVar14 * 2);
    if ((uVar24 & 8) != 0) {
      sVar6 = strlen((char *)param_1);
      local_e0 = (uint *)(long)((int)sVar6 + 8);
      if (local_e0 == (uint *)0x0) {
        local_e0 = (uint *)0x1;
      }
      __s = (uint *)malloc((size_t)local_e0);
      if (__s == (uint *)0x0) goto LAB_00104f71;
      uVar12 = (ulong)bVar14;
      unaff_R13 = param_1;
      puVar5 = __s;
      goto LAB_00104801;
    }
LAB_001046d1:
    free(puVar5);
    sVar6 = strlen((char *)param_1);
    local_e0 = (uint *)(long)((int)sVar6 + 3);
    if (local_e0 == (uint *)0x0) {
      local_e0 = (uint *)0x1;
    }
    __s = (uint *)malloc((size_t)local_e0);
    if (__s != (uint *)0x0) {
      if (bVar14 == 0x3c) {
        memcpy(__s,param_1,sVar6 + 1);
        return __s;
      }
      sprintf((char *)__s,"<%s>",param_1);
      return __s;
    }
LAB_00104f71:
    uVar12 = FUN_00119860(local_e0);
    puVar5 = __s;
LAB_00104f79:
    bVar2 = (byte)uVar12;
    ppuVar20 = unaff_R13;
    if (bVar2 == 0x58) {
      bVar2 = *(byte *)((long)unaff_R13 + 1);
      ppuVar20 = (uint **)((long)unaff_R13 + 1);
      if (bVar2 != 0x6e) goto LAB_00104f9c;
      do {
        do {
          bVar2 = *(byte *)((long)ppuVar20 + 1);
          ppuVar20 = (uint **)((long)ppuVar20 + 1);
        } while (bVar2 == 0x6e);
LAB_00104f9c:
      } while (bVar2 == 0x62);
      if (bVar2 == 0x53) {
        bVar2 = *(byte *)((long)ppuVar20 + 1);
        if (bVar2 != 0) goto LAB_00104ec0;
        goto LAB_001046d1;
      }
    }
    if (bVar2 != 0x44) {
LAB_0010493a:
      do {
        bVar23 = *(byte *)ppuVar20;
        unaff_R13 = ppuVar20;
        while( true ) {
          if (bVar23 != 0x5f) goto LAB_00104e62;
          bVar2 = *(byte *)((long)ppuVar20 + 1);
          if (bVar2 != 0x5f) {
            if ((bVar2 == 0x42) || (bVar2 == 0x45)) {
              pbVar11 = (byte *)((long)ppuVar20 + 2);
              bVar2 = *(byte *)((long)ppuVar20 + 2);
              bVar23 = pcVar7[(ulong)bVar2 * 2];
              while ((bVar23 & 4) != 0) {
                bVar2 = pbVar11[1];
                pbVar11 = pbVar11 + 1;
                bVar23 = pcVar7[(ulong)bVar2 * 2];
              }
              if (bVar2 == 0x73) {
                bVar23 = pbVar11[1];
                ppuVar20 = unaff_R13;
                goto joined_r0x00104e2a;
              }
            }
            goto LAB_001046d1;
          }
          uVar12 = (ulong)*(byte *)((long)ppuVar20 + 2);
          unaff_R13 = (uint **)((long)ppuVar20 + 2);
          uVar24 = *(ushort *)(pcVar7 + uVar12 * 2);
          if ((uVar24 & 4) != 0) goto LAB_00104a30;
          if ((*(byte *)((long)ppuVar20 + 2) == 0x5f) && (*(byte *)((long)ppuVar20 + 3) != 0x5f)) {
            ppuVar21 = &PTR_DAT_00123ac0;
            sVar6 = 6;
            iVar3 = 0;
            pcVar7 = "_elabb";
            goto LAB_001049c8;
          }
          *(byte *)local_e0 = 0x2e;
          __s = (uint *)((long)local_e0 + 1);
LAB_00104801:
          while( true ) {
            if ((uVar24 & 8) == 0) {
              if ((char)uVar12 != 'O') goto LAB_001046d1;
              local_e0 = (uint *)0x4;
              ppuVar21 = &PTR_DAT_00123b30;
              pcVar19 = "Oabs";
              local_d0 = 0;
              while (iVar3 = strncmp((char *)unaff_R13,pcVar19,(size_t)local_e0), iVar3 != 0) {
                pcVar19 = *ppuVar21;
                ppuVar21 = ppuVar21 + 2;
                local_d0 = local_d0 + 1;
                if (pcVar19 == (char *)0x0) goto LAB_001046d1;
                local_e0 = (uint *)strlen(pcVar19);
              }
              ppuVar20 = (uint **)((long)unaff_R13 + (long)local_e0);
              pcVar19 = (&PTR_DAT_00123b28)[(long)local_d0 * 2];
              sVar6 = strlen(pcVar19);
              *(byte *)__s = 0x22;
              pvVar8 = memcpy((byte *)((long)__s + 1),pcVar19,sVar6);
              uVar12 = (ulong)*(byte *)ppuVar20;
              *(undefined *)((long)pvVar8 + sVar6) = 0x22;
              local_e0 = (uint *)((undefined *)((long)pvVar8 + sVar6) + 1);
            }
            else {
              while( true ) {
                do {
                  local_e0 = (uint *)((long)__s + (ulong)bVar27 * -2 + 1);
                  ppuVar20 = (uint **)((long)unaff_R13 + (ulong)bVar27 * -2 + 1);
                  *(byte *)__s = *(byte *)unaff_R13;
                  uVar12 = (ulong)*(byte *)ppuVar20;
                  __s = local_e0;
                  unaff_R13 = ppuVar20;
                } while ((pcVar7[uVar12 * 2] & 0xcU) != 0);
                if (*(byte *)ppuVar20 != 0x5f) break;
                if ((pcVar7[(ulong)*(byte *)((long)ppuVar20 + 1) * 2] & 0xcU) == 0)
                goto LAB_0010493a;
              }
            }
            cVar1 = (char)uVar12;
            unaff_R13 = ppuVar20;
            if (cVar1 != 'T') break;
            if (*(byte *)((long)ppuVar20 + 1) != 0x4b) goto LAB_0010493a;
            if (*(byte *)((long)ppuVar20 + 2) == 0x42) {
              bVar23 = *(byte *)((long)ppuVar20 + 3);
              goto joined_r0x00104e2a;
            }
            if ((*(byte *)((long)ppuVar20 + 2) != 0x5f) || (*(byte *)((long)ppuVar20 + 3) != 0x5f))
            goto LAB_001046d1;
            uVar12 = (ulong)*(byte *)((long)ppuVar20 + 4);
            *(byte *)local_e0 = 0x2e;
            __s = (uint *)((long)local_e0 + 1);
            uVar24 = *(ushort *)(pcVar7 + uVar12 * 2);
            unaff_R13 = (uint **)((long)ppuVar20 + 4);
          }
          if (cVar1 == 'E') goto LAB_001046d1;
          if (((int)uVar12 - 0x4eU & 0xfd) == 0) break;
          if (cVar1 != 'S') goto LAB_00104f79;
          bVar2 = *(byte *)((long)ppuVar20 + 1);
          if (bVar2 == 0) goto LAB_001046d1;
LAB_00104ec0:
          bVar23 = *(byte *)((long)ppuVar20 + 2);
          if ((bVar23 != 0x5f) && (bVar23 != 0)) {
            bVar23 = *(byte *)ppuVar20;
            goto LAB_00104e62;
          }
          unaff_R13 = ppuVar20;
          if (bVar2 == 0x52) {
            pcVar19 = "\'Read";
          }
          else if ((char)bVar2 < 'S') {
            if (bVar2 != 0x49) {
              if (bVar2 == 0x4f) {
                pcVar19 = "\'Output";
                goto LAB_00104ef0;
              }
              goto LAB_001046d1;
            }
            pcVar19 = "\'Input";
          }
          else {
            if (bVar2 != 0x57) goto LAB_001046d1;
            pcVar19 = "\'Write";
          }
LAB_00104ef0:
          ppuVar20 = (uint **)((long)ppuVar20 + 2);
          strcpy((char *)local_e0,pcVar19);
          sVar6 = strlen(pcVar19);
          local_e0 = (uint *)(sVar6 + (long)local_e0);
        }
      } while (*(byte *)((long)ppuVar20 + 1) != 0);
      goto LAB_00104900;
    }
    if (*(byte *)((long)ppuVar20 + 1) == 0x41) {
      pcVar7 = ".Adjust";
    }
    else {
      unaff_R13 = ppuVar20;
      if (*(byte *)((long)ppuVar20 + 1) != 0x46) goto LAB_001046d1;
      pcVar7 = ".Finalize";
    }
    strcpy((char *)local_e0,pcVar7);
    sVar6 = strlen(pcVar7);
    local_e0 = (uint *)((long)local_e0 + sVar6);
    goto LAB_00104900;
  }
  if ((param_2 & 0x10000) == 0) {
    return (uint *)0x0;
  }
  if (param_1 == (uint **)0x0) {
    return (uint *)0x0;
  }
  if (*(byte *)param_1 == 0) {
    return (uint *)0x0;
  }
  if (*(byte *)param_1 != 0x5f) {
    return (uint *)0x0;
  }
  if (*(byte *)((long)param_1 + 1) != 0x44) {
    return (uint *)0x0;
  }
  uVar15 = 0x11e10d;
  local_78 = (uint **)0x0;
  local_88._0_8_ = (uint *)0x0;
  local_88._8_8_ = (uint *)0x0;
  iVar3 = strcmp((char *)param_1,"_Dmain");
  if (iVar3 != 0) {
    sVar6 = strlen((char *)param_1);
    uStack_a0 = (undefined4)sVar6;
    local_a8 = param_1;
    pcVar7 = (char *)FUN_0011c0e0(local_88,param_1,&local_a8);
    if (((pcVar7 == (char *)0x0) || (*pcVar7 != '\0')) && ((uint *)local_88._0_8_ != (uint *)0x0)) {
      free((void *)local_88._0_8_);
      local_78 = (uint **)0x0;
      local_88._0_8_ = (uint *)0x0;
      local_88._8_8_ = (uint *)0x0;
    }
LAB_00104790:
    if ((local_88._8_8_ != local_88._0_8_) &&
       ((int)local_88._8_8_ != (int)local_88._0_8_ && -1 < (int)local_88._8_8_ - (int)local_88._0_8_
       )) {
      FUN_001198b0(local_88,1);
      *(undefined *)local_88._8_8_ = 0;
      return (uint *)local_88._0_8_;
    }
    return (uint *)0x0;
  }
  puVar5 = (uint *)malloc(0x20);
  if (puVar5 != (uint *)0x0) {
    local_78 = (uint **)(puVar5 + 8);
    *(undefined2 *)(puVar5 + 1) = 0x6e69;
    local_88._8_8_ = (long)puVar5 + 6;
    *puVar5 = 0x616d2044;
    local_88._0_8_ = puVar5;
    goto LAB_00104790;
  }
  lVar22 = 0x20;
  FUN_00119860();
  pbVar11 = param_4;
  if (uVar15 < 0x32) {
    if (0x28 < uVar15) {
      switch(uVar15) {
      case 0x29:
      case 0x2e:
      case 0x2f:
        goto switchD_00105146_caseD_29;
      case 0x2a:
      case 0x31:
        goto joined_r0x001051a5;
      case 0x2b:
      case 0x2d:
        goto switchD_00105146_caseD_2b;
      default:
        return (uint *)0x0;
      case 0x30:
        goto switchD_00105146_caseD_30;
      }
    }
    uVar12 = 1L << ((byte)uVar15 & 0x3f);
    if ((uVar12 & 0x17c00fff600) != 0) goto switchD_00105146_caseD_30;
    if ((uVar12 & 0x1fe000000) != 0) goto switchD_00105146_caseD_29;
    if ((uVar12 & 0x20000081e) == 0) {
      return (uint *)0x0;
    }
switchD_00105146_caseD_2b:
    if (extraout_RDX == (byte *)0x0) {
      return (uint *)0x0;
    }
  }
  else {
    if (0x4f < uVar15) {
      switch(uVar15) {
      case 0x52:
      case 0x56:
      case 0x57:
      case 0x59:
      case 0x5a:
      case 0x5b:
        goto switchD_00105146_caseD_30;
      case 0x53:
      case 0x54:
        goto joined_r0x001051a5;
      case 0x55:
        goto switchD_00105146_caseD_2b;
      default:
        goto switchD_00105146_caseD_29;
      }
    }
    if (uVar15 < 0x34) {
      return (uint *)0x0;
    }
    uVar12 = 1L << ((byte)uVar15 - 0x34 & 0x3f);
    if ((uVar12 & 0x1c71107) == 0) {
      if ((uVar12 & 0xa002ef8) == 0) {
        if (uVar15 != 0x4e) {
          return (uint *)0x0;
        }
        goto switchD_00105146_caseD_29;
      }
      goto switchD_00105146_caseD_2b;
    }
switchD_00105146_caseD_30:
    pbVar11 = extraout_RDX;
  }
joined_r0x001051a5:
  if (pbVar11 == (byte *)0x0) {
    return (uint *)0x0;
  }
switchD_00105146_caseD_29:
  iVar3 = *(int *)(lVar22 + 0x28);
  if (iVar3 < *(int *)(lVar22 + 0x2c)) {
    puVar5 = (uint *)((long)iVar3 * 0x20 + *(long *)(lVar22 + 0x20));
    *(undefined8 *)(puVar5 + 1) = 0;
    *(int *)(lVar22 + 0x28) = iVar3 + 1;
    *puVar5 = uVar15;
    *(byte **)(puVar5 + 4) = extraout_RDX;
    *(byte **)(puVar5 + 6) = param_4;
    return puVar5;
  }
  return (uint *)0x0;
LAB_00104a30:
  do {
    ppuVar25 = unaff_R13;
    bVar23 = *(byte *)((long)ppuVar25 + 1);
    ppuVar20 = (uint **)((long)ppuVar25 + 1);
    unaff_R13 = ppuVar20;
  } while ((pcVar7[(ulong)bVar23 * 2] & 4U) != 0);
  if (bVar23 == 0x5f) {
    if ((pcVar7[(ulong)*(byte *)((long)ppuVar25 + 2) * 2] & 4U) == 0) goto LAB_001046d1;
    goto LAB_00104a30;
  }
  if (bVar23 == 0x58) {
    bVar23 = *(byte *)((long)ppuVar25 + 2);
    ppuVar20 = (uint **)((long)ppuVar25 + 2);
    if (bVar23 != 0x6e) goto LAB_00104e57;
    do {
      do {
        bVar23 = *(byte *)((long)ppuVar20 + 1);
        ppuVar20 = (uint **)((long)ppuVar20 + 1);
      } while (bVar23 == 0x6e);
LAB_00104e57:
    } while (bVar23 == 0x62);
  }
LAB_00104e62:
  if (bVar23 == 0x2e) {
    unaff_R13 = ppuVar20;
    if ((pcVar7[(ulong)*(byte *)((long)ppuVar20 + 1) * 2] & 4U) == 0) goto LAB_001046d1;
    bVar23 = *(byte *)((long)ppuVar20 + 2);
    pbVar11 = (byte *)((long)ppuVar20 + 2);
    bVar2 = pcVar7[(ulong)bVar23 * 2];
    while ((bVar2 & 4) != 0) {
      bVar23 = pbVar11[1];
      pbVar11 = pbVar11 + 1;
      bVar2 = pcVar7[(ulong)bVar23 * 2];
    }
  }
joined_r0x00104e2a:
  unaff_R13 = ppuVar20;
  if (bVar23 == 0) goto LAB_00104900;
  goto LAB_001046d1;
LAB_001049c8:
  iVar4 = strncmp((char *)unaff_R13,pcVar7,sVar6);
  if (iVar4 == 0) {
    pcVar7 = (&PTR_s__Elab_Body_00123ac8)[(long)iVar3 * 2];
    sVar6 = strlen(pcVar7);
    pvVar8 = memcpy(local_e0,pcVar7,sVar6);
    local_e0 = (uint *)((long)pvVar8 + sVar6);
LAB_00104900:
    *(byte *)local_e0 = 0;
    return puVar5;
  }
  pcVar7 = ppuVar21[2];
  ppuVar21 = ppuVar21 + 2;
  iVar3 = iVar3 + 1;
  if (pcVar7 == (char *)0x0) goto LAB_001046d1;
  sVar6 = strlen(pcVar7);
  goto LAB_001049c8;
}


////>>0x001050d0>>FUN_001050d0>>////

uint * FUN_001050d0(long param_1,uint param_2,long param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  
  if (param_2 < 0x32) {
    if (0x28 < param_2) {
      switch(param_2) {
      case 0x29:
      case 0x2e:
      case 0x2f:
        goto switchD_00105146_caseD_29;
      case 0x2a:
      case 0x31:
        goto switchD_00105146_caseD_2a;
      case 0x2b:
      case 0x2d:
        goto switchD_00105146_caseD_2b;
      default:
        return (uint *)0x0;
      case 0x30:
        goto switchD_00105146_caseD_30;
      }
    }
    uVar2 = 1L << ((byte)param_2 & 0x3f);
    if ((uVar2 & 0x17c00fff600) == 0) {
      if ((uVar2 & 0x1fe000000) != 0) goto switchD_00105146_caseD_29;
      if ((uVar2 & 0x20000081e) == 0) {
        return (uint *)0x0;
      }
switchD_00105146_caseD_2b:
      if (param_3 == 0) {
        return (uint *)0x0;
      }
      goto switchD_00105146_caseD_2a;
    }
  }
  else {
    if (0x4f < param_2) {
      switch(param_2) {
      case 0x52:
      case 0x56:
      case 0x57:
      case 0x59:
      case 0x5a:
      case 0x5b:
        goto switchD_00105146_caseD_30;
      case 0x53:
      case 0x54:
        goto switchD_00105146_caseD_2a;
      case 0x55:
        goto switchD_00105146_caseD_2b;
      default:
        goto switchD_00105146_caseD_29;
      }
    }
    if (param_2 < 0x34) {
      return (uint *)0x0;
    }
    uVar2 = 1L << ((byte)param_2 - 0x34 & 0x3f);
    if ((uVar2 & 0x1c71107) == 0) {
      if ((uVar2 & 0xa002ef8) == 0) {
        if (param_2 != 0x4e) {
          return (uint *)0x0;
        }
        goto switchD_00105146_caseD_29;
      }
      goto switchD_00105146_caseD_2b;
    }
  }
switchD_00105146_caseD_30:
  if (param_3 == 0) {
    return (uint *)0x0;
  }
switchD_00105146_caseD_29:
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x2c) <= iVar1) {
    return (uint *)0x0;
  }
  puVar3 = (uint *)((long)iVar1 * 0x20 + *(long *)(param_1 + 0x20));
  *(undefined8 *)(puVar3 + 1) = 0;
  *(int *)(param_1 + 0x28) = iVar1 + 1;
  *puVar3 = param_2;
  *(long *)(puVar3 + 4) = param_3;
  *(long *)(puVar3 + 6) = param_4;
  return puVar3;
switchD_00105146_caseD_2a:
  if (param_4 == 0) {
    return (uint *)0x0;
  }
  goto switchD_00105146_caseD_29;
}


////>>0x001051f0>>FUN_001051f0>>////

undefined8 FUN_001051f0(long param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = *(char **)(param_1 + 0x18);
  cVar1 = *pcVar2;
  if ((cVar1 != 'R') && (cVar1 != 'O')) {
    return param_2;
  }
  if (cVar1 != 'R') {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 3;
    *(char **)(param_1 + 0x18) = pcVar2 + 1;
    uVar3 = FUN_001050d0(param_1,0x20,param_2,0);
    return uVar3;
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 2;
  *(char **)(param_1 + 0x18) = pcVar2 + 1;
  uVar3 = FUN_001050d0(param_1,0x1f,param_2,0);
  return uVar3;
}


////>>0x00105250>>FUN_00105250>>////

undefined4 * FUN_00105250(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < *(int *)(param_1 + 0x2c)) {
    puVar2 = (undefined4 *)((long)iVar1 * 0x20 + *(long *)(param_1 + 0x20));
    *(undefined8 *)(puVar2 + 1) = 0;
    *(int *)(param_1 + 0x28) = iVar1 + 1;
    if ((param_2 != 0) && (0 < param_3)) {
      *(undefined8 *)(puVar2 + 1) = 0;
      *puVar2 = 0;
      *(long *)(puVar2 + 4) = param_2;
      puVar2[6] = param_3;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}


////>>0x001052a0>>FUN_001052a0>>////

undefined4 * FUN_001052a0(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  iVar3 = FUN_00103810();
  if (iVar3 < 1) {
    return (undefined4 *)0x0;
  }
  plVar2 = *(long **)(param_1 + 0x18);
  if ((long)iVar3 <= *(long *)(param_1 + 8) - (long)plVar2) {
    pcVar4 = (char *)((long)iVar3 + (long)plVar2);
    *(char **)(param_1 + 0x18) = pcVar4;
    if (((*(byte *)(param_1 + 0x10) & 4) != 0) && (*pcVar4 == '$')) {
      *(char **)(param_1 + 0x18) = pcVar4 + 1;
    }
    if ((((iVar3 < 10) || (*plVar2 != 0x5f4c41424f4c475f)) ||
        (0x3b < (byte)(*(byte *)(plVar2 + 1) - 0x24))) ||
       (((0xf7fffffffffffbfeU >> ((ulong)(*(byte *)(plVar2 + 1) - 0x24) & 0x3f) & 1) != 0 ||
        (*(char *)((long)plVar2 + 9) != 'N')))) {
      puVar5 = (undefined4 *)FUN_00105250();
      *(undefined4 **)(param_1 + 0x40) = puVar5;
      return puVar5;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x48) = (*(int *)(param_1 + 0x48) + 0x16) - iVar3;
    if (iVar1 < *(int *)(param_1 + 0x2c)) {
      puVar5 = (undefined4 *)((long)iVar1 * 0x20 + *(long *)(param_1 + 0x20));
      *(int *)(param_1 + 0x28) = iVar1 + 1;
      *(undefined8 *)(puVar5 + 1) = 0;
      *puVar5 = 0;
      *(char **)(puVar5 + 4) = "(anonymous namespace)";
      puVar5[6] = 0x15;
      goto LAB_0010531a;
    }
  }
  puVar5 = (undefined4 *)0x0;
LAB_0010531a:
  *(undefined4 **)(param_1 + 0x40) = puVar5;
  return puVar5;
}


////>>0x00105380>>FUN_00105380>>////

undefined8 FUN_00105380(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  
  pcVar3 = *(char **)(param_1 + 0x18);
  cVar1 = *pcVar3;
  while( true ) {
    if (cVar1 != 'W') {
      return 1;
    }
    *(char **)(param_1 + 0x18) = pcVar3 + 1;
    if (pcVar3[1] == 'P') {
      *(char **)(param_1 + 0x18) = pcVar3 + 2;
      FUN_001052a0();
      lVar4 = FUN_001050d0();
      *param_2 = lVar4;
    }
    else {
      FUN_001052a0();
      lVar4 = FUN_001050d0();
      *param_2 = lVar4;
    }
    if ((lVar4 == 0) || (iVar2 = *(int *)(param_1 + 0x38), *(int *)(param_1 + 0x3c) <= iVar2))
    break;
    *(long *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 8) = lVar4;
    pcVar3 = *(char **)(param_1 + 0x18);
    *(int *)(param_1 + 0x38) = iVar2 + 1;
    cVar1 = *pcVar3;
  }
  return 0;
}


////>>0x00105410>>FUN_00105410>>////

undefined4 * FUN_00105410(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined *puVar13;
  int iVar14;
  bool bVar15;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'S') {
    return (undefined4 *)0x0;
  }
  *(char **)(param_1 + 0x18) = pcVar7 + 1;
  cVar5 = pcVar7[1];
  if (cVar5 == '\0') {
LAB_00105429:
    uVar12 = *(uint *)(param_1 + 0x10) & 8;
    if (((uVar12 != 0) || ((param_2 & 1) == 0)) ||
       (bVar15 = true, 1 < (byte)(**(char **)(param_1 + 0x18) + 0xbdU))) {
      bVar15 = uVar12 != 0;
    }
    if (cVar5 == 't') {
      iVar6 = *(int *)(param_1 + 0x28);
      iVar14 = *(int *)(param_1 + 0x2c);
      puVar13 = &DAT_00122dc0;
    }
    else {
      if (cVar5 == 'a') {
        puVar13 = &DAT_00122df8;
      }
      else if (cVar5 == 'b') {
        puVar13 = &DAT_00122e30;
      }
      else if (cVar5 == 's') {
        puVar13 = &DAT_00122e68;
      }
      else if (cVar5 == 'i') {
        puVar13 = &DAT_00122ea0;
      }
      else if (cVar5 == 'o') {
        puVar13 = &DAT_00122ed8;
      }
      else {
        puVar13 = &DAT_00122f10;
        if (cVar5 != 'd') {
          return (undefined4 *)0x0;
        }
      }
      lVar4 = *(long *)(puVar13 + 0x28);
      iVar6 = *(int *)(param_1 + 0x28);
      iVar14 = *(int *)(param_1 + 0x2c);
      if (lVar4 != 0) {
        uVar2 = *(undefined4 *)(puVar13 + 0x30);
        if (iVar6 < iVar14) {
          lVar9 = (long)iVar6;
          iVar6 = iVar6 + 1;
          puVar10 = (undefined4 *)(lVar9 * 0x20 + *(long *)(param_1 + 0x20));
          *(undefined8 *)(puVar10 + 1) = 0;
          *(int *)(param_1 + 0x28) = iVar6;
          *puVar10 = 0x18;
          *(long *)(puVar10 + 4) = lVar4;
          puVar10[6] = uVar2;
        }
        else {
          puVar10 = (undefined4 *)0x0;
        }
        *(undefined4 **)(param_1 + 0x40) = puVar10;
      }
    }
    if (bVar15) {
      uVar11 = *(undefined8 *)(puVar13 + 0x18);
      iVar3 = *(int *)(puVar13 + 0x20);
    }
    else {
      uVar11 = *(undefined8 *)(puVar13 + 8);
      iVar3 = *(int *)(puVar13 + 0x10);
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar3;
    if (iVar6 < iVar14) {
      puVar10 = (undefined4 *)((long)iVar6 * 0x20 + *(long *)(param_1 + 0x20));
      *(undefined8 *)(puVar10 + 1) = 0;
      *(int *)(param_1 + 0x28) = iVar6 + 1;
      *puVar10 = 0x18;
      *(undefined8 *)(puVar10 + 4) = uVar11;
      puVar10[6] = iVar3;
    }
    else {
      puVar10 = (undefined4 *)0x0;
    }
    pcVar7 = *(char **)(param_1 + 0x18);
    if (*pcVar7 == 'B') {
      uVar11 = *(undefined8 *)(param_1 + 0x40);
      do {
        *(char **)(param_1 + 0x18) = pcVar7 + 1;
        FUN_001052a0();
        puVar10 = (undefined4 *)FUN_001050d0();
        pcVar7 = *(char **)(param_1 + 0x18);
      } while (*pcVar7 == 'B');
      *(undefined8 *)(param_1 + 0x40) = uVar11;
      if ((puVar10 != (undefined4 *)0x0) &&
         (iVar6 = *(int *)(param_1 + 0x38), iVar6 < *(int *)(param_1 + 0x3c))) {
        *(undefined4 **)(*(long *)(param_1 + 0x30) + (long)iVar6 * 8) = puVar10;
        *(int *)(param_1 + 0x38) = iVar6 + 1;
        return puVar10;
      }
      return (undefined4 *)0x0;
    }
  }
  else {
    *(char **)(param_1 + 0x18) = pcVar7 + 2;
    cVar5 = pcVar7[1];
    if (((byte)(cVar5 - 0x30U) < 10) || (cVar5 == '_')) {
      uVar8 = 0;
      if (cVar5 != '_') goto LAB_001054e0;
    }
    else {
      if (0x19 < (byte)(cVar5 + 0xbfU)) goto LAB_00105429;
LAB_001054e0:
      uVar12 = 0;
      do {
        if ((byte)(cVar5 - 0x30U) < 10) {
          uVar1 = cVar5 + -0x30 + uVar12 * 0x24;
        }
        else {
          if (0x19 < (byte)(cVar5 + 0xbfU)) {
            return (undefined4 *)0x0;
          }
          uVar1 = cVar5 + -0x37 + uVar12 * 0x24;
        }
        if (uVar1 < uVar12) {
          return (undefined4 *)0x0;
        }
        pcVar7 = *(char **)(param_1 + 0x18);
        if (*pcVar7 == '\0') {
          return (undefined4 *)0x0;
        }
        *(char **)(param_1 + 0x18) = pcVar7 + 1;
        cVar5 = *pcVar7;
        uVar12 = uVar1;
      } while (cVar5 != '_');
      uVar8 = (ulong)(uVar1 + 1);
    }
    if (*(uint *)(param_1 + 0x38) <= (uint)uVar8) {
      return (undefined4 *)0x0;
    }
    puVar10 = *(undefined4 **)(*(long *)(param_1 + 0x30) + uVar8 * 8);
  }
  return puVar10;
}


////>>0x001056b0>>FUN_001056b0>>////

void FUN_001056b0(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  
  if (param_2 == (uint *)0x0) {
    return;
  }
  do {
    if (1 < (int)param_2[2]) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x134);
    if (0x400 < iVar1) {
      return;
    }
    uVar2 = *param_2;
    param_2[2] = param_2[2] + 1;
    if (uVar2 < 0x34) {
      if (uVar2 < 9) {
        if ((uVar2 != 7) && (uVar2 != 8)) {
          if (uVar2 < 4) {
            if (uVar2 == 0) {
              return;
            }
          }
          else {
            if (uVar2 != 4) {
              return;
            }
            *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 1;
          }
LAB_0010572f:
          piVar4 = *(int **)(param_2 + 4);
LAB_00105733:
          *(int *)(param_1 + 0x134) = iVar1 + 1;
          FUN_001056b0(param_1,piVar4);
          FUN_001056b0(param_1,*(undefined8 *)(param_2 + 6));
          *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + -1;
          return;
        }
      }
      else {
        uVar3 = 1L << ((byte)uVar2 & 0x3f);
        if ((uVar3 & 0x3ef67fefffe00) != 0) goto LAB_0010572f;
        if ((uVar3 & 0x1800000000) != 0) {
          piVar4 = *(int **)(param_2 + 4);
          if (*piVar4 == 5) {
            *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
          }
          goto LAB_00105733;
        }
        if (uVar2 != 0x33) {
          return;
        }
      }
      param_2 = *(uint **)(param_2 + 6);
    }
    else {
      if (0x21 < uVar2 - 0x34) {
        return;
      }
      uVar3 = 1L << ((byte)(uVar2 - 0x34) & 0x3f);
      if ((uVar3 & 0x3fc13fff) != 0) goto LAB_0010572f;
      if (((uVar3 & 0x200060000) == 0) && ((uVar3 & 0x180000) == 0)) {
        return;
      }
      param_2 = *(uint **)(param_2 + 4);
    }
    if (param_2 == (uint *)0x0) {
      return;
    }
  } while( true );
}


////>>0x00105800>>FUN_00105800>>////

void FUN_00105800(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long local_28;
  undefined8 uStack_20;
  
  if (((param_3 != 0) && (*(int *)(param_3 + 4) < 2)) &&
     (iVar1 = *(int *)(param_1 + 0x134), iVar1 < 0x401)) {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    uStack_20 = *(undefined8 *)(param_1 + 0x148);
    *(int *)(param_1 + 0x134) = iVar1 + 1;
    *(long **)(param_1 + 0x148) = &local_28;
    local_28 = param_3;
    FUN_00108a70(param_1,param_2,param_3);
    *(undefined8 *)(param_1 + 0x148) = uStack_20;
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + -1;
    *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + -1;
    return;
  }
  *(undefined4 *)(param_1 + 0x130) = 1;
  return;
}


////>>0x001058a0>>FUN_001058a0>>////

void FUN_001058a0(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  
  switch(*param_3) {
  case 3:
    param_3 = *(undefined4 **)(param_3 + 4);
  default:
    goto LAB_001058d3;
  case 0x19:
  case 0x1c:
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar3 = 4;
      *param_1 = 0x73657220;
LAB_00106664:
      lVar2 = lVar3 + 1;
      *(long *)(param_1 + 0x40) = lVar2;
      *(undefined *)((long)param_1 + lVar3) = 0x74;
      *(undefined *)(param_1 + 0x42) = 0x74;
      if (lVar2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        lVar2 = 2;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        *(undefined2 *)param_1 = 0x6972;
      }
      else {
LAB_00107440:
        lVar3 = lVar2 + 1;
        *(long *)(param_1 + 0x40) = lVar3;
        *(undefined *)((long)param_1 + lVar2) = 0x72;
        *(undefined *)(param_1 + 0x42) = 0x72;
        if (lVar3 != 0xff) {
LAB_001073c4:
          lVar1 = lVar3 + 1;
          *(long *)(param_1 + 0x40) = lVar1;
          *(undefined *)((long)param_1 + lVar3) = 0x69;
          *(undefined *)(param_1 + 0x42) = 0x69;
          if (lVar1 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
            *(undefined *)param_1 = 99;
            lVar2 = 1;
            *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
            goto LAB_00105b90;
          }
          goto LAB_0010736c;
        }
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(undefined *)param_1 = 0x69;
        lVar2 = 1;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      }
      *(undefined *)((long)param_1 + lVar2) = 99;
      lVar2 = lVar2 + 1;
    }
    else {
      *(long *)(param_1 + 0x40) = lVar2 + 1;
      *(undefined *)((long)param_1 + lVar2) = 0x20;
      *(undefined *)(param_1 + 0x42) = 0x20;
      if (lVar2 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar2 = 4;
        *param_1 = 0x74736572;
        goto LAB_00107440;
      }
      *(long *)(param_1 + 0x40) = lVar2 + 2;
      *(undefined *)((long)param_1 + lVar2 + 1) = 0x72;
      *(undefined *)(param_1 + 0x42) = 0x72;
      if (lVar2 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar3 = 4;
        *param_1 = 0x72747365;
        goto LAB_001073c4;
      }
      *(long *)(param_1 + 0x40) = lVar2 + 3;
      *(undefined *)((long)param_1 + lVar2 + 2) = 0x65;
      *(undefined *)(param_1 + 0x42) = 0x65;
      if (lVar2 + 3 != 0xff) {
        lVar3 = lVar2 + 4;
        *(long *)(param_1 + 0x40) = lVar3;
        *(undefined *)((long)param_1 + lVar2 + 3) = 0x73;
        *(undefined *)(param_1 + 0x42) = 0x73;
        if (lVar3 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
          *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
          lVar2 = 4;
          *param_1 = 0x63697274;
          goto LAB_00105b90;
        }
        goto LAB_00106664;
      }
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar1 = 4;
      *param_1 = 0x69727473;
LAB_0010736c:
      lVar2 = lVar1 + 1;
      *(long *)(param_1 + 0x40) = lVar2;
      *(undefined *)((long)param_1 + lVar1) = 99;
      *(undefined *)(param_1 + 0x42) = 99;
joined_r0x00106818:
      if (lVar2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar3 = 1;
        lVar2 = 0;
        goto LAB_00105b94;
      }
    }
    goto LAB_00105b90;
  case 0x1a:
  case 0x1d:
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar3 = 4;
      *param_1 = 0x6c6f7620;
LAB_001066f4:
      lVar2 = lVar3 + 1;
      *(long *)(param_1 + 0x40) = lVar2;
      *(undefined *)((long)param_1 + lVar3) = 0x61;
      *(undefined *)(param_1 + 0x42) = 0x61;
      if (lVar2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(undefined *)param_1 = 0x74;
        lVar2 = 1;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
LAB_00105a98:
        *(undefined *)((long)param_1 + lVar2) = 0x69;
        lVar3 = lVar2 + 2;
        *(undefined *)((long)param_1 + lVar2 + 1) = 0x6c;
      }
      else {
LAB_00106fec:
        lVar3 = lVar2 + 1;
        *(long *)(param_1 + 0x40) = lVar3;
        *(undefined *)((long)param_1 + lVar2) = 0x74;
        *(undefined *)(param_1 + 0x42) = 0x74;
        if (lVar3 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
          *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
          *(undefined2 *)param_1 = 0x6c69;
          lVar3 = 2;
        }
        else {
LAB_00106f6c:
          lVar2 = lVar3 + 1;
          *(long *)(param_1 + 0x40) = lVar2;
          *(undefined *)((long)param_1 + lVar3) = 0x69;
          *(undefined *)(param_1 + 0x42) = 0x69;
          if (lVar2 != 0xff) goto LAB_00106cdc;
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
          *(undefined *)param_1 = 0x6c;
          lVar3 = 1;
          *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        }
      }
LAB_00105aa5:
      lVar2 = lVar3 + 1;
    }
    else {
      *(long *)(param_1 + 0x40) = lVar2 + 1;
      *(undefined *)((long)param_1 + lVar2) = 0x20;
      *(undefined *)(param_1 + 0x42) = 0x20;
      if (lVar2 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar2 = 4;
        *param_1 = 0x616c6f76;
        goto LAB_00106fec;
      }
      *(long *)(param_1 + 0x40) = lVar2 + 2;
      *(undefined *)((long)param_1 + lVar2 + 1) = 0x76;
      *(undefined *)(param_1 + 0x42) = 0x76;
      if (lVar2 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar3 = 4;
        *param_1 = 0x74616c6f;
        goto LAB_00106f6c;
      }
      *(long *)(param_1 + 0x40) = lVar2 + 3;
      *(undefined *)((long)param_1 + lVar2 + 2) = 0x6f;
      *(undefined *)(param_1 + 0x42) = 0x6f;
      if (lVar2 + 3 != 0xff) {
        lVar3 = lVar2 + 4;
        *(long *)(param_1 + 0x40) = lVar3;
        *(undefined *)((long)param_1 + lVar2 + 3) = 0x6c;
        *(undefined *)(param_1 + 0x42) = 0x6c;
        if (lVar3 != 0xff) goto LAB_001066f4;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        *(undefined2 *)param_1 = 0x7461;
        lVar2 = 2;
        goto LAB_00105a98;
      }
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar2 = 4;
      *param_1 = 0x6974616c;
LAB_00106cdc:
      lVar3 = lVar2 + 1;
      *(long *)(param_1 + 0x40) = lVar3;
      *(undefined *)((long)param_1 + lVar2) = 0x6c;
      *(undefined *)(param_1 + 0x42) = 0x6c;
      if (lVar3 != 0xff) goto LAB_00105aa5;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar2 = 1;
      lVar3 = 0;
    }
    *(long *)(param_1 + 0x40) = lVar2;
    *(undefined *)((long)param_1 + lVar3) = 0x65;
    *(undefined *)(param_1 + 0x42) = 0x65;
    break;
  case 0x1b:
  case 0x1e:
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar3 = 4;
      *param_1 = 0x6e6f6320;
LAB_001067fc:
      lVar2 = lVar3 + 1;
      *(long *)(param_1 + 0x40) = lVar2;
      *(undefined *)((long)param_1 + lVar3) = 0x73;
      *(undefined *)(param_1 + 0x42) = 0x73;
      goto joined_r0x00106818;
    }
    *(long *)(param_1 + 0x40) = lVar2 + 1;
    *(undefined *)((long)param_1 + lVar2) = 0x20;
    *(undefined *)(param_1 + 0x42) = 0x20;
    if (lVar2 + 1 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar2 = 4;
      *param_1 = 0x736e6f63;
    }
    else {
      *(long *)(param_1 + 0x40) = lVar2 + 2;
      *(undefined *)((long)param_1 + lVar2 + 1) = 99;
      *(undefined *)(param_1 + 0x42) = 99;
      if (lVar2 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        lVar2 = 2;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        *(undefined2 *)param_1 = 0x6e6f;
      }
      else {
        *(long *)(param_1 + 0x40) = lVar2 + 3;
        *(undefined *)((long)param_1 + lVar2 + 2) = 0x6f;
        *(undefined *)(param_1 + 0x42) = 0x6f;
        if (lVar2 + 3 != 0xff) {
          lVar3 = lVar2 + 4;
          *(long *)(param_1 + 0x40) = lVar3;
          *(undefined *)((long)param_1 + lVar2 + 3) = 0x6e;
          *(undefined *)(param_1 + 0x42) = 0x6e;
          if (lVar3 != 0xff) goto LAB_001067fc;
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
          *(undefined *)param_1 = 0x73;
          lVar2 = 1;
          *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
          goto LAB_00105b90;
        }
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(undefined *)param_1 = 0x6e;
        lVar2 = 1;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      }
      *(undefined *)((long)param_1 + lVar2) = 0x73;
      lVar2 = lVar2 + 1;
    }
LAB_00105b90:
    lVar3 = lVar2 + 1;
LAB_00105b94:
    *(long *)(param_1 + 0x40) = lVar3;
    *(undefined *)((long)param_1 + lVar2) = 0x74;
    *(undefined *)(param_1 + 0x42) = 0x74;
    return;
  case 0x1f:
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 != 0xff) {
      lVar3 = lVar2 + 1;
      *(long *)(param_1 + 0x40) = lVar3;
      *(undefined *)((long)param_1 + lVar2) = 0x20;
      *(undefined *)(param_1 + 0x42) = 0x20;
      goto joined_r0x00105bc5;
    }
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
    *(undefined *)param_1 = 0x20;
    lVar3 = 1;
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
    goto LAB_00105bcb;
  case 0x20:
    lVar3 = *(long *)(param_1 + 0x40);
    if (lVar3 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(undefined2 *)param_1 = 0x2620;
      lVar3 = 2;
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
      *(long *)(param_1 + 0x40) = lVar2;
      *(undefined *)((long)param_1 + lVar3) = 0x20;
      *(undefined *)(param_1 + 0x42) = 0x20;
      if (lVar2 != 0xff) goto LAB_00105df4;
LAB_00105d26:
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(undefined *)param_1 = 0x26;
      lVar3 = 1;
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
    }
    goto LAB_00105bcb;
  case 0x21:
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(undefined *)param_1 = 0x20;
      *(undefined *)(param_1 + 0x42) = 0x20;
      param_3 = *(undefined4 **)(param_3 + 6);
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      *(undefined8 *)(param_1 + 0x40) = 1;
    }
    else {
      *(long *)(param_1 + 0x40) = lVar2 + 1;
      *(undefined *)((long)param_1 + lVar2) = 0x20;
      *(undefined *)(param_1 + 0x42) = 0x20;
      param_3 = *(undefined4 **)(param_3 + 6);
    }
    goto LAB_001058d3;
  case 0x22:
    if ((param_2 & 4) == 0) {
      lVar2 = *(long *)(param_1 + 0x40);
      if (lVar2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar3 = 1;
        lVar2 = 0;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x40) = lVar3;
      *(undefined *)((long)param_1 + lVar2) = 0x2a;
      *(undefined *)(param_1 + 0x42) = 0x2a;
    }
    break;
  case 0x23:
    lVar3 = *(long *)(param_1 + 0x40);
joined_r0x00105bc5:
    if (lVar3 == 0xff) goto LAB_00106496;
LAB_00105bcb:
    *(long *)(param_1 + 0x40) = lVar3 + 1;
    *(undefined *)((long)param_1 + lVar3) = 0x26;
    *(undefined *)(param_1 + 0x42) = 0x26;
    break;
  case 0x24:
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0xff) goto LAB_00105d26;
LAB_00105df4:
    lVar3 = lVar2 + 1;
    *(long *)(param_1 + 0x40) = lVar3;
    *(undefined *)((long)param_1 + lVar2) = 0x26;
    *(undefined *)(param_1 + 0x42) = 0x26;
    if (lVar3 != 0xff) goto LAB_00105bcb;
LAB_00106496:
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
    *(undefined8 *)(param_1 + 0x40) = 1;
    *(undefined *)param_1 = 0x26;
    *(undefined *)(param_1 + 0x42) = 0x26;
    break;
  case 0x25:
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar3 = 4;
      *param_1 = 0x6f435f20;
LAB_0010677c:
      lVar2 = lVar3 + 1;
      *(long *)(param_1 + 0x40) = lVar2;
      *(undefined *)((long)param_1 + lVar3) = 0x6d;
      *(undefined *)(param_1 + 0x42) = 0x6d;
      if (lVar2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(undefined *)param_1 = 0x70;
        lVar2 = 1;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
LAB_00105ef2:
        *(undefined *)((long)param_1 + lVar2) = 0x6c;
        lVar3 = lVar2 + 2;
        *(undefined *)((long)param_1 + lVar2 + 1) = 0x65;
      }
      else {
LAB_00106ddc:
        lVar3 = lVar2 + 1;
        *(long *)(param_1 + 0x40) = lVar3;
        *(undefined *)((long)param_1 + lVar2) = 0x70;
        *(undefined *)(param_1 + 0x42) = 0x70;
        if (lVar3 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
          lVar3 = 2;
          *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
          *(undefined2 *)param_1 = 0x656c;
        }
        else {
LAB_00106d5c:
          lVar2 = lVar3 + 1;
          *(long *)(param_1 + 0x40) = lVar2;
          *(undefined *)((long)param_1 + lVar3) = 0x6c;
          *(undefined *)(param_1 + 0x42) = 0x6c;
          if (lVar2 != 0xff) goto LAB_00106c5c;
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
          *(undefined *)param_1 = 0x65;
          lVar3 = 1;
          *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        }
      }
LAB_00105eff:
      lVar2 = lVar3 + 1;
    }
    else {
      *(long *)(param_1 + 0x40) = lVar2 + 1;
      *(undefined *)((long)param_1 + lVar2) = 0x20;
      *(undefined *)(param_1 + 0x42) = 0x20;
      if (lVar2 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar2 = 4;
        *param_1 = 0x6d6f435f;
        goto LAB_00106ddc;
      }
      *(long *)(param_1 + 0x40) = lVar2 + 2;
      *(undefined *)((long)param_1 + lVar2 + 1) = 0x5f;
      *(undefined *)(param_1 + 0x42) = 0x5f;
      if (lVar2 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar3 = 4;
        *param_1 = 0x706d6f43;
        goto LAB_00106d5c;
      }
      *(long *)(param_1 + 0x40) = lVar2 + 3;
      *(undefined *)((long)param_1 + lVar2 + 2) = 0x43;
      *(undefined *)(param_1 + 0x42) = 0x43;
      if (lVar2 + 3 != 0xff) {
        lVar3 = lVar2 + 4;
        *(long *)(param_1 + 0x40) = lVar3;
        *(undefined *)((long)param_1 + lVar2 + 3) = 0x6f;
        *(undefined *)(param_1 + 0x42) = 0x6f;
        if (lVar3 != 0xff) goto LAB_0010677c;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        lVar2 = 2;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        *(undefined2 *)param_1 = 0x706d;
        goto LAB_00105ef2;
      }
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar2 = 4;
      *param_1 = 0x6c706d6f;
LAB_00106c5c:
      lVar3 = lVar2 + 1;
      *(long *)(param_1 + 0x40) = lVar3;
      *(undefined *)((long)param_1 + lVar2) = 0x65;
      *(undefined *)(param_1 + 0x42) = 0x65;
      if (lVar3 != 0xff) goto LAB_00105eff;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar2 = 1;
      lVar3 = 0;
    }
    *(long *)(param_1 + 0x40) = lVar2;
    *(undefined *)((long)param_1 + lVar3) = 0x78;
    *(undefined *)(param_1 + 0x42) = 0x78;
    break;
  case 0x26:
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar3 = 4;
      *param_1 = 0x6d495f20;
LAB_0010657c:
      lVar2 = lVar3 + 1;
      *(long *)(param_1 + 0x40) = lVar2;
      *(undefined *)((long)param_1 + lVar3) = 0x61;
      *(undefined *)(param_1 + 0x42) = 0x61;
      if (lVar2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        lVar2 = 2;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        *(undefined2 *)param_1 = 0x6967;
      }
      else {
LAB_00107137:
        lVar3 = lVar2 + 1;
        *(long *)(param_1 + 0x40) = lVar3;
        *(undefined *)((long)param_1 + lVar2) = 0x67;
        *(undefined *)(param_1 + 0x42) = 0x67;
        if (lVar3 != 0xff) {
LAB_001070ac:
          lVar2 = lVar3 + 1;
          *(long *)(param_1 + 0x40) = lVar2;
          *(undefined *)((long)param_1 + lVar3) = 0x69;
          *(undefined *)(param_1 + 0x42) = 0x69;
          if (lVar2 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
            *(undefined *)((long)param_1 + 2) = 0x72;
            lVar2 = 3;
            *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
            *(undefined2 *)param_1 = 0x616e;
          }
          else {
LAB_00106e6c:
            lVar3 = lVar2 + 1;
            *(long *)(param_1 + 0x40) = lVar3;
            *(undefined *)((long)param_1 + lVar2) = 0x6e;
            *(undefined *)(param_1 + 0x42) = 0x6e;
            if (lVar3 != 0xff) goto LAB_00105fee;
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
            lVar2 = 2;
            *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
            *(undefined2 *)param_1 = 0x7261;
          }
          goto LAB_0010603d;
        }
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(undefined *)param_1 = 0x69;
        lVar2 = 1;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      }
      *(undefined *)((long)param_1 + lVar2) = 0x6e;
      lVar1 = lVar2 + 2;
      *(undefined *)((long)param_1 + lVar2 + 1) = 0x61;
LAB_001065df:
      lVar2 = lVar1 + 1;
      *(long *)(param_1 + 0x40) = lVar2;
      *(undefined *)((long)param_1 + lVar1) = 0x72;
      *(undefined *)(param_1 + 0x42) = 0x72;
      if (lVar2 != 0xff) goto LAB_0010603d;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar3 = 1;
      lVar2 = 0;
    }
    else {
      *(long *)(param_1 + 0x40) = lVar2 + 1;
      *(undefined *)((long)param_1 + lVar2) = 0x20;
      *(undefined *)(param_1 + 0x42) = 0x20;
      if (lVar2 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar2 = 4;
        *param_1 = 0x616d495f;
        goto LAB_00107137;
      }
      *(long *)(param_1 + 0x40) = lVar2 + 2;
      *(undefined *)((long)param_1 + lVar2 + 1) = 0x5f;
      *(undefined *)(param_1 + 0x42) = 0x5f;
      if (lVar2 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar3 = 4;
        *param_1 = 0x67616d49;
        goto LAB_001070ac;
      }
      *(long *)(param_1 + 0x40) = lVar2 + 3;
      *(undefined *)((long)param_1 + lVar2 + 2) = 0x49;
      *(undefined *)(param_1 + 0x42) = 0x49;
      if (lVar2 + 3 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar2 = 4;
        *param_1 = 0x6967616d;
        goto LAB_00106e6c;
      }
      lVar3 = lVar2 + 4;
      *(long *)(param_1 + 0x40) = lVar3;
      *(undefined *)((long)param_1 + lVar2 + 3) = 0x6d;
      *(undefined *)(param_1 + 0x42) = 0x6d;
      if (lVar3 != 0xff) goto LAB_0010657c;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar3 = 4;
      *param_1 = 0x6e696761;
LAB_00105fee:
      lVar1 = lVar3 + 1;
      *(long *)(param_1 + 0x40) = lVar1;
      *(undefined *)((long)param_1 + lVar3) = 0x61;
      *(undefined *)(param_1 + 0x42) = 0x61;
      if (lVar1 != 0xff) goto LAB_001065df;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(undefined *)param_1 = 0x72;
      lVar2 = 1;
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
LAB_0010603d:
      lVar3 = lVar2 + 1;
    }
    *(long *)(param_1 + 0x40) = lVar3;
    *(undefined *)((long)param_1 + lVar2) = 0x79;
    *(undefined *)(param_1 + 0x42) = 0x79;
    break;
  case 0x2b:
    if (*(char *)(param_1 + 0x42) != '(') {
      lVar2 = *(long *)(param_1 + 0x40);
      if (lVar2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar3 = 1;
        lVar2 = 0;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x40) = lVar3;
      *(undefined *)((long)param_1 + lVar2) = 0x20;
      *(undefined *)(param_1 + 0x42) = 0x20;
    }
    FUN_00105800(param_1,param_2,*(undefined8 *)(param_3 + 4));
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      lVar3 = 2;
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      *(undefined2 *)param_1 = 0x3a3a;
LAB_001060d6:
      lVar2 = lVar3 + 1;
    }
    else {
      *(long *)(param_1 + 0x40) = lVar2 + 1;
      *(undefined *)((long)param_1 + lVar2) = 0x3a;
      *(undefined *)(param_1 + 0x42) = 0x3a;
      if (lVar2 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(undefined *)param_1 = 0x3a;
        lVar3 = 1;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        goto LAB_001060d6;
      }
      lVar3 = lVar2 + 2;
      *(long *)(param_1 + 0x40) = lVar3;
      *(undefined *)((long)param_1 + lVar2 + 1) = 0x3a;
      *(undefined *)(param_1 + 0x42) = 0x3a;
      if (lVar3 != 0xff) goto LAB_001060d6;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar2 = 1;
      lVar3 = 0;
    }
    *(long *)(param_1 + 0x40) = lVar2;
    *(undefined *)((long)param_1 + lVar3) = 0x2a;
    *(undefined *)(param_1 + 0x42) = 0x2a;
    break;
  case 0x2d:
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar3 = 4;
      *param_1 = 0x765f5f20;
LAB_00106a5c:
      lVar2 = lVar3 + 1;
      *(long *)(param_1 + 0x40) = lVar2;
      *(undefined *)((long)param_1 + lVar3) = 0x65;
      *(undefined *)(param_1 + 0x42) = 0x65;
      if (lVar2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(undefined *)param_1 = 99;
        lVar2 = 1;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
LAB_001061c8:
        *(undefined *)((long)param_1 + lVar2) = 0x74;
        lVar3 = lVar2 + 2;
        *(undefined *)((long)param_1 + lVar2 + 1) = 0x6f;
        goto LAB_001061d5;
      }
LAB_001072db:
      lVar3 = lVar2 + 1;
      *(long *)(param_1 + 0x40) = lVar3;
      *(undefined *)((long)param_1 + lVar2) = 99;
      *(undefined *)(param_1 + 0x42) = 99;
      if (lVar3 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(undefined *)((long)param_1 + 2) = 0x72;
        lVar2 = 3;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        *(undefined2 *)param_1 = 0x6f74;
      }
      else {
LAB_00106adc:
        lVar2 = lVar3 + 1;
        *(long *)(param_1 + 0x40) = lVar2;
        *(undefined *)((long)param_1 + lVar3) = 0x74;
        *(undefined *)(param_1 + 0x42) = 0x74;
        if (lVar2 != 0xff) goto LAB_001071bc;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        *(undefined2 *)param_1 = 0x726f;
        lVar2 = 2;
      }
LAB_00106b2f:
      lVar3 = lVar2 + 1;
    }
    else {
      *(long *)(param_1 + 0x40) = lVar2 + 1;
      *(undefined *)((long)param_1 + lVar2) = 0x20;
      *(undefined *)(param_1 + 0x42) = 0x20;
      if (lVar2 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar2 = 4;
        *param_1 = 0x65765f5f;
        goto LAB_001072db;
      }
      *(long *)(param_1 + 0x40) = lVar2 + 2;
      *(undefined *)((long)param_1 + lVar2 + 1) = 0x5f;
      *(undefined *)(param_1 + 0x42) = 0x5f;
      if (lVar2 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar3 = 4;
        *param_1 = 0x6365765f;
        goto LAB_00106adc;
      }
      *(long *)(param_1 + 0x40) = lVar2 + 3;
      *(undefined *)((long)param_1 + lVar2 + 2) = 0x5f;
      *(undefined *)(param_1 + 0x42) = 0x5f;
      if (lVar2 + 3 != 0xff) {
        lVar3 = lVar2 + 4;
        *(long *)(param_1 + 0x40) = lVar3;
        *(undefined *)((long)param_1 + lVar2 + 3) = 0x76;
        *(undefined *)(param_1 + 0x42) = 0x76;
        if (lVar3 != 0xff) goto LAB_00106a5c;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        lVar2 = 2;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        *(undefined2 *)param_1 = 0x6365;
        goto LAB_001061c8;
      }
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar2 = 4;
      *param_1 = 0x74636576;
LAB_001071bc:
      lVar3 = lVar2 + 1;
      *(long *)(param_1 + 0x40) = lVar3;
      *(undefined *)((long)param_1 + lVar2) = 0x6f;
      *(undefined *)(param_1 + 0x42) = 0x6f;
      if (lVar3 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(undefined *)param_1 = 0x72;
        lVar2 = 1;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        goto LAB_00106b2f;
      }
LAB_001061d5:
      lVar2 = lVar3 + 1;
      *(long *)(param_1 + 0x40) = lVar2;
      *(undefined *)((long)param_1 + lVar3) = 0x72;
      *(undefined *)(param_1 + 0x42) = 0x72;
      if (lVar2 != 0xff) goto LAB_00106b2f;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar3 = 1;
      lVar2 = 0;
    }
    *(long *)(param_1 + 0x40) = lVar3;
    *(undefined *)((long)param_1 + lVar2) = 0x28;
    *(undefined *)(param_1 + 0x42) = 0x28;
    lVar2 = *(long *)(param_3 + 4);
    goto LAB_0010641e;
  case 0x4e:
    pcVar4 = " transaction_safe";
    lVar2 = *(long *)(param_1 + 0x40);
    do {
      cVar5 = *pcVar4;
      lVar3 = lVar2;
      if (lVar2 == 0xff) {
        pcVar4 = pcVar4 + 1;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        *(undefined8 *)(param_1 + 0x40) = 1;
        *(char *)param_1 = cVar5;
        *(char *)(param_1 + 0x42) = cVar5;
        if (pcVar4 == "") {
          return;
        }
        cVar5 = *pcVar4;
        lVar3 = 1;
      }
      lVar2 = lVar3 + 1;
      pcVar4 = pcVar4 + 1;
      *(long *)(param_1 + 0x40) = lVar2;
      *(char *)((long)param_1 + lVar3) = cVar5;
      *(char *)(param_1 + 0x42) = cVar5;
    } while (pcVar4 != "");
    break;
  case 0x50:
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar3 = 4;
      *param_1 = 0x656f6e20;
LAB_001069cc:
      lVar2 = lVar3 + 1;
      *(long *)(param_1 + 0x40) = lVar2;
      *(undefined *)((long)param_1 + lVar3) = 0x78;
      *(undefined *)(param_1 + 0x42) = 0x78;
      if (lVar2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(undefined *)((long)param_1 + 2) = 0x70;
        lVar2 = 3;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        *(undefined2 *)param_1 = 0x6563;
        goto LAB_001063ae;
      }
LAB_001075ce:
      lVar3 = lVar2 + 1;
      *(long *)(param_1 + 0x40) = lVar3;
      *(undefined *)((long)param_1 + lVar2) = 99;
      *(undefined *)(param_1 + 0x42) = 99;
      if (lVar3 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        lVar2 = 2;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        *(undefined2 *)param_1 = 0x7065;
      }
      else {
LAB_0010752c:
        lVar1 = lVar3 + 1;
        *(long *)(param_1 + 0x40) = lVar1;
        *(undefined *)((long)param_1 + lVar3) = 0x65;
        *(undefined *)(param_1 + 0x42) = 0x65;
        if (lVar1 != 0xff) goto LAB_0010723c;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(undefined *)param_1 = 0x70;
        lVar2 = 1;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      }
      lVar3 = lVar2 + 1;
      *(long *)(param_1 + 0x40) = lVar3;
      *(undefined *)((long)param_1 + lVar2) = 0x74;
      *(undefined *)(param_1 + 0x42) = 0x74;
      lVar2 = *(long *)(param_3 + 6);
    }
    else {
      *(long *)(param_1 + 0x40) = lVar2 + 1;
      *(undefined *)((long)param_1 + lVar2) = 0x20;
      *(undefined *)(param_1 + 0x42) = 0x20;
      if (lVar2 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar2 = 4;
        *param_1 = 0x78656f6e;
        goto LAB_001075ce;
      }
      *(long *)(param_1 + 0x40) = lVar2 + 2;
      *(undefined *)((long)param_1 + lVar2 + 1) = 0x6e;
      *(undefined *)(param_1 + 0x42) = 0x6e;
      if (lVar2 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar3 = 4;
        *param_1 = 0x6378656f;
        goto LAB_0010752c;
      }
      *(long *)(param_1 + 0x40) = lVar2 + 3;
      *(undefined *)((long)param_1 + lVar2 + 2) = 0x6f;
      *(undefined *)(param_1 + 0x42) = 0x6f;
      if (lVar2 + 3 != 0xff) {
        lVar3 = lVar2 + 4;
        *(long *)(param_1 + 0x40) = lVar3;
        *(undefined *)((long)param_1 + lVar2 + 3) = 0x65;
        *(undefined *)(param_1 + 0x42) = 0x65;
        if (lVar3 != 0xff) goto LAB_001069cc;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar2 = 4;
        *param_1 = 0x70656378;
        goto LAB_001063ae;
      }
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar1 = 4;
      *param_1 = 0x65637865;
LAB_0010723c:
      lVar2 = lVar1 + 1;
      *(long *)(param_1 + 0x40) = lVar2;
      *(undefined *)((long)param_1 + lVar1) = 0x70;
      *(undefined *)(param_1 + 0x42) = 0x70;
      if (lVar2 != 0xff) {
LAB_001063ae:
        lVar3 = lVar2 + 1;
        *(long *)(param_1 + 0x40) = lVar3;
        *(undefined *)((long)param_1 + lVar2) = 0x74;
        *(undefined *)(param_1 + 0x42) = 0x74;
        lVar2 = *(long *)(param_3 + 6);
        goto joined_r0x00106bb9;
      }
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(undefined *)param_1 = 0x74;
      lVar3 = 1;
      *(undefined *)(param_1 + 0x42) = 0x74;
      lVar2 = *(long *)(param_3 + 6);
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      *(undefined8 *)(param_1 + 0x40) = 1;
    }
joined_r0x00106994:
    if (lVar2 == 0) {
      return;
    }
LAB_00105cde:
    lVar1 = lVar3 + 1;
    goto LAB_0010640c;
  case 0x51:
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar3 = 4;
      *param_1 = 0x72687420;
LAB_0010692c:
      lVar2 = lVar3 + 1;
      *(long *)(param_1 + 0x40) = lVar2;
      *(undefined *)((long)param_1 + lVar3) = 0x6f;
      *(undefined *)(param_1 + 0x42) = 0x6f;
      if (lVar2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(undefined *)param_1 = 0x77;
        lVar3 = 1;
        *(undefined *)(param_1 + 0x42) = 0x77;
        lVar2 = *(long *)(param_3 + 6);
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        *(undefined8 *)(param_1 + 0x40) = 1;
        goto joined_r0x00106994;
      }
    }
    else {
      *(long *)(param_1 + 0x40) = lVar2 + 1;
      *(undefined *)((long)param_1 + lVar2) = 0x20;
      *(undefined *)(param_1 + 0x42) = 0x20;
      if (lVar2 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        lVar2 = 4;
        *param_1 = 0x6f726874;
      }
      else {
        *(long *)(param_1 + 0x40) = lVar2 + 2;
        *(undefined *)((long)param_1 + lVar2 + 1) = 0x74;
        *(undefined *)(param_1 + 0x42) = 0x74;
        if (lVar2 + 2 != 0xff) {
          *(long *)(param_1 + 0x40) = lVar2 + 3;
          *(undefined *)((long)param_1 + lVar2 + 2) = 0x68;
          *(undefined *)(param_1 + 0x42) = 0x68;
          if (lVar2 + 3 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
            *(undefined2 *)param_1 = 0x6f72;
            lVar2 = 2;
            *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
          }
          else {
            lVar3 = lVar2 + 4;
            *(long *)(param_1 + 0x40) = lVar3;
            *(undefined *)((long)param_1 + lVar2 + 3) = 0x72;
            *(undefined *)(param_1 + 0x42) = 0x72;
            if (lVar3 != 0xff) goto LAB_0010692c;
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
            *(undefined *)param_1 = 0x6f;
            lVar2 = 1;
            *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
          }
          lVar3 = lVar2 + 1;
          *(long *)(param_1 + 0x40) = lVar3;
          *(undefined *)((long)param_1 + lVar2) = 0x77;
          *(undefined *)(param_1 + 0x42) = 0x77;
          lVar2 = *(long *)(param_3 + 6);
          goto joined_r0x00106994;
        }
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
        *(undefined *)((long)param_1 + 2) = 0x6f;
        lVar2 = 3;
        *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        *(undefined2 *)param_1 = 0x7268;
      }
    }
    lVar3 = lVar2 + 1;
    *(long *)(param_1 + 0x40) = lVar3;
    *(undefined *)((long)param_1 + lVar2) = 0x77;
    *(undefined *)(param_1 + 0x42) = 0x77;
    lVar2 = *(long *)(param_3 + 6);
joined_r0x00106bb9:
    if (lVar2 == 0) {
      return;
    }
    if (lVar3 != 0xff) goto LAB_00105cde;
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
    lVar2 = *(long *)(param_3 + 6);
    lVar3 = 0;
    lVar1 = 1;
LAB_0010640c:
    *(long *)(param_1 + 0x40) = lVar1;
    *(undefined *)((long)param_1 + lVar3) = 0x28;
    *(undefined *)(param_1 + 0x42) = 0x28;
LAB_0010641e:
    FUN_00105800(param_1,param_2,lVar2);
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x44))(param_1,0xff,*(undefined8 *)(param_1 + 0x46));
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      lVar3 = 1;
      lVar2 = 0;
    }
    else {
      lVar3 = lVar2 + 1;
    }
    *(long *)(param_1 + 0x40) = lVar3;
    *(undefined *)((long)param_1 + lVar2) = 0x29;
    *(undefined *)(param_1 + 0x42) = 0x29;
    return;
  }
  return;
LAB_001058d3:
  FUN_00105800(param_1,param_2,param_3);
  return;
}


////>>0x00107690>>FUN_00107690>>////

void FUN_00107690(undefined2 *param_1,undefined4 param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = param_4;
  if (param_4 == (long *)0x0) {
    lVar2 = *(long *)(param_1 + 0x80);
LAB_001078c6:
    if (lVar2 == 0xff) goto LAB_001078d2;
LAB_00107783:
    lVar3 = lVar2 + 1;
    *(long *)(param_1 + 0x80) = lVar3;
    *(undefined *)((long)param_1 + lVar2) = 0x20;
    *(undefined *)(param_1 + 0x84) = 0x20;
joined_r0x001076f6:
    if (lVar3 != 0xff) {
LAB_001076fc:
      lVar2 = lVar3 + 1;
      *(long *)(param_1 + 0x80) = lVar2;
      *(undefined *)((long)param_1 + lVar3) = 0x5b;
      *(undefined *)(param_1 + 0x84) = 0x5b;
      if (*(long *)(param_3 + 0x10) != 0) goto LAB_0010771f;
      if (lVar2 != 0xff) goto LAB_0010773d;
      goto LAB_0010780c;
    }
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined *)param_1 = 0x5b;
    *(undefined *)(param_1 + 0x84) = 0x5b;
    lVar3 = *(long *)(param_3 + 0x10);
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *(undefined8 *)(param_1 + 0x80) = 1;
    if (lVar3 != 0) goto LAB_0010771f;
    lVar2 = 1;
  }
  else {
    do {
      if (*(int *)(plVar1 + 2) == 0) {
        if (*(int *)plVar1[1] == 0x2a) {
          FUN_001079d0(param_1,param_2,param_4,0);
          lVar3 = *(long *)(param_1 + 0x80);
          goto joined_r0x001076f6;
        }
        lVar3 = *(long *)(param_1 + 0x80);
        if (lVar3 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(undefined *)param_1 = 0x20;
          lVar2 = 1;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
LAB_00107876:
          lVar3 = lVar2 + 1;
        }
        else {
          lVar2 = lVar3 + 1;
          *(long *)(param_1 + 0x80) = lVar2;
          *(undefined *)((long)param_1 + lVar3) = 0x20;
          *(undefined *)(param_1 + 0x84) = 0x20;
          if (lVar2 != 0xff) goto LAB_00107876;
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar3 = 1;
          lVar2 = 0;
        }
        *(long *)(param_1 + 0x80) = lVar3;
        *(undefined *)((long)param_1 + lVar2) = 0x28;
        *(undefined *)(param_1 + 0x84) = 0x28;
        FUN_001079d0(param_1,param_2,param_4,0);
        lVar3 = *(long *)(param_1 + 0x80);
        if (lVar3 != 0xff) {
          lVar2 = lVar3 + 1;
          *(long *)(param_1 + 0x80) = lVar2;
          *(undefined *)((long)param_1 + lVar3) = 0x29;
          *(undefined *)(param_1 + 0x84) = 0x29;
          goto LAB_001078c6;
        }
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x2029;
        lVar3 = 2;
        goto LAB_001076fc;
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
    FUN_001079d0(param_1,param_2,param_4,0);
    lVar2 = *(long *)(param_1 + 0x80);
    if (lVar2 != 0xff) goto LAB_00107783;
LAB_001078d2:
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined *)(param_1 + 0x84) = 0x5b;
    *param_1 = 0x5b20;
    lVar3 = *(long *)(param_3 + 0x10);
    lVar2 = 2;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *(undefined8 *)(param_1 + 0x80) = 2;
    if (lVar3 != 0) {
LAB_0010771f:
      FUN_00105800(param_1,param_2);
      lVar2 = *(long *)(param_1 + 0x80);
      if (lVar2 == 0xff) {
LAB_0010780c:
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar3 = 1;
        lVar2 = 0;
        goto LAB_00107741;
      }
    }
  }
LAB_0010773d:
  lVar3 = lVar2 + 1;
LAB_00107741:
  *(long *)(param_1 + 0x80) = lVar3;
  *(undefined *)((long)param_1 + lVar2) = 0x5d;
  *(undefined *)(param_1 + 0x84) = 0x5d;
  return;
}


////>>0x001079d0>>FUN_001079d0>>////

void FUN_001079d0(undefined2 *param_1,uint param_2,long **param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  size_t sVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  int *piVar12;
  undefined8 uVar13;
  char *__s;
  char local_58 [40];
  
  if (param_3 == (long **)0x0) {
    return;
  }
  if (param_4 == 0) {
    iVar5 = *(int *)(param_1 + 0x98);
    while (iVar5 == 0) {
      if (*(int *)(param_3 + 2) == 0) {
        plVar11 = param_3[1];
        iVar5 = *(int *)plVar11;
        if (iVar5 - 0x1cU < 0x36) {
          if ((0x3400000000001fU >> ((ulong)(iVar5 - 0x1cU) & 0x3f) & 1) != 0) goto LAB_00107a63;
          *(undefined4 *)(param_3 + 2) = 1;
          uVar13 = *(undefined8 *)(param_1 + 0x90);
          *(long **)(param_1 + 0x90) = param_3[3];
          if (iVar5 == 0x29) {
LAB_00107ba0:
            FUN_001085e0(param_1,param_2,plVar11,*param_3);
            *(undefined8 *)(param_1 + 0x90) = uVar13;
            return;
          }
          if (iVar5 == 0x2a) {
LAB_00107bc4:
            FUN_00107690(param_1,param_2,plVar11,*param_3);
            *(undefined8 *)(param_1 + 0x90) = uVar13;
            return;
          }
        }
        else {
          *(undefined4 *)(param_3 + 2) = 1;
          uVar13 = *(undefined8 *)(param_1 + 0x90);
          *(long **)(param_1 + 0x90) = param_3[3];
          if (iVar5 == 2) goto LAB_00107aa8;
        }
        FUN_001058a0(param_1,param_2);
        *(undefined8 *)(param_1 + 0x90) = uVar13;
      }
LAB_00107a63:
      param_3 = (long **)*param_3;
      if (param_3 == (long **)0x0) {
        return;
      }
      iVar5 = *(int *)(param_1 + 0x98);
    }
  }
  else {
    do {
      if (*(int *)(param_1 + 0x98) != 0) {
        return;
      }
      if (*(int *)(param_3 + 2) == 0) {
        plVar11 = param_3[1];
        uVar13 = *(undefined8 *)(param_1 + 0x90);
        iVar5 = *(int *)plVar11;
        *(undefined4 *)(param_3 + 2) = 1;
        *(long **)(param_1 + 0x90) = param_3[3];
        if (iVar5 == 0x29) goto LAB_00107ba0;
        if (iVar5 == 0x2a) goto LAB_00107bc4;
        if (iVar5 == 2) goto LAB_00107aa8;
        FUN_001058a0(param_1,param_2);
        *(undefined8 *)(param_1 + 0x90) = uVar13;
      }
      param_3 = (long **)*param_3;
    } while (param_3 != (long **)0x0);
  }
  return;
LAB_00107aa8:
  uVar3 = *(undefined8 *)(param_1 + 0x94);
  lVar9 = plVar11[2];
  *(undefined8 *)(param_1 + 0x94) = 0;
  FUN_00105800(param_1,param_2,lVar9);
  *(undefined8 *)(param_1 + 0x94) = uVar3;
  if ((param_2 & 4) == 0) {
    lVar9 = *(long *)(param_1 + 0x80);
    if (lVar9 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)param_1 = 0x3a;
      lVar7 = 1;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
LAB_00107b11:
      lVar9 = lVar7 + 1;
    }
    else {
      lVar7 = lVar9 + 1;
      *(long *)(param_1 + 0x80) = lVar7;
      *(undefined *)((long)param_1 + lVar9) = 0x3a;
      *(undefined *)(param_1 + 0x84) = 0x3a;
      if (lVar7 != 0xff) goto LAB_00107b11;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar9 = 1;
      lVar7 = 0;
    }
    *(long *)(param_1 + 0x80) = lVar9;
    *(undefined *)((long)param_1 + lVar7) = 0x3a;
    uVar4 = 0x3a;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x80);
    if (lVar9 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar7 = 1;
      lVar9 = 0;
    }
    else {
      lVar7 = lVar9 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar7;
    *(undefined *)((long)param_1 + lVar9) = 0x2e;
    uVar4 = 0x2e;
  }
  *(undefined *)(param_1 + 0x84) = uVar4;
  piVar12 = (int *)param_3[1][3];
  iVar5 = *piVar12;
  if (iVar5 != 0x48) goto LAB_00107c2f;
  lVar9 = *(long *)(param_1 + 0x80);
  if (lVar9 == 0xff) {
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined *)(param_1 + 1) = 0x65;
    lVar7 = 3;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *param_1 = 0x647b;
LAB_0010810e:
    lVar9 = lVar7 + 1;
    *(long *)(param_1 + 0x80) = lVar9;
    *(undefined *)((long)param_1 + lVar7) = 0x66;
    *(undefined *)(param_1 + 0x84) = 0x66;
    if (lVar9 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x6c;
      lVar9 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x7561;
      goto LAB_00108169;
    }
LAB_0010824d:
    lVar7 = lVar9 + 1;
    *(long *)(param_1 + 0x80) = lVar7;
    *(undefined *)((long)param_1 + lVar9) = 0x61;
    *(undefined *)(param_1 + 0x84) = 0x61;
    if (lVar7 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x74;
      lVar7 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6c75;
      goto LAB_001082a9;
    }
LAB_0010837a:
    lVar6 = lVar7 + 1;
    *(long *)(param_1 + 0x80) = lVar6;
    *(undefined *)((long)param_1 + lVar7) = 0x75;
    *(undefined *)(param_1 + 0x84) = 0x75;
    if (lVar6 != 0xff) goto LAB_00107d89;
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined *)(param_1 + 1) = 0x20;
    lVar9 = 3;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *param_1 = 0x746c;
LAB_001083d5:
    lVar7 = lVar9 + 1;
    *(long *)(param_1 + 0x80) = lVar7;
    *(undefined *)((long)param_1 + lVar9) = 0x61;
    *(undefined *)(param_1 + 0x84) = 0x61;
    if (lVar7 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      lVar7 = 2;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6772;
    }
    else {
LAB_00107de3:
      lVar9 = lVar7 + 1;
      *(long *)(param_1 + 0x80) = lVar9;
      *(undefined *)((long)param_1 + lVar7) = 0x72;
      *(undefined *)(param_1 + 0x84) = 0x72;
      if (lVar9 != 0xff) goto LAB_001081c2;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)param_1 = 0x67;
      lVar7 = 1;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    }
LAB_00107e34:
    lVar9 = lVar7 + 1;
  }
  else {
    *(long *)(param_1 + 0x80) = lVar9 + 1;
    *(undefined *)((long)param_1 + lVar9) = 0x7b;
    *(undefined *)(param_1 + 0x84) = 0x7b;
    if (lVar9 + 1 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x66;
      lVar9 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6564;
      goto LAB_0010824d;
    }
    *(long *)(param_1 + 0x80) = lVar9 + 2;
    *(undefined *)((long)param_1 + lVar9 + 1) = 100;
    *(undefined *)(param_1 + 0x84) = 100;
    if (lVar9 + 2 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x61;
      lVar7 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6665;
      goto LAB_0010837a;
    }
    lVar7 = lVar9 + 3;
    *(long *)(param_1 + 0x80) = lVar7;
    *(undefined *)((long)param_1 + lVar9 + 2) = 0x65;
    *(undefined *)(param_1 + 0x84) = 0x65;
    if (lVar7 != 0xff) goto LAB_0010810e;
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined *)(param_1 + 1) = 0x75;
    lVar6 = 3;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *param_1 = 0x6166;
LAB_00107d89:
    lVar9 = lVar6 + 1;
    *(long *)(param_1 + 0x80) = lVar9;
    *(undefined *)((long)param_1 + lVar6) = 0x6c;
    *(undefined *)(param_1 + 0x84) = 0x6c;
    if (lVar9 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x61;
      lVar7 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x2074;
      goto LAB_00107de3;
    }
LAB_00108169:
    lVar7 = lVar9 + 1;
    *(long *)(param_1 + 0x80) = lVar7;
    *(undefined *)((long)param_1 + lVar9) = 0x74;
    *(undefined *)(param_1 + 0x84) = 0x74;
    if (lVar7 != 0xff) {
LAB_001082a9:
      lVar9 = lVar7 + 1;
      *(long *)(param_1 + 0x80) = lVar9;
      *(undefined *)((long)param_1 + lVar7) = 0x20;
      *(undefined *)(param_1 + 0x84) = 0x20;
      if (lVar9 != 0xff) goto LAB_001083d5;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x67;
      lVar7 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x7261;
      goto LAB_00107e34;
    }
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined *)(param_1 + 1) = 0x72;
    lVar9 = 3;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *param_1 = 0x6120;
LAB_001081c2:
    lVar7 = lVar9 + 1;
    *(long *)(param_1 + 0x80) = lVar7;
    *(undefined *)((long)param_1 + lVar9) = 0x67;
    *(undefined *)(param_1 + 0x84) = 0x67;
    if (lVar7 != 0xff) goto LAB_00107e34;
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    lVar9 = 1;
    lVar7 = 0;
  }
  *(long *)(param_1 + 0x80) = lVar9;
  __s = local_58;
  *(undefined *)((long)param_1 + lVar7) = 0x23;
  *(undefined *)(param_1 + 0x84) = 0x23;
  sprintf(__s,"%d",(ulong)(piVar12[6] + 1));
  sVar8 = strlen(__s);
  lVar9 = *(long *)(param_1 + 0x80);
  if (sVar8 != 0) {
    pcVar1 = __s + sVar8;
    uVar10 = (uint)sVar8 & 3;
    if ((sVar8 & 3) != 0) {
      if (uVar10 != 1) {
        lVar7 = lVar9;
        if (uVar10 != 2) {
          if (lVar9 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar9 = 0;
            lVar7 = 1;
          }
          else {
            lVar7 = lVar9 + 1;
          }
          *(long *)(param_1 + 0x80) = lVar7;
          __s = local_58 + 1;
          *(char *)((long)param_1 + lVar9) = local_58[0];
          *(char *)(param_1 + 0x84) = local_58[0];
        }
        cVar2 = *__s;
        if (lVar7 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar9 = 1;
          lVar7 = 0;
        }
        else {
          lVar9 = lVar7 + 1;
        }
        *(long *)(param_1 + 0x80) = lVar9;
        __s = __s + 1;
        *(char *)((long)param_1 + lVar7) = cVar2;
        *(char *)(param_1 + 0x84) = cVar2;
      }
      cVar2 = *__s;
      if (lVar9 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar6 = 0;
        lVar7 = 1;
      }
      else {
        lVar7 = lVar9 + 1;
        lVar6 = lVar9;
      }
      lVar9 = lVar7;
      *(long *)(param_1 + 0x80) = lVar9;
      __s = __s + 1;
      *(char *)((long)param_1 + lVar6) = cVar2;
      *(char *)(param_1 + 0x84) = cVar2;
      if (pcVar1 == __s) goto LAB_00108031;
    }
    do {
      cVar2 = *__s;
      if (lVar9 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar7 = 1;
        lVar9 = 0;
      }
      else {
        lVar7 = lVar9 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar7;
      *(char *)((long)param_1 + lVar9) = cVar2;
      *(char *)(param_1 + 0x84) = cVar2;
      cVar2 = __s[1];
      if (lVar7 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar7 = 0;
        lVar9 = 1;
      }
      else {
        lVar9 = lVar7 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar9;
      *(char *)((long)param_1 + lVar7) = cVar2;
      *(char *)(param_1 + 0x84) = cVar2;
      cVar2 = __s[2];
      if (lVar9 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar9 = 0;
        lVar7 = 1;
      }
      else {
        lVar7 = lVar9 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar7;
      *(char *)((long)param_1 + lVar9) = cVar2;
      *(char *)(param_1 + 0x84) = cVar2;
      cVar2 = __s[3];
      if (lVar7 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar7 = 0;
        lVar9 = 1;
      }
      else {
        lVar9 = lVar7 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar9;
      __s = __s + 4;
      *(char *)((long)param_1 + lVar7) = cVar2;
      *(char *)(param_1 + 0x84) = cVar2;
    } while (pcVar1 != __s);
  }
LAB_00108031:
  if (lVar9 == 0xff) {
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    lVar7 = 2;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *param_1 = 0x3a7d;
LAB_00108085:
    lVar9 = lVar7 + 1;
  }
  else {
    *(long *)(param_1 + 0x80) = lVar9 + 1;
    *(undefined *)((long)param_1 + lVar9) = 0x7d;
    *(undefined *)(param_1 + 0x84) = 0x7d;
    if (lVar9 + 1 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)param_1 = 0x3a;
      lVar7 = 1;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      goto LAB_00108085;
    }
    lVar7 = lVar9 + 2;
    *(long *)(param_1 + 0x80) = lVar7;
    *(undefined *)((long)param_1 + lVar9 + 1) = 0x3a;
    *(undefined *)(param_1 + 0x84) = 0x3a;
    if (lVar7 != 0xff) goto LAB_00108085;
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    lVar9 = 1;
    lVar7 = 0;
  }
  *(long *)(param_1 + 0x80) = lVar9;
  *(undefined *)((long)param_1 + lVar7) = 0x3a;
  *(undefined *)(param_1 + 0x84) = 0x3a;
  piVar12 = *(int **)(piVar12 + 4);
  iVar5 = *piVar12;
LAB_00107c2f:
  while ((iVar5 - 0x1cU < 0x36 && ((0x3400000000001fU >> ((ulong)(iVar5 - 0x1cU) & 0x3f) & 1) != 0))
        ) {
    piVar12 = *(int **)(piVar12 + 4);
    iVar5 = *piVar12;
  }
  FUN_00105800(param_1,param_2,piVar12);
  *(undefined8 *)(param_1 + 0x90) = uVar13;
  return;
}


////>>0x001085e0>>FUN_001085e0>>////

void FUN_001085e0(undefined2 *param_1,undefined4 param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  plVar1 = param_4;
  if (param_4 == (long *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + 0x94);
    *(undefined8 *)(param_1 + 0x94) = 0;
    FUN_001079d0(param_1,param_2,0,0);
    lVar3 = *(long *)(param_1 + 0x80);
  }
  else {
    do {
      if (*(int *)(plVar1 + 2) != 0) break;
      if (*(uint *)plVar1[1] < 0x2c) {
        uVar4 = 1L << ((byte)*(uint *)plVar1[1] & 0x3f);
        if ((uVar4 & 0x8620e000000) == 0) {
          if ((uVar4 & 0x1c00000000) == 0) goto LAB_00108643;
          if ((*(byte *)(param_1 + 0x84) & 0xfd) != 0x28) {
            lVar3 = *(long *)(param_1 + 0x80);
            lVar2 = lVar3;
            if (*(byte *)(param_1 + 0x84) != 0x20) goto LAB_00108710;
            goto LAB_00108735;
          }
          lVar3 = *(long *)(param_1 + 0x80);
          if (lVar3 != 0xff) goto LAB_00108741;
LAB_0010886f:
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *(undefined8 *)(param_1 + 0x80) = 1;
          *(undefined *)param_1 = 0x28;
        }
        else {
          lVar3 = *(long *)(param_1 + 0x80);
          lVar2 = lVar3;
          if (*(char *)(param_1 + 0x84) == ' ') {
LAB_00108735:
            if (lVar3 == 0xff) goto LAB_0010886f;
          }
          else {
LAB_00108710:
            if (lVar2 != 0xff) {
              lVar3 = lVar2 + 1;
              *(long *)(param_1 + 0x80) = lVar3;
              *(undefined *)((long)param_1 + lVar2) = 0x20;
              *(undefined *)(param_1 + 0x84) = 0x20;
              goto LAB_00108735;
            }
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(undefined *)param_1 = 0x20;
            lVar3 = 1;
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          }
LAB_00108741:
          *(long *)(param_1 + 0x80) = lVar3 + 1;
          *(undefined *)((long)param_1 + lVar3) = 0x28;
        }
        uVar5 = *(undefined8 *)(param_1 + 0x94);
        *(undefined *)(param_1 + 0x84) = 0x28;
        *(undefined8 *)(param_1 + 0x94) = 0;
        FUN_001079d0(param_1,param_2,param_4,0);
        lVar2 = *(long *)(param_1 + 0x80);
        if (lVar2 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(undefined *)(param_1 + 0x84) = 0x28;
          *param_1 = 0x2829;
          lVar3 = *(long *)(param_3 + 0x18);
          lVar2 = 2;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *(undefined8 *)(param_1 + 0x80) = 2;
          if (lVar3 == 0) goto LAB_001086c2;
          goto LAB_001086a4;
        }
        lVar3 = lVar2 + 1;
        *(long *)(param_1 + 0x80) = lVar3;
        *(undefined *)((long)param_1 + lVar2) = 0x29;
        *(undefined *)(param_1 + 0x84) = 0x29;
        goto joined_r0x001087a9;
      }
LAB_00108643:
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
    uVar5 = *(undefined8 *)(param_1 + 0x94);
    *(undefined8 *)(param_1 + 0x94) = 0;
    FUN_001079d0(param_1,param_2,param_4,0);
    lVar3 = *(long *)(param_1 + 0x80);
  }
joined_r0x001087a9:
  if (lVar3 == 0xff) {
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined *)param_1 = 0x28;
    *(undefined *)(param_1 + 0x84) = 0x28;
    lVar3 = *(long *)(param_3 + 0x18);
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *(undefined8 *)(param_1 + 0x80) = 1;
    if (lVar3 != 0) goto LAB_001086a4;
    lVar2 = 1;
  }
  else {
    lVar2 = lVar3 + 1;
    *(long *)(param_1 + 0x80) = lVar2;
    *(undefined *)((long)param_1 + lVar3) = 0x28;
    *(undefined *)(param_1 + 0x84) = 0x28;
    if (*(long *)(param_3 + 0x18) != 0) {
LAB_001086a4:
      FUN_00105800(param_1,param_2);
      lVar2 = *(long *)(param_1 + 0x80);
    }
    if (lVar2 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *(undefined8 *)(param_1 + 0x80) = 1;
      *(undefined *)param_1 = 0x29;
      goto LAB_001086d1;
    }
  }
LAB_001086c2:
  *(long *)(param_1 + 0x80) = lVar2 + 1;
  *(undefined *)((long)param_1 + lVar2) = 0x29;
LAB_001086d1:
  *(undefined *)(param_1 + 0x84) = 0x29;
  FUN_001079d0(param_1,param_2,param_4,1);
  *(undefined8 *)(param_1 + 0x94) = uVar5;
  return;
}


////>>0x00108990>>FUN_00108990>>////

void FUN_00108990(undefined *param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined uVar3;
  long lVar4;
  undefined *puVar5;
  
  if (*param_3 != 0x32) {
    FUN_00105800();
    return;
  }
  lVar4 = (long)*(int *)(*(long *)(param_3 + 4) + 0x10);
  puVar2 = *(undefined **)(*(long *)(param_3 + 4) + 8);
  if (lVar4 != 0) {
    lVar1 = *(long *)(param_1 + 0x100);
    puVar5 = puVar2 + lVar4;
    do {
      uVar3 = *puVar2;
      lVar4 = lVar1;
      if (lVar1 == 0xff) {
        puVar2 = puVar2 + 1;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        *(undefined8 *)(param_1 + 0x100) = 1;
        *param_1 = uVar3;
        param_1[0x108] = uVar3;
        if (puVar2 == puVar5) {
          return;
        }
        uVar3 = *puVar2;
        lVar4 = 1;
      }
      lVar1 = lVar4 + 1;
      puVar2 = puVar2 + 1;
      *(long *)(param_1 + 0x100) = lVar1;
      param_1[lVar4] = uVar3;
      param_1[0x108] = uVar3;
    } while (puVar5 != puVar2);
  }
  return;
}


////>>0x00108a70>>FUN_00108a70>>////

/* WARNING: Type propagation algorithm not settling */

void FUN_00108a70(undefined2 *param_1,ulong param_2,uint *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  byte *pbVar7;
  uint *puVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  int *piVar15;
  size_t sVar16;
  long lVar17;
  long lVar18;
  long **pplVar19;
  uint *puVar20;
  int *piVar21;
  ulong uVar22;
  uint **ppuVar23;
  undefined8 *****pppppuVar24;
  long lVar25;
  int *extraout_RDX;
  uint **ppuVar26;
  uint **ppuVar27;
  char *pcVar28;
  uint uVar29;
  undefined8 uVar30;
  undefined2 *puVar31;
  ulong uVar32;
  ulong uVar33;
  char cVar34;
  undefined *puVar35;
  undefined8 *puVar36;
  undefined uVar37;
  int iVar38;
  int iVar39;
  char *pcVar40;
  char *pcVar41;
  undefined8 unaff_R14;
  long lVar42;
  undefined *puVar43;
  char *pcVar44;
  uint uVar45;
  undefined8 local_c8;
  int *piStack_c0;
  undefined local_b8 [4];
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  int local_a8 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int local_88 [2];
  undefined8 uStack_80;
  undefined8 ****local_78;
  int *piStack_70;
  undefined4 local_68;
  undefined8 uStack_60;
  undefined8 ****local_58;
  int *piStack_50;
  undefined4 local_48;
  undefined8 uStack_40;
  
  if (param_3 == (uint *)0x0) goto switchD_00108ab5_caseD_2c;
  if (*(int *)(param_1 + 0x98) != 0) {
    return;
  }
  uVar45 = *param_3;
  uVar22 = param_2 & 0xffffffff;
  iVar38 = 0;
  switch(uVar45) {
  case 0:
    lVar42 = (long)(int)param_3[6];
    pcVar40 = *(char **)(param_3 + 4);
    if ((param_2 & 4) == 0) {
      if (lVar42 != 0) {
        lVar25 = *(long *)(param_1 + 0x80);
        pcVar41 = pcVar40 + lVar42;
        uVar45 = param_3[6] & 3;
        if (uVar45 != 0) {
          if (uVar45 != 1) {
            lVar42 = lVar25;
            if (uVar45 != 2) {
              cVar34 = *pcVar40;
              if (lVar25 == 0xff) {
                *(undefined *)((long)param_1 + 0xff) = 0;
                (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
                *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
                lVar42 = 1;
                lVar25 = 0;
              }
              else {
                lVar42 = lVar25 + 1;
              }
              *(long *)(param_1 + 0x80) = lVar42;
              pcVar40 = pcVar40 + 1;
              *(char *)((long)param_1 + lVar25) = cVar34;
              *(char *)(param_1 + 0x84) = cVar34;
            }
            cVar34 = *pcVar40;
            if (lVar42 == 0xff) {
              *(undefined *)((long)param_1 + 0xff) = 0;
              (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
              *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
              lVar25 = 1;
              lVar42 = 0;
            }
            else {
              lVar25 = lVar42 + 1;
            }
            *(long *)(param_1 + 0x80) = lVar25;
            pcVar40 = pcVar40 + 1;
            *(char *)((long)param_1 + lVar42) = cVar34;
            *(char *)(param_1 + 0x84) = cVar34;
          }
          cVar34 = *pcVar40;
          if (lVar25 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar17 = 0;
            lVar42 = 1;
          }
          else {
            lVar42 = lVar25 + 1;
            lVar17 = lVar25;
          }
          lVar25 = lVar42;
          pcVar40 = pcVar40 + 1;
          *(long *)(param_1 + 0x80) = lVar25;
          *(char *)((long)param_1 + lVar17) = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
          if (pcVar41 == pcVar40) {
            return;
          }
        }
        do {
          cVar34 = *pcVar40;
          if (lVar25 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar42 = 1;
            lVar25 = 0;
          }
          else {
            lVar42 = lVar25 + 1;
          }
          *(long *)(param_1 + 0x80) = lVar42;
          *(char *)((long)param_1 + lVar25) = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
          cVar34 = pcVar40[1];
          if (lVar42 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar25 = 1;
            lVar42 = 0;
          }
          else {
            lVar25 = lVar42 + 1;
          }
          *(long *)(param_1 + 0x80) = lVar25;
          *(char *)((long)param_1 + lVar42) = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
          cVar34 = pcVar40[2];
          if (lVar25 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar42 = 1;
            lVar25 = 0;
          }
          else {
            lVar42 = lVar25 + 1;
          }
          *(long *)(param_1 + 0x80) = lVar42;
          *(char *)((long)param_1 + lVar25) = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
          cVar34 = pcVar40[3];
          if (lVar42 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar25 = 1;
            lVar42 = 0;
          }
          else {
            lVar25 = lVar42 + 1;
          }
          pcVar40 = pcVar40 + 4;
          *(long *)(param_1 + 0x80) = lVar25;
          *(char *)((long)param_1 + lVar42) = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
        } while (pcVar41 != pcVar40);
      }
    }
    else {
      pcVar41 = pcVar40 + lVar42;
      while (pcVar40 < pcVar41) {
        cVar34 = *pcVar40;
        if (((((long)pcVar41 - (long)pcVar40 < 4) || (cVar34 != '_')) || (pcVar40[1] != '_')) ||
           ((pcVar40[2] != 'U' || (pcVar44 = pcVar40 + 3, pcVar41 <= pcVar44)))) {
LAB_0010d830:
          lVar42 = *(long *)(param_1 + 0x80);
          if (lVar42 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar25 = 1;
            lVar42 = 0;
          }
          else {
            lVar25 = lVar42 + 1;
          }
          *(long *)(param_1 + 0x80) = lVar25;
          *(char *)((long)param_1 + lVar42) = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
          pcVar28 = pcVar40;
        }
        else {
          uVar22 = 0;
          uVar45 = (int)pcVar41 - (int)pcVar44 & 3;
          if (uVar45 == 0) goto LAB_0010da13;
          if (uVar45 == 1) {
LAB_0010d91e:
            cVar2 = *pcVar44;
            if ((byte)(cVar2 - 0x30U) < 10) {
              lVar42 = (long)(char)(cVar2 - 0x30U);
            }
            else if ((byte)(cVar2 + 0xbfU) < 6) {
              lVar42 = (long)(char)(cVar2 + -0x37);
            }
            else {
              pcVar28 = pcVar44;
              if (5 < (byte)(cVar2 + 0x9fU)) goto LAB_0011232a;
              lVar42 = (long)(char)(cVar2 + -0x57);
            }
            uVar22 = uVar22 * 0x10 + lVar42;
            for (pcVar44 = pcVar44 + 1; pcVar41 != pcVar44; pcVar44 = pcVar44 + 4) {
LAB_0010da13:
              cVar2 = *pcVar44;
              if ((byte)(cVar2 - 0x30U) < 10) {
                lVar42 = (long)(char)(cVar2 - 0x30U);
              }
              else if ((byte)(cVar2 + 0xbfU) < 6) {
                lVar42 = (long)(char)(cVar2 + -0x37);
              }
              else {
                pcVar28 = pcVar44;
                if (5 < (byte)(cVar2 + 0x9fU)) goto LAB_0011232a;
                lVar42 = (long)(char)(cVar2 + -0x57);
              }
              uVar22 = uVar22 * 0x10 + lVar42;
              cVar2 = pcVar44[1];
              if ((byte)(cVar2 - 0x30U) < 10) {
                lVar42 = (long)(char)(cVar2 - 0x30U);
              }
              else if ((byte)(cVar2 + 0xbfU) < 6) {
                lVar42 = (long)(char)(cVar2 + -0x37);
              }
              else {
                pcVar28 = pcVar44 + 1;
                if (5 < (byte)(cVar2 + 0x9fU)) goto LAB_0011232a;
                lVar42 = (long)(char)(cVar2 + -0x57);
              }
              uVar22 = uVar22 * 0x10 + lVar42;
              cVar2 = pcVar44[2];
              if ((byte)(cVar2 - 0x30U) < 10) {
                lVar42 = (long)(char)(cVar2 - 0x30U);
              }
              else if ((byte)(cVar2 + 0xbfU) < 6) {
                lVar42 = (long)(char)(cVar2 + -0x37);
              }
              else {
                pcVar28 = pcVar44 + 2;
                if (5 < (byte)(cVar2 + 0x9fU)) goto LAB_0011232a;
                lVar42 = (long)(char)(cVar2 + -0x57);
              }
              uVar22 = uVar22 * 0x10 + lVar42;
              cVar2 = pcVar44[3];
              if ((byte)(cVar2 - 0x30U) < 10) {
                lVar42 = (long)(char)(cVar2 - 0x30U);
              }
              else if ((byte)(cVar2 + 0xbfU) < 6) {
                lVar42 = (long)(char)(cVar2 + -0x37);
              }
              else {
                pcVar28 = pcVar44 + 3;
                if (5 < (byte)(cVar2 + 0x9fU)) goto LAB_0011232a;
                lVar42 = (long)(char)(cVar2 + -0x57);
              }
              uVar22 = uVar22 * 0x10 + lVar42;
            }
            goto LAB_0010d830;
          }
          if (uVar45 == 2) {
LAB_0010d8e4:
            cVar2 = *pcVar44;
            if ((byte)(cVar2 - 0x30U) < 10) {
              lVar42 = (long)(char)(cVar2 - 0x30U);
            }
            else if ((byte)(cVar2 + 0xbfU) < 6) {
              lVar42 = (long)(char)(cVar2 + -0x37);
            }
            else {
              pcVar28 = pcVar44;
              if (5 < (byte)(cVar2 + 0x9fU)) goto LAB_0011232a;
              lVar42 = (long)(char)(cVar2 + -0x57);
            }
            pcVar44 = pcVar44 + 1;
            uVar22 = uVar22 * 0x10 + lVar42;
            goto LAB_0010d91e;
          }
          cVar2 = *pcVar44;
          if ((byte)(cVar2 - 0x30U) < 10) {
            iVar38 = (int)(char)(cVar2 - 0x30U);
LAB_0010d8dd:
            uVar22 = (ulong)iVar38;
            pcVar44 = pcVar40 + 4;
            goto LAB_0010d8e4;
          }
          if ((byte)(cVar2 + 0xbfU) < 6) {
            iVar38 = (int)(char)(cVar2 + -0x37);
            goto LAB_0010d8dd;
          }
          pcVar28 = pcVar44;
          if ((byte)(cVar2 + 0x9fU) < 6) {
            iVar38 = (int)(char)(cVar2 + -0x57);
            goto LAB_0010d8dd;
          }
LAB_0011232a:
          if (((pcVar41 <= pcVar28) || (*pcVar28 != '_')) || (0xff < uVar22)) goto LAB_0010d830;
          FUN_00103a20(param_1,(int)(char)uVar22);
        }
        pcVar40 = pcVar28 + 1;
      }
    }
    break;
  case 1:
  case 2:
    FUN_00105800(param_1,param_2,*(undefined8 *)(param_3 + 4));
    if ((param_2 & 4) == 0) {
      FUN_00103e70(param_1,&DAT_0011e14b);
    }
    else {
      lVar42 = *(long *)(param_1 + 0x80);
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
      }
      *(long *)(param_1 + 0x80) = lVar42 + 1;
      *(undefined *)((long)param_1 + lVar42) = 0x2e;
      *(undefined *)(param_1 + 0x84) = 0x2e;
    }
    piVar15 = *(int **)(param_3 + 6);
    if (*piVar15 != 0x48) goto LAB_00108c6d;
    puVar36 = (undefined8 *)local_b8;
    FUN_00103e70(param_1,"{default arg#");
    sprintf((char *)puVar36,"%d",(ulong)(piVar15[6] + 1));
    sVar16 = strlen((char *)puVar36);
    if (sVar16 != 0) {
      puVar1 = (undefined8 *)((long)puVar36 + sVar16);
      lVar42 = *(long *)(param_1 + 0x80);
      uVar45 = (uint)sVar16 & 3;
      if ((sVar16 & 3) != 0) {
        if (uVar45 != 1) {
          lVar25 = lVar42;
          if (uVar45 != 2) {
            if (lVar42 == 0xff) {
              *(undefined *)((long)param_1 + 0xff) = 0;
              (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
              *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
              lVar25 = 1;
              lVar42 = 0;
            }
            else {
              lVar25 = lVar42 + 1;
            }
            *(long *)(param_1 + 0x80) = lVar25;
            puVar36 = (undefined8 *)((long)local_b8 + 1);
            *(undefined *)((long)param_1 + lVar42) = local_b8[0];
            *(undefined *)(param_1 + 0x84) = local_b8[0];
          }
          cVar34 = *(char *)puVar36;
          if (lVar25 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar42 = 1;
            lVar25 = 0;
          }
          else {
            lVar42 = lVar25 + 1;
          }
          *(long *)(param_1 + 0x80) = lVar42;
          puVar36 = (undefined8 *)((long)puVar36 + 1);
          *(char *)((long)param_1 + lVar25) = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
        }
        cVar34 = *(char *)puVar36;
        if (lVar42 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar17 = 0;
          lVar25 = 1;
        }
        else {
          lVar25 = lVar42 + 1;
          lVar17 = lVar42;
        }
        lVar42 = lVar25;
        *(long *)(param_1 + 0x80) = lVar42;
        puVar36 = (undefined8 *)((long)puVar36 + 1);
        *(char *)((long)param_1 + lVar17) = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        if (puVar1 == puVar36) goto LAB_00110c36;
      }
      do {
        cVar34 = *(char *)puVar36;
        if (lVar42 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar25 = 1;
          lVar42 = 0;
        }
        else {
          lVar25 = lVar42 + 1;
        }
        *(long *)(param_1 + 0x80) = lVar25;
        *(char *)((long)param_1 + lVar42) = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        cVar34 = *(char *)((long)puVar36 + 1);
        if (lVar25 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar42 = 1;
          lVar25 = 0;
        }
        else {
          lVar42 = lVar25 + 1;
        }
        *(long *)(param_1 + 0x80) = lVar42;
        *(char *)((long)param_1 + lVar25) = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        cVar34 = *(char *)((long)puVar36 + 2);
        if (lVar42 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar25 = 1;
          lVar42 = 0;
        }
        else {
          lVar25 = lVar42 + 1;
        }
        *(long *)(param_1 + 0x80) = lVar25;
        *(char *)((long)param_1 + lVar42) = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        cVar34 = *(char *)((long)puVar36 + 3);
        if (lVar25 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar42 = 1;
          lVar25 = 0;
        }
        else {
          lVar42 = lVar25 + 1;
        }
        *(long *)(param_1 + 0x80) = lVar42;
        puVar36 = (undefined8 *)((long)puVar36 + 4);
        *(char *)((long)param_1 + lVar25) = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
      } while (puVar1 != puVar36);
    }
LAB_00110c36:
    FUN_00103e70(param_1,&DAT_0011e14a);
    piVar15 = *(int **)(piVar15 + 4);
    goto LAB_00108c6d;
  case 3:
    piVar15 = *(int **)(param_3 + 4);
    uVar30 = *(undefined8 *)(param_1 + 0x94);
    *(undefined8 *)(param_1 + 0x94) = 0;
    if (piVar15 != (int *)0x0) {
      uVar6 = *(undefined8 *)(param_1 + 0x90);
      _local_b8 = (undefined8 ****)0x0;
      uStack_b0 = (uint *)piVar15;
      local_a8[0] = 0;
      local_a0 = uVar6;
      if (*piVar15 - 0x1cU < 0x36) {
        if ((0x3400000000001fU >> ((ulong)(*piVar15 - 0x1cU) & 0x3f) & 1) == 0) {
          pppppuVar24 = (undefined8 *****)local_b8;
          uVar45 = 1;
        }
        else {
          piVar15 = *(int **)(piVar15 + 4);
          if (piVar15 == (int *)0x0) {
            *(undefined **)(param_1 + 0x94) = local_b8;
            goto switchD_00108ab5_caseD_2c;
          }
          local_90 = piVar15;
          local_98 = (undefined8 ****)local_b8;
          local_88[0] = 0;
          uStack_80 = uVar6;
          if (*piVar15 - 0x1cU < 0x36) {
            if ((0x3400000000001fU >> ((ulong)(*piVar15 - 0x1cU) & 0x3f) & 1) == 0) {
              uVar45 = 2;
              pppppuVar24 = (undefined8 *****)&local_98;
            }
            else {
              piVar15 = *(int **)(piVar15 + 4);
              if (piVar15 == (int *)0x0) {
                *(undefined8 **)(param_1 + 0x94) = &local_98;
                goto switchD_00108ab5_caseD_2c;
              }
              piStack_70 = piVar15;
              local_78 = (undefined8 ****)&local_98;
              pppppuVar24 = &local_78;
              local_68 = 0;
              uStack_60 = uVar6;
              if ((*piVar15 - 0x1cU < 0x36) &&
                 ((0x3400000000001fU >> ((ulong)(*piVar15 - 0x1cU) & 0x3f) & 1) != 0)) {
                piVar15 = *(int **)(piVar15 + 4);
                if (piVar15 == (int *)0x0) {
                  *(undefined8 ******)(param_1 + 0x94) = pppppuVar24;
                  goto switchD_00108ab5_caseD_2c;
                }
                piStack_50 = piVar15;
                local_58 = &local_78;
                local_48 = 0;
                uStack_40 = uVar6;
                if (*piVar15 - 0x1cU < 0x36) {
                  if ((0x3400000000001fU >> ((byte)(*piVar15 - 0x1cU) & 0x3f) & 1) != 0) {
                    *(undefined8 ******)(param_1 + 0x94) = &local_58;
                    goto switchD_00108ab5_caseD_2c;
                  }
                  uVar45 = 4;
                  pppppuVar24 = &local_58;
                }
                else {
                  pppppuVar24 = &local_58;
                  uVar45 = 4;
                }
              }
            }
          }
          else {
            pppppuVar24 = (undefined8 *****)&local_98;
            uVar45 = 2;
          }
        }
      }
      else {
        pppppuVar24 = (undefined8 *****)local_b8;
        uVar45 = 1;
      }
      *(undefined8 ******)(param_1 + 0x94) = pppppuVar24;
      iVar38 = *piVar15;
      uVar12 = uVar45;
      if (iVar38 != 2) goto LAB_0010af53;
      piVar15 = *(int **)(piVar15 + 6);
      if ((*piVar15 != 0x48) || (piVar15 = *(int **)(piVar15 + 4), piVar15 != (int *)0x0)) {
        if ((0x35 < *piVar15 - 0x1cU) ||
           ((0x3400000000001fU >> ((ulong)(*piVar15 - 0x1cU) & 0x3f) & 1) == 0)) {
LAB_00110e74:
          iVar38 = *piVar15;
LAB_0010af53:
          if (iVar38 == 4) {
            *(undefined8 **)(param_1 + 0x90) = &local_c8;
            local_c8 = uVar6;
            piStack_c0 = piVar15;
          }
          FUN_00105800(param_1,uVar22,*(undefined8 *)(param_3 + 6));
          if (*piVar15 == 4) {
            *(undefined8 *)(param_1 + 0x90) = local_c8;
          }
          uVar45 = uVar12 - 1;
          if (local_a8[(ulong)uVar45 * 8] == 0) {
            lVar25 = *(long *)(param_1 + 0x80);
            lVar42 = lVar25 + 1;
            if (lVar25 == 0xff) {
              *(undefined *)((long)param_1 + 0xff) = 0;
              (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
              *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
              lVar42 = 1;
              lVar25 = 0;
            }
            *(long *)(param_1 + 0x80) = lVar42;
            *(undefined *)((long)param_1 + lVar25) = 0x20;
            uVar6 = (&uStack_b0)[(ulong)uVar45 * 4];
            *(undefined *)(param_1 + 0x84) = 0x20;
            FUN_001058a0(param_1,uVar22,uVar6);
          }
          if (uVar45 != 0) {
            uVar45 = uVar12 - 2;
            if (local_a8[(ulong)uVar45 * 8] == 0) {
              lVar25 = *(long *)(param_1 + 0x80);
              lVar42 = lVar25 + 1;
              if (lVar25 == 0xff) {
                *(undefined *)((long)param_1 + 0xff) = 0;
                (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
                *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
                lVar42 = 1;
                lVar25 = 0;
              }
              *(long *)(param_1 + 0x80) = lVar42;
              *(undefined *)((long)param_1 + lVar25) = 0x20;
              uVar6 = (&uStack_b0)[(ulong)uVar45 * 4];
              *(undefined *)(param_1 + 0x84) = 0x20;
              FUN_001058a0(param_1,uVar22,uVar6);
            }
            if (uVar45 != 0) {
              uVar12 = uVar12 - 3;
              if (local_a8[(ulong)uVar12 * 8] == 0) {
                lVar25 = *(long *)(param_1 + 0x80);
                lVar42 = lVar25 + 1;
                if (lVar25 == 0xff) {
                  *(undefined *)((long)param_1 + 0xff) = 0;
                  (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
                  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
                  lVar42 = 1;
                  lVar25 = 0;
                }
                *(long *)(param_1 + 0x80) = lVar42;
                *(undefined *)((long)param_1 + lVar25) = 0x20;
                uVar6 = (&uStack_b0)[(ulong)uVar12 * 4];
                *(undefined *)(param_1 + 0x84) = 0x20;
                FUN_001058a0(param_1,uVar22,uVar6);
              }
              if ((uVar12 != 0) && (local_a8[0] == 0)) {
                lVar42 = *(long *)(param_1 + 0x80);
                if (lVar42 == 0xff) {
                  *(undefined *)((long)param_1 + 0xff) = 0;
                  (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
                  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
                  lVar25 = 1;
                  lVar42 = 0;
                }
                else {
                  lVar25 = lVar42 + 1;
                }
                *(long *)(param_1 + 0x80) = lVar25;
                *(undefined *)((long)param_1 + lVar42) = 0x20;
                *(undefined *)(param_1 + 0x84) = 0x20;
                FUN_001058a0(param_1,uVar22,uStack_b0);
              }
            }
          }
          *(undefined8 *)(param_1 + 0x94) = uVar30;
          return;
        }
        if (uVar45 != 4) {
          uVar33 = (ulong)(uVar45 - 1);
          uVar32 = (ulong)uVar45;
          lVar42 = uVar33 * 0x20;
          lVar25 = uVar32 * 0x20;
          uVar4 = *(undefined4 *)((long)local_b8 + lVar42 + 4);
          uVar10 = *(undefined4 *)(&uStack_b0 + uVar33 * 4);
          uVar11 = *(undefined4 *)((long)&uStack_b0 + lVar42 + 4);
          *(undefined4 *)((long)local_b8 + uVar32 * 4 * 8) =
               *(undefined4 *)((long)local_b8 + uVar33 * 4 * 8);
          *(undefined4 *)((long)local_b8 + lVar25 + 4) = uVar4;
          *(undefined4 *)(&uStack_b0 + uVar32 * 4) = uVar10;
          *(undefined4 *)((long)&uStack_b0 + lVar25 + 4) = uVar11;
          iVar38 = local_a8[uVar33 * 8];
          iVar39 = local_a8[uVar33 * 8 + 1];
          uVar4 = *(undefined4 *)(&local_a0 + uVar33 * 4);
          uVar10 = *(undefined4 *)((long)&local_a0 + lVar42 + 4);
          *(long *)(param_1 + 0x94) = (long)local_b8 + uVar32 * 4 * 8;
          local_a8[uVar32 * 8] = iVar38;
          local_a8[uVar32 * 8 + 1] = iVar39;
          *(undefined4 *)(&local_a0 + uVar32 * 4) = uVar4;
          *(undefined4 *)((long)&local_a0 + lVar25 + 4) = uVar10;
          (&uStack_b0)[uVar33 * 4] = piVar15;
          (&local_a0)[uVar33 * 4] = uVar6;
          (&local_98)[uVar33 * 4] = (long)local_b8 + uVar33 * 4 * 8;
          piVar15 = *(int **)(piVar15 + 4);
          local_a8[uVar33 * 8] = 0;
          uVar12 = uVar45 + 1;
          uVar33 = (ulong)uVar12;
          if (piVar15 != (int *)0x0) {
            if ((0x35 < *piVar15 - 0x1cU) ||
               ((0x3400000000001fU >> ((byte)(*piVar15 - 0x1cU) & 0x3f) & 1) == 0)) {
              iVar38 = *piVar15;
              goto LAB_0010af53;
            }
            if (uVar12 != 4) {
              uVar4 = *(undefined4 *)((long)local_b8 + lVar25 + 4);
              uVar10 = *(undefined4 *)(&uStack_b0 + uVar32 * 4);
              uVar11 = *(undefined4 *)((long)&uStack_b0 + lVar25 + 4);
              lVar42 = uVar33 * 0x20;
              uVar12 = uVar45 + 2;
              *(undefined4 *)((long)local_b8 + uVar33 * 4 * 8) =
                   *(undefined4 *)((long)local_b8 + uVar32 * 4 * 8);
              *(undefined4 *)((long)local_b8 + lVar42 + 4) = uVar4;
              *(undefined4 *)(&uStack_b0 + uVar33 * 4) = uVar10;
              *(undefined4 *)((long)&uStack_b0 + lVar42 + 4) = uVar11;
              iVar38 = local_a8[uVar32 * 8 + 1];
              uVar4 = *(undefined4 *)(&local_a0 + uVar32 * 4);
              uVar10 = *(undefined4 *)((long)&local_a0 + lVar25 + 4);
              local_a8[uVar33 * 8] = local_a8[uVar32 * 8];
              local_a8[uVar33 * 8 + 1] = iVar38;
              *(undefined4 *)(&local_a0 + uVar33 * 4) = uVar4;
              *(undefined4 *)((long)&local_a0 + lVar42 + 4) = uVar10;
              *(undefined8 *****)(param_1 + 0x94) =
                   (undefined8 ****)((long)local_b8 + uVar33 * 4 * 8);
              (&uStack_b0)[uVar32 * 4] = piVar15;
              (&local_a0)[uVar32 * 4] = uVar6;
              (&local_98)[uVar32 * 4] = (long)local_b8 + uVar32 * 4 * 8;
              piVar21 = *(int **)(piVar15 + 4);
              local_a8[uVar32 * 8] = 0;
              if (piVar21 != (int *)0x0) {
                piVar15 = piVar21;
                if ((0x35 < *piVar21 - 0x1cU) ||
                   ((0x3400000000001fU >> ((byte)(*piVar21 - 0x1cU) & 0x3f) & 1) == 0))
                goto LAB_00110e74;
                if (uVar12 != 4) {
                  local_48 = local_68;
                  piStack_50 = piStack_70;
                  piVar15 = *(int **)(piVar21 + 4);
                  *(undefined8 ******)(param_1 + 0x94) = &local_58;
                  local_68 = 0;
                  uStack_40 = uStack_60;
                  if ((piVar15 != (int *)0x0) &&
                     ((0x35 < *piVar15 - 0x1cU ||
                      ((0x3400000000001fU >> ((byte)(*piVar15 - 0x1cU) & 0x3f) & 1) == 0)))) {
                    iVar38 = *piVar15;
                    uVar12 = 4;
                    piStack_70 = piVar21;
                    uStack_60 = uVar6;
                    local_58 = (undefined8 ****)((long)local_b8 + uVar33 * 4 * 8);
                    goto LAB_0010af53;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto switchD_00108ab5_caseD_2c;
  case 4:
    uVar30 = *(undefined8 *)(param_1 + 0xb8);
    piVar15 = *(int **)(param_3 + 4);
    *(uint **)(param_1 + 0xb8) = param_3;
    uVar6 = *(undefined8 *)(param_1 + 0x94);
    *(undefined8 *)(param_1 + 0x94) = 0;
    if ((((param_2 & 4) == 0) || (*piVar15 != 0)) ||
       ((piVar15[6] != 6 || (iVar38 = strncmp(*(char **)(piVar15 + 4),"JArray",6), iVar38 != 0)))) {
      FUN_00105800(param_1,uVar22,piVar15);
      if (*(char *)(param_1 + 0x84) == '<') {
        FUN_00103a20(param_1,0x20);
      }
      lVar42 = *(long *)(param_1 + 0x80);
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 1;
        lVar42 = 0;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x3c;
      *(undefined *)(param_1 + 0x84) = 0x3c;
      FUN_00105800(param_1,uVar22,*(undefined8 *)(param_3 + 6));
      if (*(char *)(param_1 + 0x84) == '>') {
        FUN_00103a20(param_1,0x20);
      }
      lVar42 = *(long *)(param_1 + 0x80);
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 1;
        lVar42 = 0;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x3e;
      *(undefined *)(param_1 + 0x84) = 0x3e;
    }
    else {
      FUN_00105800(param_1,uVar22,*(undefined8 *)(param_3 + 6));
      FUN_00103e70(param_1,&DAT_0011e56a);
    }
    *(undefined8 *)(param_1 + 0x94) = uVar6;
    *(undefined8 *)(param_1 + 0xb8) = uVar30;
    break;
  case 5:
    uVar33 = *(ulong *)(param_3 + 4);
    if ((long)(uVar33 + 1) < (long)*(int *)(param_1 + 0x9c)) {
      uVar45 = (uint)uVar33;
      uVar22 = uVar33 & 0xffffffff;
      piVar15 = *(int **)(*(long *)(*(long *)(param_1 + 0x90) + 8) + 0x10);
      if (uVar45 == 0) {
LAB_0010fbb3:
        if (piVar15 != (int *)0x0) {
          iVar38 = *piVar15;
          if (iVar38 != 0x5b) {
LAB_0010fbd2:
            FUN_00104010(param_1,iVar38,uVar22);
            return;
          }
          if (*(int **)(piVar15 + 4) != (int *)0x0) {
            iVar38 = **(int **)(piVar15 + 4);
            goto LAB_0010fbd2;
          }
        }
      }
      else if (piVar15 != (int *)0x0) {
        uVar12 = uVar45 & 7;
        if ((uVar33 & 7) == 0) goto LAB_0010aa90;
        if (uVar12 != 1) {
          if (uVar12 != 2) {
            if (uVar12 != 3) {
              if (uVar12 != 4) {
                if (uVar12 != 5) {
                  if (uVar12 != 6) {
                    piVar15 = *(int **)(piVar15 + 6);
                    uVar33 = (ulong)(uVar45 - 1);
                    if (piVar15 == (int *)0x0) goto switchD_00108ab5_caseD_2c;
                  }
                  piVar15 = *(int **)(piVar15 + 6);
                  uVar33 = (ulong)((int)uVar33 - 1);
                  if (piVar15 == (int *)0x0) goto switchD_00108ab5_caseD_2c;
                }
                piVar15 = *(int **)(piVar15 + 6);
                uVar33 = (ulong)((int)uVar33 - 1);
                if (piVar15 == (int *)0x0) goto switchD_00108ab5_caseD_2c;
              }
              piVar15 = *(int **)(piVar15 + 6);
              uVar33 = (ulong)((int)uVar33 - 1);
              if (piVar15 == (int *)0x0) goto switchD_00108ab5_caseD_2c;
            }
            piVar15 = *(int **)(piVar15 + 6);
            uVar33 = (ulong)((int)uVar33 - 1);
            if (piVar15 == (int *)0x0) goto switchD_00108ab5_caseD_2c;
          }
          piVar15 = *(int **)(piVar15 + 6);
          uVar33 = (ulong)((int)uVar33 - 1);
          if (piVar15 == (int *)0x0) goto switchD_00108ab5_caseD_2c;
        }
        uVar45 = (int)uVar33 - 1;
        piVar15 = *(int **)(piVar15 + 6);
        while (piVar15 != (int *)0x0) {
          uVar33 = (ulong)uVar45;
          if (uVar45 == 0) goto LAB_0010fbb3;
LAB_0010aa90:
          if ((((*(long *)(piVar15 + 6) == 0) ||
               (lVar42 = *(long *)(*(long *)(piVar15 + 6) + 0x18), lVar42 == 0)) ||
              ((lVar42 = *(long *)(lVar42 + 0x18), lVar42 == 0 ||
               (((lVar42 = *(long *)(lVar42 + 0x18), lVar42 == 0 ||
                 (lVar42 = *(long *)(lVar42 + 0x18), lVar42 == 0)) ||
                (lVar42 = *(long *)(lVar42 + 0x18), lVar42 == 0)))))) ||
             (lVar42 = *(long *)(lVar42 + 0x18), lVar42 == 0)) break;
          uVar45 = (int)uVar33 - 8;
          piVar15 = *(int **)(lVar42 + 0x18);
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x9c) != 0) {
        lVar42 = *(long *)(param_1 + 0x80);
        if (lVar42 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *param_1 = 0x7561;
          lVar25 = 3;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *(undefined *)(param_1 + 1) = 0x74;
LAB_00111ba4:
          lVar42 = lVar25 + 1;
          *(long *)(param_1 + 0x80) = lVar42;
          *(undefined *)((long)param_1 + lVar25) = 0x6f;
          *(undefined *)(param_1 + 0x84) = 0x6f;
          if (lVar42 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar25 = 1;
            lVar42 = 0;
            goto LAB_0010db23;
          }
        }
        else {
          *(long *)(param_1 + 0x80) = lVar42 + 1;
          *(undefined *)((long)param_1 + lVar42) = 0x61;
          *(undefined *)(param_1 + 0x84) = 0x61;
          if (lVar42 + 1 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *param_1 = 0x7475;
            lVar42 = 3;
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            *(undefined *)(param_1 + 1) = 0x6f;
          }
          else {
            *(long *)(param_1 + 0x80) = lVar42 + 2;
            *(undefined *)((long)param_1 + lVar42 + 1) = 0x75;
            *(undefined *)(param_1 + 0x84) = 0x75;
            if (lVar42 + 2 == 0xff) {
              *(undefined *)((long)param_1 + 0xff) = 0;
              (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
              *param_1 = 0x6f74;
              lVar42 = 2;
              *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            }
            else {
              lVar25 = lVar42 + 3;
              *(long *)(param_1 + 0x80) = lVar25;
              *(undefined *)((long)param_1 + lVar42 + 2) = 0x74;
              *(undefined *)(param_1 + 0x84) = 0x74;
              if (lVar25 != 0xff) goto LAB_00111ba4;
              *(undefined *)((long)param_1 + 0xff) = 0;
              (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
              *(undefined *)param_1 = 0x6f;
              lVar42 = 1;
              *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            }
          }
        }
        lVar25 = lVar42 + 1;
LAB_0010db23:
        *(long *)(param_1 + 0x80) = lVar25;
        puVar36 = (undefined8 *)local_b8;
        *(undefined *)((long)param_1 + lVar42) = 0x3a;
        *(undefined *)(param_1 + 0x84) = 0x3a;
        sprintf((char *)puVar36,"%d",(ulong)((int)*(undefined8 *)(param_3 + 4) + 1));
        sVar16 = strlen((char *)puVar36);
        if (sVar16 == 0) {
          return;
        }
        lVar42 = *(long *)(param_1 + 0x80);
        puVar1 = (undefined8 *)((long)puVar36 + sVar16);
        uVar45 = (uint)sVar16 & 3;
        if ((sVar16 & 3) != 0) {
          if (uVar45 != 1) {
            lVar25 = lVar42;
            if (uVar45 != 2) {
              if (lVar42 == 0xff) {
                *(undefined *)((long)param_1 + 0xff) = 0;
                (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
                *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
                lVar25 = 1;
                lVar42 = 0;
              }
              else {
                lVar25 = lVar42 + 1;
              }
              *(long *)(param_1 + 0x80) = lVar25;
              puVar36 = (undefined8 *)((long)local_b8 + 1);
              *(undefined *)((long)param_1 + lVar42) = local_b8[0];
              *(undefined *)(param_1 + 0x84) = local_b8[0];
            }
            cVar34 = *(char *)puVar36;
            if (lVar25 == 0xff) {
              *(undefined *)((long)param_1 + 0xff) = 0;
              (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
              *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
              lVar42 = 1;
              lVar25 = 0;
            }
            else {
              lVar42 = lVar25 + 1;
            }
            *(long *)(param_1 + 0x80) = lVar42;
            puVar36 = (undefined8 *)((long)puVar36 + 1);
            *(char *)((long)param_1 + lVar25) = cVar34;
            *(char *)(param_1 + 0x84) = cVar34;
          }
          cVar34 = *(char *)puVar36;
          if (lVar42 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar17 = 0;
            lVar25 = 1;
          }
          else {
            lVar25 = lVar42 + 1;
            lVar17 = lVar42;
          }
          lVar42 = lVar25;
          puVar36 = (undefined8 *)((long)puVar36 + 1);
          *(long *)(param_1 + 0x80) = lVar42;
          *(char *)((long)param_1 + lVar17) = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
          if (puVar36 == puVar1) {
            return;
          }
        }
        do {
          cVar34 = *(char *)puVar36;
          if (lVar42 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar25 = 1;
            lVar42 = 0;
          }
          else {
            lVar25 = lVar42 + 1;
          }
          *(long *)(param_1 + 0x80) = lVar25;
          *(char *)((long)param_1 + lVar42) = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
          cVar34 = *(char *)((long)puVar36 + 1);
          if (lVar25 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar42 = 1;
            lVar25 = 0;
          }
          else {
            lVar42 = lVar25 + 1;
          }
          *(long *)(param_1 + 0x80) = lVar42;
          *(char *)((long)param_1 + lVar25) = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
          cVar34 = *(char *)((long)puVar36 + 2);
          if (lVar42 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar25 = 1;
            lVar42 = 0;
          }
          else {
            lVar25 = lVar42 + 1;
          }
          *(long *)(param_1 + 0x80) = lVar25;
          *(char *)((long)param_1 + lVar42) = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
          cVar34 = *(char *)((long)puVar36 + 3);
          if (lVar25 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar42 = 1;
            lVar25 = 0;
          }
          else {
            lVar42 = lVar25 + 1;
          }
          puVar36 = (undefined8 *)((long)puVar36 + 4);
          *(long *)(param_1 + 0x80) = lVar42;
          *(char *)((long)param_1 + lVar25) = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
        } while (puVar36 != puVar1);
        return;
      }
      puVar31 = param_1;
      piVar15 = (int *)FUN_00103c20(param_1,param_3);
      if ((piVar15 != (int *)0x0) &&
         ((*piVar15 != 0x2f ||
          (piVar15 = (int *)FUN_00103aa0(piVar15,*(undefined4 *)(puVar31 + 0x9e)),
          piVar15 != (int *)0x0)))) {
        puVar36 = *(undefined8 **)(param_1 + 0x90);
        *(undefined8 *)(param_1 + 0x90) = *puVar36;
        FUN_00105800(param_1,uVar22,piVar15);
        *(undefined8 **)(param_1 + 0x90) = puVar36;
        return;
      }
    }
    goto switchD_00108ab5_caseD_2c;
  case 6:
    uVar22 = *(ulong *)(param_3 + 4);
    if (uVar22 == 0) {
      pcVar40 = "this";
      goto LAB_0010a99c;
    }
    puVar36 = (undefined8 *)local_b8;
    FUN_00103e70(param_1,"{parm#");
    sprintf((char *)puVar36,"%d",uVar22 & 0xffffffff);
    sVar16 = strlen((char *)puVar36);
    if (sVar16 != 0) {
      lVar42 = *(long *)(param_1 + 0x80);
      puVar1 = (undefined8 *)((long)puVar36 + sVar16);
      uVar45 = (uint)sVar16 & 3;
      if ((sVar16 & 3) != 0) {
        lVar25 = lVar42;
        if (uVar45 != 1) {
          lVar17 = lVar42;
          if (uVar45 != 2) {
            if (lVar42 == 0xff) {
              *(undefined *)((long)param_1 + 0xff) = 0;
              (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
              *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
              lVar17 = 1;
              lVar42 = 0;
            }
            else {
              lVar17 = lVar42 + 1;
            }
            *(long *)(param_1 + 0x80) = lVar17;
            puVar36 = (undefined8 *)((long)local_b8 + 1);
            *(undefined *)((long)param_1 + lVar42) = local_b8[0];
            *(undefined *)(param_1 + 0x84) = local_b8[0];
          }
          cVar34 = *(char *)puVar36;
          if (lVar17 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar25 = 1;
            lVar17 = 0;
          }
          else {
            lVar25 = lVar17 + 1;
          }
          *(long *)(param_1 + 0x80) = lVar25;
          puVar36 = (undefined8 *)((long)puVar36 + 1);
          *(char *)((long)param_1 + lVar17) = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
        }
        cVar34 = *(char *)puVar36;
        if (lVar25 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar42 = 1;
          lVar25 = 0;
        }
        else {
          lVar42 = lVar25 + 1;
        }
        puVar36 = (undefined8 *)((long)puVar36 + 1);
        *(long *)(param_1 + 0x80) = lVar42;
        *(char *)((long)param_1 + lVar25) = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        if (puVar1 == puVar36) goto LAB_0010d813;
      }
      do {
        cVar34 = *(char *)puVar36;
        if (lVar42 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar25 = 1;
          lVar42 = 0;
        }
        else {
          lVar25 = lVar42 + 1;
        }
        *(long *)(param_1 + 0x80) = lVar25;
        *(char *)((long)param_1 + lVar42) = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        cVar34 = *(char *)((long)puVar36 + 1);
        if (lVar25 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar42 = 1;
          lVar25 = 0;
        }
        else {
          lVar42 = lVar25 + 1;
        }
        *(long *)(param_1 + 0x80) = lVar42;
        *(char *)((long)param_1 + lVar25) = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        cVar34 = *(char *)((long)puVar36 + 2);
        if (lVar42 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar25 = 1;
          lVar42 = 0;
        }
        else {
          lVar25 = lVar42 + 1;
        }
        *(long *)(param_1 + 0x80) = lVar25;
        *(char *)((long)param_1 + lVar42) = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        cVar34 = *(char *)((long)puVar36 + 3);
        if (lVar25 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar42 = 1;
          lVar25 = 0;
        }
        else {
          lVar42 = lVar25 + 1;
        }
        puVar36 = (undefined8 *)((long)puVar36 + 4);
        *(long *)(param_1 + 0x80) = lVar42;
        *(char *)((long)param_1 + lVar25) = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
      } while (puVar1 != puVar36);
    }
LAB_0010d813:
    uVar30 = 0x7d;
    goto LAB_0010adde;
  case 7:
    goto switchD_00108ab5_caseD_7;
  case 8:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar42) = 0x7e;
    *(undefined *)(param_1 + 0x84) = 0x7e;
    piVar15 = *(int **)(param_3 + 6);
    goto LAB_00108c6d;
  case 9:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 != 0xff) {
      *(long *)(param_1 + 0x80) = lVar42 + 1;
      *(undefined *)((long)param_1 + lVar42) = 0x76;
      *(undefined *)(param_1 + 0x84) = 0x76;
      if (lVar42 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x62;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6174;
        goto LAB_0010ecfb;
      }
      *(long *)(param_1 + 0x80) = lVar42 + 2;
      *(undefined *)((long)param_1 + lVar42 + 1) = 0x74;
      *(undefined *)(param_1 + 0x84) = 0x74;
      if (lVar42 + 2 != 0xff) {
        lVar25 = lVar42 + 3;
        *(long *)(param_1 + 0x80) = lVar25;
        *(undefined *)((long)param_1 + lVar42 + 2) = 0x61;
        *(undefined *)(param_1 + 0x84) = 0x61;
        if (lVar25 != 0xff) goto LAB_0010e5a0;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x65;
        lVar17 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6c62;
        goto LAB_0010a110;
      }
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x6c;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6261;
LAB_0010ef27:
      lVar17 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar17;
      *(undefined *)((long)param_1 + lVar25) = 0x65;
      *(undefined *)(param_1 + 0x84) = 0x65;
      goto joined_r0x0010f0fd;
    }
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined *)(param_1 + 1) = 0x61;
    lVar25 = 3;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *param_1 = 0x7476;
LAB_0010e5a0:
    lVar42 = lVar25 + 1;
    *(long *)(param_1 + 0x80) = lVar42;
    *(undefined *)((long)param_1 + lVar25) = 0x62;
    *(undefined *)(param_1 + 0x84) = 0x62;
    if (lVar42 != 0xff) {
LAB_0010ecfb:
      lVar25 = lVar42 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x6c;
      *(undefined *)(param_1 + 0x84) = 0x6c;
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x66;
        lVar17 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x2065;
        goto LAB_0010c78f;
      }
      goto LAB_0010ef27;
    }
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined *)(param_1 + 1) = 0x20;
    lVar42 = 3;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *param_1 = 0x656c;
    goto LAB_0010cdc9;
  case 10:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x54;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x5456;
LAB_0010f2f0:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x20;
      *(undefined *)(param_1 + 0x84) = 0x20;
      goto joined_r0x0010f30d;
    }
    *(long *)(param_1 + 0x80) = lVar42 + 1;
    *(undefined *)((long)param_1 + lVar42) = 0x56;
    *(undefined *)(param_1 + 0x84) = 0x56;
    if (lVar42 + 1 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x20;
      lVar42 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x5454;
      goto LAB_0010cdc9;
    }
    *(long *)(param_1 + 0x80) = lVar42 + 2;
    *(undefined *)((long)param_1 + lVar42 + 1) = 0x54;
    *(undefined *)(param_1 + 0x84) = 0x54;
    if (lVar42 + 2 != 0xff) {
      lVar25 = lVar42 + 3;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42 + 2) = 0x54;
      *(undefined *)(param_1 + 0x84) = 0x54;
      if (lVar25 == 0xff) goto LAB_0010ca12;
      goto LAB_0010f2f0;
    }
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined *)(param_1 + 1) = 0x66;
    *param_1 = 0x2054;
    lVar17 = 3;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    goto LAB_0010c78f;
  case 0xb:
    pcVar40 = "construction vtable for ";
    lVar42 = *(long *)(param_1 + 0x80);
    do {
      cVar34 = *pcVar40;
      lVar25 = lVar42;
      if (lVar42 == 0xff) {
        pcVar40 = pcVar40 + 1;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined8 *)(param_1 + 0x80) = 1;
        *(char *)param_1 = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        if (pcVar40 == "") break;
        cVar34 = *pcVar40;
        lVar25 = 1;
      }
      lVar42 = lVar25 + 1;
      pcVar40 = pcVar40 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
    } while (pcVar40 != "");
    FUN_00105800(param_1,uVar22,*(undefined8 *)(param_3 + 4));
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x6e;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x692d;
LAB_0010d2d9:
      lVar42 = lVar25 + 1;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar42 + 1;
      *(undefined *)((long)param_1 + lVar42) = 0x2d;
      *(undefined *)(param_1 + 0x84) = 0x2d;
      if (lVar42 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        lVar25 = 2;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6e69;
        goto LAB_0010d2d9;
      }
      *(long *)(param_1 + 0x80) = lVar42 + 2;
      *(undefined *)((long)param_1 + lVar42 + 1) = 0x69;
      *(undefined *)(param_1 + 0x84) = 0x69;
      if (lVar42 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)param_1 = 0x6e;
        lVar25 = 1;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        goto LAB_0010d2d9;
      }
      lVar25 = lVar42 + 3;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42 + 2) = 0x6e;
      *(undefined *)(param_1 + 0x84) = 0x6e;
      if (lVar25 != 0xff) goto LAB_0010d2d9;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar42 = 1;
      lVar25 = 0;
    }
    *(long *)(param_1 + 0x80) = lVar42;
    *(undefined *)((long)param_1 + lVar25) = 0x2d;
    *(undefined *)(param_1 + 0x84) = 0x2d;
    goto switchD_00108ab5_caseD_7;
  case 0xc:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *param_1 = 0x7974;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *(undefined *)(param_1 + 1) = 0x70;
LAB_0010ed8c:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x65;
      *(undefined *)(param_1 + 0x84) = 0x65;
      if (lVar42 != 0xff) {
LAB_0010f13c:
        lVar25 = lVar42 + 1;
        *(long *)(param_1 + 0x80) = lVar25;
        *(undefined *)((long)param_1 + lVar42) = 0x69;
        *(undefined *)(param_1 + 0x84) = 0x69;
        if (lVar25 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(undefined *)(param_1 + 1) = 0x6f;
          lVar17 = 3;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *param_1 = 0x666e;
          goto LAB_0010a110;
        }
LAB_0010f260:
        lVar42 = lVar25 + 1;
        *(long *)(param_1 + 0x80) = lVar42;
        *(undefined *)((long)param_1 + lVar25) = 0x6e;
        *(undefined *)(param_1 + 0x84) = 0x6e;
        if (lVar42 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(undefined *)(param_1 + 1) = 0x20;
          lVar42 = 3;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *param_1 = 0x6f66;
          goto LAB_0010cdc9;
        }
        goto LAB_0010c737;
      }
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x66;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6e69;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar42 + 1;
      *(undefined *)((long)param_1 + lVar42) = 0x74;
      *(undefined *)(param_1 + 0x84) = 0x74;
      if (lVar42 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *param_1 = 0x7079;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined *)(param_1 + 1) = 0x65;
        goto LAB_0010f13c;
      }
      *(long *)(param_1 + 0x80) = lVar42 + 2;
      *(undefined *)((long)param_1 + lVar42 + 1) = 0x79;
      *(undefined *)(param_1 + 0x84) = 0x79;
      if (lVar42 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *param_1 = 0x6570;
        lVar25 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined *)(param_1 + 1) = 0x69;
        goto LAB_0010f260;
      }
      lVar25 = lVar42 + 3;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42 + 2) = 0x70;
      *(undefined *)(param_1 + 0x84) = 0x70;
      if (lVar25 != 0xff) goto LAB_0010ed8c;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x6e;
      lVar42 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6965;
LAB_0010c737:
      lVar25 = lVar42 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x66;
      *(undefined *)(param_1 + 0x84) = 0x66;
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x66;
        lVar17 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x206f;
        goto LAB_0010c78f;
      }
    }
    lVar17 = lVar25 + 1;
    *(long *)(param_1 + 0x80) = lVar17;
    *(undefined *)((long)param_1 + lVar25) = 0x6f;
    *(undefined *)(param_1 + 0x84) = 0x6f;
    if (lVar17 != 0xff) goto LAB_0010a110;
LAB_0010ca12:
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined *)(param_1 + 1) = 0x6f;
    lVar25 = 3;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *param_1 = 0x6620;
    goto LAB_0010ca49;
  case 0xd:
    pcVar40 = "typeinfo name for ";
    lVar42 = *(long *)(param_1 + 0x80);
    do {
      cVar34 = *pcVar40;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[1];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 1;
        lVar25 = 0;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[2];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 1;
        lVar42 = 0;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[3];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 1;
        lVar25 = 0;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[4];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 1;
        lVar42 = 0;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[5];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 1;
        lVar25 = 0;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      pcVar40 = pcVar40 + 6;
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
    } while (pcVar40 != "");
    goto switchD_00108ab5_caseD_28;
  case 0xe:
    pcVar40 = "typeinfo fn for ";
    lVar42 = *(long *)(param_1 + 0x80);
    do {
      cVar34 = *pcVar40;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[1];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 1;
        lVar25 = 0;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[2];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 1;
        lVar42 = 0;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[3];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 1;
        lVar25 = 0;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[4];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 1;
        lVar42 = 0;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[5];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 1;
        lVar25 = 0;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[6];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 1;
        lVar42 = 0;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[7];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 1;
        lVar25 = 0;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      pcVar40 = pcVar40 + 8;
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
    } while (pcVar40 != "");
    goto switchD_00108ab5_caseD_28;
  case 0xf:
    pcVar40 = "non-virtual thunk to ";
    lVar42 = *(long *)(param_1 + 0x80);
    do {
      cVar34 = *pcVar40;
      lVar25 = lVar42;
      if (lVar42 == 0xff) {
        pcVar40 = pcVar40 + 1;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined8 *)(param_1 + 0x80) = 1;
        *(char *)param_1 = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        if (pcVar40 == "") break;
        cVar34 = *pcVar40;
        lVar25 = 1;
      }
      lVar42 = lVar25 + 1;
      pcVar40 = pcVar40 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
    } while (pcVar40 != "");
    goto switchD_00108ab5_caseD_28;
  case 0x10:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    pcVar40 = "irtual thunk to ";
    *(char *)((long)param_1 + lVar42) = 'v';
    *(char *)(param_1 + 0x84) = 'v';
    do {
      cVar34 = *pcVar40;
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 1;
        lVar25 = 0;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[1];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[2];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[3];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[4];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[5];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[6];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[7];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      pcVar40 = pcVar40 + 8;
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
    } while (pcVar40 != "");
    goto switchD_00108ab5_caseD_28;
  case 0x11:
    pcVar40 = "covariant return thunk to ";
    lVar42 = *(long *)(param_1 + 0x80);
    do {
      cVar34 = *pcVar40;
      lVar25 = lVar42;
      if (lVar42 == 0xff) {
        pcVar40 = pcVar40 + 1;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined8 *)(param_1 + 0x80) = 1;
        *(char *)param_1 = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        if (pcVar40 == "") break;
        cVar34 = *pcVar40;
        lVar25 = 1;
      }
      lVar42 = lVar25 + 1;
      pcVar40 = pcVar40 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
    } while (pcVar40 != "");
    goto switchD_00108ab5_caseD_28;
  case 0x12:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 != 0xff) {
      *(long *)(param_1 + 0x80) = lVar42 + 1;
      *(undefined *)((long)param_1 + lVar42) = 0x6a;
      *(undefined *)(param_1 + 0x84) = 0x6a;
      if (lVar42 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x61;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x7661;
        goto LAB_0010ee3e;
      }
      *(long *)(param_1 + 0x80) = lVar42 + 2;
      *(undefined *)((long)param_1 + lVar42 + 1) = 0x61;
      *(undefined *)(param_1 + 0x84) = 0x61;
      if (lVar42 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x20;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6176;
        lVar25 = 3;
        goto LAB_0010f08a;
      }
      lVar25 = lVar42 + 3;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42 + 2) = 0x76;
      *(undefined *)(param_1 + 0x84) = 0x76;
      if (lVar25 != 0xff) goto LAB_0010cd19;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x43;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x2061;
      lVar42 = 3;
LAB_0010a0b8:
      lVar25 = lVar42 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x6c;
      *(undefined *)(param_1 + 0x84) = 0x6c;
      if (lVar25 != 0xff) {
LAB_0010cd70:
        lVar42 = lVar25 + 1;
        *(long *)(param_1 + 0x80) = lVar42;
        *(undefined *)((long)param_1 + lVar25) = 0x61;
        *(undefined *)(param_1 + 0x84) = 0x61;
        if (lVar42 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(undefined *)(param_1 + 1) = 0x20;
          lVar42 = 3;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *param_1 = 0x7373;
          goto LAB_0010cdc9;
        }
LAB_0010ee96:
        lVar25 = lVar42 + 1;
        *(long *)(param_1 + 0x80) = lVar25;
        *(undefined *)((long)param_1 + lVar42) = 0x73;
        *(undefined *)(param_1 + 0x84) = 0x73;
        if (lVar25 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *param_1 = 0x2073;
          lVar17 = 3;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *(undefined *)(param_1 + 1) = 0x66;
          goto LAB_0010c78f;
        }
        goto LAB_0010f0e1;
      }
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x73;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x7361;
      lVar17 = 3;
      goto LAB_0010a110;
    }
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined *)(param_1 + 1) = 0x76;
    lVar25 = 3;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *param_1 = 0x616a;
LAB_0010cd19:
    lVar42 = lVar25 + 1;
    *(long *)(param_1 + 0x80) = lVar42;
    *(undefined *)((long)param_1 + lVar25) = 0x61;
    *(undefined *)(param_1 + 0x84) = 0x61;
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x6c;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x4320;
      goto LAB_0010cd70;
    }
LAB_0010ee3e:
    lVar25 = lVar42 + 1;
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar42) = 0x20;
    *(undefined *)(param_1 + 0x84) = 0x20;
    if (lVar25 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x61;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6c43;
      lVar42 = 3;
      goto LAB_0010ee96;
    }
LAB_0010f08a:
    lVar42 = lVar25 + 1;
    *(long *)(param_1 + 0x80) = lVar42;
    *(undefined *)((long)param_1 + lVar25) = 0x43;
    *(undefined *)(param_1 + 0x84) = 0x43;
    if (lVar42 != 0xff) goto LAB_0010a0b8;
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined *)(param_1 + 1) = 0x73;
    lVar25 = 3;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *param_1 = 0x616c;
LAB_0010f0e1:
    lVar17 = lVar25 + 1;
    *(long *)(param_1 + 0x80) = lVar17;
    *(undefined *)((long)param_1 + lVar25) = 0x73;
    *(undefined *)(param_1 + 0x84) = 0x73;
joined_r0x0010f0fd:
    if (lVar17 == 0xff) goto LAB_0010ca12;
LAB_0010a110:
    lVar42 = lVar17 + 1;
    *(long *)(param_1 + 0x80) = lVar42;
    *(undefined *)((long)param_1 + lVar17) = 0x20;
    *(undefined *)(param_1 + 0x84) = 0x20;
joined_r0x0010f30d:
    if (lVar42 == 0xff) {
LAB_0010a133:
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x72;
      lVar42 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6f66;
      goto LAB_00108c50;
    }
LAB_0010cdc9:
    lVar17 = lVar42 + 1;
    *(long *)(param_1 + 0x80) = lVar17;
    *(undefined *)((long)param_1 + lVar42) = 0x66;
    *(undefined *)(param_1 + 0x84) = 0x66;
    if (lVar17 == 0xff) {
LAB_0010cdeb:
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      lVar42 = 2;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x726f;
LAB_00108c50:
      lVar25 = lVar42 + 1;
    }
    else {
LAB_0010c78f:
      lVar25 = lVar17 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar17) = 0x6f;
      *(undefined *)(param_1 + 0x84) = 0x6f;
joined_r0x0010d05a:
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)param_1 = 0x72;
        lVar42 = 1;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        goto LAB_00108c50;
      }
LAB_0010ca49:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x72;
      *(undefined *)(param_1 + 0x84) = 0x72;
joined_r0x0010e366:
      if (lVar42 != 0xff) goto LAB_00108c50;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar42) = 0x20;
    *(undefined *)(param_1 + 0x84) = 0x20;
    goto switchD_00108ab5_caseD_28;
  case 0x13:
    pcVar40 = "guard variable for ";
    lVar42 = *(long *)(param_1 + 0x80);
    do {
      cVar34 = *pcVar40;
      lVar25 = lVar42;
      if (lVar42 == 0xff) {
        pcVar40 = pcVar40 + 1;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined8 *)(param_1 + 0x80) = 1;
        *(char *)param_1 = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        if (pcVar40 == "") break;
        cVar34 = *pcVar40;
        lVar25 = 1;
      }
      lVar42 = lVar25 + 1;
      pcVar40 = pcVar40 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
    } while (pcVar40 != "");
    goto switchD_00108ab5_caseD_28;
  case 0x14:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    pcVar40 = "LS init function for ";
    *(char *)((long)param_1 + lVar42) = 'T';
    *(char *)(param_1 + 0x84) = 'T';
    do {
      cVar34 = *pcVar40;
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 1;
        lVar25 = 0;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[1];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[2];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[3];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[4];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[5];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar17 = 1;
      }
      else {
        lVar17 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar17;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[6];
      if (lVar17 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar17 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar17 + 1;
      }
      pcVar40 = pcVar40 + 7;
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar17) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
    } while (pcVar40 != "");
    goto switchD_00108ab5_caseD_28;
  case 0x15:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    pcVar40 = "LS wrapper function for ";
    *(char *)((long)param_1 + lVar42) = 'T';
    *(char *)(param_1 + 0x84) = 'T';
    do {
      cVar34 = *pcVar40;
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 1;
        lVar25 = 0;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[1];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 1;
        lVar42 = 0;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[2];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 1;
        lVar25 = 0;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[3];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 1;
        lVar42 = 0;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[4];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 1;
        lVar25 = 0;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[5];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 1;
        lVar42 = 0;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      pcVar40 = pcVar40 + 6;
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
    } while (pcVar40 != "");
    goto switchD_00108ab5_caseD_28;
  case 0x16:
    pcVar40 = "reference temporary #";
    lVar42 = *(long *)(param_1 + 0x80);
    do {
      cVar34 = *pcVar40;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[1];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[2];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[3];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[4];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[5];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar17 = 1;
      }
      else {
        lVar17 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar17;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[6];
      if (lVar17 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar17 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar17 + 1;
      }
      pcVar40 = pcVar40 + 7;
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar17) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
    } while (pcVar40 != "");
    FUN_00105800(param_1,uVar22,*(undefined8 *)(param_3 + 6));
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) goto LAB_0010ca12;
    *(long *)(param_1 + 0x80) = lVar42 + 1;
    *(undefined *)((long)param_1 + lVar42) = 0x20;
    *(undefined *)(param_1 + 0x84) = 0x20;
    if (lVar42 + 1 == 0xff) goto LAB_0010a133;
    *(long *)(param_1 + 0x80) = lVar42 + 2;
    *(undefined *)((long)param_1 + lVar42 + 1) = 0x66;
    *(undefined *)(param_1 + 0x84) = 0x66;
    if (lVar42 + 2 != 0xff) {
      lVar25 = lVar42 + 3;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42 + 2) = 0x6f;
      *(undefined *)(param_1 + 0x84) = 0x6f;
      goto joined_r0x0010d05a;
    }
    goto LAB_0010cdeb;
  case 0x17:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    pcVar40 = "idden alias for ";
    *(char *)((long)param_1 + lVar42) = 'h';
    *(char *)(param_1 + 0x84) = 'h';
    do {
      cVar34 = *pcVar40;
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 1;
        lVar25 = 0;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[1];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[2];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[3];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[4];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[5];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[6];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[7];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      pcVar40 = pcVar40 + 8;
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
    } while (pcVar40 != "");
    goto switchD_00108ab5_caseD_28;
  case 0x18:
    puVar35 = *(undefined **)(param_3 + 4);
    if ((long)(int)param_3[6] != 0) {
      lVar42 = *(long *)(param_1 + 0x80);
      puVar43 = puVar35 + (int)param_3[6];
      do {
        uVar37 = *puVar35;
        lVar25 = lVar42;
        if (lVar42 == 0xff) {
          puVar35 = puVar35 + 1;
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *(undefined8 *)(param_1 + 0x80) = 1;
          *(undefined *)param_1 = uVar37;
          *(undefined *)(param_1 + 0x84) = uVar37;
          if (puVar35 == puVar43) {
            return;
          }
          uVar37 = *puVar35;
          lVar25 = 1;
        }
        lVar42 = lVar25 + 1;
        puVar35 = puVar35 + 1;
        *(long *)(param_1 + 0x80) = lVar42;
        *(undefined *)((long)param_1 + lVar25) = uVar37;
        *(undefined *)(param_1 + 0x84) = uVar37;
      } while (puVar35 != puVar43);
    }
    break;
  case 0x19:
  case 0x1a:
  case 0x1b:
    _local_b8 = *(undefined8 *****)(param_1 + 0x94);
    ppppuVar13 = _local_b8;
    uStack_b0 = param_3;
    if (_local_b8 != (undefined8 ****)0x0) {
      do {
        if (*(int *)(ppppuVar13 + 2) == 0) {
          if (2 < *(uint *)ppppuVar13[1] - 0x19) break;
          if (uVar45 == *(uint *)ppppuVar13[1]) goto switchD_00108ab5_caseD_28;
        }
        ppppuVar13 = (undefined8 ****)*ppppuVar13;
      } while (ppppuVar13 != (undefined8 ****)0x0);
      goto LAB_00108c97;
    }
LAB_00108f03:
    *(undefined **)(param_1 + 0x94) = local_b8;
    local_a0 = *(undefined8 *)(param_1 + 0x90);
    goto LAB_00108cc2;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x26:
  case 0x4e:
  case 0x50:
  case 0x51:
    _local_b8 = *(undefined8 *****)(param_1 + 0x94);
LAB_00108c97:
    *(undefined **)(param_1 + 0x94) = local_b8;
    local_a0 = *(undefined8 *)(param_1 + 0x90);
    uStack_b0 = param_3;
LAB_00108cc2:
    lVar42 = *(long *)(uStack_b0 + 4);
LAB_00108cc9:
    puVar20 = uStack_b0;
    local_a8[0] = 0;
    FUN_00105800(param_1,uVar22,lVar42);
    if (local_a8[0] == 0) {
      FUN_001058a0(param_1,uVar22,puVar20);
    }
    *(undefined8 *****)(param_1 + 0x94) = _local_b8;
    if (iVar38 != 0) {
      *(undefined8 *)(param_1 + 0x90) = unaff_R14;
    }
    break;
  case 0x23:
  case 0x24:
    puVar20 = *(uint **)(param_3 + 4);
    iVar39 = *(int *)(param_1 + 0x9c);
    uVar12 = *puVar20;
    if ((iVar39 != 0) || (iVar38 = 0, uVar12 != 5)) goto LAB_00108ee6;
    iVar38 = *(int *)(param_1 + 0xac);
    if (0 < iVar38) {
      ppuVar23 = *(uint ***)(param_1 + 0xa8);
      ppuVar26 = ppuVar23 + (long)iVar38 * 2;
      uVar12 = (int)((long)iVar38 * 0x10 - 0x10U >> 4) + 1U & 7;
      if (uVar12 == 0) {
LAB_00111490:
        do {
          ppuVar27 = ppuVar23;
          if (((((puVar20 == *ppuVar23) || (ppuVar27 = ppuVar23 + 2, puVar20 == *ppuVar27)) ||
               (ppuVar27 = ppuVar23 + 4, puVar20 == *ppuVar27)) ||
              ((ppuVar27 = ppuVar23 + 6, puVar20 == ppuVar23[6] ||
               (ppuVar27 = ppuVar23 + 8, puVar20 == ppuVar23[8])))) ||
             ((ppuVar27 = ppuVar23 + 10, puVar20 == ppuVar23[10] ||
              ((ppuVar27 = ppuVar23 + 0xc, puVar20 == ppuVar23[0xc] ||
               (ppuVar27 = ppuVar23 + 0xe, puVar20 == ppuVar23[0xe])))))) goto LAB_001117d8;
          ppuVar23 = ppuVar23 + 0x10;
        } while (ppuVar23 != ppuVar26);
        goto LAB_00111505;
      }
      if (uVar12 == 1) {
LAB_0011147e:
        ppuVar27 = ppuVar23;
        if (puVar20 != *ppuVar23) {
          ppuVar23 = ppuVar23 + 2;
          if (ppuVar23 == ppuVar26) goto LAB_00111505;
          goto LAB_00111490;
        }
      }
      else if (uVar12 == 2) {
LAB_00111471:
        ppuVar27 = ppuVar23;
        if (puVar20 != *ppuVar23) {
          ppuVar23 = ppuVar23 + 2;
          goto LAB_0011147e;
        }
      }
      else if (uVar12 == 3) {
LAB_00111464:
        ppuVar27 = ppuVar23;
        if (puVar20 != *ppuVar23) {
          ppuVar23 = ppuVar23 + 2;
          goto LAB_00111471;
        }
      }
      else if (uVar12 == 4) {
LAB_00111457:
        ppuVar27 = ppuVar23;
        if (puVar20 != *ppuVar23) {
          ppuVar23 = ppuVar23 + 2;
          goto LAB_00111464;
        }
      }
      else if (uVar12 == 5) {
LAB_0011144a:
        ppuVar27 = ppuVar23;
        if (puVar20 != *ppuVar23) {
          ppuVar23 = ppuVar23 + 2;
          goto LAB_00111457;
        }
      }
      else if (uVar12 == 6) {
LAB_0011143d:
        ppuVar27 = ppuVar23;
        if (puVar20 != *ppuVar23) {
          ppuVar23 = ppuVar23 + 2;
          goto LAB_0011144a;
        }
      }
      else {
        ppuVar27 = ppuVar23;
        if (puVar20 != *ppuVar23) {
          ppuVar23 = ppuVar23 + 2;
          goto LAB_0011143d;
        }
      }
LAB_001117d8:
      for (ppuVar23 = *(uint ***)(param_1 + 0xa4); ppuVar23 != (uint **)0x0;
          ppuVar23 = (uint **)ppuVar23[1]) {
        if ((*ppuVar23 == puVar20) ||
           ((*(uint ***)(param_1 + 0xa4) != ppuVar23 && (*ppuVar23 == param_3)))) goto LAB_001116e4;
      }
      unaff_R14 = *(undefined8 *)(param_1 + 0x90);
      *(uint **)(param_1 + 0x90) = ppuVar27[1];
      puVar20 = (uint *)FUN_00103c20(param_1,puVar20);
      if (puVar20 != (uint *)0x0) {
        iVar38 = 1;
        goto LAB_001116fb;
      }
LAB_00112550:
      *(undefined8 *)(param_1 + 0x90) = unaff_R14;
      goto switchD_00108ab5_caseD_2c;
    }
LAB_00111505:
    if (*(int *)(param_1 + 0xae) <= iVar38) goto switchD_00108ab5_caseD_2c;
    pplVar19 = *(long ***)(param_1 + 0x90);
    ppuVar23 = (uint **)((long)iVar38 * 0x10 + *(long *)(param_1 + 0xa8));
    *(int *)(param_1 + 0xac) = iVar38 + 1;
    ppuVar26 = ppuVar23 + 1;
    *ppuVar23 = puVar20;
    ppuVar23 = ppuVar26;
    if (pplVar19 == (long **)0x0) goto LAB_001116de;
    iVar38 = *(int *)(param_1 + 0xb4);
    uVar33 = (ulong)iVar38;
    iVar5 = *(int *)(param_1 + 0xb6);
    lVar25 = uVar33 * 0x10;
    uVar12 = iVar5 - iVar38 & 3;
    lVar42 = lVar25;
    if (uVar12 == 0) goto LAB_00111612;
    if (iVar5 <= iVar38) goto switchD_00108ab5_caseD_2c;
    puVar8 = (uint *)((long *)pplVar19)[1];
    uVar29 = iVar38 + 1;
    uVar33 = (ulong)uVar29;
    *(uint *)(param_1 + 0xb4) = uVar29;
    ppuVar23 = (uint **)(*(long *)(param_1 + 0xb0) + lVar25);
    lVar42 = lVar25 + 0x10;
    ppuVar23[1] = puVar8;
    *ppuVar26 = (uint *)ppuVar23;
    pplVar19 = (long **)*pplVar19;
    if (pplVar19 != (long **)0x0) {
      if (uVar12 != 1) {
        ppuVar26 = ppuVar23;
        if (uVar12 != 2) {
          puVar8 = (uint *)pplVar19[1];
          uVar29 = iVar38 + 2;
          *(uint *)(param_1 + 0xb4) = uVar29;
          ppuVar26 = (uint **)(*(long *)(param_1 + 0xb0) + lVar42);
          lVar42 = lVar25 + 0x20;
          ppuVar26[1] = puVar8;
          *ppuVar23 = (uint *)ppuVar26;
          pplVar19 = (long **)*pplVar19;
          ppuVar23 = ppuVar26;
          if (pplVar19 == (long **)0x0) goto LAB_001116de;
        }
        plVar9 = pplVar19[1];
        uVar33 = (ulong)(uVar29 + 1);
        *(uint *)(param_1 + 0xb4) = uVar29 + 1;
        ppuVar23 = (uint **)(*(long *)(param_1 + 0xb0) + lVar42);
        lVar42 = lVar42 + 0x10;
        ppuVar23[1] = (uint *)plVar9;
        *ppuVar26 = (uint *)ppuVar23;
        pplVar19 = (long **)*pplVar19;
        if (pplVar19 == (long **)0x0) goto LAB_001116de;
      }
LAB_00111612:
      do {
        iVar38 = (int)uVar33;
        if (iVar5 <= iVar38) goto switchD_00108ab5_caseD_2c;
        puVar8 = (uint *)((long *)pplVar19)[1];
        *(int *)(param_1 + 0xb4) = iVar38 + 1;
        ppuVar26 = (uint **)(*(long *)(param_1 + 0xb0) + lVar42);
        ppuVar26[1] = puVar8;
        *ppuVar23 = (uint *)ppuVar26;
        puVar36 = *pplVar19;
        ppuVar23 = ppuVar26;
        if (puVar36 == (undefined8 *)0x0) break;
        puVar8 = (uint *)puVar36[1];
        *(int *)(param_1 + 0xb4) = iVar38 + 2;
        ppuVar23 = (uint **)(*(long *)(param_1 + 0xb0) + lVar42 + 0x10);
        ppuVar23[1] = puVar8;
        *ppuVar26 = (uint *)ppuVar23;
        puVar36 = (undefined8 *)*puVar36;
        if (puVar36 == (undefined8 *)0x0) break;
        puVar8 = (uint *)puVar36[1];
        *(int *)(param_1 + 0xb4) = iVar38 + 3;
        ppuVar26 = (uint **)(*(long *)(param_1 + 0xb0) + lVar42 + 0x20);
        ppuVar26[1] = puVar8;
        *ppuVar23 = (uint *)ppuVar26;
        pplVar19 = (long **)*puVar36;
        ppuVar23 = ppuVar26;
        if (pplVar19 == (long **)0x0) break;
        plVar9 = pplVar19[1];
        uVar33 = (ulong)(iVar38 + 4U);
        *(uint *)(param_1 + 0xb4) = iVar38 + 4U;
        ppuVar23 = (uint **)(*(long *)(param_1 + 0xb0) + lVar42 + 0x30);
        lVar42 = lVar42 + 0x40;
        ppuVar23[1] = (uint *)plVar9;
        *ppuVar26 = (uint *)ppuVar23;
        pplVar19 = (long **)*pplVar19;
      } while (pplVar19 != (long **)0x0);
    }
LAB_001116de:
    *ppuVar23 = (uint *)0x0;
LAB_001116e4:
    iVar38 = iVar39;
    puVar20 = (uint *)FUN_00103c20(param_1,puVar20);
    if (puVar20 == (uint *)0x0) goto switchD_00108ab5_caseD_2c;
LAB_001116fb:
    uVar12 = *puVar20;
    if (uVar12 == 0x2f) {
      iVar39 = iVar38;
      puVar20 = (uint *)FUN_00103aa0(puVar20,*(undefined4 *)(param_1 + 0x9e));
      if (puVar20 == (uint *)0x0) {
        if (iVar39 != 0) goto LAB_00112550;
        goto switchD_00108ab5_caseD_2c;
      }
      uVar12 = *puVar20;
    }
LAB_00108ee6:
    _local_b8 = *(undefined8 *****)(param_1 + 0x94);
    uStack_b0 = puVar20;
    if (((uVar45 == uVar12) || (uVar12 == 0x23)) || (uStack_b0 = param_3, uVar12 != 0x24))
    goto LAB_00108f03;
    lVar42 = *(long *)(puVar20 + 4);
    *(undefined **)(param_1 + 0x94) = local_b8;
    local_a0 = *(undefined8 *)(param_1 + 0x90);
    if (lVar42 == 0) goto LAB_00108cc2;
    goto LAB_00108cc9;
  case 0x27:
    puVar36 = *(undefined8 **)(param_3 + 4);
    if ((param_2 & 4) == 0) {
      uVar45 = *(uint *)(puVar36 + 1);
      puVar35 = (undefined *)*puVar36;
      if ((long)(int)uVar45 != 0) {
        lVar42 = *(long *)(param_1 + 0x80);
        puVar43 = puVar35 + (int)uVar45;
        uVar45 = uVar45 & 3;
        if (uVar45 != 0) {
          if (uVar45 != 1) {
            lVar25 = lVar42;
            if (uVar45 != 2) {
              uVar37 = *puVar35;
              if (lVar42 == 0xff) {
                *(undefined *)((long)param_1 + 0xff) = 0;
                (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
                *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
                lVar25 = 1;
                lVar42 = 0;
              }
              else {
                lVar25 = lVar42 + 1;
              }
              *(long *)(param_1 + 0x80) = lVar25;
              puVar35 = puVar35 + 1;
              *(undefined *)((long)param_1 + lVar42) = uVar37;
              *(undefined *)(param_1 + 0x84) = uVar37;
            }
            uVar37 = *puVar35;
            if (lVar25 == 0xff) {
              *(undefined *)((long)param_1 + 0xff) = 0;
              (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
              *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
              lVar42 = 1;
              lVar25 = 0;
            }
            else {
              lVar42 = lVar25 + 1;
            }
            *(long *)(param_1 + 0x80) = lVar42;
            puVar35 = puVar35 + 1;
            *(undefined *)((long)param_1 + lVar25) = uVar37;
            *(undefined *)(param_1 + 0x84) = uVar37;
          }
          uVar37 = *puVar35;
          if (lVar42 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar17 = 0;
            lVar25 = 1;
          }
          else {
            lVar25 = lVar42 + 1;
            lVar17 = lVar42;
          }
          lVar42 = lVar25;
          puVar35 = puVar35 + 1;
          *(long *)(param_1 + 0x80) = lVar42;
          *(undefined *)((long)param_1 + lVar17) = uVar37;
          *(undefined *)(param_1 + 0x84) = uVar37;
          if (puVar35 == puVar43) {
            return;
          }
        }
        do {
          uVar37 = *puVar35;
          if (lVar42 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar25 = 1;
            lVar42 = 0;
          }
          else {
            lVar25 = lVar42 + 1;
          }
          *(long *)(param_1 + 0x80) = lVar25;
          *(undefined *)((long)param_1 + lVar42) = uVar37;
          *(undefined *)(param_1 + 0x84) = uVar37;
          uVar37 = puVar35[1];
          if (lVar25 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar42 = 1;
            lVar25 = 0;
          }
          else {
            lVar42 = lVar25 + 1;
          }
          *(long *)(param_1 + 0x80) = lVar42;
          *(undefined *)((long)param_1 + lVar25) = uVar37;
          *(undefined *)(param_1 + 0x84) = uVar37;
          uVar37 = puVar35[2];
          if (lVar42 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar25 = 1;
            lVar42 = 0;
          }
          else {
            lVar25 = lVar42 + 1;
          }
          *(long *)(param_1 + 0x80) = lVar25;
          *(undefined *)((long)param_1 + lVar42) = uVar37;
          *(undefined *)(param_1 + 0x84) = uVar37;
          uVar37 = puVar35[3];
          if (lVar25 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar42 = 1;
            lVar25 = 0;
          }
          else {
            lVar42 = lVar25 + 1;
          }
          puVar35 = puVar35 + 4;
          *(long *)(param_1 + 0x80) = lVar42;
          *(undefined *)((long)param_1 + lVar25) = uVar37;
          *(undefined *)(param_1 + 0x84) = uVar37;
        } while (puVar35 != puVar43);
      }
    }
    else {
      uVar45 = *(uint *)(puVar36 + 3);
      puVar35 = (undefined *)puVar36[2];
      if ((long)(int)uVar45 != 0) {
        lVar42 = *(long *)(param_1 + 0x80);
        puVar43 = puVar35 + (int)uVar45;
        uVar45 = uVar45 & 3;
        if (uVar45 != 0) {
          if (uVar45 != 1) {
            lVar25 = lVar42;
            if (uVar45 != 2) {
              uVar37 = *puVar35;
              if (lVar42 == 0xff) {
                *(undefined *)((long)param_1 + 0xff) = 0;
                (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
                *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
                lVar25 = 1;
                lVar42 = 0;
              }
              else {
                lVar25 = lVar42 + 1;
              }
              *(long *)(param_1 + 0x80) = lVar25;
              puVar35 = puVar35 + 1;
              *(undefined *)((long)param_1 + lVar42) = uVar37;
              *(undefined *)(param_1 + 0x84) = uVar37;
            }
            uVar37 = *puVar35;
            if (lVar25 == 0xff) {
              *(undefined *)((long)param_1 + 0xff) = 0;
              (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
              *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
              lVar42 = 1;
              lVar25 = 0;
            }
            else {
              lVar42 = lVar25 + 1;
            }
            *(long *)(param_1 + 0x80) = lVar42;
            puVar35 = puVar35 + 1;
            *(undefined *)((long)param_1 + lVar25) = uVar37;
            *(undefined *)(param_1 + 0x84) = uVar37;
          }
          uVar37 = *puVar35;
          if (lVar42 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar17 = 0;
            lVar25 = 1;
          }
          else {
            lVar25 = lVar42 + 1;
            lVar17 = lVar42;
          }
          lVar42 = lVar25;
          puVar35 = puVar35 + 1;
          *(long *)(param_1 + 0x80) = lVar42;
          *(undefined *)((long)param_1 + lVar17) = uVar37;
          *(undefined *)(param_1 + 0x84) = uVar37;
          if (puVar35 == puVar43) {
            return;
          }
        }
        do {
          uVar37 = *puVar35;
          if (lVar42 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar25 = 1;
            lVar42 = 0;
          }
          else {
            lVar25 = lVar42 + 1;
          }
          *(long *)(param_1 + 0x80) = lVar25;
          *(undefined *)((long)param_1 + lVar42) = uVar37;
          *(undefined *)(param_1 + 0x84) = uVar37;
          uVar37 = puVar35[1];
          if (lVar25 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar42 = 1;
            lVar25 = 0;
          }
          else {
            lVar42 = lVar25 + 1;
          }
          *(long *)(param_1 + 0x80) = lVar42;
          *(undefined *)((long)param_1 + lVar25) = uVar37;
          *(undefined *)(param_1 + 0x84) = uVar37;
          uVar37 = puVar35[2];
          if (lVar42 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar25 = 1;
            lVar42 = 0;
          }
          else {
            lVar25 = lVar42 + 1;
          }
          *(long *)(param_1 + 0x80) = lVar25;
          *(undefined *)((long)param_1 + lVar42) = uVar37;
          *(undefined *)(param_1 + 0x84) = uVar37;
          uVar37 = puVar35[3];
          if (lVar25 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar42 = 1;
            lVar25 = 0;
          }
          else {
            lVar42 = lVar25 + 1;
          }
          puVar35 = puVar35 + 4;
          *(long *)(param_1 + 0x80) = lVar42;
          *(undefined *)((long)param_1 + lVar25) = uVar37;
          *(undefined *)(param_1 + 0x84) = uVar37;
        } while (puVar35 != puVar43);
      }
    }
    break;
  case 0x28:
  case 0x59:
    goto switchD_00108ab5_caseD_28;
  case 0x29:
    ppppuVar13 = *(undefined8 *****)(param_1 + 0x94);
    uVar45 = (uint)param_2 & 0xffffff9f;
    if ((param_2 & 0x20) == 0) {
      if ((*(long *)(param_3 + 4) != 0) && ((param_2 & 0x40) == 0)) {
        *(undefined **)(param_1 + 0x94) = local_b8;
        local_a0 = *(undefined8 *)(param_1 + 0x90);
        local_a8[0] = 0;
        _local_b8 = ppppuVar13;
        uStack_b0 = param_3;
        FUN_00105800(param_1,uVar45);
        *(undefined8 *****)(param_1 + 0x94) = _local_b8;
        if (local_a8[0] != 0) {
          return;
        }
        FUN_00103a20(param_1,0x20);
      }
      FUN_001085e0(param_1,uVar45,param_3,*(undefined8 *)(param_1 + 0x94));
      return;
    }
    FUN_001085e0(param_1,uVar45,param_3);
    piVar15 = *(int **)(param_3 + 4);
    uVar22 = (ulong)uVar45;
    if (piVar15 != (int *)0x0) goto LAB_00108c6d;
    break;
  case 0x2a:
    ppppuVar13 = *(undefined8 *****)(param_1 + 0x94);
    local_a0 = *(undefined8 *)(param_1 + 0x90);
    *(undefined **)(param_1 + 0x94) = local_b8;
    uVar45 = 1;
    local_a8[0] = 0;
    ppppuVar14 = ppppuVar13;
    puVar36 = (undefined8 *)local_b8;
    _local_b8 = ppppuVar13;
    if (ppppuVar13 == (undefined8 ****)0x0) {
      uStack_b0 = param_3;
      FUN_00105800(param_1,param_2,*(undefined8 *)(param_3 + 6));
      *(undefined8 *)(param_1 + 0x94) = 0;
      if (local_a8[0] != 0) {
        return;
      }
    }
    else {
      do {
        if (2 < *(int *)ppppuVar14[1] - 0x19U) break;
        if (*(int *)(ppppuVar14 + 2) == 0) {
          if (3 < uVar45) goto switchD_00108ab5_caseD_2c;
          uVar4 = *(undefined4 *)((long)ppppuVar14 + 4);
          uVar10 = *(undefined4 *)(ppppuVar14 + 1);
          uVar11 = *(undefined4 *)((long)ppppuVar14 + 0xc);
          uVar33 = (ulong)uVar45;
          uVar45 = uVar45 + 1;
          lVar42 = uVar33 * 0x20;
          *(undefined4 *)((long)local_b8 + uVar33 * 4 * 8) = *(undefined4 *)ppppuVar14;
          *(undefined4 *)((long)local_b8 + lVar42 + 4) = uVar4;
          *(undefined4 *)(&uStack_b0 + uVar33 * 4) = uVar10;
          *(undefined4 *)((long)&uStack_b0 + lVar42 + 4) = uVar11;
          iVar38 = *(int *)(ppppuVar14 + 2);
          iVar39 = *(int *)((long)ppppuVar14 + 0x14);
          uVar4 = *(undefined4 *)(ppppuVar14 + 3);
          uVar10 = *(undefined4 *)((long)ppppuVar14 + 0x1c);
          *(undefined8 **)((long)local_b8 + uVar33 * 4 * 8) = puVar36;
          puVar36 = (undefined8 *)((long)local_b8 + uVar33 * 4 * 8);
          *(undefined8 **)(param_1 + 0x94) = puVar36;
          local_a8[uVar33 * 8] = iVar38;
          local_a8[uVar33 * 8 + 1] = iVar39;
          *(undefined4 *)(&local_a0 + uVar33 * 4) = uVar4;
          *(undefined4 *)((long)&local_a0 + lVar42 + 4) = uVar10;
          *(undefined4 *)(ppppuVar14 + 2) = 1;
        }
        ppppuVar14 = (undefined8 ****)*ppppuVar14;
      } while (ppppuVar14 != (undefined8 ****)0x0);
      uStack_b0 = param_3;
      FUN_00105800(param_1,uVar22,*(undefined8 *)(param_3 + 6));
      *(undefined8 *****)(param_1 + 0x94) = ppppuVar13;
      if (local_a8[0] != 0) {
        return;
      }
      if (uVar45 != 1) {
        uVar33 = (ulong)(uVar45 - 1);
        lVar42 = (long)local_b8 + uVar33 * 4 * 8;
        while( true ) {
          puVar36 = (undefined8 *)(lVar42 + 8);
          lVar42 = lVar42 + -0x20;
          FUN_001058a0(param_1,uVar22,*puVar36);
          if ((int)uVar33 == 1) break;
          uVar33 = (ulong)((int)uVar33 - 1);
        }
      }
    }
    FUN_00107690(param_1,uVar22,param_3,*(undefined8 *)(param_1 + 0x94));
    break;
  case 0x2b:
  case 0x2d:
    uVar30 = *(undefined8 *)(param_3 + 6);
    _local_b8 = *(undefined8 *****)(param_1 + 0x94);
    *(undefined **)(param_1 + 0x94) = local_b8;
    local_a0 = *(undefined8 *)(param_1 + 0x90);
    local_a8[0] = 0;
    uStack_b0 = param_3;
    FUN_00105800(param_1,param_2,uVar30);
    if (local_a8[0] == 0) {
      FUN_001058a0(param_1,uVar22,param_3);
    }
    *(undefined8 *****)(param_1 + 0x94) = _local_b8;
    break;
  default:
    goto switchD_00108ab5_caseD_2c;
  case 0x2e:
  case 0x2f:
    if (*(long *)(param_3 + 4) != 0) {
      FUN_00105800();
    }
    if (*(long *)(param_3 + 6) != 0) {
      uVar33 = *(ulong *)(param_1 + 0x80);
      if (0xfd < uVar33) {
        *(undefined *)((long)param_1 + uVar33) = 0;
        (**(code **)(param_1 + 0x88))(param_1,uVar33,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined8 *)(param_1 + 0x80) = 0;
      }
      FUN_00103e70(param_1,&DAT_0011e263);
      lVar42 = *(long *)(param_1 + 0xa0);
      lVar25 = *(long *)(param_1 + 0x80);
      FUN_00105800(param_1,uVar22,*(undefined8 *)(param_3 + 6));
      if ((*(long *)(param_1 + 0xa0) == lVar42) && (*(long *)(param_1 + 0x80) == lVar25)) {
        *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + -2;
      }
    }
    break;
  case 0x30:
    pcVar40 = "template parameter object for ";
    lVar42 = *(long *)(param_1 + 0x80);
    do {
      cVar34 = *pcVar40;
      lVar25 = lVar42;
      if (lVar42 == 0xff) {
        pcVar40 = pcVar40 + 1;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined8 *)(param_1 + 0x80) = 1;
        *(char *)param_1 = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        if (pcVar40 == "") break;
        cVar34 = *pcVar40;
        lVar25 = 1;
      }
      lVar42 = lVar25 + 1;
      pcVar40 = pcVar40 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
    } while (pcVar40 != "");
    goto switchD_00108ab5_caseD_28;
  case 0x31:
    uVar30 = *(undefined8 *)(param_3 + 6);
    if (*(long *)(param_3 + 4) != 0) {
      FUN_00105800();
    }
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar42) = 0x7b;
    *(undefined *)(param_1 + 0x84) = 0x7b;
    FUN_00105800(param_1,uVar22,uVar30);
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar42) = 0x7d;
    *(undefined *)(param_1 + 0x84) = 0x7d;
    break;
  case 0x32:
    lVar42 = *(long *)(param_3 + 4);
    lVar25 = *(long *)(param_1 + 0x80);
    lVar17 = (long)*(int *)(lVar42 + 0x10);
    if (lVar25 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x65;
      lVar18 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x706f;
LAB_0010e70b:
      lVar25 = lVar18 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar18) = 0x72;
      *(undefined *)(param_1 + 0x84) = 0x72;
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x6f;
        lVar18 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x7461;
      }
      else {
LAB_0010d24c:
        lVar18 = lVar25 + 1;
        *(long *)(param_1 + 0x80) = lVar18;
        *(undefined *)((long)param_1 + lVar25) = 0x61;
        *(undefined *)(param_1 + 0x84) = 0x61;
        if (lVar18 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          lVar18 = 2;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *param_1 = 0x6f74;
        }
        else {
LAB_0010eb55:
          lVar25 = lVar18 + 1;
          *(long *)(param_1 + 0x80) = lVar25;
          *(undefined *)((long)param_1 + lVar18) = 0x74;
          *(undefined *)(param_1 + 0x84) = 0x74;
          if (lVar25 != 0xff) goto LAB_0010abb9;
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(undefined *)param_1 = 0x6f;
          lVar18 = 1;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        }
      }
LAB_0010d29f:
      lVar25 = lVar18 + 1;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar25 + 1;
      *(undefined *)((long)param_1 + lVar25) = 0x6f;
      *(undefined *)(param_1 + 0x84) = 0x6f;
      if (lVar25 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x72;
        lVar25 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6570;
        goto LAB_0010d24c;
      }
      *(long *)(param_1 + 0x80) = lVar25 + 2;
      *(undefined *)((long)param_1 + lVar25 + 1) = 0x70;
      *(undefined *)(param_1 + 0x84) = 0x70;
      if (lVar25 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x61;
        lVar18 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x7265;
        goto LAB_0010eb55;
      }
      lVar18 = lVar25 + 3;
      *(long *)(param_1 + 0x80) = lVar18;
      *(undefined *)((long)param_1 + lVar25 + 2) = 0x65;
      *(undefined *)(param_1 + 0x84) = 0x65;
      if (lVar18 != 0xff) goto LAB_0010e70b;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x74;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6172;
LAB_0010abb9:
      lVar18 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar18;
      *(undefined *)((long)param_1 + lVar25) = 0x6f;
      *(undefined *)(param_1 + 0x84) = 0x6f;
      if (lVar18 != 0xff) goto LAB_0010d29f;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar18 = 0;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar18) = 0x72;
    *(undefined *)(param_1 + 0x84) = 0x72;
    pcVar40 = *(char **)(lVar42 + 8);
    if ((byte)(*pcVar40 + 0x9fU) < 0x1a) {
      FUN_00103a20(param_1,0x20);
      pcVar40 = *(char **)(lVar42 + 8);
    }
    if (pcVar40[lVar17 + -1] == ' ') {
      lVar17 = lVar17 + -1;
    }
    if (lVar17 != 0) {
      lVar42 = *(long *)(param_1 + 0x80);
      pcVar41 = pcVar40 + lVar17;
      do {
        cVar34 = *pcVar40;
        lVar25 = lVar42;
        if (lVar42 == 0xff) {
          pcVar40 = pcVar40 + 1;
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *(undefined8 *)(param_1 + 0x80) = 1;
          *(char *)param_1 = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
          if (pcVar40 == pcVar41) {
            return;
          }
          cVar34 = *pcVar40;
          lVar25 = 1;
        }
        lVar42 = lVar25 + 1;
        pcVar40 = pcVar40 + 1;
        *(long *)(param_1 + 0x80) = lVar42;
        *(char *)((long)param_1 + lVar25) = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
      } while (pcVar40 != pcVar41);
    }
    break;
  case 0x33:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x65;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x706f;
      lVar25 = 3;
LAB_0010e62e:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x72;
      *(undefined *)(param_1 + 0x84) = 0x72;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x6f;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x7461;
        goto LAB_0010e685;
      }
LAB_0010f57c:
      lVar25 = lVar42 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x61;
      *(undefined *)(param_1 + 0x84) = 0x61;
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x72;
        *param_1 = 0x6f74;
        lVar25 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      }
      else {
LAB_0010f607:
        lVar17 = lVar25 + 1;
        *(long *)(param_1 + 0x80) = lVar17;
        *(undefined *)((long)param_1 + lVar25) = 0x74;
        *(undefined *)(param_1 + 0x84) = 0x74;
        if (lVar17 != 0xff) goto LAB_00109e54;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *param_1 = 0x726f;
        lVar25 = 2;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      }
LAB_00109ea3:
      lVar42 = lVar25 + 1;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar42 + 1;
      *(undefined *)((long)param_1 + lVar42) = 0x6f;
      *(undefined *)(param_1 + 0x84) = 0x6f;
      if (lVar42 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x72;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6570;
        lVar42 = 3;
        goto LAB_0010f57c;
      }
      *(long *)(param_1 + 0x80) = lVar42 + 2;
      *(undefined *)((long)param_1 + lVar42 + 1) = 0x70;
      *(undefined *)(param_1 + 0x84) = 0x70;
      if (lVar42 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x61;
        lVar25 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x7265;
        goto LAB_0010f607;
      }
      lVar25 = lVar42 + 3;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42 + 2) = 0x65;
      *(undefined *)(param_1 + 0x84) = 0x65;
      if (lVar25 != 0xff) goto LAB_0010e62e;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x74;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6172;
      lVar17 = 3;
LAB_00109e54:
      lVar42 = lVar17 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar17) = 0x6f;
      *(undefined *)(param_1 + 0x84) = 0x6f;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)param_1 = 0x72;
        lVar25 = 1;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        goto LAB_00109ea3;
      }
LAB_0010e685:
      lVar25 = lVar42 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x72;
      *(undefined *)(param_1 + 0x84) = 0x72;
      if (lVar25 != 0xff) goto LAB_00109ea3;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar42 = 1;
      lVar25 = 0;
    }
    *(long *)(param_1 + 0x80) = lVar42;
    *(undefined *)((long)param_1 + lVar25) = 0x20;
    *(undefined *)(param_1 + 0x84) = 0x20;
    piVar15 = *(int **)(param_3 + 6);
    goto LAB_00108c6d;
  case 0x35:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *param_1 = 0x706f;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *(undefined *)(param_1 + 1) = 0x65;
LAB_0010e87a:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x72;
      *(undefined *)(param_1 + 0x84) = 0x72;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x6f;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x7461;
        goto LAB_0010e8d3;
      }
LAB_0010e959:
      lVar25 = lVar42 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x61;
      *(undefined *)(param_1 + 0x84) = 0x61;
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x72;
        lVar25 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6f74;
      }
      else {
LAB_0010eac9:
        lVar17 = lVar25 + 1;
        *(long *)(param_1 + 0x80) = lVar17;
        *(undefined *)((long)param_1 + lVar25) = 0x74;
        *(undefined *)(param_1 + 0x84) = 0x74;
        if (lVar17 != 0xff) goto LAB_00109cda;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        lVar25 = 2;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x726f;
      }
LAB_00109d29:
      lVar42 = lVar25 + 1;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar42 + 1;
      *(undefined *)((long)param_1 + lVar42) = 0x6f;
      *(undefined *)(param_1 + 0x84) = 0x6f;
      if (lVar42 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *param_1 = 0x6570;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined *)(param_1 + 1) = 0x72;
        goto LAB_0010e959;
      }
      *(long *)(param_1 + 0x80) = lVar42 + 2;
      *(undefined *)((long)param_1 + lVar42 + 1) = 0x70;
      *(undefined *)(param_1 + 0x84) = 0x70;
      if (lVar42 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x61;
        lVar25 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x7265;
        goto LAB_0010eac9;
      }
      lVar25 = lVar42 + 3;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42 + 2) = 0x65;
      *(undefined *)(param_1 + 0x84) = 0x65;
      if (lVar25 != 0xff) goto LAB_0010e87a;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x74;
      lVar17 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6172;
LAB_00109cda:
      lVar42 = lVar17 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar17) = 0x6f;
      *(undefined *)(param_1 + 0x84) = 0x6f;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)param_1 = 0x72;
        lVar25 = 1;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        goto LAB_00109d29;
      }
LAB_0010e8d3:
      lVar25 = lVar42 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x72;
      *(undefined *)(param_1 + 0x84) = 0x72;
      if (lVar25 != 0xff) goto LAB_00109d29;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar42 = 1;
      lVar25 = 0;
    }
    *(long *)(param_1 + 0x80) = lVar42;
    *(undefined *)((long)param_1 + lVar25) = 0x20;
    *(undefined *)(param_1 + 0x84) = 0x20;
    if (*(uint **)(param_1 + 0xb8) != (uint *)0x0) {
      _local_b8 = *(undefined8 *****)(param_1 + 0x90);
      *(undefined **)(param_1 + 0x90) = local_b8;
      uStack_b0 = *(uint **)(param_1 + 0xb8);
    }
    if (**(int **)(param_3 + 4) == 4) {
      FUN_00105800(param_1,uVar22,*(undefined8 *)(*(int **)(param_3 + 4) + 4));
      if (*(long *)(param_1 + 0xb8) != 0) {
        *(undefined8 *****)(param_1 + 0x90) = _local_b8;
      }
      if (*(char *)(param_1 + 0x84) == '<') {
        FUN_00103a20(param_1,0x20);
      }
      FUN_00103a20(param_1,0x3c);
      FUN_00105800(param_1,uVar22,*(undefined8 *)(*(long *)(param_3 + 4) + 0x18));
      if (*(char *)(param_1 + 0x84) == '>') {
        FUN_00103a20(param_1,0x20);
      }
      FUN_00103a20(param_1,0x3e);
    }
    else {
      FUN_00105800(param_1,uVar22);
      if (*(long *)(param_1 + 0xb8) != 0) {
        *(undefined8 *****)(param_1 + 0x90) = _local_b8;
      }
    }
    break;
  case 0x36:
    piVar21 = *(int **)(param_3 + 4);
LAB_00109c0c:
    FUN_00108990(param_1,uVar22,piVar21);
    return;
  case 0x37:
    piVar21 = *(int **)(param_3 + 4);
    piVar15 = *(int **)(param_3 + 6);
    if (*piVar21 == 0x32) {
      pbVar7 = **(byte ***)(piVar21 + 4);
      bVar3 = *pbVar7;
      uVar45 = bVar3 - 0x61;
      if ((uVar45 == 0) && (uVar45 = pbVar7[1] - 100, uVar45 == 0)) {
        uVar45 = (uint)pbVar7[2];
      }
      if ((uVar45 == 0) && (*piVar15 == 3)) {
        if ((**(int **)(piVar15 + 4) == 1) && (**(int **)(piVar15 + 6) == 0x29)) {
          piVar15 = *(int **)(piVar15 + 4);
        }
      }
      else if (*piVar15 == 0x39) {
        FUN_00112740(param_1,uVar22,*(undefined8 *)(piVar15 + 4));
        goto LAB_00109c0c;
      }
      if (bVar3 == 0x73) {
        if ((pbVar7[1] == 0x5a) && (uVar33 = (ulong)pbVar7[2], pbVar7[2] == 0)) {
          for (piVar15 = (int *)FUN_00103dc0(param_1,piVar15);
              ((piVar15 != (int *)0x0 && (*piVar15 == 0x2f)) && (*(long *)(piVar15 + 4) != 0));
              piVar15 = *(int **)(piVar15 + 6)) {
            uVar33 = (ulong)((int)uVar33 + 1);
          }
LAB_0010f879:
          FUN_00103f30(param_1,uVar33 & 0xffffffff);
          return;
        }
        if (((bVar3 == 0x73) && (pbVar7[1] == 0x50)) && (uVar33 = 0, pbVar7[2] == 0)) {
          do {
            iVar38 = (int)uVar33;
            if ((*piVar15 != 0x2f) || (piVar21 = *(int **)(piVar15 + 4), piVar21 == (int *)0x0))
            break;
            if (*piVar21 == 0x4c) {
              piVar21 = (int *)FUN_00103dc0(param_1,*(undefined8 *)(piVar21 + 4));
              iVar39 = 0;
              for (; ((piVar21 != (int *)0x0 && (*piVar21 == 0x2f)) && (*(long *)(piVar21 + 4) != 0)
                     ); piVar21 = *(int **)(piVar21 + 6)) {
                iVar39 = iVar39 + 1;
              }
              uVar45 = iVar38 + iVar39;
            }
            else {
              uVar45 = iVar38 + 1;
            }
            uVar33 = (ulong)uVar45;
            piVar15 = *(int **)(piVar15 + 6);
          } while (piVar15 != (int *)0x0);
          goto LAB_0010f879;
        }
      }
      FUN_00108990(param_1,uVar22,piVar21);
      piVar21 = extraout_RDX;
      if (((*pbVar7 == 0x67) && (piVar21 = extraout_RDX, pbVar7[1] == 0x73)) &&
         (piVar21 = piVar15, pbVar7[2] == 0)) goto LAB_00108c6d;
      if (((*pbVar7 == 0x73) && (pbVar7[1] == 0x74)) && (pbVar7[2] == 0)) {
        FUN_00103a20(param_1,0x28,piVar21);
        FUN_00105800(param_1,uVar22,piVar15);
        uVar30 = 0x29;
        goto LAB_0010adde;
      }
    }
    else if (*piVar21 == 0x34) {
      FUN_00103a20(param_1,0x28);
      FUN_00105800(param_1,uVar22,*(undefined8 *)(piVar21 + 4));
      FUN_00103a20(param_1,0x29);
    }
    else {
      FUN_00108990(param_1,param_2,piVar21);
    }
LAB_0010b5af:
    FUN_00112740(param_1,uVar22,piVar15);
    return;
  case 0x38:
    if (**(int **)(param_3 + 6) == 0x39) {
      if (((**(char ***)(*(long *)(param_3 + 4) + 0x10))[1] == 'c') &&
         ((cVar34 = ***(char ***)(*(long *)(param_3 + 4) + 0x10), (byte)(cVar34 + 0x9dU) < 2 ||
          ((byte)(cVar34 + 0x8eU) < 2)))) {
        FUN_00108990(param_1,uVar22);
        FUN_00103a20(param_1,0x3c);
        FUN_00105800(param_1,uVar22,*(undefined8 *)(*(long *)(param_3 + 6) + 0x10));
        FUN_00103e70(param_1,&DAT_0011e266);
        FUN_00105800(param_1,uVar22,*(undefined8 *)(*(long *)(param_3 + 6) + 0x18));
        uVar30 = 0x29;
      }
      else {
        iVar38 = FUN_001128f0(param_1,uVar22,param_3);
        if (iVar38 != 0) {
          return;
        }
        iVar38 = FUN_00112f70(param_1,uVar22,param_3);
        if (iVar38 != 0) {
          return;
        }
        piVar15 = *(int **)(param_3 + 4);
        if (((*piVar15 == 0x32) && (*(int *)(*(long *)(piVar15 + 4) + 0x10) == 1)) &&
           (**(char **)(*(long *)(piVar15 + 4) + 8) == '>')) {
          FUN_00103a20(param_1,0x28);
          piVar15 = *(int **)(param_3 + 4);
        }
        iVar38 = strcmp(**(char ***)(piVar15 + 4),"cl");
        piVar15 = *(int **)(*(long *)(param_3 + 6) + 0x10);
        if ((iVar38 == 0) && (*piVar15 == 3)) {
          if (**(int **)(piVar15 + 6) != 0x29) {
            *(undefined4 *)(param_1 + 0x98) = 1;
          }
          FUN_00112740(param_1,uVar22,*(undefined8 *)(piVar15 + 4));
        }
        else {
          FUN_00112740(param_1,uVar22);
        }
        lVar42 = *(long *)(param_3 + 4);
        pcVar40 = **(char ***)(lVar42 + 0x10);
        iVar38 = strcmp(pcVar40,"ix");
        if (iVar38 == 0) {
          FUN_00103a20(param_1,0x5b);
          FUN_00105800(param_1,uVar22,*(undefined8 *)(*(long *)(param_3 + 6) + 0x18));
          FUN_00103a20(param_1,0x5d);
        }
        else {
          iVar38 = strcmp(pcVar40,"cl");
          if (iVar38 != 0) {
            FUN_00108990(param_1,uVar22,lVar42);
          }
          FUN_00112740(param_1,uVar22,*(undefined8 *)(*(long *)(param_3 + 6) + 0x18));
        }
        if (**(int **)(param_3 + 4) != 0x32) {
          return;
        }
        lVar42 = *(long *)(*(int **)(param_3 + 4) + 4);
        if (*(int *)(lVar42 + 0x10) != 1) {
          return;
        }
        uVar30 = 0x29;
        if (**(char **)(lVar42 + 8) != '>') {
          return;
        }
      }
      goto LAB_0010adde;
    }
    goto switchD_00108ab5_caseD_2c;
  case 0x3a:
    if ((**(int **)(param_3 + 6) == 0x3b) && (**(int **)(*(int **)(param_3 + 6) + 6) == 0x3c)) {
      iVar38 = FUN_001128f0(param_1,param_2,param_3);
      if (iVar38 != 0) {
        return;
      }
      iVar38 = FUN_00112f70(param_1,uVar22,param_3);
      if (iVar38 != 0) {
        return;
      }
      lVar42 = *(long *)(param_3 + 4);
      lVar25 = *(long *)(*(long *)(param_3 + 6) + 0x10);
      lVar17 = *(long *)(*(long *)(param_3 + 6) + 0x18);
      uVar30 = *(undefined8 *)(lVar17 + 0x10);
      piVar15 = *(int **)(lVar17 + 0x18);
      iVar38 = strcmp(**(char ***)(lVar42 + 0x10),"qu");
      if (iVar38 == 0) {
        FUN_00112740(param_1,uVar22,lVar25);
        FUN_00108990(param_1,uVar22,lVar42);
        FUN_00112740(param_1,uVar22,uVar30);
        FUN_00103e70(param_1,&DAT_0011e272);
      }
      else {
        FUN_00103e70(param_1,&DAT_0011e276);
        if (*(long *)(lVar25 + 0x10) != 0) {
          FUN_00112740(param_1,uVar22,lVar25);
          FUN_00103a20(param_1,0x20);
        }
        FUN_00105800(param_1,uVar22,uVar30);
        if (piVar15 == (int *)0x0) {
          return;
        }
      }
      goto LAB_0010b5af;
    }
switchD_00108ab5_caseD_2c:
    *(undefined4 *)(param_1 + 0x98) = 1;
    break;
  case 0x3d:
  case 0x3e:
    piVar15 = *(int **)(param_3 + 4);
    if (*piVar15 != 0x27) {
      uVar12 = 0;
LAB_00108de8:
      lVar42 = *(long *)(param_1 + 0x80);
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        piVar15 = *(int **)(param_3 + 4);
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x28;
      *(undefined *)(param_1 + 0x84) = 0x28;
      FUN_00105800(param_1,uVar22,piVar15);
      lVar42 = *(long *)(param_1 + 0x80);
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 1;
        lVar42 = 0;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x29;
      *(undefined *)(param_1 + 0x84) = 0x29;
      if (*param_3 == 0x3e) {
        FUN_00103a20(param_1,0x2d);
      }
      if (uVar12 == 8) {
        FUN_00103a20(param_1,0x5b);
        FUN_00105800(param_1,uVar22,*(undefined8 *)(param_3 + 6));
        uVar30 = 0x5d;
        goto LAB_0010adde;
      }
      goto switchD_00108ab5_caseD_7;
    }
    uVar12 = *(uint *)(*(long *)(piVar15 + 4) + 0x1c);
    if (6 < uVar12) {
      if ((((uVar12 == 7) && (piVar21 = *(int **)(param_3 + 6), *piVar21 == 0)) && (piVar21[6] == 1)
          ) && (uVar45 == 0x3d)) {
        if (**(char **)(piVar21 + 4) == '0') {
          pcVar40 = "false";
          goto LAB_0010a99c;
        }
        if (**(char **)(piVar21 + 4) == '1') {
          pcVar40 = "true";
          goto LAB_0010a99c;
        }
      }
      goto LAB_00108de8;
    }
    if ((uVar12 == 0) || (piVar21 = *(int **)(param_3 + 6), *piVar21 != 0)) goto LAB_00108de8;
    if (uVar45 == 0x3e) {
      FUN_00103a20(param_1,0x2d);
      piVar21 = *(int **)(param_3 + 6);
    }
    FUN_00105800(param_1,uVar22,piVar21);
    switch(uVar12) {
    case 2:
      uVar30 = 0x75;
      goto LAB_0010adde;
    case 3:
      uVar30 = 0x6c;
LAB_0010adde:
      FUN_00103a20(param_1,uVar30);
      return;
    case 4:
      pcVar40 = "ul";
      break;
    case 5:
      pcVar40 = "ll";
      break;
    case 6:
      pcVar40 = "ull";
      break;
    default:
      goto switchD_00111769_caseD_5;
    }
LAB_0010a99c:
    FUN_00103e70(param_1,pcVar40);
    return;
  case 0x3f:
    FUN_00105800(param_1,param_2,*(undefined8 *)(param_3 + 4));
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar42) = 0x28;
    *(undefined *)(param_1 + 0x84) = 0x28;
    uVar30 = *(undefined8 *)(param_3 + 6);
    goto LAB_0010946a;
  case 0x40:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 != 0xff) {
      *(long *)(param_1 + 0x80) = lVar42 + 1;
      *(undefined *)((long)param_1 + lVar42) = 0x6a;
      *(undefined *)(param_1 + 0x84) = 0x6a;
      if (lVar42 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *param_1 = 0x7661;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined *)(param_1 + 1) = 0x61;
        goto LAB_0010e29a;
      }
      *(long *)(param_1 + 0x80) = lVar42 + 2;
      *(undefined *)((long)param_1 + lVar42 + 1) = 0x61;
      *(undefined *)(param_1 + 0x84) = 0x61;
      if (lVar42 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *param_1 = 0x6176;
        lVar25 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined *)(param_1 + 1) = 0x20;
        goto LAB_0010e3a5;
      }
      lVar25 = lVar42 + 3;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42 + 2) = 0x76;
      *(undefined *)(param_1 + 0x84) = 0x76;
      if (lVar25 != 0xff) goto LAB_0010de0b;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *param_1 = 0x2061;
      lVar17 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *(undefined *)(param_1 + 1) = 0x72;
LAB_00108b9e:
      lVar42 = lVar17 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar17) = 0x65;
      *(undefined *)(param_1 + 0x84) = 0x65;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x75;
        lVar25 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6f73;
        goto LAB_00108bf7;
      }
LAB_0010de65:
      lVar25 = lVar42 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x73;
      *(undefined *)(param_1 + 0x84) = 0x73;
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x72;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x756f;
        goto LAB_0010debd;
      }
LAB_0010e2f3:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x6f;
      *(undefined *)(param_1 + 0x84) = 0x6f;
      if (lVar42 != 0xff) goto LAB_0010e3ff;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 99;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x7275;
LAB_0010e34a:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x65;
      *(undefined *)(param_1 + 0x84) = 0x65;
      goto joined_r0x0010e366;
    }
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined *)(param_1 + 1) = 0x76;
    lVar25 = 3;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *param_1 = 0x616a;
LAB_0010de0b:
    lVar42 = lVar25 + 1;
    *(long *)(param_1 + 0x80) = lVar42;
    *(undefined *)((long)param_1 + lVar25) = 0x61;
    *(undefined *)(param_1 + 0x84) = 0x61;
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x65;
      lVar42 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x7220;
      goto LAB_0010de65;
    }
LAB_0010e29a:
    lVar25 = lVar42 + 1;
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar42) = 0x20;
    *(undefined *)(param_1 + 0x84) = 0x20;
    if (lVar25 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x73;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6572;
      goto LAB_0010e2f3;
    }
LAB_0010e3a5:
    lVar17 = lVar25 + 1;
    *(long *)(param_1 + 0x80) = lVar17;
    *(undefined *)((long)param_1 + lVar25) = 0x72;
    *(undefined *)(param_1 + 0x84) = 0x72;
    if (lVar17 != 0xff) goto LAB_00108b9e;
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined *)(param_1 + 1) = 0x6f;
    lVar42 = 3;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *param_1 = 0x7365;
LAB_0010e3ff:
    lVar25 = lVar42 + 1;
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar42) = 0x75;
    *(undefined *)(param_1 + 0x84) = 0x75;
    if (lVar25 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x65;
      lVar42 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6372;
    }
    else {
LAB_00108bf7:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x72;
      *(undefined *)(param_1 + 0x84) = 0x72;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        lVar42 = 2;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6563;
      }
      else {
LAB_0010debd:
        lVar25 = lVar42 + 1;
        *(long *)(param_1 + 0x80) = lVar25;
        *(undefined *)((long)param_1 + lVar42) = 99;
        *(undefined *)(param_1 + 0x84) = 99;
        if (lVar25 != 0xff) goto LAB_0010e34a;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)param_1 = 0x65;
        lVar42 = 1;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      }
    }
    goto LAB_00108c50;
  case 0x41:
    FUN_00105800(param_1,param_2,*(undefined8 *)(param_3 + 4));
    goto switchD_00108ab5_caseD_7;
  case 0x42:
    cVar34 = (char)param_3[4];
    goto LAB_0010a3e7;
  case 0x43:
    puVar36 = (undefined8 *)local_b8;
    sprintf((char *)puVar36,"%d",(ulong)param_3[4]);
    sVar16 = strlen((char *)puVar36);
    if (sVar16 != 0) {
      puVar1 = (undefined8 *)((long)puVar36 + sVar16);
      lVar42 = *(long *)(param_1 + 0x80);
      do {
        cVar34 = *(char *)puVar36;
        if (lVar42 == 0xff) {
          puVar36 = (undefined8 *)((long)puVar36 + 1);
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *(undefined8 *)(param_1 + 0x80) = 1;
          *(char *)param_1 = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
          if (puVar36 == puVar1) {
            return;
          }
          cVar34 = *(char *)puVar36;
          lVar42 = 1;
        }
        puVar36 = (undefined8 *)((long)puVar36 + 1);
        *(long *)(param_1 + 0x80) = lVar42 + 1;
        *(char *)((long)param_1 + lVar42) = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        lVar42 = lVar42 + 1;
      } while (puVar36 != puVar1);
    }
    break;
  case 0x44:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 99;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6564;
LAB_0010e79a:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x6c;
      *(undefined *)(param_1 + 0x84) = 0x6c;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x70;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x7974;
        lVar42 = 3;
        goto LAB_0010e7f2;
      }
LAB_0010e9ea:
      lVar25 = lVar42 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x74;
      *(undefined *)(param_1 + 0x84) = 0x74;
      if (lVar25 != 0xff) {
LAB_0010ebdb:
        lVar17 = lVar25 + 1;
        *(long *)(param_1 + 0x80) = lVar17;
        *(undefined *)((long)param_1 + lVar25) = 0x79;
        *(undefined *)(param_1 + 0x84) = 0x79;
        if (lVar17 != 0xff) goto LAB_0010970b;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *param_1 = 0x6570;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined *)(param_1 + 1) = 0x20;
        goto LAB_00109760;
      }
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x65;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x7079;
LAB_0010ea43:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x20;
      *(undefined *)(param_1 + 0x84) = 0x20;
      if (lVar42 != 0xff) goto LAB_00109760;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar42 + 1;
      *(undefined *)((long)param_1 + lVar42) = 100;
      *(undefined *)(param_1 + 0x84) = 100;
      if (lVar42 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x6c;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6365;
        goto LAB_0010e9ea;
      }
      *(long *)(param_1 + 0x80) = lVar42 + 2;
      *(undefined *)((long)param_1 + lVar42 + 1) = 0x65;
      *(undefined *)(param_1 + 0x84) = 0x65;
      if (lVar42 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x74;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6c63;
        lVar25 = 3;
        goto LAB_0010ebdb;
      }
      lVar25 = lVar42 + 3;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42 + 2) = 99;
      *(undefined *)(param_1 + 0x84) = 99;
      if (lVar25 != 0xff) goto LAB_0010e79a;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x79;
      lVar17 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x746c;
LAB_0010970b:
      lVar42 = lVar17 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar17) = 0x70;
      *(undefined *)(param_1 + 0x84) = 0x70;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        lVar42 = 2;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x2065;
      }
      else {
LAB_0010e7f2:
        lVar25 = lVar42 + 1;
        *(long *)(param_1 + 0x80) = lVar25;
        *(undefined *)((long)param_1 + lVar42) = 0x65;
        *(undefined *)(param_1 + 0x84) = 0x65;
        if (lVar25 != 0xff) goto LAB_0010ea43;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)param_1 = 0x20;
        lVar42 = 1;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      }
LAB_00109760:
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar42) = 0x28;
    *(undefined *)(param_1 + 0x84) = 0x28;
    uVar30 = *(undefined8 *)(param_3 + 4);
LAB_0010946a:
    FUN_00105800(param_1,uVar22,uVar30);
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar42) = 0x29;
    *(undefined *)(param_1 + 0x84) = 0x29;
    break;
  case 0x45:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    pcVar40 = "lobal constructors keyed to ";
    *(char *)((long)param_1 + lVar42) = 'g';
    *(char *)(param_1 + 0x84) = 'g';
    do {
      cVar34 = *pcVar40;
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 1;
        lVar25 = 0;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[1];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[2];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[3];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[4];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[5];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar17 = 1;
      }
      else {
        lVar17 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar17;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[6];
      if (lVar17 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar17 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar17 + 1;
      }
      pcVar40 = pcVar40 + 7;
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar17) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
    } while (pcVar40 != "");
    goto switchD_00108ab5_caseD_28;
  case 0x46:
    pcVar40 = "global destructors keyed to ";
    lVar42 = *(long *)(param_1 + 0x80);
    do {
      cVar34 = *pcVar40;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[1];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[2];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[3];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[4];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[5];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar17 = 1;
      }
      else {
        lVar17 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar17;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[6];
      if (lVar17 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar17 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar17 + 1;
      }
      pcVar40 = pcVar40 + 7;
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar17) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
    } while (pcVar40 != "");
    goto switchD_00108ab5_caseD_28;
  case 0x47:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x61;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6c7b;
LAB_0010ec6e:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x6d;
      *(undefined *)(param_1 + 0x84) = 0x6d;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        lVar42 = 2;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6462;
      }
      else {
LAB_0010ef82:
        lVar25 = lVar42 + 1;
        *(long *)(param_1 + 0x80) = lVar25;
        *(undefined *)((long)param_1 + lVar42) = 0x62;
        *(undefined *)(param_1 + 0x84) = 0x62;
        if (lVar25 != 0xff) goto LAB_0010f005;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)param_1 = 100;
        lVar42 = 1;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      }
LAB_001090ba:
      lVar25 = lVar42 + 1;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar42 + 1;
      *(undefined *)((long)param_1 + lVar42) = 0x7b;
      *(undefined *)(param_1 + 0x84) = 0x7b;
      if (lVar42 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x6d;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x616c;
        goto LAB_0010ef82;
      }
      *(long *)(param_1 + 0x80) = lVar42 + 2;
      *(undefined *)((long)param_1 + lVar42 + 1) = 0x6c;
      *(undefined *)(param_1 + 0x84) = 0x6c;
      if (lVar42 + 2 != 0xff) {
        lVar25 = lVar42 + 3;
        *(long *)(param_1 + 0x80) = lVar25;
        *(undefined *)((long)param_1 + lVar42 + 2) = 0x61;
        *(undefined *)(param_1 + 0x84) = 0x61;
        if (lVar25 != 0xff) goto LAB_0010ec6e;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 100;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x626d;
        goto LAB_001090ba;
      }
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x62;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6d61;
LAB_0010f005:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 100;
      *(undefined *)(param_1 + 0x84) = 100;
      if (lVar42 != 0xff) goto LAB_001090ba;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar42) = 0x61;
    local_c8 = *(undefined8 *)(param_1 + 0x90);
    *(undefined *)(param_1 + 0x84) = 0x61;
    piVar15 = *(int **)(param_3 + 4);
    uVar4 = *(undefined4 *)(param_1 + 0x9c);
    *(undefined8 **)(param_1 + 0x90) = &local_c8;
    iVar38 = 1;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    piStack_c0 = (int *)0x0;
    if ((piVar15 != (int *)0x0) && (*piVar15 == 0x57)) {
      piStack_c0 = piVar15;
      FUN_00103a20(param_1,0x3c);
      for (piVar21 = *(int **)(piVar15 + 4); piVar21 != (int *)0x0; piVar21 = *(int **)(piVar21 + 6)
          ) {
        iVar38 = *(int *)(param_1 + 0x9c);
        *(int *)(param_1 + 0x9c) = iVar38 + 1;
        if (iVar38 != 0) {
          FUN_00103e70(param_1,&DAT_0011e263);
        }
        FUN_00105800(param_1,uVar22,piVar21);
        lVar42 = *(long *)(param_1 + 0x80);
        if (lVar42 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar25 = 1;
          lVar42 = 0;
        }
        else {
          lVar25 = lVar42 + 1;
        }
        *(long *)(param_1 + 0x80) = lVar25;
        *(undefined *)((long)param_1 + lVar42) = 0x20;
        *(undefined *)(param_1 + 0x84) = 0x20;
        iVar38 = *piVar21;
        if (iVar38 == 0x5b) {
          piVar21 = *(int **)(piVar21 + 4);
          iVar38 = *piVar21;
        }
        FUN_00104010(param_1,iVar38,*(int *)(param_1 + 0x9c) + -1);
      }
      FUN_00103a20(param_1,0x3e);
      piVar15 = *(int **)(piVar15 + 6);
      iVar38 = *(int *)(param_1 + 0x9c) + 1;
      lVar25 = *(long *)(param_1 + 0x80);
    }
    *(int *)(param_1 + 0x9c) = iVar38;
    if (lVar25 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar42 = 1;
      lVar25 = 0;
    }
    else {
      lVar42 = lVar25 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar42;
    *(undefined *)((long)param_1 + lVar25) = 0x28;
    *(undefined *)(param_1 + 0x84) = 0x28;
    FUN_00105800(param_1,uVar22,piVar15);
    *(undefined4 *)(param_1 + 0x9c) = uVar4;
    *(undefined8 *)(param_1 + 0x90) = local_c8;
    FUN_00103e70(param_1,&DAT_0011e2d4);
    puVar36 = (undefined8 *)local_b8;
    sprintf((char *)puVar36,"%d",(ulong)(param_3[6] + 1));
    sVar16 = strlen((char *)puVar36);
    lVar42 = *(long *)(param_1 + 0x80);
    if (sVar16 != 0) {
      puVar1 = (undefined8 *)((long)puVar36 + sVar16);
      lVar25 = lVar42;
      do {
        cVar34 = *(char *)puVar36;
        if (lVar25 == 0xff) {
          puVar36 = (undefined8 *)((long)puVar36 + 1);
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *(undefined8 *)(param_1 + 0x80) = 1;
          *(char *)param_1 = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
          if (puVar36 == puVar1) goto LAB_0010f772;
          cVar34 = *(char *)puVar36;
          lVar25 = 1;
        }
        lVar42 = lVar25 + 1;
        puVar36 = (undefined8 *)((long)puVar36 + 1);
        *(long *)(param_1 + 0x80) = lVar42;
        *(char *)((long)param_1 + lVar25) = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        lVar25 = lVar42;
      } while (puVar36 != puVar1);
    }
    goto LAB_0010cc88;
  case 0x49:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x6e;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x757b;
LAB_0010df43:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x6e;
      *(undefined *)(param_1 + 0x84) = 0x6e;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x65;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6d61;
        lVar42 = 3;
        goto LAB_0010df9b;
      }
LAB_0010e07b:
      lVar25 = lVar42 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x61;
      *(undefined *)(param_1 + 0x84) = 0x61;
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 100;
        lVar25 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x656d;
        goto LAB_0010e0d2;
      }
LAB_0010e1af:
      lVar17 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar17;
      *(undefined *)((long)param_1 + lVar25) = 0x6d;
      *(undefined *)(param_1 + 0x84) = 0x6d;
      if (lVar17 != 0xff) goto LAB_0010b3fa;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x20;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6465;
      lVar42 = 3;
LAB_0010e207:
      lVar25 = lVar42 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x74;
      *(undefined *)(param_1 + 0x84) = 0x74;
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *param_1 = 0x7079;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined *)(param_1 + 1) = 0x65;
      }
      else {
LAB_0010b451:
        lVar42 = lVar25 + 1;
        *(long *)(param_1 + 0x80) = lVar42;
        *(undefined *)((long)param_1 + lVar25) = 0x79;
        *(undefined *)(param_1 + 0x84) = 0x79;
        if (lVar42 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          lVar42 = 2;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *param_1 = 0x6570;
        }
        else {
LAB_0010dff5:
          lVar25 = lVar42 + 1;
          *(long *)(param_1 + 0x80) = lVar25;
          *(undefined *)((long)param_1 + lVar42) = 0x70;
          *(undefined *)(param_1 + 0x84) = 0x70;
          if (lVar25 != 0xff) goto LAB_0010e12b;
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(undefined *)param_1 = 0x65;
          lVar42 = 1;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        }
      }
LAB_0010b4a6:
      lVar25 = lVar42 + 1;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar42 + 1;
      *(undefined *)((long)param_1 + lVar42) = 0x7b;
      *(undefined *)(param_1 + 0x84) = 0x7b;
      if (lVar42 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x6e;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6e75;
        goto LAB_0010e07b;
      }
      *(long *)(param_1 + 0x80) = lVar42 + 2;
      *(undefined *)((long)param_1 + lVar42 + 1) = 0x75;
      *(undefined *)(param_1 + 0x84) = 0x75;
      if (lVar42 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x61;
        lVar25 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6e6e;
        goto LAB_0010e1af;
      }
      lVar25 = lVar42 + 3;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42 + 2) = 0x6e;
      *(undefined *)(param_1 + 0x84) = 0x6e;
      if (lVar25 != 0xff) goto LAB_0010df43;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x6d;
      lVar17 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x616e;
LAB_0010b3fa:
      lVar42 = lVar17 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar17) = 0x65;
      *(undefined *)(param_1 + 0x84) = 0x65;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x74;
        lVar25 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x2064;
        goto LAB_0010b451;
      }
LAB_0010df9b:
      lVar25 = lVar42 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 100;
      *(undefined *)(param_1 + 0x84) = 100;
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x79;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x7420;
        goto LAB_0010dff5;
      }
LAB_0010e0d2:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x20;
      *(undefined *)(param_1 + 0x84) = 0x20;
      if (lVar42 != 0xff) goto LAB_0010e207;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x70;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x7974;
LAB_0010e12b:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x65;
      *(undefined *)(param_1 + 0x84) = 0x65;
      if (lVar42 != 0xff) goto LAB_0010b4a6;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar42) = 0x23;
    *(undefined *)(param_1 + 0x84) = 0x23;
    puVar36 = (undefined8 *)local_b8;
    sprintf((char *)puVar36,"%d",(ulong)((int)*(undefined8 *)(param_3 + 4) + 1));
    sVar16 = strlen((char *)puVar36);
    lVar42 = *(long *)(param_1 + 0x80);
    if (sVar16 != 0) {
      puVar1 = (undefined8 *)((long)puVar36 + sVar16);
      lVar25 = lVar42;
      do {
        cVar34 = *(char *)puVar36;
        if (lVar25 == 0xff) {
          puVar36 = (undefined8 *)((long)puVar36 + 1);
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *(undefined8 *)(param_1 + 0x80) = 1;
          *(char *)param_1 = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
          if (puVar36 == puVar1) goto LAB_0010f772;
          cVar34 = *(char *)puVar36;
          lVar25 = 1;
        }
        lVar42 = lVar25 + 1;
        puVar36 = (undefined8 *)((long)puVar36 + 1);
        *(long *)(param_1 + 0x80) = lVar42;
        *(char *)((long)param_1 + lVar25) = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        lVar25 = lVar42;
      } while (puVar36 != puVar1);
    }
LAB_0010cc88:
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
LAB_0010cc95:
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar42) = 0x7d;
    *(undefined *)(param_1 + 0x84) = 0x7d;
    break;
  case 0x4a:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    pcVar40 = "ransaction clone for ";
    *(char *)((long)param_1 + lVar42) = 't';
    *(char *)(param_1 + 0x84) = 't';
    do {
      cVar34 = *pcVar40;
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 1;
        lVar25 = 0;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[1];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[2];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[3];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[4];
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 0;
        lVar42 = 1;
      }
      else {
        lVar42 = lVar25 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[5];
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar42 = 0;
        lVar17 = 1;
      }
      else {
        lVar17 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar17;
      *(char *)((long)param_1 + lVar42) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
      cVar34 = pcVar40[6];
      if (lVar17 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar17 = 0;
        lVar25 = 1;
      }
      else {
        lVar25 = lVar17 + 1;
      }
      pcVar40 = pcVar40 + 7;
      *(long *)(param_1 + 0x80) = lVar25;
      *(char *)((long)param_1 + lVar17) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
    } while (pcVar40 != "");
    goto switchD_00108ab5_caseD_28;
  case 0x4b:
    pcVar40 = "non-transaction clone for ";
    lVar42 = *(long *)(param_1 + 0x80);
    do {
      cVar34 = *pcVar40;
      lVar25 = lVar42;
      if (lVar42 == 0xff) {
        pcVar40 = pcVar40 + 1;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined8 *)(param_1 + 0x80) = 1;
        *(char *)param_1 = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        if (pcVar40 == "") break;
        cVar34 = *pcVar40;
        lVar25 = 1;
      }
      lVar42 = lVar25 + 1;
      pcVar40 = pcVar40 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
    } while (pcVar40 != "");
    goto switchD_00108ab5_caseD_28;
  case 0x4c:
    uVar30 = *(undefined8 *)(param_3 + 4);
    if (*(int *)(param_1 + 0x9c) == 0) {
      iVar38 = 0;
      piVar15 = (int *)FUN_00103dc0(param_1,uVar30);
      if (piVar15 != (int *)0x0) {
        do {
          if ((*piVar15 != 0x2f) || (*(long *)(piVar15 + 4) == 0)) {
            if (iVar38 == 0) {
              return;
            }
            break;
          }
          piVar15 = *(int **)(piVar15 + 6);
          iVar38 = iVar38 + 1;
        } while (piVar15 != (int *)0x0);
        uVar45 = iVar38 - 1U & 3;
        iVar39 = 0;
        if (uVar45 == 0) goto LAB_0010be71;
        *(undefined4 *)(param_1 + 0x9e) = 0;
        iVar39 = 1;
        FUN_00105800(param_1,uVar22,uVar30);
        lVar42 = *(long *)(param_1 + 0x80);
        if (lVar42 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(undefined *)param_1 = 0x2c;
          lVar25 = 1;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
LAB_0010bd81:
          lVar42 = lVar25 + 1;
        }
        else {
          lVar25 = lVar42 + 1;
          *(long *)(param_1 + 0x80) = lVar25;
          *(undefined *)((long)param_1 + lVar42) = 0x2c;
          *(undefined *)(param_1 + 0x84) = 0x2c;
          if (lVar25 != 0xff) goto LAB_0010bd81;
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar42 = 1;
          lVar25 = 0;
        }
        *(long *)(param_1 + 0x80) = lVar42;
        *(undefined *)((long)param_1 + lVar25) = 0x20;
        *(undefined *)(param_1 + 0x84) = 0x20;
        if (uVar45 == 1) goto LAB_0010be71;
        if (uVar45 == 2) goto LAB_0010be0c;
        *(undefined4 *)(param_1 + 0x9e) = 1;
        iVar39 = 2;
        FUN_00105800(param_1,uVar22,uVar30);
        lVar42 = *(long *)(param_1 + 0x80);
        if (lVar42 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(undefined *)param_1 = 0x2c;
          lVar25 = 1;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
LAB_0010bdf6:
          lVar42 = lVar25 + 1;
        }
        else {
          lVar25 = lVar42 + 1;
          *(long *)(param_1 + 0x80) = lVar25;
          *(undefined *)((long)param_1 + lVar42) = 0x2c;
          *(undefined *)(param_1 + 0x84) = 0x2c;
          if (lVar25 != 0xff) goto LAB_0010bdf6;
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar42 = 1;
          lVar25 = 0;
        }
        *(long *)(param_1 + 0x80) = lVar42;
        *(undefined *)((long)param_1 + lVar25) = 0x20;
        *(undefined *)(param_1 + 0x84) = 0x20;
LAB_0010be0c:
        *(int *)(param_1 + 0x9e) = iVar39;
        iVar39 = iVar39 + 1;
        FUN_00105800(param_1,uVar22,uVar30);
        lVar42 = *(long *)(param_1 + 0x80);
        if (lVar42 == 0xff) goto LAB_0010bfd6;
LAB_0010be39:
        lVar25 = lVar42 + 1;
        *(long *)(param_1 + 0x80) = lVar25;
        *(undefined *)((long)param_1 + lVar42) = 0x2c;
        *(undefined *)(param_1 + 0x84) = 0x2c;
        if (lVar25 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar42 = 1;
          lVar25 = 0;
          goto LAB_0010be5f;
        }
        do {
          lVar42 = lVar25 + 1;
LAB_0010be5f:
          *(long *)(param_1 + 0x80) = lVar42;
          *(undefined *)((long)param_1 + lVar25) = 0x20;
          *(undefined *)(param_1 + 0x84) = 0x20;
LAB_0010be71:
          *(int *)(param_1 + 0x9e) = iVar39;
          FUN_00105800(param_1,uVar22,uVar30);
          if (iVar39 + 1 == iVar38) {
            return;
          }
          lVar42 = *(long *)(param_1 + 0x80);
          if (lVar42 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(undefined *)param_1 = 0x2c;
            lVar25 = 1;
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
LAB_0010bec9:
            lVar42 = lVar25 + 1;
          }
          else {
            lVar25 = lVar42 + 1;
            *(long *)(param_1 + 0x80) = lVar25;
            *(undefined *)((long)param_1 + lVar42) = 0x2c;
            *(undefined *)(param_1 + 0x84) = 0x2c;
            if (lVar25 != 0xff) goto LAB_0010bec9;
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar42 = 1;
            lVar25 = 0;
          }
          *(long *)(param_1 + 0x80) = lVar42;
          *(undefined *)((long)param_1 + lVar25) = 0x20;
          *(undefined *)(param_1 + 0x84) = 0x20;
          *(int *)(param_1 + 0x9e) = iVar39 + 1;
          FUN_00105800(param_1,uVar22,uVar30);
          lVar42 = *(long *)(param_1 + 0x80);
          if (lVar42 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(undefined *)param_1 = 0x2c;
            lVar25 = 1;
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
LAB_0010bf2e:
            lVar42 = lVar25 + 1;
          }
          else {
            lVar25 = lVar42 + 1;
            *(long *)(param_1 + 0x80) = lVar25;
            *(undefined *)((long)param_1 + lVar42) = 0x2c;
            *(undefined *)(param_1 + 0x84) = 0x2c;
            if (lVar25 != 0xff) goto LAB_0010bf2e;
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar42 = 1;
            lVar25 = 0;
          }
          *(long *)(param_1 + 0x80) = lVar42;
          *(undefined *)((long)param_1 + lVar25) = 0x20;
          *(int *)(param_1 + 0x9e) = iVar39 + 2;
          *(undefined *)(param_1 + 0x84) = 0x20;
          FUN_00105800(param_1,uVar22,uVar30);
          lVar42 = *(long *)(param_1 + 0x80);
          if (lVar42 == 0xff) {
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(undefined *)param_1 = 0x2c;
            lVar25 = 1;
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
LAB_0010bf93:
            lVar42 = lVar25 + 1;
          }
          else {
            lVar25 = lVar42 + 1;
            *(long *)(param_1 + 0x80) = lVar25;
            *(undefined *)((long)param_1 + lVar42) = 0x2c;
            *(undefined *)(param_1 + 0x84) = 0x2c;
            if (lVar25 != 0xff) goto LAB_0010bf93;
            *(undefined *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
            lVar42 = 1;
            lVar25 = 0;
          }
          *(long *)(param_1 + 0x80) = lVar42;
          *(undefined *)((long)param_1 + lVar25) = 0x20;
          *(int *)(param_1 + 0x9e) = iVar39 + 3;
          iVar39 = iVar39 + 4;
          *(undefined *)(param_1 + 0x84) = 0x20;
          FUN_00105800(param_1,uVar22,uVar30);
          lVar42 = *(long *)(param_1 + 0x80);
          if (lVar42 != 0xff) goto LAB_0010be39;
LAB_0010bfd6:
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(undefined *)param_1 = 0x2c;
          lVar25 = 1;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        } while( true );
      }
    }
    FUN_00112740(param_1,uVar22,uVar30);
    pcVar40 = "...";
    goto LAB_0010a99c;
  case 0x4d:
    FUN_00105800(param_1,param_2,*(undefined8 *)(param_3 + 4));
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x62;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x615b;
LAB_0010f4f8:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x69;
      *(undefined *)(param_1 + 0x84) = 0x69;
      if (lVar42 != 0xff) goto LAB_0010b976;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar42 + 1;
      *(undefined *)((long)param_1 + lVar42) = 0x5b;
      *(undefined *)(param_1 + 0x84) = 0x5b;
      if (lVar42 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *param_1 = 0x6261;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined *)(param_1 + 1) = 0x69;
      }
      else {
        *(long *)(param_1 + 0x80) = lVar42 + 2;
        *(undefined *)((long)param_1 + lVar42 + 1) = 0x61;
        *(undefined *)(param_1 + 0x84) = 0x61;
        if (lVar42 + 2 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *param_1 = 0x6962;
          lVar42 = 2;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        }
        else {
          lVar25 = lVar42 + 3;
          *(long *)(param_1 + 0x80) = lVar25;
          *(undefined *)((long)param_1 + lVar42 + 2) = 0x62;
          *(undefined *)(param_1 + 0x84) = 0x62;
          if (lVar25 != 0xff) goto LAB_0010f4f8;
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(undefined *)param_1 = 0x69;
          lVar42 = 1;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        }
      }
LAB_0010b976:
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar42) = 0x3a;
    *(undefined *)(param_1 + 0x84) = 0x3a;
    goto LAB_0010b98c;
  case 0x4f:
    FUN_00105800(param_1,param_2,*(undefined8 *)(param_3 + 4));
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 99;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x5b20;
LAB_0010f3de:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x6c;
      *(undefined *)(param_1 + 0x84) = 0x6c;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x65;
        lVar25 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6e6f;
      }
      else {
LAB_0010d12a:
        lVar25 = lVar42 + 1;
        *(long *)(param_1 + 0x80) = lVar25;
        *(undefined *)((long)param_1 + lVar42) = 0x6f;
        *(undefined *)(param_1 + 0x84) = 0x6f;
        if (lVar25 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          lVar25 = 2;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *param_1 = 0x656e;
        }
        else {
LAB_0010f71e:
          lVar42 = lVar25 + 1;
          *(long *)(param_1 + 0x80) = lVar42;
          *(undefined *)((long)param_1 + lVar25) = 0x6e;
          *(undefined *)(param_1 + 0x84) = 0x6e;
          if (lVar42 != 0xff) goto LAB_0010ba87;
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(undefined *)param_1 = 0x65;
          lVar25 = 1;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        }
      }
LAB_0010d17d:
      lVar42 = lVar25 + 1;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar42 + 1;
      *(undefined *)((long)param_1 + lVar42) = 0x20;
      *(undefined *)(param_1 + 0x84) = 0x20;
      if (lVar42 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x6c;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x635b;
        goto LAB_0010d12a;
      }
      *(long *)(param_1 + 0x80) = lVar42 + 2;
      *(undefined *)((long)param_1 + lVar42 + 1) = 0x5b;
      *(undefined *)(param_1 + 0x84) = 0x5b;
      if (lVar42 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x6f;
        lVar25 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6c63;
        goto LAB_0010f71e;
      }
      lVar25 = lVar42 + 3;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42 + 2) = 99;
      *(undefined *)(param_1 + 0x84) = 99;
      if (lVar25 != 0xff) goto LAB_0010f3de;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x6e;
      lVar42 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6f6c;
LAB_0010ba87:
      lVar25 = lVar42 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x65;
      *(undefined *)(param_1 + 0x84) = 0x65;
      if (lVar25 != 0xff) goto LAB_0010d17d;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar42 = 1;
      lVar25 = 0;
    }
    *(long *)(param_1 + 0x80) = lVar42;
    *(undefined *)((long)param_1 + lVar25) = 0x20;
    *(undefined *)(param_1 + 0x84) = 0x20;
LAB_0010b98c:
    FUN_00105800(param_1,uVar22,*(undefined8 *)(param_3 + 6));
LAB_0010b99b:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar42) = 0x5d;
    *(undefined *)(param_1 + 0x84) = 0x5d;
    break;
  case 0x52:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar42) = 0x5b;
    *(undefined *)(param_1 + 0x84) = 0x5b;
    while( true ) {
      FUN_00105800(param_1,uVar22,*(undefined8 *)(param_3 + 4));
      param_3 = *(uint **)(param_3 + 6);
      if (param_3 == (uint *)0x0) break;
      lVar42 = *(long *)(param_1 + 0x80);
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)param_1 = 0x2c;
        lVar25 = 1;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
LAB_00109afa:
        *(long *)(param_1 + 0x80) = lVar25 + 1;
        *(undefined *)((long)param_1 + lVar25) = 0x20;
      }
      else {
        lVar25 = lVar42 + 1;
        *(long *)(param_1 + 0x80) = lVar25;
        *(undefined *)((long)param_1 + lVar42) = 0x2c;
        *(undefined *)(param_1 + 0x84) = 0x2c;
        if (lVar25 != 0xff) goto LAB_00109afa;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined8 *)(param_1 + 0x80) = 1;
        *(undefined *)param_1 = 0x20;
      }
      *(undefined *)(param_1 + 0x84) = 0x20;
    }
    goto LAB_0010b99b;
  case 0x53:
  case 0x54:
    if (*(long *)(param_3 + 4) == 0) {
      if (uVar45 == 0x54) goto LAB_0010dd6e;
    }
    else {
      FUN_00105800();
      if (*param_3 == 0x54) {
LAB_0010dd6e:
        uVar37 = 0x3a;
      }
      else {
        if (*(long *)(param_3 + 4) == 0) goto switchD_00108ab5_caseD_7;
        uVar37 = 0x2e;
      }
      lVar42 = *(long *)(param_1 + 0x80);
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 1;
        lVar42 = 0;
      }
      else {
        lVar25 = lVar42 + 1;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = uVar37;
      *(undefined *)(param_1 + 0x84) = uVar37;
    }
switchD_00108ab5_caseD_7:
    piVar15 = *(int **)(param_3 + 6);
    goto LAB_00108c6d;
  case 0x55:
    FUN_00105800(param_1,param_2,*(undefined8 *)(param_3 + 4));
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    *(undefined *)((long)param_1 + lVar42) = 0x40;
    *(undefined *)(param_1 + 0x84) = 0x40;
    piVar15 = *(int **)(param_3 + 6);
    goto LAB_00108c6d;
  case 0x56:
    pcVar40 = "initializer for module ";
    lVar42 = *(long *)(param_1 + 0x80);
    do {
      cVar34 = *pcVar40;
      lVar25 = lVar42;
      if (lVar42 == 0xff) {
        pcVar40 = pcVar40 + 1;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined8 *)(param_1 + 0x80) = 1;
        *(char *)param_1 = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        if (pcVar40 == "") break;
        cVar34 = *pcVar40;
        lVar25 = 1;
      }
      lVar42 = lVar25 + 1;
      pcVar40 = pcVar40 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(char *)((long)param_1 + lVar25) = cVar34;
      *(char *)(param_1 + 0x84) = cVar34;
    } while (pcVar40 != "");
switchD_00108ab5_caseD_28:
    piVar15 = *(int **)(param_3 + 4);
LAB_00108c6d:
    FUN_00105800(param_1,uVar22,piVar15);
    return;
  case 0x57:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    iVar38 = 0;
    *(undefined *)((long)param_1 + lVar42) = 0x3c;
    *(undefined *)(param_1 + 0x84) = 0x3c;
    for (lVar42 = *(long *)(param_3 + 4); lVar42 != 0; lVar42 = *(long *)(lVar42 + 0x18)) {
      if (iVar38 == 0) {
        FUN_00105800(param_1,uVar22,lVar42);
        lVar42 = *(long *)(lVar42 + 0x18);
        if (lVar42 == 0) break;
        iVar38 = 1;
      }
      lVar25 = *(long *)(param_1 + 0x80);
      if (lVar25 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)param_1 = 0x2c;
        lVar17 = 1;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
LAB_0010a5b4:
        lVar25 = lVar17 + 1;
      }
      else {
        lVar17 = lVar25 + 1;
        *(long *)(param_1 + 0x80) = lVar17;
        *(undefined *)((long)param_1 + lVar25) = 0x2c;
        *(undefined *)(param_1 + 0x84) = 0x2c;
        if (lVar17 != 0xff) goto LAB_0010a5b4;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar25 = 1;
        lVar17 = 0;
      }
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar17) = 0x20;
      iVar38 = iVar38 + 1;
      *(undefined *)(param_1 + 0x84) = 0x20;
      FUN_00105800(param_1,uVar22,lVar42);
    }
    lVar25 = *(long *)(param_1 + 0x80);
    lVar42 = lVar25 + 1;
    if (lVar25 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar42 = 1;
      lVar25 = 0;
    }
    *(long *)(param_1 + 0x80) = lVar42;
    *(undefined *)((long)param_1 + lVar25) = 0x3e;
    *(undefined *)(param_1 + 0x84) = 0x3e;
    break;
  case 0x58:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x70;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x7974;
      lVar25 = 3;
LAB_0010f34a:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x65;
      *(undefined *)(param_1 + 0x84) = 0x65;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x6d;
        *param_1 = 0x616e;
        lVar25 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      }
      else {
LAB_0010d097:
        lVar25 = lVar42 + 1;
        *(long *)(param_1 + 0x80) = lVar25;
        *(undefined *)((long)param_1 + lVar42) = 0x6e;
        *(undefined *)(param_1 + 0x84) = 0x6e;
        if (lVar25 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *param_1 = 0x6d61;
          lVar25 = 2;
        }
        else {
LAB_0010f693:
          lVar42 = lVar25 + 1;
          *(long *)(param_1 + 0x80) = lVar42;
          *(undefined *)((long)param_1 + lVar25) = 0x61;
          *(undefined *)(param_1 + 0x84) = 0x61;
          if (lVar42 != 0xff) goto LAB_0010c340;
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(undefined *)param_1 = 0x6d;
          lVar25 = 1;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        }
      }
LAB_0010d0ea:
      lVar42 = lVar25 + 1;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar42 + 1;
      *(undefined *)((long)param_1 + lVar42) = 0x74;
      *(undefined *)(param_1 + 0x84) = 0x74;
      if (lVar42 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x65;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x7079;
        lVar42 = 3;
        goto LAB_0010d097;
      }
      *(long *)(param_1 + 0x80) = lVar42 + 2;
      *(undefined *)((long)param_1 + lVar42 + 1) = 0x79;
      *(undefined *)(param_1 + 0x84) = 0x79;
      if (lVar42 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x6e;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6570;
        lVar25 = 3;
        goto LAB_0010f693;
      }
      lVar25 = lVar42 + 3;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42 + 2) = 0x70;
      *(undefined *)(param_1 + 0x84) = 0x70;
      if (lVar25 != 0xff) goto LAB_0010f34a;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x61;
      lVar42 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6e65;
LAB_0010c340:
      lVar25 = lVar42 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x6d;
      *(undefined *)(param_1 + 0x84) = 0x6d;
      if (lVar25 != 0xff) goto LAB_0010d0ea;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar42 = 1;
      lVar25 = 0;
    }
    *(long *)(param_1 + 0x80) = lVar42;
    *(undefined *)((long)param_1 + lVar25) = 0x65;
    *(undefined *)(param_1 + 0x84) = 0x65;
    break;
  case 0x5a:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x6d;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6574;
LAB_0010f1cd:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x70;
      *(undefined *)(param_1 + 0x84) = 0x70;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x74;
        lVar25 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x616c;
      }
      else {
LAB_0010d1ba:
        lVar25 = lVar42 + 1;
        *(long *)(param_1 + 0x80) = lVar25;
        *(undefined *)((long)param_1 + lVar42) = 0x6c;
        *(undefined *)(param_1 + 0x84) = 0x6c;
        if (lVar25 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          lVar25 = 2;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *param_1 = 0x7461;
        }
        else {
LAB_0010f46f:
          lVar42 = lVar25 + 1;
          *(long *)(param_1 + 0x80) = lVar42;
          *(undefined *)((long)param_1 + lVar25) = 0x61;
          *(undefined *)(param_1 + 0x84) = 0x61;
          if (lVar42 != 0xff) goto LAB_0010bb9d;
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(undefined *)param_1 = 0x74;
          lVar25 = 1;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        }
      }
LAB_0010d20f:
      lVar42 = lVar25 + 1;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar42 + 1;
      *(undefined *)((long)param_1 + lVar42) = 0x74;
      *(undefined *)(param_1 + 0x84) = 0x74;
      if (lVar42 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *param_1 = 0x6d65;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined *)(param_1 + 1) = 0x70;
        goto LAB_0010d1ba;
      }
      *(long *)(param_1 + 0x80) = lVar42 + 2;
      *(undefined *)((long)param_1 + lVar42 + 1) = 0x65;
      *(undefined *)(param_1 + 0x84) = 0x65;
      if (lVar42 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *param_1 = 0x706d;
        lVar25 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined *)(param_1 + 1) = 0x6c;
        goto LAB_0010f46f;
      }
      lVar25 = lVar42 + 3;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42 + 2) = 0x6d;
      *(undefined *)(param_1 + 0x84) = 0x6d;
      if (lVar25 != 0xff) goto LAB_0010f1cd;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *param_1 = 0x6c70;
      lVar42 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *(undefined *)(param_1 + 1) = 0x61;
LAB_0010bb9d:
      lVar25 = lVar42 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x74;
      *(undefined *)(param_1 + 0x84) = 0x74;
      if (lVar25 != 0xff) goto LAB_0010d20f;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar42 = 1;
      lVar25 = 0;
    }
    *(long *)(param_1 + 0x80) = lVar42;
    *(undefined *)((long)param_1 + lVar25) = 0x65;
    *(undefined *)(param_1 + 0x84) = 0x65;
    FUN_00105800(param_1,uVar22,*(undefined8 *)(param_3 + 4));
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x6c;
      lVar25 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x6320;
LAB_0010e493:
      lVar42 = lVar25 + 1;
      *(long *)(param_1 + 0x80) = lVar42;
      *(undefined *)((long)param_1 + lVar25) = 0x61;
      *(undefined *)(param_1 + 0x84) = 0x61;
      if (lVar42 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)param_1 = 0x73;
        lVar25 = 1;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        goto LAB_0010bcba;
      }
LAB_0010e51a:
      lVar25 = lVar42 + 1;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42) = 0x73;
      *(undefined *)(param_1 + 0x84) = 0x73;
      if (lVar25 != 0xff) goto LAB_0010bcba;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar42 = 1;
      lVar25 = 0;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar42 + 1;
      *(undefined *)((long)param_1 + lVar42) = 0x20;
      *(undefined *)(param_1 + 0x84) = 0x20;
      if (lVar42 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x61;
        lVar42 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x6c63;
        goto LAB_0010e51a;
      }
      *(long *)(param_1 + 0x80) = lVar42 + 2;
      *(undefined *)((long)param_1 + lVar42 + 1) = 99;
      *(undefined *)(param_1 + 0x84) = 99;
      if (lVar42 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x73;
        lVar25 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x616c;
      }
      else {
        lVar25 = lVar42 + 3;
        *(long *)(param_1 + 0x80) = lVar25;
        *(undefined *)((long)param_1 + lVar42 + 2) = 0x6c;
        *(undefined *)(param_1 + 0x84) = 0x6c;
        if (lVar25 != 0xff) goto LAB_0010e493;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        lVar25 = 2;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x7361;
      }
LAB_0010bcba:
      lVar42 = lVar25 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar42;
    *(undefined *)((long)param_1 + lVar25) = 0x73;
    *(undefined *)(param_1 + 0x84) = 0x73;
    break;
  case 0x5b:
    FUN_00105800(param_1,param_2,*(undefined8 *)(param_3 + 4));
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      lVar25 = 2;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x2e2e;
LAB_0010b66c:
      lVar42 = lVar25 + 1;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar42 + 1;
      *(undefined *)((long)param_1 + lVar42) = 0x2e;
      *(undefined *)(param_1 + 0x84) = 0x2e;
      if (lVar42 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)param_1 = 0x2e;
        lVar25 = 1;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        goto LAB_0010b66c;
      }
      lVar25 = lVar42 + 2;
      *(long *)(param_1 + 0x80) = lVar25;
      *(undefined *)((long)param_1 + lVar42 + 1) = 0x2e;
      *(undefined *)(param_1 + 0x84) = 0x2e;
      if (lVar25 != 0xff) goto LAB_0010b66c;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar42 = 1;
      lVar25 = 0;
    }
    *(long *)(param_1 + 0x80) = lVar42;
    *(undefined *)((long)param_1 + lVar25) = 0x2e;
    *(undefined *)(param_1 + 0x84) = 0x2e;
    break;
  case 0x5c:
    lVar42 = (long)*(int *)(*(undefined8 **)(param_3 + 4) + 1);
    puVar35 = (undefined *)**(undefined8 **)(param_3 + 4);
    if (lVar42 != 0) {
      lVar25 = *(long *)(param_1 + 0x80);
      puVar43 = puVar35 + lVar42;
      do {
        uVar37 = *puVar35;
        lVar42 = lVar25;
        if (lVar25 == 0xff) {
          puVar35 = puVar35 + 1;
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *(undefined8 *)(param_1 + 0x80) = 1;
          *(undefined *)param_1 = uVar37;
          *(undefined *)(param_1 + 0x84) = uVar37;
          if (puVar35 == puVar43) break;
          uVar37 = *puVar35;
          lVar42 = 1;
        }
        lVar25 = lVar42 + 1;
        puVar35 = puVar35 + 1;
        *(long *)(param_1 + 0x80) = lVar25;
        *(undefined *)((long)param_1 + lVar42) = uVar37;
        *(undefined *)(param_1 + 0x84) = uVar37;
      } while (puVar35 != puVar43);
    }
    puVar36 = (undefined8 *)local_b8;
    sprintf((char *)puVar36,"%d",(ulong)(uint)(int)*(short *)(param_3 + 6));
    sVar16 = strlen((char *)puVar36);
    if (sVar16 != 0) {
      puVar1 = (undefined8 *)((long)puVar36 + sVar16);
      lVar42 = *(long *)(param_1 + 0x80);
      do {
        cVar34 = *(char *)puVar36;
        if (lVar42 == 0xff) {
          puVar36 = (undefined8 *)((long)puVar36 + 1);
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *(undefined8 *)(param_1 + 0x80) = 1;
          *(char *)param_1 = cVar34;
          *(char *)(param_1 + 0x84) = cVar34;
          if (puVar36 == puVar1) break;
          cVar34 = *(char *)puVar36;
          lVar42 = 1;
        }
        puVar36 = (undefined8 *)((long)puVar36 + 1);
        *(long *)(param_1 + 0x80) = lVar42 + 1;
        *(char *)((long)param_1 + lVar42) = cVar34;
        *(char *)(param_1 + 0x84) = cVar34;
        lVar42 = lVar42 + 1;
      } while (puVar36 != puVar1);
    }
    cVar34 = *(char *)((long)param_3 + 0x1a);
    if (cVar34 == '\0') {
      return;
    }
LAB_0010a3e7:
    lVar42 = *(long *)(param_1 + 0x80);
    if (lVar42 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar25 = 1;
      lVar42 = 0;
    }
    else {
      lVar25 = lVar42 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar25;
    *(char *)((long)param_1 + lVar42) = cVar34;
    *(char *)(param_1 + 0x84) = cVar34;
  }
switchD_00111769_caseD_5:
  return;
LAB_0010f772:
  lVar42 = 1;
  goto LAB_0010cc95;
}


////>>0x00112740>>FUN_00112740>>////

void FUN_00112740(long param_1,undefined4 param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint *local_38;
  undefined8 uStack_30;
  
  uVar2 = *param_3;
  if (((uVar2 < 2) || (uVar2 == 0x31)) || (uVar2 == 6)) {
    uVar2 = param_3[1];
    if ((1 < (int)uVar2) || (iVar5 = *(int *)(param_1 + 0x134), 0x400 < iVar5)) {
      *(undefined4 *)(param_1 + 0x130) = 1;
      return;
    }
    bVar1 = true;
LAB_0011281e:
    param_3[1] = uVar2 + 1;
    uStack_30 = *(undefined8 *)(param_1 + 0x148);
    *(int *)(param_1 + 0x134) = iVar5 + 1;
    *(uint ***)(param_1 + 0x148) = &local_38;
    local_38 = param_3;
    FUN_00108a70(param_1,param_2,param_3);
    *(undefined8 *)(param_1 + 0x148) = uStack_30;
    param_3[1] = param_3[1] - 1;
    *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + -1;
    if (bVar1) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x100);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
      *(undefined *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar4 = 1;
      lVar3 = 0;
    }
    else {
      lVar4 = lVar3 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar4;
    *(undefined *)(param_1 + lVar3) = 0x28;
    *(undefined *)(param_1 + 0x108) = 0x28;
    uVar2 = param_3[1];
    if ((int)uVar2 < 2) {
      iVar5 = *(int *)(param_1 + 0x134);
      bVar1 = false;
      if (iVar5 < 0x401) goto LAB_0011281e;
    }
    *(undefined4 *)(param_1 + 0x130) = 1;
  }
  if (lVar4 == 0xff) {
    *(undefined *)(param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
    lVar3 = 1;
    lVar4 = 0;
  }
  else {
    lVar3 = lVar4 + 1;
  }
  *(long *)(param_1 + 0x100) = lVar3;
  *(undefined *)(param_1 + lVar4) = 0x29;
  *(undefined *)(param_1 + 0x108) = 0x29;
  return;
}


////>>0x001128f0>>FUN_001128f0>>////

undefined8 FUN_001128f0(undefined2 *param_1,undefined4 param_2,long param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar1 = **(char ***)(*(long *)(param_3 + 0x10) + 0x10);
  if (*pcVar1 != 'f') {
    return 0;
  }
  piVar8 = *(int **)(*(long *)(param_3 + 0x18) + 0x18);
  uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x10);
  if (*piVar8 == 0x3c) {
    piVar5 = *(int **)(piVar8 + 6);
    uVar7 = *(undefined4 *)(param_1 + 0x9e);
    piVar8 = *(int **)(piVar8 + 4);
    *(undefined4 *)(param_1 + 0x9e) = 0xffffffff;
    cVar3 = pcVar1[1];
    if (cVar3 == 'l') goto LAB_00112b9d;
LAB_0011294d:
    if ('l' < cVar3) {
      if (cVar3 != 'r') goto LAB_00112a57;
      lVar4 = *(long *)(param_1 + 0x80);
      if (lVar4 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *(undefined8 *)(param_1 + 0x80) = 1;
        *(undefined *)param_1 = 0x28;
      }
      else {
        *(long *)(param_1 + 0x80) = lVar4 + 1;
        *(undefined *)((long)param_1 + lVar4) = 0x28;
      }
      *(undefined *)(param_1 + 0x84) = 0x28;
      FUN_00112740(param_1,param_2,piVar8);
      FUN_00108990(param_1,param_2,uVar2);
      lVar4 = *(long *)(param_1 + 0x80);
      if (lVar4 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x2e;
        lVar6 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x2e2e;
LAB_00112c81:
        lVar4 = lVar6 + 1;
      }
      else {
        *(long *)(param_1 + 0x80) = lVar4 + 1;
        *(undefined *)((long)param_1 + lVar4) = 0x2e;
        *(undefined *)(param_1 + 0x84) = 0x2e;
        if (lVar4 + 1 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *param_1 = 0x2e2e;
          lVar6 = 2;
          goto LAB_00112c81;
        }
        *(long *)(param_1 + 0x80) = lVar4 + 2;
        *(undefined *)((long)param_1 + lVar4 + 1) = 0x2e;
        *(undefined *)(param_1 + 0x84) = 0x2e;
        if (lVar4 + 2 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(undefined *)param_1 = 0x2e;
          lVar6 = 1;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          goto LAB_00112c81;
        }
        lVar6 = lVar4 + 3;
        *(long *)(param_1 + 0x80) = lVar6;
        *(undefined *)((long)param_1 + lVar4 + 2) = 0x2e;
        *(undefined *)(param_1 + 0x84) = 0x2e;
        if (lVar6 != 0xff) goto LAB_00112c81;
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        lVar4 = 1;
        lVar6 = 0;
      }
      *(long *)(param_1 + 0x80) = lVar4;
      *(undefined *)((long)param_1 + lVar6) = 0x29;
      *(undefined *)(param_1 + 0x84) = 0x29;
      goto LAB_00112a57;
    }
    if ((cVar3 != 'L') && (cVar3 != 'R')) goto LAB_00112a57;
    lVar4 = *(long *)(param_1 + 0x80);
    if (lVar4 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *(undefined8 *)(param_1 + 0x80) = 1;
      *(undefined *)param_1 = 0x28;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar4 + 1;
      *(undefined *)((long)param_1 + lVar4) = 0x28;
    }
    *(undefined *)(param_1 + 0x84) = 0x28;
    FUN_00112740(param_1,param_2,piVar8);
    FUN_00108990(param_1,param_2,uVar2);
    lVar4 = *(long *)(param_1 + 0x80);
    if (lVar4 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      lVar6 = 2;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x2e2e;
LAB_001129fe:
      lVar4 = lVar6 + 1;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar4 + 1;
      *(undefined *)((long)param_1 + lVar4) = 0x2e;
      *(undefined *)(param_1 + 0x84) = 0x2e;
      if (lVar4 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)param_1 = 0x2e;
        lVar6 = 1;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        goto LAB_001129fe;
      }
      lVar6 = lVar4 + 2;
      *(long *)(param_1 + 0x80) = lVar6;
      *(undefined *)((long)param_1 + lVar4 + 1) = 0x2e;
      *(undefined *)(param_1 + 0x84) = 0x2e;
      if (lVar6 != 0xff) goto LAB_001129fe;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar4 = 1;
      lVar6 = 0;
    }
    *(long *)(param_1 + 0x80) = lVar4;
    *(undefined *)((long)param_1 + lVar6) = 0x2e;
    *(undefined *)(param_1 + 0x84) = 0x2e;
    FUN_00108990(param_1,param_2,uVar2);
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x9e);
    piVar5 = (int *)0x0;
    *(undefined4 *)(param_1 + 0x9e) = 0xffffffff;
    cVar3 = pcVar1[1];
    if (cVar3 != 'l') goto LAB_0011294d;
LAB_00112b9d:
    piVar5 = piVar8;
    lVar4 = *(long *)(param_1 + 0x80);
    if (lVar4 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x2e;
      lVar6 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x2e28;
LAB_00112c1b:
      *(long *)(param_1 + 0x80) = lVar6 + 1;
      *(undefined *)((long)param_1 + lVar6) = 0x2e;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar4 + 1;
      *(undefined *)((long)param_1 + lVar4) = 0x28;
      *(undefined *)(param_1 + 0x84) = 0x28;
      if (lVar4 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        lVar6 = 2;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x2e2e;
        goto LAB_00112c1b;
      }
      *(long *)(param_1 + 0x80) = lVar4 + 2;
      *(undefined *)((long)param_1 + lVar4 + 1) = 0x2e;
      *(undefined *)(param_1 + 0x84) = 0x2e;
      if (lVar4 + 2 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)param_1 = 0x2e;
        lVar6 = 1;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        goto LAB_00112c1b;
      }
      lVar6 = lVar4 + 3;
      *(long *)(param_1 + 0x80) = lVar6;
      *(undefined *)((long)param_1 + lVar4 + 2) = 0x2e;
      *(undefined *)(param_1 + 0x84) = 0x2e;
      if (lVar6 != 0xff) goto LAB_00112c1b;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *(undefined8 *)(param_1 + 0x80) = 1;
      *(undefined *)param_1 = 0x2e;
    }
    *(undefined *)(param_1 + 0x84) = 0x2e;
    FUN_00108990(param_1,param_2,uVar2);
  }
  FUN_00112740(param_1,param_2,piVar5);
  lVar4 = *(long *)(param_1 + 0x80);
  if (lVar4 == 0xff) {
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    lVar6 = 1;
    lVar4 = 0;
  }
  else {
    lVar6 = lVar4 + 1;
  }
  *(long *)(param_1 + 0x80) = lVar6;
  *(undefined *)((long)param_1 + lVar4) = 0x29;
  *(undefined *)(param_1 + 0x84) = 0x29;
LAB_00112a57:
  *(undefined4 *)(param_1 + 0x9e) = uVar7;
  return 1;
}


////>>0x00112f70>>FUN_00112f70>>////

undefined8 FUN_00112f70(undefined2 *param_1,undefined4 param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  
  if ((*param_3 & 0xfffffffd) != 0x38) {
    return 0;
  }
  pcVar3 = **(char ***)(*(long *)(param_3 + 4) + 0x10);
  if ((*pcVar3 != 'd') || ((bVar1 = pcVar3[1], (bVar1 & 0xdf) != 0x58 && (bVar1 != 0x69)))) {
    return 0;
  }
  uVar4 = *(undefined8 *)(*(long *)(param_3 + 6) + 0x10);
  puVar8 = *(uint **)(*(long *)(param_3 + 6) + 0x18);
  lVar6 = *(long *)(param_1 + 0x80);
  if (bVar1 == 0x69) {
    if (lVar6 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar7 = 1;
      lVar6 = 0;
    }
    else {
      lVar7 = lVar6 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar7;
    *(undefined *)((long)param_1 + lVar6) = 0x2e;
    uVar5 = 0x2e;
  }
  else {
    if (lVar6 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *(undefined8 *)(param_1 + 0x80) = 1;
      *(undefined *)param_1 = 0x5b;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar6 + 1;
      *(undefined *)((long)param_1 + lVar6) = 0x5b;
    }
    uVar5 = 0x5b;
  }
  *(undefined *)(param_1 + 0x84) = uVar5;
  FUN_00105800(param_1,param_2,uVar4);
  if (pcVar3[1] == 'X') {
    lVar6 = *(long *)(param_1 + 0x80);
    if (lVar6 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined *)(param_1 + 1) = 0x2e;
      lVar7 = 3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *param_1 = 0x2e20;
LAB_00113225:
      lVar6 = lVar7 + 1;
      *(long *)(param_1 + 0x80) = lVar6;
      *(undefined *)((long)param_1 + lVar7) = 0x2e;
      *(undefined *)(param_1 + 0x84) = 0x2e;
      if (lVar6 != 0xff) goto LAB_001131b2;
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar7 = 1;
      lVar6 = 0;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar6 + 1;
      *(undefined *)((long)param_1 + lVar6) = 0x20;
      *(undefined *)(param_1 + 0x84) = 0x20;
      if (lVar6 + 1 == 0xff) {
        *(undefined *)((long)param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
        *(undefined *)(param_1 + 1) = 0x2e;
        lVar6 = 3;
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        *param_1 = 0x2e2e;
      }
      else {
        *(long *)(param_1 + 0x80) = lVar6 + 2;
        *(undefined *)((long)param_1 + lVar6 + 1) = 0x2e;
        *(undefined *)(param_1 + 0x84) = 0x2e;
        if (lVar6 + 2 == 0xff) {
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *param_1 = 0x2e2e;
          lVar6 = 2;
        }
        else {
          lVar7 = lVar6 + 3;
          *(long *)(param_1 + 0x80) = lVar7;
          *(undefined *)((long)param_1 + lVar6 + 2) = 0x2e;
          *(undefined *)(param_1 + 0x84) = 0x2e;
          if (lVar7 != 0xff) goto LAB_00113225;
          *(undefined *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(undefined *)param_1 = 0x2e;
          lVar6 = 1;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
        }
      }
LAB_001131b2:
      lVar7 = lVar6 + 1;
    }
    *(long *)(param_1 + 0x80) = lVar7;
    *(undefined *)((long)param_1 + lVar6) = 0x20;
    *(undefined *)(param_1 + 0x84) = 0x20;
    FUN_00105800(param_1,param_2,*(undefined8 *)(puVar8 + 4));
    puVar8 = *(uint **)(puVar8 + 6);
    if (pcVar3[1] != 'i') goto LAB_00113022;
LAB_0011304b:
    if ((*puVar8 & 0xfffffffd) == 0x38) {
LAB_00113057:
      if ((***(char ***)(*(long *)(puVar8 + 4) + 0x10) == 'd') &&
         ((bVar1 = (**(char ***)(*(long *)(puVar8 + 4) + 0x10))[1], (bVar1 & 0xdf) == 0x58 ||
          (bVar1 == 0x69)))) {
        FUN_00105800(param_1,param_2,puVar8);
        return 1;
      }
    }
    lVar6 = *(long *)(param_1 + 0x80);
    if (lVar6 == 0xff) {
      *(undefined *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *(undefined8 *)(param_1 + 0x80) = 1;
      *(undefined *)param_1 = 0x3d;
      goto LAB_0011308a;
    }
  }
  else {
    if (pcVar3[1] == 'i') goto LAB_0011304b;
LAB_00113022:
    lVar6 = *(long *)(param_1 + 0x80);
    if (lVar6 != 0xff) {
      *(long *)(param_1 + 0x80) = lVar6 + 1;
      *(undefined *)((long)param_1 + lVar6) = 0x5d;
      *(undefined *)(param_1 + 0x84) = 0x5d;
      goto LAB_0011304b;
    }
    *(undefined *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined *)param_1 = 0x5d;
    *(undefined *)(param_1 + 0x84) = 0x5d;
    uVar2 = *puVar8;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *(undefined8 *)(param_1 + 0x80) = 1;
    if ((uVar2 & 0xfffffffd) == 0x38) goto LAB_00113057;
    lVar6 = 1;
  }
  *(long *)(param_1 + 0x80) = lVar6 + 1;
  *(undefined *)((long)param_1 + lVar6) = 0x3d;
LAB_0011308a:
  *(undefined *)(param_1 + 0x84) = 0x3d;
  FUN_00112740(param_1,param_2,puVar8);
  return 1;
}


////>>0x00113410>>FUN_00113410>>////

uint * FUN_00113410(long param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  
  puVar2 = (uint *)FUN_00115ac0(param_1,0);
  if (puVar2 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0x10) & 1) == 0)) {
    while( true ) {
      uVar1 = *puVar2 - 0x1c;
      if (0x35 < uVar1) {
        if (*puVar2 != 2) {
          return puVar2;
        }
        piVar3 = *(int **)(puVar2 + 6);
        while( true ) {
          if (piVar3 == (int *)0x0) {
            return (uint *)0x0;
          }
          if (0x35 < *piVar3 - 0x1cU) break;
          if ((0x3400000000001fU >> ((ulong)(*piVar3 - 0x1cU) & 0x3f) & 1) == 0) {
            return puVar2;
          }
          piVar3 = *(int **)(piVar3 + 4);
          *(int **)(puVar2 + 6) = piVar3;
        }
        return puVar2;
      }
      if ((0x3400000000001fU >> ((ulong)uVar1 & 0x3f) & 1) == 0) break;
      puVar2 = *(uint **)(puVar2 + 4);
    }
    return puVar2;
  }
  if ((**(char **)(param_1 + 0x18) == '\0') || (puVar4 = puVar2, **(char **)(param_1 + 0x18) == 'E')
     ) {
    return puVar2;
  }
  do {
    uVar1 = *puVar4;
    if (uVar1 == 4) {
      puVar4 = *(uint **)(puVar4 + 4);
      goto joined_r0x0011355f;
    }
    if (uVar1 < 5) {
      if (uVar1 != 2) break;
      puVar4 = *(uint **)(puVar4 + 6);
    }
    else {
      if ((0x35 < uVar1 - 0x1c) || ((0x3400000000001fU >> ((ulong)(uVar1 - 0x1c) & 0x3f) & 1) == 0))
      break;
      puVar4 = *(uint **)(puVar4 + 4);
    }
  } while (puVar4 != (uint *)0x0);
LAB_0011349f:
  bVar5 = false;
LAB_001134a1:
  piVar3 = (int *)FUN_001150d0(param_1,bVar5);
  if (piVar3 != (int *)0x0) {
    if (((param_2 == 0) && (*puVar2 == 2)) && (*piVar3 == 0x29)) {
      *(undefined8 *)(piVar3 + 4) = 0;
    }
    puVar2 = (uint *)FUN_001050d0(param_1,3,puVar2,piVar3);
    return puVar2;
  }
  return (uint *)0x0;
joined_r0x0011355f:
  if (puVar4 == (uint *)0x0) goto LAB_00113588;
  uVar1 = *puVar4;
  if (8 < uVar1) {
    bVar5 = uVar1 != 0x35;
    goto LAB_001134a1;
  }
  if (6 < uVar1) goto LAB_0011349f;
  if (1 < uVar1 - 1) goto LAB_00113588;
  puVar4 = *(uint **)(puVar4 + 6);
  goto joined_r0x0011355f;
LAB_00113588:
  bVar5 = true;
  goto LAB_001134a1;
}


////>>0x001135d0>>FUN_001135d0>>////

int * FUN_001135d0(long param_1)

{
  char **ppcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar6 = *(char **)(param_1 + 0x18);
  if (*pcVar6 != 'L') {
    return (int *)0x0;
  }
  pcVar5 = pcVar6 + 1;
  *(char **)(param_1 + 0x18) = pcVar5;
  if (pcVar6[1] == '_') {
    pcVar5 = pcVar6 + 2;
    piVar4 = (int *)0x0;
    *(char **)(param_1 + 0x18) = pcVar5;
    cVar2 = pcVar6[2];
    if (cVar2 != 'Z') goto LAB_001136a3;
  }
  else if (pcVar6[1] != 'Z') {
    piVar4 = (int *)FUN_001140f0();
    if (piVar4 == (int *)0x0) {
      return (int *)0x0;
    }
    pcVar5 = *(char **)(param_1 + 0x18);
    pcVar6 = pcVar5;
    if (*piVar4 == 0x27) {
      ppcVar1 = *(char ***)(piVar4 + 4);
      if (*(int *)((long)ppcVar1 + 0x1c) != 0) {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - *(int *)(ppcVar1 + 1);
      }
      iVar3 = strcmp(*ppcVar1,"decltype(nullptr)");
      cVar2 = *pcVar5;
      if (iVar3 != 0) goto LAB_00113619;
      if (cVar2 == 'E') {
        *(char **)(param_1 + 0x18) = pcVar5 + 1;
        return piVar4;
      }
      if (cVar2 == 'n') goto LAB_00113708;
    }
    else {
      cVar2 = *pcVar5;
LAB_00113619:
      if (cVar2 == 'n') {
LAB_00113708:
        pcVar6 = pcVar5 + 1;
        *(char **)(param_1 + 0x18) = pcVar6;
        cVar2 = pcVar5[1];
      }
      pcVar5 = pcVar6;
      if (cVar2 == 'E') {
        FUN_00105250(param_1,pcVar6,0);
        piVar4 = (int *)FUN_001050d0();
        pcVar5 = *(char **)(param_1 + 0x18);
        cVar2 = *pcVar5;
        goto LAB_001136a3;
      }
    }
    do {
      pcVar5 = pcVar5 + 1;
      if (cVar2 == '\0') {
        return (int *)0x0;
      }
      *(char **)(param_1 + 0x18) = pcVar5;
      cVar2 = *pcVar5;
    } while (cVar2 != 'E');
    FUN_00105250(param_1,pcVar6,(int)pcVar5 - (int)pcVar6);
    piVar4 = (int *)FUN_001050d0();
    cVar2 = *pcVar5;
    goto LAB_001136a3;
  }
  *(char **)(param_1 + 0x18) = pcVar5 + 1;
  if ((pcVar5[1] == 'G') || (pcVar5[1] == 'T')) {
    piVar4 = (int *)FUN_00115f90(param_1);
    pcVar5 = *(char **)(param_1 + 0x18);
    cVar2 = *pcVar5;
  }
  else {
    piVar4 = (int *)FUN_00113410(param_1,0);
    pcVar5 = *(char **)(param_1 + 0x18);
    cVar2 = *pcVar5;
  }
LAB_001136a3:
  if (cVar2 != 'E') {
    return (int *)0x0;
  }
  *(char **)(param_1 + 0x18) = pcVar5 + 1;
  return piVar4;
}


////>>0x001137d0>>FUN_001137d0>>////

undefined4 * FUN_001137d0(long param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char **ppcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  
  pcVar14 = *(char **)(param_1 + 0x18);
  cVar6 = *pcVar14;
  if (cVar6 == 'L') {
    puVar8 = (undefined4 *)FUN_001135d0();
    return puVar8;
  }
  if (cVar6 == 'T') {
    puVar8 = (undefined4 *)FUN_00103920();
    return puVar8;
  }
  if (cVar6 == 's') {
    if (pcVar14[1] == 'r') {
      *(char **)(param_1 + 0x18) = pcVar14 + 2;
      bVar1 = pcVar14[2];
      if (*(int *)(param_1 + 0x54) == 0) {
LAB_00113dc7:
        uVar10 = FUN_001140f0(param_1);
      }
      else {
        if ((char)bVar1 < ':') {
          if ((char)bVar1 < '0') goto LAB_00113dc7;
        }
        else if ((0x37 < (byte)(bVar1 - 0x43)) ||
                ((0xffffffc0040201U >> ((ulong)(bVar1 - 0x43) & 0x3f) & 1) == 0)) goto LAB_00113dc7;
        *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
        uVar10 = FUN_00115930(param_1,0);
        if (**(char **)(param_1 + 0x18) == 'E') {
          *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        }
      }
      puVar8 = (undefined4 *)FUN_00115350(param_1,uVar10,0);
      pcVar14 = *(char **)(param_1 + 0x18);
      cVar6 = *pcVar14;
joined_r0x00113a1c:
      if (cVar6 != 'I') {
        return puVar8;
      }
      *(char **)(param_1 + 0x18) = pcVar14 + 1;
      FUN_00114040(param_1);
      goto LAB_00113a46;
    }
    if (pcVar14[1] == 'p') {
      *(char **)(param_1 + 0x18) = pcVar14 + 2;
      FUN_001137d0();
      goto LAB_00113a46;
    }
  }
  else if (cVar6 == 'f') {
    if (pcVar14[1] == 'p') {
      *(char **)(param_1 + 0x18) = pcVar14 + 2;
      cVar6 = pcVar14[2];
      if (cVar6 == 'T') {
        iVar7 = 0;
        *(char **)(param_1 + 0x18) = pcVar14 + 3;
      }
      else if (cVar6 == '_') {
        iVar7 = 1;
        *(char **)(param_1 + 0x18) = pcVar14 + 3;
      }
      else {
        if (cVar6 == 'n') {
          return (undefined4 *)0x0;
        }
        lVar11 = param_1;
        iVar7 = FUN_00103810();
        if (iVar7 + 1 < 0) {
          return (undefined4 *)0x0;
        }
        if (**(char **)(lVar11 + 0x18) != '_') {
          return (undefined4 *)0x0;
        }
        *(char **)(lVar11 + 0x18) = *(char **)(lVar11 + 0x18) + 1;
        if (iVar7 + 1 == 0x7fffffff) {
          return (undefined4 *)0x0;
        }
        iVar7 = iVar7 + 2;
      }
      iVar3 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar3) {
        return (undefined4 *)0x0;
      }
      puVar8 = (undefined4 *)((long)iVar3 * 0x20 + *(long *)(param_1 + 0x20));
      *(undefined8 *)(puVar8 + 1) = 0;
      *(int *)(param_1 + 0x28) = iVar3 + 1;
      *puVar8 = 6;
      *(long *)(puVar8 + 4) = (long)iVar7;
      return puVar8;
    }
  }
  else {
    if ((byte)(cVar6 - 0x30U) < 10) {
LAB_0011381c:
      puVar8 = (undefined4 *)FUN_00115350(param_1,0,0);
      if (puVar8 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
      pcVar14 = *(char **)(param_1 + 0x18);
      cVar6 = *pcVar14;
      goto joined_r0x00113a1c;
    }
    if (cVar6 == 'o') {
      if (pcVar14[1] == 'n') {
        *(char **)(param_1 + 0x18) = pcVar14 + 2;
        goto LAB_0011381c;
      }
    }
    else if ((cVar6 == 'i') || (cVar6 == 't')) {
      if (pcVar14[1] == 'l') {
        pcVar14 = pcVar14 + 2;
        *(char **)(param_1 + 0x18) = pcVar14;
        if (cVar6 == 't') {
          FUN_001140f0(param_1);
          pcVar14 = *(char **)(param_1 + 0x18);
        }
        if (*pcVar14 == '\0') {
          return (undefined4 *)0x0;
        }
        if (pcVar14[1] == '\0') {
          return (undefined4 *)0x0;
        }
        FUN_00116620(param_1,0x45);
        goto LAB_00113a46;
      }
    }
    else if (cVar6 == 'u') {
      *(char **)(param_1 + 0x18) = pcVar14 + 1;
      FUN_001052a0();
      FUN_00114040();
      goto LAB_00113a46;
    }
  }
  piVar9 = (int *)FUN_00114bf0(param_1);
  if (piVar9 == (int *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar7 = *piVar9;
  if (iVar7 != 0x32) {
    if (iVar7 == 0x33) {
      iVar7 = piVar9[4];
      if (iVar7 != 1) {
        if (iVar7 == 3) {
          return (undefined4 *)0x0;
        }
joined_r0x00113b8b:
        if (iVar7 != 0) {
          return (undefined4 *)0x0;
        }
        goto LAB_00113a46;
      }
    }
    else {
      if (iVar7 != 0x34) {
        return (undefined4 *)0x0;
      }
      if (**(char **)(param_1 + 0x18) == '_') {
        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        FUN_00116620(param_1,0x45);
        goto LAB_00113a46;
      }
    }
    FUN_001137d0(param_1);
    goto LAB_00113a46;
  }
  ppcVar4 = *(char ***)(piVar9 + 4);
  pcVar14 = *ppcVar4;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(ppcVar4 + 2) + -2;
  cVar6 = *pcVar14;
  if (((cVar6 == 's') && (pcVar14[1] == 't')) && (pcVar14[2] == '\0')) {
    FUN_001140f0(param_1);
    goto LAB_00113a46;
  }
  iVar7 = *(int *)((long)ppcVar4 + 0x14);
  if (iVar7 != 1) {
    if (iVar7 < 2) goto joined_r0x00113b8b;
    if (iVar7 == 2) {
      cVar2 = *pcVar14;
      if ((pcVar14[1] == 'c') && (((byte)(cVar2 + 0x9dU) < 2 || ((byte)(cVar2 + 0x8eU) < 2)))) {
        uVar10 = FUN_001140f0(param_1);
      }
      else if (cVar2 == 'f') {
        uVar10 = FUN_00114bf0(param_1);
      }
      else if (((cVar6 == 'd') && (pcVar14[1] == 'i')) && (pcVar14[2] == '\0')) {
        uVar10 = FUN_00115350(param_1,0,0);
      }
      else {
        uVar10 = FUN_001137d0(param_1);
      }
      cVar6 = *pcVar14;
      if (((cVar6 == 'c') && (pcVar14[1] == 'l')) && (pcVar14[2] == '\0')) {
        uVar12 = FUN_00116620(param_1,0x45);
      }
      else {
        if ((((cVar6 == 'd') && (pcVar14[1] == 't')) && (pcVar14[2] == '\0')) ||
           (((cVar6 == 'p' && (pcVar14[1] == 't')) && (pcVar14[2] == '\0')))) {
          pcVar14 = *(char **)(param_1 + 0x18);
          if (*pcVar14 == 'g') {
            if (pcVar14[1] != 's') goto LAB_00113e36;
          }
          else if ((*pcVar14 != 's') || (pcVar14[1] != 'r')) {
LAB_00113e36:
            uVar12 = FUN_00115350(param_1,0,0);
            if (**(char **)(param_1 + 0x18) == 'I') {
              *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
              uVar13 = FUN_00114040(param_1);
              uVar12 = FUN_001050d0(param_1,4,uVar12,uVar13);
            }
            goto LAB_00113cd9;
          }
        }
        uVar12 = FUN_001137d0(param_1);
      }
LAB_00113cd9:
      FUN_001050d0(param_1,0x39,uVar10,uVar12);
      goto LAB_00113a46;
    }
    if (iVar7 != 3) {
      return (undefined4 *)0x0;
    }
    if ((((cVar6 == 'q') && (pcVar14[1] == 'u')) && (pcVar14[2] == '\0')) ||
       (((cVar6 == 'd' && (pcVar14[1] == 'X')) && (pcVar14[2] == '\0')))) {
      FUN_001137d0(param_1);
LAB_00113ab0:
      uVar10 = FUN_001137d0(param_1);
      lVar11 = FUN_001137d0(param_1);
      if (lVar11 == 0) {
        return (undefined4 *)0x0;
      }
    }
    else {
      if (*pcVar14 == 'f') {
        FUN_00114bf0(param_1);
        goto LAB_00113ab0;
      }
      if (*pcVar14 != 'n') {
        return (undefined4 *)0x0;
      }
      if ((pcVar14[1] != 'w') && (pcVar14[1] != 'a')) {
        return (undefined4 *)0x0;
      }
      FUN_00116620(param_1,0x5f);
      uVar10 = FUN_001140f0(param_1);
      pcVar14 = *(char **)(param_1 + 0x18);
      cVar6 = *pcVar14;
      if (cVar6 == 'E') {
        lVar11 = 0;
        *(char **)(param_1 + 0x18) = pcVar14 + 1;
      }
      else if (cVar6 == 'p') {
        if (pcVar14[1] != 'i') {
          return (undefined4 *)0x0;
        }
        *(char **)(param_1 + 0x18) = pcVar14 + 2;
        lVar11 = FUN_00116620(param_1,0x45);
      }
      else {
        if (cVar6 != 'i') {
          return (undefined4 *)0x0;
        }
        if (pcVar14[1] != 'l') {
          return (undefined4 *)0x0;
        }
        lVar11 = FUN_001137d0(param_1);
      }
    }
    FUN_001050d0(param_1,0x3c,uVar10,lVar11);
    FUN_001050d0();
    goto LAB_00113a46;
  }
  cVar2 = *pcVar14;
  if (((cVar2 == 'p') || (cVar2 == 'm')) && (cVar2 == pcVar14[1])) {
    bVar5 = true;
    if (**(char **)(param_1 + 0x18) == '_') {
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      cVar6 = *pcVar14;
      goto LAB_00113bb6;
    }
  }
  else {
LAB_00113bb6:
    bVar5 = false;
  }
  if (((cVar6 == 's') && (pcVar14[1] == 'P')) && (pcVar14[2] == '\0')) {
    uVar10 = FUN_00114040(param_1);
  }
  else {
    uVar10 = FUN_001137d0(param_1);
  }
  if (bVar5) {
    FUN_001050d0(param_1,0x39,uVar10);
  }
LAB_00113a46:
  puVar8 = (undefined4 *)FUN_001050d0();
  return puVar8;
}


////>>0x00113fc0>>FUN_00113fc0>>////

undefined8 FUN_00113fc0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  pcVar3 = *(char **)(param_1 + 0x18);
  cVar1 = *pcVar3;
  if (cVar1 == 'L') {
    uVar4 = FUN_001135d0();
    return uVar4;
  }
  if (cVar1 < 'M') {
    if ((byte)(cVar1 + 0xb7U) < 2) {
      *(char **)(param_1 + 0x18) = pcVar3 + 1;
      uVar4 = FUN_00114040();
      return uVar4;
    }
  }
  else if (cVar1 == 'X') {
    *(char **)(param_1 + 0x18) = pcVar3 + 1;
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = 1;
    uVar4 = FUN_001137d0();
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    if (**(char **)(param_1 + 0x18) == 'E') {
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    }
    else {
      uVar4 = 0;
    }
    return uVar4;
  }
  uVar4 = FUN_001140f0();
  return uVar4;
}


////>>0x00114040>>FUN_00114040>>////

undefined8 FUN_00114040(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_20;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  if (**(char **)(param_1 + 0x18) == 'E') {
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    uVar2 = FUN_001050d0(param_1,0x2f,0,0);
    return uVar2;
  }
  local_20 = 0;
  plVar3 = &local_20;
  while( true ) {
    lVar1 = FUN_00113fc0(param_1);
    if (lVar1 == 0) {
      return 0;
    }
    lVar1 = FUN_001050d0(param_1,0x2f,lVar1,0);
    *plVar3 = lVar1;
    if (lVar1 == 0) break;
    plVar3 = (long *)(lVar1 + 0x18);
    if (**(char **)(param_1 + 0x18) == 'E') {
      *(undefined8 *)(param_1 + 0x40) = uVar2;
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      return local_20;
    }
  }
  return 0;
}


////>>0x001140f0>>FUN_001140f0>>////

int * FUN_001140f0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  int *piVar10;
  int **ppiVar11;
  long lVar12;
  size_t sVar13;
  undefined8 uVar14;
  byte bVar15;
  ulong uVar16;
  undefined4 *puVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  int *local_40;
  char local_34 [12];
  
  pcVar4 = *(char **)(param_1 + 0x18);
  iVar7 = FUN_0011d890(pcVar4);
  if (iVar7 != 0) {
    ppiVar11 = (int **)FUN_00114e70(param_1,&local_40,0);
    if (ppiVar11 == (int **)0x0) {
      return (int *)0x0;
    }
    if (**(char **)(param_1 + 0x18) == 'F') {
      piVar10 = (int *)FUN_00115150(param_1);
      *ppiVar11 = piVar10;
    }
    else {
      piVar10 = (int *)FUN_001140f0();
      *ppiVar11 = piVar10;
    }
    if (piVar10 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar10 - 0x1fU < 2) {
      piVar5 = *(int **)(piVar10 + 4);
      *(int **)(piVar10 + 4) = local_40;
      local_40 = *ppiVar11;
      *ppiVar11 = piVar5;
    }
    if (local_40 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar7 = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x3c) <= iVar7) {
      return (int *)0x0;
    }
    *(int **)(*(long *)(param_1 + 0x30) + (long)iVar7 * 8) = local_40;
    *(int *)(param_1 + 0x38) = iVar7 + 1;
    return local_40;
  }
  cVar6 = *pcVar4;
  if ('T' < cVar6) {
    bVar15 = cVar6 + 0xab;
    if (0x25 < bVar15) goto switchD_0011413f_caseD_1;
    uVar16 = 1L << (bVar15 & 0x3f);
    if ((uVar16 & 0x3ec7bff000) != 0) {
      lVar9 = (long)(cVar6 + -0x61);
      iVar7 = *(int *)(param_1 + 0x28);
      if (iVar7 < *(int *)(param_1 + 0x2c)) {
        piVar10 = (int *)((long)iVar7 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)(piVar10 + 1) = 0;
        *(int *)(param_1 + 0x28) = iVar7 + 1;
        *(undefined ***)(piVar10 + 4) = &PTR_s_signed_char_00122f60 + lVar9 * 4;
        iVar7 = *(int *)(&DAT_00122f68 + lVar9 * 0x20);
        *piVar10 = 0x27;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar7;
        *(char **)(param_1 + 0x18) = pcVar4 + 1;
        return piVar10;
      }
      goto code_r0x0010327c;
    }
    if ((uVar16 & 1) == 0) {
      if (bVar15 != 0x20) goto switchD_0011413f_caseD_1;
      *(char **)(param_1 + 0x18) = pcVar4 + 1;
      FUN_001052a0(param_1);
      local_40 = (int *)FUN_001050d0();
    }
    else {
      *(char **)(param_1 + 0x18) = pcVar4 + 1;
      piVar10 = (int *)FUN_001052a0(param_1);
      if (**(char **)(param_1 + 0x18) == 'I') {
        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        local_40 = piVar10;
        uVar14 = FUN_00114040();
        piVar10 = (int *)FUN_001050d0(param_1,4,local_40,uVar14);
      }
      local_40 = piVar10;
      uVar14 = FUN_001140f0(param_1);
      local_40 = (int *)FUN_001050d0(param_1,0x21,uVar14,piVar10);
    }
    goto LAB_001142d0;
  }
  if (cVar6 < 'A') {
switchD_0011413f_caseD_1:
    piVar10 = (int *)FUN_00115ac0(param_1,1);
    return piVar10;
  }
  switch((int)cVar6 - 0x41U & 0xff) {
  case 0:
    pcVar18 = pcVar4 + 1;
    *(char **)(param_1 + 0x18) = pcVar18;
    if (pcVar4[1] == '_') {
      lVar9 = 0;
    }
    else {
      pcVar19 = pcVar18;
      if ((byte)(pcVar4[1] - 0x30U) < 10) {
        do {
          pcVar20 = pcVar19;
          pcVar19 = pcVar20 + 1;
          *(char **)(param_1 + 0x18) = pcVar19;
        } while ((byte)(*pcVar19 - 0x30U) < 10);
        lVar9 = FUN_00105250(param_1,pcVar18,(int)pcVar20 - (int)pcVar4);
        if (lVar9 == 0) {
          return (int *)0x0;
        }
        cVar6 = pcVar20[1];
        pcVar18 = pcVar19;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)(param_1 + 0x4c) = 1;
        lVar9 = FUN_001137d0(param_1);
        *(undefined4 *)(param_1 + 0x4c) = uVar1;
        if (lVar9 == 0) {
          return (int *)0x0;
        }
        pcVar18 = *(char **)(param_1 + 0x18);
        cVar6 = *pcVar18;
      }
      if (cVar6 != '_') {
        return (int *)0x0;
      }
    }
    *(char **)(param_1 + 0x18) = pcVar18 + 1;
    uVar14 = FUN_001140f0(param_1);
    local_40 = (int *)FUN_001050d0(param_1,0x2a,lVar9,uVar14);
    break;
  default:
    goto switchD_0011413f_caseD_1;
  case 2:
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    uVar14 = FUN_001140f0(param_1);
    local_40 = (int *)FUN_001050d0(param_1,0x25,uVar14,0);
    break;
  case 3:
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    if (pcVar4[1] == '\0') {
      return (int *)0x0;
    }
    *(char **)(param_1 + 0x18) = pcVar4 + 2;
    switch(pcVar4[1]) {
    case 'F':
      uVar8 = FUN_00103810(param_1);
      pcVar4 = *(char **)(param_1 + 0x18);
      cVar6 = *pcVar4;
      if (cVar6 == 'b') {
        if (uVar8 != 0x10) {
          return (int *)0x0;
        }
        iVar7 = *(int *)(param_1 + 0x28);
        *(char **)(param_1 + 0x18) = pcVar4 + 1;
        if (*(int *)(param_1 + 0x2c) <= iVar7) break;
        piVar10 = (int *)((long)iVar7 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)(piVar10 + 1) = 0;
        *(int *)(param_1 + 0x28) = iVar7 + 1;
        *(undefined ***)(piVar10 + 4) = &PTR_s_std_bfloat16_t_001233c0;
        iVar7 = *(int *)(param_1 + 0x48);
        *piVar10 = 0x27;
        iVar7 = iVar7 + 0xf;
      }
      else {
        if (cVar6 != 'x') {
          if (cVar6 != '_') {
            return (int *)0x0;
          }
          cVar6 = '\0';
        }
        iVar7 = *(int *)(param_1 + 0x28);
        if (iVar7 < *(int *)(param_1 + 0x2c)) {
          local_40 = (int *)((long)iVar7 * 0x20 + *(long *)(param_1 + 0x20));
          *(undefined8 *)(local_40 + 1) = 0;
          *(int *)(param_1 + 0x28) = iVar7 + 1;
          *local_40 = 0x5c;
          *(undefined ***)(local_40 + 4) = &PTR_s__Float_001233a0;
          *(short *)(local_40 + 6) = (short)uVar8;
          *(char *)((long)local_40 + 0x1a) = cVar6;
        }
        else {
          local_40 = (int *)0x0;
        }
        *(char **)(param_1 + 0x18) = pcVar4 + 1;
        sprintf(local_34,"%d",(ulong)uVar8);
        piVar10 = local_40;
        sVar13 = strlen(local_34);
        iVar7 = ((*(int *)(param_1 + 0x48) + *(int *)(*(long *)(piVar10 + 4) + 8) + 1) -
                (uint)(cVar6 == '\0')) + (int)sVar13;
      }
      *(int *)(param_1 + 0x48) = iVar7;
      return piVar10;
    default:
      goto LAB_00114280;
    case 'T':
    case 't':
      uVar1 = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x4c) = 1;
      uVar14 = FUN_001137d0(param_1);
      *(undefined4 *)(param_1 + 0x4c) = uVar1;
      local_40 = (int *)FUN_001050d0(param_1,0x44,uVar14,0);
      if (local_40 == (int *)0x0) {
        return (int *)0x0;
      }
      pcVar4 = *(char **)(param_1 + 0x18);
      if (*pcVar4 == '\0') {
        return (int *)0x0;
      }
      *(char **)(param_1 + 0x18) = pcVar4 + 1;
      if (*pcVar4 != 'E') {
        return (int *)0x0;
      }
      iVar7 = *(int *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x3c) <= iVar7) {
        return (int *)0x0;
      }
      goto LAB_001142e5;
    case 'a':
      iVar7 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar7) {
        return (int *)0x0;
      }
      *(int *)(param_1 + 0x28) = iVar7 + 1;
      piVar10 = (int *)((long)iVar7 * 0x20 + *(long *)(param_1 + 0x20));
      *(undefined8 *)(piVar10 + 1) = 0;
      *piVar10 = 0;
      *(undefined **)(piVar10 + 4) = &DAT_0011e2e9;
      piVar10[6] = 4;
      return piVar10;
    case 'c':
      iVar7 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar7) {
        return (int *)0x0;
      }
      *(int *)(param_1 + 0x28) = iVar7 + 1;
      piVar10 = (int *)((long)iVar7 * 0x20 + *(long *)(param_1 + 0x20));
      *(undefined8 *)(piVar10 + 1) = 0;
      *piVar10 = 0;
      *(char **)(piVar10 + 4) = "decltype(auto)";
      piVar10[6] = 0xe;
      return piVar10;
    case 'd':
      iVar7 = *(int *)(param_1 + 0x28);
      if (iVar7 < *(int *)(param_1 + 0x2c)) {
        piVar10 = (int *)((long)iVar7 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)(piVar10 + 1) = 0;
        *(int *)(param_1 + 0x28) = iVar7 + 1;
        *piVar10 = 0x27;
        *(undefined ***)(piVar10 + 4) = &PTR_s_decimal64_001232c0;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 9;
        return piVar10;
      }
      break;
    case 'e':
      iVar7 = *(int *)(param_1 + 0x28);
      if (iVar7 < *(int *)(param_1 + 0x2c)) {
        piVar10 = (int *)((long)iVar7 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)(piVar10 + 1) = 0;
        *(int *)(param_1 + 0x28) = iVar7 + 1;
        *piVar10 = 0x27;
        *(undefined ***)(piVar10 + 4) = &PTR_s_decimal128_001232e0;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 10;
        return piVar10;
      }
      break;
    case 'f':
      iVar7 = *(int *)(param_1 + 0x28);
      if (iVar7 < *(int *)(param_1 + 0x2c)) {
        piVar10 = (int *)((long)iVar7 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)(piVar10 + 1) = 0;
        *(int *)(param_1 + 0x28) = iVar7 + 1;
        *piVar10 = 0x27;
        *(undefined ***)(piVar10 + 4) = &PTR_s_decimal32_001232a0;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 9;
        return piVar10;
      }
      break;
    case 'h':
      iVar7 = *(int *)(param_1 + 0x28);
      if (iVar7 < *(int *)(param_1 + 0x2c)) {
        piVar10 = (int *)((long)iVar7 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)(piVar10 + 1) = 0;
        *(int *)(param_1 + 0x28) = iVar7 + 1;
        *piVar10 = 0x27;
        *(undefined ***)(piVar10 + 4) = &PTR_DAT_00123300;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 4;
        return piVar10;
      }
      break;
    case 'i':
      iVar7 = *(int *)(param_1 + 0x28);
      if (iVar7 < *(int *)(param_1 + 0x2c)) {
        piVar10 = (int *)((long)iVar7 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)(piVar10 + 1) = 0;
        *(int *)(param_1 + 0x28) = iVar7 + 1;
        *piVar10 = 0x27;
        *(undefined ***)(piVar10 + 4) = &PTR_s_char32_t_00123360;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 8;
        return piVar10;
      }
      break;
    case 'n':
      iVar7 = *(int *)(param_1 + 0x28);
      if (iVar7 < *(int *)(param_1 + 0x2c)) {
        piVar10 = (int *)((long)iVar7 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)(piVar10 + 1) = 0;
        *(int *)(param_1 + 0x28) = iVar7 + 1;
        *piVar10 = 0x27;
        *(undefined ***)(piVar10 + 4) = &PTR_s_decltype_nullptr__00123380;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 0x11;
        return piVar10;
      }
      break;
    case 'p':
      uVar14 = FUN_001140f0(param_1);
      local_40 = (int *)FUN_001050d0(param_1,0x4c,uVar14,0);
      goto LAB_001142d0;
    case 's':
      iVar7 = *(int *)(param_1 + 0x28);
      if (iVar7 < *(int *)(param_1 + 0x2c)) {
        piVar10 = (int *)((long)iVar7 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)(piVar10 + 1) = 0;
        *(int *)(param_1 + 0x28) = iVar7 + 1;
        *piVar10 = 0x27;
        *(undefined ***)(piVar10 + 4) = &PTR_s_char16_t_00123340;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 8;
        return piVar10;
      }
      break;
    case 'u':
      iVar7 = *(int *)(param_1 + 0x28);
      if (iVar7 < *(int *)(param_1 + 0x2c)) {
        piVar10 = (int *)((long)iVar7 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)(piVar10 + 1) = 0;
        *(int *)(param_1 + 0x28) = iVar7 + 1;
        *piVar10 = 0x27;
        *(undefined ***)(piVar10 + 4) = &PTR_s_char8_t_00123320;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 7;
        return piVar10;
      }
      break;
    case 'v':
      if (pcVar4[2] == '_') {
        uVar1 = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)(param_1 + 0x4c) = 1;
        *(char **)(param_1 + 0x18) = pcVar4 + 3;
        puVar17 = (undefined4 *)FUN_001137d0(param_1);
        *(undefined4 *)(param_1 + 0x4c) = uVar1;
        if (puVar17 == (undefined4 *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        iVar7 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar7) {
          return (int *)0x0;
        }
        puVar17 = (undefined4 *)((long)iVar7 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)(puVar17 + 1) = 0;
        *(int *)(param_1 + 0x28) = iVar7 + 1;
        *puVar17 = 0x43;
        iVar7 = FUN_00103810(param_1);
        *(long *)(puVar17 + 4) = (long)iVar7;
      }
      if (**(char **)(param_1 + 0x18) != '_') {
        return (int *)0x0;
      }
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      uVar14 = FUN_001140f0(param_1);
      local_40 = (int *)FUN_001050d0(param_1,0x2d,puVar17,uVar14);
      goto LAB_001142d0;
    }
code_r0x0010327c:
    do {
      invalidInstructionException();
    } while( true );
  case 5:
    local_40 = (int *)FUN_00115150(param_1);
    break;
  case 6:
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    uVar14 = FUN_001140f0(param_1);
    local_40 = (int *)FUN_001050d0(param_1,0x26,uVar14,0);
    break;
  case 0xc:
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    lVar9 = FUN_001140f0(param_1);
    if (lVar9 == 0) {
      return (int *)0x0;
    }
    lVar12 = FUN_001140f0(param_1);
    if (lVar12 == 0) {
      return (int *)0x0;
    }
    local_40 = (int *)FUN_001050d0(param_1,0x2b,lVar9,lVar12);
    break;
  case 0xe:
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    uVar14 = FUN_001140f0(param_1);
    local_40 = (int *)FUN_001050d0(param_1,0x24,uVar14,0);
    break;
  case 0xf:
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    uVar14 = FUN_001140f0(param_1);
    local_40 = (int *)FUN_001050d0(param_1,0x22,uVar14,0);
    break;
  case 0x11:
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    uVar14 = FUN_001140f0(param_1);
    local_40 = (int *)FUN_001050d0(param_1,0x23,uVar14,0);
    break;
  case 0x13:
    local_40 = (int *)FUN_00103920(param_1);
    pcVar4 = *(char **)(param_1 + 0x18);
    if (*pcVar4 == 'I') {
      if (*(int *)(param_1 + 0x50) == 0) {
        if (local_40 == (int *)0x0) {
          return (int *)0x0;
        }
        iVar7 = *(int *)(param_1 + 0x38);
        if (*(int *)(param_1 + 0x3c) <= iVar7) {
          return (int *)0x0;
        }
        *(int **)(*(long *)(param_1 + 0x30) + (long)iVar7 * 8) = local_40;
        uVar14 = 0;
        *(int *)(param_1 + 0x38) = iVar7 + 1;
        if ((byte)(*pcVar4 + 0xb7U) < 2) {
          *(char **)(param_1 + 0x18) = pcVar4 + 1;
          uVar14 = FUN_00114040();
        }
        local_40 = (int *)FUN_001050d0(param_1,4,local_40,uVar14);
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x28);
        uVar2 = *(undefined4 *)(param_1 + 0x38);
        *(char **)(param_1 + 0x18) = pcVar4 + 1;
        uVar3 = *(undefined4 *)(param_1 + 0x48);
        uVar14 = FUN_00114040();
        if (**(char **)(param_1 + 0x18) == 'I') {
          if (local_40 == (int *)0x0) {
            return (int *)0x0;
          }
          iVar7 = *(int *)(param_1 + 0x38);
          if (*(int *)(param_1 + 0x3c) <= iVar7) {
            return (int *)0x0;
          }
          *(int **)(*(long *)(param_1 + 0x30) + (long)iVar7 * 8) = local_40;
          *(int *)(param_1 + 0x38) = iVar7 + 1;
          local_40 = (int *)FUN_001050d0(param_1,4,local_40,uVar14);
        }
        else {
          *(char **)(param_1 + 0x18) = pcVar4;
          *(undefined4 *)(param_1 + 0x28) = uVar1;
          *(undefined4 *)(param_1 + 0x38) = uVar2;
          *(undefined4 *)(param_1 + 0x48) = uVar3;
        }
      }
    }
  }
LAB_001142d0:
  if ((local_40 != (int *)0x0) &&
     (iVar7 = *(int *)(param_1 + 0x38),
     *(int *)(param_1 + 0x3c) != iVar7 && iVar7 <= *(int *)(param_1 + 0x3c))) {
LAB_001142e5:
    *(int **)(*(long *)(param_1 + 0x30) + (long)iVar7 * 8) = local_40;
    *(int *)(param_1 + 0x38) = iVar7 + 1;
    return local_40;
  }
LAB_00114280:
  return (int *)0x0;
}


////>>0x00114bf0>>FUN_00114bf0>>////

undefined4 * FUN_00114bf0(long param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  
  pcVar2 = *(char **)(param_1 + 0x18);
  if (*pcVar2 == '\0') {
    cVar11 = '\0';
    cVar10 = '\0';
  }
  else {
    *(char **)(param_1 + 0x18) = pcVar2 + 1;
    cVar11 = pcVar2[1];
    cVar10 = *pcVar2;
    if (cVar11 != '\0') {
      *(char **)(param_1 + 0x18) = pcVar2 + 2;
      cVar11 = pcVar2[1];
      if (cVar10 == 'v') {
        bVar12 = cVar11 - 0x30;
        if (bVar12 < 10) {
          lVar5 = FUN_001052a0();
          iVar9 = *(int *)(param_1 + 0x28);
          if (*(int *)(param_1 + 0x2c) <= iVar9) {
            return (undefined4 *)0x0;
          }
          puVar6 = (undefined4 *)((long)iVar9 * 0x20 + *(long *)(param_1 + 0x20));
          *(undefined8 *)(puVar6 + 1) = 0;
          *(int *)(param_1 + 0x28) = iVar9 + 1;
          if (lVar5 == 0) {
            return (undefined4 *)0x0;
          }
          *(undefined8 *)(puVar6 + 1) = 0;
          *puVar6 = 0x33;
          puVar6[4] = (int)(char)bVar12;
          *(long *)(puVar6 + 6) = lVar5;
          return puVar6;
        }
      }
      else if ((cVar10 == 'c') && (cVar11 == 'v')) {
        uVar1 = *(undefined4 *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x50) = (uint)(*(int *)(param_1 + 0x4c) == 0);
        uVar7 = FUN_001140f0();
        if (*(int *)(param_1 + 0x50) == 0) {
          puVar6 = (undefined4 *)FUN_001050d0(param_1,0x34,uVar7,0);
        }
        else {
          puVar6 = (undefined4 *)FUN_001050d0(param_1,0x35,uVar7,0);
        }
        *(undefined4 *)(param_1 + 0x50) = uVar1;
        return puVar6;
      }
    }
  }
  iVar8 = 0;
  iVar9 = 0x48;
  do {
    while( true ) {
      iVar4 = (iVar9 - iVar8) / 2 + iVar8;
      pcVar2 = (&PTR_DAT_001233e0)[(long)iVar4 * 3];
      bVar14 = SBORROW1(*pcVar2,cVar10);
      cVar3 = *pcVar2 - cVar10;
      bVar13 = *pcVar2 == cVar10;
      if (bVar13) {
        bVar14 = SBORROW1(pcVar2[1],cVar11);
        cVar3 = pcVar2[1] - cVar11;
        bVar13 = cVar3 == '\0';
        if (bVar13) {
          iVar9 = *(int *)(param_1 + 0x28);
          if (*(int *)(param_1 + 0x2c) <= iVar9) {
            return (undefined4 *)0x0;
          }
          puVar6 = (undefined4 *)((long)iVar9 * 0x20 + *(long *)(param_1 + 0x20));
          *(undefined8 *)(puVar6 + 1) = 0;
          *(int *)(param_1 + 0x28) = iVar9 + 1;
          *puVar6 = 0x32;
          *(undefined ***)(puVar6 + 4) = &PTR_DAT_001233e0 + (long)iVar4 * 3;
          return puVar6;
        }
      }
      if (!bVar13 && bVar14 == cVar3 < '\0') break;
      iVar8 = iVar4 + 1;
      if (iVar9 == iVar8) {
        return (undefined4 *)0x0;
      }
    }
    iVar9 = iVar4;
  } while (iVar8 != iVar4);
  return (undefined4 *)0x0;
}


////>>0x00114d90>>FUN_00114d90>>////

long FUN_00114d90(long param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  long local_20 [2];
  
  pcVar3 = *(char **)(param_1 + 0x18);
  local_20[0] = 0;
  cVar1 = *pcVar3;
  if ((cVar1 != 'E' && cVar1 != '\0') && (plVar4 = local_20, cVar1 != '.')) {
    while (((cVar1 != 'R' && (cVar1 != 'O')) || (pcVar3[1] != 'E'))) {
      lVar2 = FUN_001140f0(param_1);
      if (lVar2 == 0) {
        return 0;
      }
      lVar2 = FUN_001050d0(param_1,0x2e,lVar2,0);
      *plVar4 = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
      pcVar3 = *(char **)(param_1 + 0x18);
      plVar4 = (long *)(lVar2 + 0x18);
      cVar1 = *pcVar3;
      if ((cVar1 == '\0' || cVar1 == 'E') || (cVar1 == '.')) break;
    }
    if (local_20[0] != 0) {
      if (*(long *)(local_20[0] + 0x18) != 0) {
        return local_20[0];
      }
      if (**(int **)(local_20[0] + 0x10) == 0x27) {
        lVar2 = *(long *)(*(int **)(local_20[0] + 0x10) + 4);
        if (*(int *)(lVar2 + 0x1c) == 9) {
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - *(int *)(lVar2 + 8);
          *(undefined8 *)(local_20[0] + 0x10) = 0;
          return local_20[0];
        }
        return local_20[0];
      }
      return local_20[0];
    }
  }
  return 0;
}


////>>0x00114e70>>FUN_00114e70>>////

int ** FUN_00114e70(long param_1,int **param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  char *pcVar4;
  int **ppiVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  
  pcVar4 = *(char **)(param_1 + 0x18);
  cVar1 = *pcVar4;
  iVar6 = FUN_0011d890(pcVar4);
  ppiVar5 = param_2;
  do {
    if (iVar6 == 0) {
      if ((((param_3 & 1) == 0) && (cVar1 == 'F')) && (ppiVar5 != param_2)) {
        piVar7 = *param_2;
        iVar6 = *piVar7;
        if (iVar6 != 0x1a) goto LAB_00115075;
        do {
          *piVar7 = 0x1d;
          while( true ) {
            if (ppiVar5 == (int **)(piVar7 + 4)) {
              return ppiVar5;
            }
            piVar7 = *(int **)(piVar7 + 4);
            iVar6 = *piVar7;
            if (iVar6 == 0x1a) break;
LAB_00115075:
            if (iVar6 == 0x1b) {
              *piVar7 = 0x1e;
            }
            else if (iVar6 == 0x19) {
              *piVar7 = 0x1c;
            }
          }
        } while( true );
      }
      return ppiVar5;
    }
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    if (cVar1 == 'r') {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 9;
      iVar6 = (-(uint)(param_3 == 0) & 0xfffffffd) + 0x1c;
    }
    else if (cVar1 == 'V') {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 9;
      iVar6 = (-(uint)(param_3 == 0) & 0xfffffffd) + 0x1d;
    }
    else if (cVar1 == 'K') {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 6;
      iVar6 = (-(uint)(param_3 == 0) & 0xfffffffd) + 0x1e;
    }
    else {
      if (pcVar4[1] == '\0') {
        return (int **)0x0;
      }
      *(char **)(param_1 + 0x18) = pcVar4 + 2;
      bVar2 = pcVar4[1];
      if (bVar2 == 0x78) {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 0x11;
        iVar6 = 0x4e;
      }
      else if ((bVar2 & 0xdf) == 0x4f) {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 9;
        iVar6 = 0x50;
        if (bVar2 == 0x4f) {
          uVar3 = *(undefined4 *)(param_1 + 0x4c);
          *(undefined4 *)(param_1 + 0x4c) = 1;
          lVar8 = FUN_001137d0(param_1,0x50,0x4f,0);
          *(undefined4 *)(param_1 + 0x4c) = uVar3;
          if (lVar8 == 0) {
            return (int **)0x0;
          }
          if (**(char **)(param_1 + 0x18) != 'E') {
            return (int **)0x0;
          }
          *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
          iVar6 = 0x50;
        }
      }
      else {
        if (bVar2 != 0x77) {
          return (int **)0x0;
        }
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 6;
        lVar8 = FUN_00114d90(param_1);
        if (lVar8 == 0) {
          return (int **)0x0;
        }
        if (**(char **)(param_1 + 0x18) != 'E') {
          return (int **)0x0;
        }
        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        iVar6 = 0x51;
      }
    }
    piVar7 = (int *)FUN_001050d0(param_1,iVar6,0);
    *ppiVar5 = piVar7;
    if (piVar7 == (int *)0x0) {
      return (int **)0x0;
    }
    pcVar4 = *(char **)(param_1 + 0x18);
    ppiVar5 = (int **)(piVar7 + 4);
    cVar1 = *pcVar4;
    iVar6 = FUN_0011d890(pcVar4);
  } while( true );
}


////>>0x001150d0>>FUN_001150d0>>////

undefined8 FUN_001150d0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (**(char **)(param_1 + 0x18) == 'J') {
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  else if (param_2 == 0) {
    lVar1 = 0;
    lVar2 = FUN_00114d90(param_1);
    if (lVar2 == 0) {
      return 0;
    }
    goto LAB_00115106;
  }
  lVar1 = FUN_001140f0(param_1);
  if ((lVar1 == 0) || (lVar2 = FUN_00114d90(param_1), lVar2 == 0)) {
    return 0;
  }
LAB_00115106:
  uVar3 = FUN_001050d0(param_1,0x29,lVar1,lVar2);
  return uVar3;
}


////>>0x00115150>>FUN_00115150>>////

undefined8 FUN_00115150(long param_1)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_1 + 0x12) & 4) == 0) {
    uVar2 = *(uint *)(param_1 + 0x58);
    if (uVar2 < 0x801) {
      *(uint *)(param_1 + 0x58) = uVar2 + 1;
      pcVar3 = *(char **)(param_1 + 0x18);
      if (*pcVar3 == 'F') goto LAB_00115189;
      *(uint *)(param_1 + 0x58) = uVar2;
    }
  }
  else {
    pcVar3 = *(char **)(param_1 + 0x18);
    if (*pcVar3 == 'F') {
LAB_00115189:
      *(char **)(param_1 + 0x18) = pcVar3 + 1;
      if (pcVar3[1] == 'Y') {
        *(char **)(param_1 + 0x18) = pcVar3 + 2;
      }
      uVar4 = FUN_001150d0(param_1,1);
      uVar4 = FUN_001051f0(param_1,uVar4);
      if (**(char **)(param_1 + 0x18) == 'E') {
        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        bVar1 = *(byte *)(param_1 + 0x12);
      }
      else {
        uVar4 = 0;
        bVar1 = *(byte *)(param_1 + 0x12);
      }
      if ((bVar1 & 4) != 0) {
        return uVar4;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
      return uVar4;
    }
  }
  return 0;
}


////>>0x001151e0>>FUN_001151e0>>////

undefined8 FUN_001151e0(long param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  pcVar2 = *(char **)(param_1 + 0x18);
  if (*pcVar2 != 'T') {
    return 0;
  }
  cVar1 = pcVar2[1];
  if (cVar1 == 't') {
    *(char **)(param_1 + 0x18) = pcVar2 + 2;
    lVar3 = FUN_001152e0();
    if ((lVar3 != 0) && (**(char **)(param_1 + 0x18) == 'E')) {
      uVar4 = 0x5a;
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      goto LAB_0011522c;
    }
  }
  else {
    if ('t' < cVar1) {
      if (cVar1 != 'y') {
        return 0;
      }
      *(char **)(param_1 + 0x18) = pcVar2 + 2;
      uVar4 = FUN_001050d0(param_1,0x58,0,0);
      return uVar4;
    }
    if (cVar1 == 'n') {
      *(char **)(param_1 + 0x18) = pcVar2 + 2;
      lVar3 = FUN_001140f0();
      if (lVar3 != 0) {
        uVar4 = 0x59;
        goto LAB_0011522c;
      }
    }
    else {
      if (cVar1 != 'p') {
        return 0;
      }
      *(char **)(param_1 + 0x18) = pcVar2 + 2;
      lVar3 = FUN_001151e0();
      uVar4 = 0x5b;
      if (lVar3 != 0) {
LAB_0011522c:
        uVar4 = FUN_001050d0(param_1,uVar4,lVar3,0);
        return uVar4;
      }
    }
  }
  *param_2 = 1;
  return 0;
}


////>>0x001152e0>>FUN_001152e0>>////

undefined8 FUN_001152e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_20;
  
  local_20 = 0;
  plVar3 = &local_20;
  while( true ) {
    lVar1 = FUN_001151e0(param_1,param_2);
    if (lVar1 == 0) break;
    *plVar3 = lVar1;
    plVar3 = (long *)(lVar1 + 0x18);
  }
  if (local_20 != 0) {
    uVar2 = FUN_001050d0(param_1,0x57,local_20,0);
    return uVar2;
  }
  return 0;
}


////>>0x00115350>>FUN_00115350>>////

int * FUN_00115350(long param_1,long param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  int *piVar11;
  int *unaff_RBP;
  undefined8 uVar12;
  int *local_40 [2];
  int local_2c;
  
  lVar8 = param_1;
  local_40[0] = param_3;
  iVar4 = FUN_00105380(param_1,local_40);
  if (iVar4 == 0) {
    return (int *)0x0;
  }
  pcVar6 = *(char **)(lVar8 + 0x18);
  cVar3 = *pcVar6;
  if ((byte)(cVar3 - 0x30U) < 10) {
    piVar5 = (int *)FUN_001052a0();
    if (local_40[0] != (int *)0x0) goto LAB_001153cf;
    pcVar6 = *(char **)(param_1 + 0x18);
    cVar3 = *pcVar6;
  }
  else {
    if ((byte)(cVar3 + 0x9fU) < 0x1a) {
      uVar1 = *(undefined4 *)(lVar8 + 0x4c);
      if ((cVar3 == 'o') && (pcVar6[1] == 'n')) {
        *(undefined4 *)(lVar8 + 0x4c) = 0;
        *(char **)(lVar8 + 0x18) = pcVar6 + 2;
      }
      piVar5 = (int *)FUN_00114bf0(param_1);
      *(undefined4 *)(param_1 + 0x4c) = uVar1;
      if (piVar5 == (int *)0x0) goto switchD_001155d0_caseD_33;
      if (*piVar5 == 0x32) {
        pcVar6 = **(char ***)(piVar5 + 4);
        *(int *)(param_1 + 0x48) =
             *(int *)(param_1 + 0x48) + 7 + *(int *)(*(char ***)(piVar5 + 4) + 2);
        if (((*pcVar6 == 'l') && (pcVar6[1] == 'i')) && (pcVar6[2] == '\0')) {
          FUN_001052a0(param_1);
          piVar5 = (int *)FUN_001050d0();
        }
      }
    }
    else {
      if (cVar3 == 'D') {
        cVar3 = pcVar6[1];
        if (cVar3 == 'C') {
          *(char **)(lVar8 + 0x18) = pcVar6 + 2;
          piVar11 = (int *)0x0;
          do {
            FUN_001052a0(param_1);
            piVar7 = (int *)FUN_001050d0();
            piVar5 = piVar7;
            if (piVar11 != (int *)0x0) {
              *(int **)(piVar11 + 6) = piVar7;
              piVar5 = unaff_RBP;
            }
            if (piVar7 == (int *)0x0) goto switchD_001155d0_caseD_33;
            unaff_RBP = piVar5;
            piVar11 = piVar7;
          } while (**(char **)(param_1 + 0x18) != 'E');
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          goto LAB_001153c5;
        }
        piVar11 = *(int **)(lVar8 + 0x40);
        if ((piVar11 != (int *)0x0) && ((*piVar11 == 0 || (*piVar11 == 0x18)))) {
LAB_00115750:
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + piVar11[6];
          cVar3 = *pcVar6;
          goto LAB_00115759;
        }
LAB_001155b8:
        switch(cVar3) {
        case '0':
          iVar4 = 1;
          break;
        case '1':
          iVar4 = 2;
          break;
        case '2':
          iVar4 = 3;
          break;
        default:
          goto switchD_001155d0_caseD_33;
        case '4':
          iVar4 = 4;
          break;
        case '5':
          iVar4 = 5;
        }
        iVar2 = *(int *)(param_1 + 0x28);
        *(char **)(param_1 + 0x18) = pcVar6 + 2;
        if (iVar2 < *(int *)(param_1 + 0x2c)) {
          piVar5 = (int *)((long)iVar2 * 0x20 + *(long *)(param_1 + 0x20));
          *(undefined8 *)(piVar5 + 1) = 0;
          *(int *)(param_1 + 0x28) = iVar2 + 1;
          if (piVar11 != (int *)0x0) {
            *(undefined8 *)(piVar5 + 1) = 0;
            *piVar5 = 8;
            piVar5[4] = iVar4;
            *(int **)(piVar5 + 6) = piVar11;
            goto LAB_001153c5;
          }
        }
      }
      else if ((byte)(cVar3 + 0xbdU) < 2) {
        piVar11 = *(int **)(lVar8 + 0x40);
        if (piVar11 == (int *)0x0) {
          if (cVar3 != 'C') goto switchD_001155d0_caseD_33;
        }
        else {
          if ((*piVar11 == 0) || (*piVar11 == 0x18)) goto LAB_00115750;
LAB_00115759:
          if (cVar3 != 'C') {
            if (cVar3 != 'D') goto switchD_001155d0_caseD_33;
            cVar3 = pcVar6[1];
            goto LAB_001155b8;
          }
        }
        cVar3 = pcVar6[1];
        if (cVar3 == 'I') {
          *(char **)(param_1 + 0x18) = pcVar6 + 1;
          cVar3 = pcVar6[2];
          if ((byte)(cVar3 - 0x31U) < 5) {
            *(char **)(param_1 + 0x18) = pcVar6 + 3;
            FUN_001140f0(param_1);
            piVar11 = *(int **)(param_1 + 0x40);
            goto LAB_00115782;
          }
        }
        else if ((byte)(cVar3 - 0x31U) < 5) {
          *(char **)(param_1 + 0x18) = pcVar6 + 2;
LAB_00115782:
          iVar4 = *(int *)(param_1 + 0x28);
          if (iVar4 < *(int *)(param_1 + 0x2c)) {
            piVar5 = (int *)((long)iVar4 * 0x20 + *(long *)(param_1 + 0x20));
            *(undefined8 *)(piVar5 + 1) = 0;
            *(int *)(param_1 + 0x28) = iVar4 + 1;
            if (piVar11 != (int *)0x0) {
              *(undefined8 *)(piVar5 + 1) = 0;
              *piVar5 = 7;
              piVar5[4] = cVar3 + -0x30;
              *(int **)(piVar5 + 6) = piVar11;
              goto LAB_001153c5;
            }
          }
        }
      }
      else {
        if (cVar3 == 'L') {
          *(char **)(lVar8 + 0x18) = pcVar6 + 1;
          piVar5 = (int *)FUN_001052a0();
          if (piVar5 == (int *)0x0) {
            return (int *)0x0;
          }
          iVar4 = FUN_001039b0();
          if (iVar4 == 0) {
            return (int *)0x0;
          }
          goto LAB_001153c5;
        }
        if (cVar3 != 'U') {
          return (int *)0x0;
        }
        if (pcVar6[1] == 'l') {
          *(char **)(lVar8 + 0x18) = pcVar6 + 1;
          if (pcVar6[1] == 'l') {
            local_2c = 0;
            *(char **)(lVar8 + 0x18) = pcVar6 + 2;
            lVar8 = FUN_001152e0();
            if ((local_2c == 0) && (lVar9 = FUN_00114d90(param_1), lVar9 != 0)) {
              if (lVar8 != 0) {
                *(long *)(lVar8 + 0x18) = lVar9;
                lVar9 = lVar8;
              }
              pcVar6 = *(char **)(param_1 + 0x18);
              if (*pcVar6 == 'E') {
                pcVar10 = pcVar6 + 1;
                *(char **)(param_1 + 0x18) = pcVar10;
                iVar4 = 0;
                if (pcVar6[1] == '_') {
LAB_00115883:
                  *(char **)(param_1 + 0x18) = pcVar10 + 1;
                  iVar2 = *(int *)(param_1 + 0x28);
                  if (iVar2 < *(int *)(param_1 + 0x2c)) {
                    piVar5 = (int *)((long)iVar2 * 0x20 + *(long *)(param_1 + 0x20));
                    *(undefined8 *)(piVar5 + 1) = 0;
                    *(int *)(param_1 + 0x28) = iVar2 + 1;
                    *piVar5 = 0x47;
                    *(long *)(piVar5 + 4) = lVar9;
                    piVar5[6] = iVar4;
                    goto LAB_001153c5;
                  }
                }
                else if (pcVar6[1] != 'n') {
                  iVar4 = FUN_00103810(param_1);
                  iVar4 = iVar4 + 1;
                  if ((-1 < iVar4) && (pcVar10 = *(char **)(param_1 + 0x18), *pcVar10 == '_'))
                  goto LAB_00115883;
                }
              }
            }
          }
        }
        else {
          if (pcVar6[1] != 't') {
            return (int *)0x0;
          }
          *(char **)(lVar8 + 0x18) = pcVar6 + 1;
          if (pcVar6[1] == 't') {
            pcVar10 = pcVar6 + 2;
            *(char **)(lVar8 + 0x18) = pcVar10;
            if (pcVar6[2] == '_') {
              iVar4 = 0;
            }
            else {
              if (pcVar6[2] == 'n') {
                piVar5 = local_40[0];
                if (local_40[0] == (int *)0x0) goto LAB_001153ef;
                piVar5 = (int *)0x0;
                goto LAB_001153cf;
              }
              iVar4 = FUN_00103810();
              iVar4 = iVar4 + 1;
              if ((iVar4 < 0) || (pcVar10 = *(char **)(lVar8 + 0x18), *pcVar10 != '_'))
              goto switchD_001155d0_caseD_33;
            }
            iVar2 = *(int *)(param_1 + 0x28);
            *(char **)(param_1 + 0x18) = pcVar10 + 1;
            if (iVar2 < *(int *)(param_1 + 0x2c)) {
              piVar5 = (int *)((long)iVar2 * 0x20 + *(long *)(param_1 + 0x20));
              *(undefined8 *)(piVar5 + 1) = 0;
              *(int *)(param_1 + 0x28) = iVar2 + 1;
              *(long *)(piVar5 + 4) = (long)iVar4;
              iVar4 = *(int *)(param_1 + 0x38);
              *piVar5 = 0x49;
              if (iVar4 < *(int *)(param_1 + 0x3c)) {
                *(int **)(*(long *)(param_1 + 0x30) + (long)iVar4 * 8) = piVar5;
                *(int *)(param_1 + 0x38) = iVar4 + 1;
                goto LAB_001153c5;
              }
            }
          }
        }
      }
switchD_001155d0_caseD_33:
      piVar5 = (int *)0x0;
    }
LAB_001153c5:
    if (local_40[0] != (int *)0x0) {
LAB_001153cf:
      piVar5 = (int *)FUN_001050d0(param_1,0x55,piVar5,local_40[0]);
    }
    pcVar6 = *(char **)(param_1 + 0x18);
    cVar3 = *pcVar6;
  }
  if (cVar3 == 'B') {
    uVar12 = *(undefined8 *)(param_1 + 0x40);
    do {
      *(char **)(param_1 + 0x18) = pcVar6 + 1;
      FUN_001052a0(param_1);
      piVar5 = (int *)FUN_001050d0();
      pcVar6 = *(char **)(param_1 + 0x18);
    } while (*pcVar6 == 'B');
    *(undefined8 *)(param_1 + 0x40) = uVar12;
  }
LAB_001153ef:
  if (param_2 != 0) {
    piVar5 = (int *)FUN_001050d0(param_1,1,param_2,piVar5);
  }
  return piVar5;
}


////>>0x00115930>>FUN_00115930>>////

int * FUN_00115930(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  int *piVar6;
  
  piVar2 = (int *)0x0;
  do {
    pcVar4 = *(char **)(param_1 + 0x18);
    cVar5 = *pcVar4;
    if (cVar5 == 'D') goto LAB_00115a30;
    piVar6 = piVar2;
    if (cVar5 == 'I') {
      if (piVar2 != (int *)0x0) goto LAB_0011599a;
      return (int *)0x0;
    }
LAB_00115957:
    if (cVar5 == 'T') {
      if (piVar6 != (int *)0x0) {
        return (int *)0x0;
      }
      piVar2 = (int *)FUN_00103920(param_1);
      goto joined_r0x00115974;
    }
    if (cVar5 != 'M') {
      if (cVar5 != 'S') goto LAB_00115a90;
      piVar2 = (int *)FUN_00105410(param_1,1);
      if (piVar2 == (int *)0x0) {
        return (int *)0x0;
      }
      if (*piVar2 - 0x53U < 2) goto LAB_00115a92;
      if (piVar6 != (int *)0x0) {
        return (int *)0x0;
      }
      pcVar4 = *(char **)(param_1 + 0x18);
      cVar5 = *pcVar4;
      if (cVar5 != 'D') goto LAB_00115994;
LAB_00115a30:
      do {
        piVar6 = piVar2;
        if ((pcVar4[1] & 0xdfU) == 0x54) {
          if (piVar2 != (int *)0x0) {
            return (int *)0x0;
          }
          piVar2 = (int *)FUN_001140f0(param_1);
        }
        else {
LAB_00115a90:
          piVar2 = (int *)0x0;
LAB_00115a92:
          piVar2 = (int *)FUN_00115350(param_1,piVar6,piVar2);
        }
joined_r0x00115974:
        while( true ) {
          if (piVar2 == (int *)0x0) {
            return (int *)0x0;
          }
          pcVar4 = *(char **)(param_1 + 0x18);
          if (*pcVar4 == 'E') {
            return piVar2;
          }
          if (param_2 != 0) {
            iVar1 = *(int *)(param_1 + 0x38);
            if (*(int *)(param_1 + 0x3c) <= iVar1) {
              return (int *)0x0;
            }
            *(int **)(*(long *)(param_1 + 0x30) + (long)iVar1 * 8) = piVar2;
            *(int *)(param_1 + 0x38) = iVar1 + 1;
          }
          cVar5 = *pcVar4;
          if (cVar5 == 'D') break;
LAB_00115994:
          piVar6 = piVar2;
          if (cVar5 != 'I') goto LAB_00115957;
LAB_0011599a:
          *(char **)(param_1 + 0x18) = pcVar4 + 1;
          lVar3 = FUN_00114040(param_1);
          if (lVar3 == 0) {
            return (int *)0x0;
          }
          piVar2 = (int *)FUN_001050d0(param_1,4,piVar2,lVar3);
        }
      } while( true );
    }
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    piVar2 = piVar6;
  } while( true );
}


////>>0x00115ac0>>FUN_00115ac0>>////

int * FUN_00115ac0(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int *local_30 [2];
  
  pcVar5 = *(char **)(param_1 + 0x18);
  cVar1 = *pcVar5;
  if (cVar1 == 'U') {
    piVar4 = (int *)FUN_00115350(param_1,0,0);
    goto joined_r0x00115caf;
  }
  if (cVar1 < 'V') {
    if (cVar1 == 'N') {
      *(char **)(param_1 + 0x18) = pcVar5 + 1;
      plVar8 = (long *)FUN_00114e70(param_1,local_30,1);
      if (plVar8 == (long *)0x0) {
        return (int *)0x0;
      }
      piVar4 = (int *)FUN_001051f0(param_1,0);
      lVar9 = FUN_00115930();
      *plVar8 = lVar9;
      if (lVar9 == 0) {
        return (int *)0x0;
      }
      if (piVar4 == (int *)0x0) {
        pcVar5 = *(char **)(param_1 + 0x18);
        cVar1 = *pcVar5;
        piVar4 = local_30[0];
      }
      else {
        pcVar5 = *(char **)(param_1 + 0x18);
        *(int **)(piVar4 + 4) = local_30[0];
        cVar1 = *pcVar5;
      }
      if (cVar1 != 'E') {
        return (int *)0x0;
      }
      *(char **)(param_1 + 0x18) = pcVar5 + 1;
      goto joined_r0x00115caf;
    }
    if (cVar1 != 'S') goto LAB_00115c40;
    if (pcVar5[1] == 't') {
      *(char **)(param_1 + 0x18) = pcVar5 + 2;
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar2 + 1;
        puVar12 = (undefined4 *)((long)iVar2 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)(puVar12 + 1) = 0;
        *puVar12 = 0;
        *(undefined **)(puVar12 + 4) = &DAT_0011e30c;
        puVar12[6] = 3;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 3;
        if (pcVar5[2] != 'S') {
          piVar4 = (int *)0x0;
          goto LAB_00115c45;
        }
      }
      else {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 3;
        if (pcVar5[2] != 'S') goto LAB_00115c40;
        puVar12 = (undefined4 *)0x0;
      }
      piVar4 = (int *)FUN_00105410(param_1,0);
      if (piVar4 == (int *)0x0) {
        return (int *)0x0;
      }
      if (*piVar4 - 0x53U < 2) goto LAB_00115c45;
      if (puVar12 != (undefined4 *)0x0) {
        return (int *)0x0;
      }
    }
    else {
      piVar4 = (int *)FUN_00105410(param_1,0);
      if (piVar4 == (int *)0x0) {
        return (int *)0x0;
      }
      if (*piVar4 - 0x53U < 2) goto LAB_00115c42;
    }
    pcVar5 = *(char **)(param_1 + 0x18);
    if (*pcVar5 != 'I') {
      return piVar4;
    }
LAB_00115b29:
    *(char **)(param_1 + 0x18) = pcVar5 + 1;
    uVar6 = FUN_00114040(param_1);
  }
  else {
    if (cVar1 == 'Z') {
      *(char **)(param_1 + 0x18) = pcVar5 + 1;
      if ((pcVar5[1] == 'G') || (pcVar5[1] == 'T')) {
        piVar4 = (int *)FUN_00115f90(param_1);
      }
      else {
        piVar4 = (int *)FUN_00113410(param_1,0);
      }
      if (piVar4 == (int *)0x0) {
        return (int *)0x0;
      }
      pcVar5 = *(char **)(param_1 + 0x18);
      if (*pcVar5 != 'E') {
        return (int *)0x0;
      }
      *(char **)(param_1 + 0x18) = pcVar5 + 1;
      if (pcVar5[1] == 's') {
        *(char **)(param_1 + 0x18) = pcVar5 + 2;
        iVar2 = FUN_001039b0(param_1);
        if (iVar2 == 0) {
          return (int *)0x0;
        }
        iVar2 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar2) goto LAB_00115f00;
        *(int *)(param_1 + 0x28) = iVar2 + 1;
        piVar7 = (int *)((long)iVar2 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)(piVar7 + 1) = 0;
        *piVar7 = 0;
        *(char **)(piVar7 + 4) = "string literal";
        piVar7[6] = 0xe;
      }
      else if (pcVar5[1] == 'd') {
        pcVar11 = pcVar5 + 2;
        *(char **)(param_1 + 0x18) = pcVar11;
        if (pcVar5[2] == '_') {
          iVar2 = 0;
        }
        else {
          if (pcVar5[2] == 'n') {
            return (int *)0x0;
          }
          iVar2 = FUN_00103810(param_1);
          iVar2 = iVar2 + 1;
          if (iVar2 < 0) {
            return (int *)0x0;
          }
          pcVar11 = *(char **)(param_1 + 0x18);
          if (*pcVar11 != '_') {
            return (int *)0x0;
          }
        }
        *(char **)(param_1 + 0x18) = pcVar11 + 1;
        piVar10 = (int *)FUN_00115ac0(param_1,0);
        if (((piVar10 != (int *)0x0) && ((*piVar10 - 0x47U & 0xfffffffd) != 0)) &&
           (iVar3 = FUN_001039b0(param_1), iVar3 == 0)) {
          return (int *)0x0;
        }
        iVar3 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar3) goto LAB_00115f00;
        piVar7 = (int *)((long)iVar3 * 0x20 + *(long *)(param_1 + 0x20));
        *(undefined8 *)(piVar7 + 1) = 0;
        *(int *)(param_1 + 0x28) = iVar3 + 1;
        *piVar7 = 0x48;
        piVar7[6] = iVar2;
        *(int **)(piVar7 + 4) = piVar10;
      }
      else {
        piVar7 = (int *)FUN_00115ac0(param_1,0);
        if (piVar7 == (int *)0x0) {
LAB_00115f00:
          piVar7 = (int *)0x0;
        }
        else if (((*piVar7 - 0x47U & 0xfffffffd) != 0) &&
                (iVar2 = FUN_001039b0(param_1), iVar2 == 0)) {
          return (int *)0x0;
        }
      }
      if ((*piVar4 == 3) && (**(int **)(piVar4 + 6) == 0x29)) {
        *(undefined8 *)(*(int **)(piVar4 + 6) + 4) = 0;
      }
      piVar4 = (int *)FUN_001050d0(param_1,2,piVar4,piVar7);
      goto joined_r0x00115caf;
    }
LAB_00115c40:
    piVar4 = (int *)0x0;
LAB_00115c42:
    puVar12 = (undefined4 *)0x0;
LAB_00115c45:
    piVar4 = (int *)FUN_00115350(param_1,puVar12,piVar4);
    pcVar5 = *(char **)(param_1 + 0x18);
    if (*pcVar5 != 'I') goto joined_r0x00115caf;
    if (piVar4 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar2 = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x3c) <= iVar2) {
      return (int *)0x0;
    }
    *(int **)(*(long *)(param_1 + 0x30) + (long)iVar2 * 8) = piVar4;
    *(int *)(param_1 + 0x38) = iVar2 + 1;
    if ((byte)(*pcVar5 + 0xb7U) < 2) goto LAB_00115b29;
    uVar6 = 0;
  }
  piVar4 = (int *)FUN_001050d0(param_1,4,piVar4,uVar6);
joined_r0x00115caf:
  if (param_2 == 0) {
    return piVar4;
  }
  if ((piVar4 != (int *)0x0) && (iVar2 = *(int *)(param_1 + 0x38), iVar2 < *(int *)(param_1 + 0x3c))
     ) {
    *(int **)(*(long *)(param_1 + 0x30) + (long)iVar2 * 8) = piVar4;
    *(int *)(param_1 + 0x38) = iVar2 + 1;
    return piVar4;
  }
  return (int *)0x0;
}


////>>0x00115f90>>FUN_00115f90>>////

undefined8 FUN_00115f90(long param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  uint uVar13;
  undefined4 *puVar14;
  long local_20 [2];
  
  iVar3 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = iVar3 + 0x14;
  pcVar2 = *(char **)(param_1 + 0x18);
  if (*pcVar2 == 'T') {
    *(char **)(param_1 + 0x18) = pcVar2 + 1;
    if (pcVar2[1] == '\0') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = pcVar2 + 2;
    switch(pcVar2[1]) {
    case 'A':
      puVar5 = (undefined4 *)FUN_00113fc0();
      puVar14 = (undefined4 *)0x0;
      uVar8 = 0x30;
      break;
    default:
      return 0;
    case 'C':
      puVar14 = (undefined4 *)FUN_001140f0();
      iVar3 = FUN_00103810(param_1);
      if (iVar3 < 0) {
        return 0;
      }
      if (**(char **)(param_1 + 0x18) != '_') {
        return 0;
      }
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      puVar5 = (undefined4 *)FUN_001140f0();
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 5;
      uVar8 = 0xb;
      break;
    case 'F':
      puVar5 = (undefined4 *)FUN_001140f0();
      puVar14 = (undefined4 *)0x0;
      uVar8 = 0xe;
      break;
    case 'H':
      puVar5 = (undefined4 *)FUN_00115ac0(param_1,0);
      puVar14 = (undefined4 *)0x0;
      uVar8 = 0x14;
      break;
    case 'I':
      puVar5 = (undefined4 *)FUN_001140f0();
      puVar14 = (undefined4 *)0x0;
      uVar8 = 0xc;
      break;
    case 'J':
      puVar5 = (undefined4 *)FUN_001140f0();
      puVar14 = (undefined4 *)0x0;
      uVar8 = 0x12;
      break;
    case 'S':
      puVar5 = (undefined4 *)FUN_001140f0();
      puVar14 = (undefined4 *)0x0;
      uVar8 = 0xd;
      break;
    case 'T':
      *(int *)(param_1 + 0x48) = iVar3 + 10;
      puVar5 = (undefined4 *)FUN_001140f0();
      puVar14 = (undefined4 *)0x0;
      uVar8 = 10;
      break;
    case 'V':
      *(int *)(param_1 + 0x48) = iVar3 + 0xf;
      puVar5 = (undefined4 *)FUN_001140f0();
      puVar14 = (undefined4 *)0x0;
      uVar8 = 9;
      break;
    case 'W':
      puVar5 = (undefined4 *)FUN_00115ac0(param_1,0);
      puVar14 = (undefined4 *)0x0;
      uVar8 = 0x15;
      break;
    case 'c':
      lVar9 = param_1;
      iVar3 = FUN_001038c0(param_1,0);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_001038c0();
      if (iVar3 == 0) {
        return 0;
      }
      if ((**(char **)(lVar9 + 0x18) == 'G') || (**(char **)(lVar9 + 0x18) == 'T')) {
        puVar5 = (undefined4 *)FUN_00115f90(param_1);
      }
      else {
        puVar5 = (undefined4 *)FUN_00113410();
      }
      puVar14 = (undefined4 *)0x0;
      uVar8 = 0x11;
      break;
    case 'h':
      lVar9 = param_1;
      iVar3 = FUN_001038c0(param_1,0x68);
      if (iVar3 == 0) {
        return 0;
      }
      if ((**(char **)(lVar9 + 0x18) == 'G') || (**(char **)(lVar9 + 0x18) == 'T')) {
        puVar5 = (undefined4 *)FUN_00115f90(param_1);
      }
      else {
        puVar5 = (undefined4 *)FUN_00113410();
      }
      puVar14 = (undefined4 *)0x0;
      uVar8 = 0xf;
      break;
    case 'v':
      lVar9 = param_1;
      iVar3 = FUN_001038c0(param_1,0x76);
      if (iVar3 == 0) {
        return 0;
      }
      if ((**(char **)(lVar9 + 0x18) == 'G') || (**(char **)(lVar9 + 0x18) == 'T')) {
        puVar5 = (undefined4 *)FUN_00115f90(param_1);
      }
      else {
        puVar5 = (undefined4 *)FUN_00113410();
      }
      puVar14 = (undefined4 *)0x0;
      uVar8 = 0x10;
    }
    goto LAB_00116249;
  }
  if (*pcVar2 != 'G') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar2 + 1;
  if (pcVar2[1] == '\0') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar2 + 2;
  cVar1 = pcVar2[1];
  if ('V' < cVar1) {
    if (cVar1 != 'r') {
      return 0;
    }
    lVar9 = param_1;
    iVar3 = FUN_00103810();
    if (iVar3 < 2) {
      return 0;
    }
    pcVar2 = *(char **)(lVar9 + 0x18);
    if (*pcVar2 == '\0') {
      return 0;
    }
    pcVar12 = pcVar2 + 1;
    *(char **)(lVar9 + 0x18) = pcVar12;
    if (*pcVar2 != '_') {
      return 0;
    }
    uVar13 = iVar3 - 1;
    uVar10 = (ulong)uVar13;
    if (pcVar2[1] == '\0') {
      return 0;
    }
    if (pcVar2[1] != '$') {
      puVar14 = (undefined4 *)0x0;
      goto LAB_00116112;
    }
    puVar14 = (undefined4 *)0x0;
    do {
      cVar1 = pcVar12[1];
      if (cVar1 == 'S') {
        uVar7 = 0x2f;
      }
      else if (cVar1 == '_') {
        uVar7 = 0x2e;
      }
      else {
        uVar7 = 0x24;
        if (cVar1 != '$') {
          return 0;
        }
      }
      iVar3 = *(int *)(param_1 + 0x28);
      pcVar12 = (char *)(*(long *)(param_1 + 0x18) + 2);
      if (*(int *)(param_1 + 0x2c) <= iVar3) {
        *(char **)(param_1 + 0x18) = pcVar12;
        return 0;
      }
      uVar10 = (ulong)((int)uVar10 - 2);
      puVar5 = (undefined4 *)((long)iVar3 * 0x20 + *(long *)(param_1 + 0x20));
      *(undefined8 *)(puVar5 + 1) = 0;
      *(int *)(param_1 + 0x28) = iVar3 + 1;
      *puVar5 = 0x42;
      puVar5[4] = uVar7;
      *(char **)(param_1 + 0x18) = pcVar12;
      while( true ) {
        if ((puVar14 != (undefined4 *)0x0) &&
           (puVar5 = (undefined4 *)FUN_001050d0(param_1,0x41,puVar14,puVar5),
           puVar5 == (undefined4 *)0x0)) {
          return 0;
        }
        uVar13 = (uint)uVar10;
        if ((int)uVar13 < 1) {
          puVar14 = (undefined4 *)0x0;
          uVar8 = 0x40;
          goto LAB_00116249;
        }
        if (*pcVar12 == '\0') {
          return 0;
        }
        puVar14 = puVar5;
        if (*pcVar12 == '$') break;
LAB_00116112:
        uVar10 = 0;
        uVar4 = uVar13 & 3;
        if (uVar4 == 0) goto LAB_00116180;
        if (uVar4 == 1) {
LAB_0011615f:
          iVar3 = (int)uVar10;
          uVar11 = uVar10;
          if ((pcVar12[uVar10] == '\0') || (pcVar12[uVar10] == '$')) goto LAB_00116560;
          for (uVar10 = uVar10 + 1; uVar10 != (long)(int)uVar13; uVar10 = uVar10 + 4) {
LAB_00116180:
            uVar11 = uVar10;
            if ((pcVar12[uVar10] == '\0') || (pcVar12[uVar10] == '$')) goto LAB_00116560;
            uVar11 = uVar10 + 1;
            if ((pcVar12[uVar11] == '\0') || (pcVar12[uVar11] == '$')) goto LAB_00116560;
            uVar11 = uVar10 + 2;
            if ((pcVar12[uVar11] == '\0') || (pcVar12[uVar11] == '$')) goto LAB_00116560;
            uVar11 = uVar10 + 3;
            iVar3 = (int)uVar11;
            if ((pcVar12[uVar10 + 3] == '\0') || (pcVar12[uVar10 + 3] == '$')) goto LAB_00116560;
          }
          uVar4 = iVar3 + 1;
          uVar6 = (ulong)uVar4;
          uVar11 = (ulong)(int)uVar4;
        }
        else {
          if (uVar4 == 2) {
LAB_00116146:
            uVar11 = uVar10;
            if ((pcVar12[uVar10] != '\0') && (pcVar12[uVar10] != '$')) {
              uVar10 = uVar10 + 1;
              goto LAB_0011615f;
            }
          }
          else {
            uVar11 = uVar10;
            if ((*pcVar12 != '\0') && (*pcVar12 != '$')) {
              uVar10 = 1;
              goto LAB_00116146;
            }
          }
LAB_00116560:
          uVar4 = (uint)uVar11;
          uVar6 = uVar11 & 0xffffffff;
        }
        uVar10 = (ulong)(uVar13 - uVar4);
        puVar5 = (undefined4 *)FUN_00105250(param_1,pcVar12,uVar6);
        pcVar12 = (char *)(*(long *)(param_1 + 0x18) + uVar11);
        *(char **)(param_1 + 0x18) = pcVar12;
        if (puVar5 == (undefined4 *)0x0) {
          return 0;
        }
      }
    } while( true );
  }
  if (cVar1 < 'A') {
    return 0;
  }
  switch(cVar1) {
  case 'A':
    if ((pcVar2[2] == 'G') || (pcVar2[2] == 'T')) {
      puVar5 = (undefined4 *)FUN_00115f90(param_1);
    }
    else {
      puVar5 = (undefined4 *)FUN_00113410(param_1,0);
    }
    puVar14 = (undefined4 *)0x0;
    uVar8 = 0x17;
    break;
  default:
    return 0;
  case 'I':
    local_20[0] = 0;
    iVar3 = FUN_00105380(param_1,local_20);
    if (iVar3 == 0) {
      return 0;
    }
    if (local_20[0] == 0) {
      return 0;
    }
    uVar8 = FUN_001050d0();
    return uVar8;
  case 'R':
    puVar5 = (undefined4 *)FUN_00115ac0(param_1,0);
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 < *(int *)(param_1 + 0x2c)) {
      puVar14 = (undefined4 *)((long)iVar3 * 0x20 + *(long *)(param_1 + 0x20));
      *(undefined8 *)(puVar14 + 1) = 0;
      *(int *)(param_1 + 0x28) = iVar3 + 1;
      *puVar14 = 0x43;
      iVar3 = FUN_00103810(param_1);
      *(long *)(puVar14 + 4) = (long)iVar3;
    }
    else {
      puVar14 = (undefined4 *)0x0;
    }
    uVar8 = 0x16;
    break;
  case 'T':
    if (pcVar2[2] == '\0') {
LAB_00116370:
      puVar5 = (undefined4 *)FUN_00113410(param_1,0);
    }
    else {
      *(char **)(param_1 + 0x18) = pcVar2 + 3;
      cVar1 = pcVar2[3];
      if (pcVar2[2] == 'n') {
        if ((cVar1 == 'G') || (cVar1 == 'T')) {
          puVar5 = (undefined4 *)FUN_00115f90(param_1);
        }
        else {
          puVar5 = (undefined4 *)FUN_00113410(param_1,0);
        }
        puVar14 = (undefined4 *)0x0;
        uVar8 = 0x4b;
        break;
      }
      if ((cVar1 != 'G') && (cVar1 != 'T')) goto LAB_00116370;
      puVar5 = (undefined4 *)FUN_00115f90(param_1);
    }
    puVar14 = (undefined4 *)0x0;
    uVar8 = 0x4a;
    break;
  case 'V':
    puVar5 = (undefined4 *)FUN_00115ac0(param_1,0);
    puVar14 = (undefined4 *)0x0;
    uVar8 = 0x13;
  }
LAB_00116249:
  uVar8 = FUN_001050d0(param_1,uVar8,puVar5,puVar14);
  return uVar8;
}


////>>0x00116620>>FUN_00116620>>////

undefined8 FUN_00116620(long param_1,char param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long local_30 [2];
  
  local_30[0] = 0;
  plVar4 = local_30;
  if (**(char **)(param_1 + 0x18) == param_2) {
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    uVar3 = FUN_001050d0(param_1,0x2e,0,0);
    return uVar3;
  }
  while( true ) {
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = 1;
    lVar2 = FUN_001137d0(param_1);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = FUN_001050d0(param_1,0x2e,lVar2,0);
    *plVar4 = lVar2;
    if (lVar2 == 0) break;
    plVar4 = (long *)(lVar2 + 0x18);
    if (**(char **)(param_1 + 0x18) == param_2) {
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      return local_30[0];
    }
  }
  return 0;
}


////>>0x001166e0>>FUN_001166e0>>////

byte * FUN_001166e0(byte *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  
  if ((param_1 != (byte *)0x0) && (bVar1 = *param_1, ((&DAT_0011fbc0)[(ulong)bVar1 * 2] & 4) != 0))
  {
    uVar2 = 0;
    do {
      if ((0xffffffffU - (long)((char)bVar1 + -0x30)) / 10 < uVar2) {
        return (byte *)0x0;
      }
      param_1 = param_1 + 1;
      uVar2 = (long)((char)bVar1 + -0x30) + uVar2 * 10;
      bVar1 = *param_1;
    } while (((&DAT_0011fbc0)[(ulong)bVar1 * 2] & 4) != 0);
    if (bVar1 != 0) {
      *param_2 = uVar2;
      return param_1;
    }
  }
  return (byte *)0x0;
}


////>>0x00116760>>FUN_00116760>>////

byte * FUN_00116760(byte *param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  
  if ((param_1 != (byte *)0x0) &&
     (bVar1 = *param_1, ((&DAT_0011fbc0)[(ulong)bVar1 * 2] & 0x88) != 0)) {
    uVar2 = 0;
    while( true ) {
      if ((byte)(bVar1 + 0x9f) < 0x1a) break;
      param_1 = param_1 + 1;
      uVar2 = uVar2 * 0x1a + (long)((char)bVar1 + -0x41);
      bVar1 = *param_1;
      if (((&DAT_0011fbc0)[(ulong)bVar1 * 2] & 0x88) == 0) {
        return (byte *)0x0;
      }
      if (0x9d89d89d89d89d7 < uVar2) {
        return (byte *)0x0;
      }
    }
    lVar3 = uVar2 * 0x1a + (long)((char)bVar1 + -0x61);
    if (0 < lVar3) {
      *param_2 = lVar3;
      return param_1 + 1;
    }
  }
  return (byte *)0x0;
}


////>>0x001167f0>>FUN_001167f0>>////

ushort FUN_001167f0(byte *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long local_18;
  
  bVar1 = *param_1;
  if (((&DAT_0011fbc0)[(ulong)bVar1 * 2] & 4) != 0) {
    return 1;
  }
  if (bVar1 == 0x5f) {
    if (param_1[1] == 0x5f) {
      return (ushort)((byte)(param_1[2] + 0xac) < 2);
    }
  }
  else if (((bVar1 == 0x51) && (lVar2 = FUN_00116760(param_1 + 1,&local_18), lVar2 != 0)) &&
          (local_18 <= (long)param_1 - *param_2)) {
    return *(ushort *)(&DAT_0011fbc0 + (ulong)param_1[-local_18] * 2) & 4;
  }
  return 0;
}


////>>0x00116890>>FUN_00116890>>////

long FUN_00116890(long *param_1)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar2 = param_1[4];
  uVar3 = param_1[1];
  if ((uVar2 < uVar3) && (*(char *)(*param_1 + uVar2) == '_')) {
    param_1[4] = uVar2 + 1;
    return 0;
  }
  lVar4 = 0;
  uVar6 = (int)uVar3 - (int)uVar2 & 3;
  uVar9 = uVar2;
  if (uVar6 == 0) goto joined_r0x00116c47;
  if (uVar3 <= uVar2) {
    iVar7 = *(int *)(param_1 + 5);
joined_r0x00116a45:
    if (iVar7 == 0) goto LAB_001168d3;
LAB_00116a4b:
    return lVar4 + 1;
  }
  bVar5 = *(byte *)(*param_1 + uVar2);
  uVar8 = uVar2;
  if (bVar5 != 0x5f) {
    if (*(int *)(param_1 + 5) != 0) goto LAB_00116a4b;
    if (bVar5 == 0) goto LAB_001168d3;
    iVar7 = (int)(char)bVar5;
    uVar9 = uVar2 + 1;
    uVar1 = *(ushort *)(&DAT_0011fbc0 + (ulong)bVar5 * 2);
    param_1[4] = uVar9;
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 8) == 0) {
        if ((uVar1 & 0x80) == 0) goto LAB_001168d3;
        lVar4 = (long)(iVar7 + -0x1d);
      }
      else {
        lVar4 = (long)(iVar7 + -0x57);
      }
    }
    else {
      lVar4 = (long)(iVar7 + -0x30);
    }
    if (uVar6 == 1) goto joined_r0x00116c47;
    if (uVar6 != 2) {
      bVar5 = *(byte *)(*param_1 + uVar9);
      uVar8 = uVar9;
      if (bVar5 == 0x5f) goto LAB_00116a5c;
      if (*(int *)(param_1 + 5) != 0) goto LAB_00116a4b;
      lVar4 = lVar4 * 0x3e;
      if (bVar5 == 0) goto LAB_001168d3;
      iVar7 = (int)(char)bVar5;
      uVar9 = uVar2 + 2;
      uVar1 = *(ushort *)(&DAT_0011fbc0 + (ulong)bVar5 * 2);
      param_1[4] = uVar9;
      if ((uVar1 & 4) == 0) {
        if ((uVar1 & 8) == 0) {
          if ((uVar1 & 0x80) == 0) goto LAB_001168d3;
          lVar4 = lVar4 + (iVar7 + -0x1d);
        }
        else {
          lVar4 = lVar4 + (iVar7 + -0x57);
        }
      }
      else {
        lVar4 = lVar4 + (iVar7 + -0x30);
      }
    }
    bVar5 = *(byte *)(*param_1 + uVar9);
    uVar8 = uVar9;
    if (bVar5 != 0x5f) {
      if (*(int *)(param_1 + 5) == 0) {
        uVar9 = uVar9 + 1;
        if (bVar5 != 0) {
          do {
            lVar4 = lVar4 * 0x3e;
            iVar7 = (int)(char)bVar5;
            param_1[4] = uVar9;
            uVar1 = *(ushort *)(&DAT_0011fbc0 + (ulong)bVar5 * 2);
            if ((uVar1 & 4) == 0) {
              if ((uVar1 & 8) == 0) {
                if ((uVar1 & 0x80) == 0) break;
                lVar4 = lVar4 + (iVar7 + -0x1d);
              }
              else {
                lVar4 = lVar4 + (iVar7 + -0x57);
              }
            }
            else {
              lVar4 = lVar4 + (iVar7 + -0x30);
            }
joined_r0x00116c47:
            if (uVar3 <= uVar9) {
              iVar7 = *(int *)(param_1 + 5);
              goto joined_r0x00116a45;
            }
            bVar5 = *(byte *)(*param_1 + uVar9);
            uVar8 = uVar9;
            if (bVar5 == 0x5f) goto LAB_00116a5c;
            if (*(int *)(param_1 + 5) != 0) goto LAB_00116a4b;
            lVar4 = lVar4 * 0x3e;
            if (bVar5 == 0) break;
            iVar7 = (int)(char)bVar5;
            uVar2 = uVar9 + 1;
            uVar1 = *(ushort *)(&DAT_0011fbc0 + (ulong)bVar5 * 2);
            param_1[4] = uVar2;
            if ((uVar1 & 4) == 0) {
              if ((uVar1 & 8) == 0) {
                if ((uVar1 & 0x80) == 0) break;
                lVar4 = lVar4 + (iVar7 + -0x1d);
              }
              else {
                lVar4 = lVar4 + (iVar7 + -0x57);
              }
            }
            else {
              lVar4 = lVar4 + (iVar7 + -0x30);
            }
            bVar5 = *(byte *)(*param_1 + uVar2);
            uVar8 = uVar2;
            if (bVar5 == 0x5f) goto LAB_00116a5c;
            if (*(int *)(param_1 + 5) != 0) goto LAB_00116a4b;
            lVar4 = lVar4 * 0x3e;
            if (bVar5 == 0) break;
            iVar7 = (int)(char)bVar5;
            uVar8 = uVar9 + 2;
            uVar1 = *(ushort *)(&DAT_0011fbc0 + (ulong)bVar5 * 2);
            param_1[4] = uVar8;
            if ((uVar1 & 4) == 0) {
              if ((uVar1 & 8) == 0) {
                if ((uVar1 & 0x80) == 0) break;
                lVar4 = lVar4 + (iVar7 + -0x1d);
              }
              else {
                lVar4 = lVar4 + (iVar7 + -0x57);
              }
            }
            else {
              lVar4 = lVar4 + (iVar7 + -0x30);
            }
            bVar5 = *(byte *)(*param_1 + 1 + uVar2);
            if (bVar5 == 0x5f) goto LAB_00116a5c;
            if (*(int *)(param_1 + 5) != 0) goto LAB_00116a4b;
            lVar4 = lVar4 * 0x3e;
            if (bVar5 == 0) break;
            iVar7 = (int)(char)bVar5;
            uVar8 = uVar9 + 3;
            uVar1 = *(ushort *)(&DAT_0011fbc0 + (ulong)bVar5 * 2);
            param_1[4] = uVar8;
            if ((uVar1 & 4) == 0) {
              if ((uVar1 & 8) == 0) {
                if ((uVar1 & 0x80) == 0) break;
                lVar4 = lVar4 + (iVar7 + -0x1d);
              }
              else {
                lVar4 = lVar4 + (iVar7 + -0x57);
              }
            }
            else {
              lVar4 = lVar4 + (iVar7 + -0x30);
            }
            bVar5 = *(byte *)(*param_1 + 2 + uVar2);
            if (bVar5 == 0x5f) goto LAB_00116a5c;
            if (*(int *)(param_1 + 5) != 0) goto LAB_00116a4b;
            if (bVar5 == 0) break;
            uVar9 = uVar9 + 4;
          } while( true );
        }
LAB_001168d3:
        *(undefined4 *)(param_1 + 5) = 1;
        return 0;
      }
      goto LAB_00116a4b;
    }
  }
LAB_00116a5c:
  param_1[4] = uVar8 + 1;
  return lVar4 + 1;
}


////>>0x00116c80>>FUN_00116c80>>////

long FUN_00116c80(long *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  *param_2 = 0;
  lVar3 = 0;
  do {
    uVar2 = param_1[4];
    if (uVar2 < (ulong)param_1[1]) {
      lVar4 = *param_1;
      if (*(char *)(lVar4 + uVar2) == '_') {
        param_1[4] = uVar2 + 1;
        return lVar3;
      }
      *param_2 = *param_2 << 4;
      uVar2 = param_1[4];
      if ((ulong)param_1[1] <= uVar2) goto LAB_00116cb8;
    }
    else {
      *param_2 = *param_2 << 4;
      uVar2 = param_1[4];
      if ((ulong)param_1[1] <= uVar2) {
LAB_00116cb8:
        *(undefined4 *)(param_1 + 5) = 1;
        return 0;
      }
      lVar4 = *param_1;
    }
    bVar1 = *(byte *)(lVar4 + uVar2);
    if (bVar1 == 0) goto LAB_00116cb8;
    param_1[4] = uVar2 + 1;
    if (((&DAT_0011fbc0)[(ulong)bVar1 * 2] & 4) == 0) {
      if (5 < (byte)(bVar1 + 0x9f)) goto LAB_00116cb8;
      uVar2 = (long)((char)bVar1 + -0x57) | *param_2;
    }
    else {
      uVar2 = (long)((char)bVar1 + -0x30) | *param_2;
    }
    lVar3 = lVar3 + 1;
    *param_2 = uVar2;
  } while( true );
}


////>>0x00116d50>>FUN_00116d50>>////

char * FUN_00116d50(undefined param_1)

{
  switch(param_1) {
  case 0x61:
    return "i8";
  case 0x62:
    return "bool";
  case 99:
    return "char";
  case 100:
    return "f64";
  case 0x65:
    return "str";
  case 0x66:
    return "f32";
  default:
    return (char *)0x0;
  case 0x68:
    return "u8";
  case 0x69:
    return "isize";
  case 0x6a:
    return "usize";
  case 0x6c:
    return "i32";
  case 0x6d:
    return "u32";
  case 0x6e:
    return "i128";
  case 0x6f:
    return "u128";
  case 0x70:
    return "_";
  case 0x73:
    return "i16";
  case 0x74:
    return "u16";
  case 0x75:
    return "()";
  case 0x76:
    return "...";
  case 0x78:
    return "i64";
  case 0x79:
    return "u64";
  case 0x7a:
    return "!";
  }
}


////>>0x00116ec0>>FUN_00116ec0>>////

void FUN_00116ec0(long param_1,undefined8 param_2)

{
  size_t sVar1;
  char acStack_38 [40];
  
  snprintf(acStack_38,0x15,"%lu",param_2);
  if (*(long *)(param_1 + 0x28) == 0) {
    sVar1 = strlen(acStack_38);
    (**(code **)(param_1 + 0x18))(acStack_38,sVar1,*(undefined8 *)(param_1 + 0x10));
  }
  return;
}


////>>0x00116f10>>FUN_00116f10>>////

void FUN_00116f10(long param_1,long param_2)

{
  ulong uVar1;
  char local_19;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    (**(code **)(param_1 + 0x18))(&DAT_0011fe04,1,*(undefined8 *)(param_1 + 0x10));
    if (param_2 == 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00116fcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x18))("_",1,*(undefined8 *)(param_1 + 0x10));
        return;
      }
    }
    else {
      uVar1 = *(long *)(param_1 + 0x40) - param_2;
      if (0x19 < uVar1) {
        if (*(long *)(param_1 + 0x28) == 0) {
          (**(code **)(param_1 + 0x18))("_",1,*(undefined8 *)(param_1 + 0x10));
        }
        goto LAB_00116f92;
      }
      local_19 = (char)uVar1 + 'a';
      if (*(long *)(param_1 + 0x28) == 0) {
        (**(code **)(param_1 + 0x18))(&local_19,1,*(undefined8 *)(param_1 + 0x10));
      }
    }
  }
  else if ((param_2 != 0) && (uVar1 = *(long *)(param_1 + 0x40) - param_2, 0x19 < uVar1)) {
LAB_00116f92:
    FUN_00116ec0(param_1,uVar1);
    return;
  }
  return;
}


////>>0x00116ff0>>FUN_00116ff0>>////

void FUN_00116ff0(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 5) != 0) {
    return;
  }
  uVar1 = param_1[4];
  if ((uVar1 < (ulong)param_1[1]) && (*(char *)(*param_1 + uVar1) == 'G')) {
    param_1[4] = uVar1 + 1;
    uVar1 = FUN_00116890();
    if (uVar1 != 0xffffffffffffffff) {
      if (param_1[5] == 0) {
        (*(code *)param_1[3])(&DAT_0011fe06,4,param_1[2]);
      }
      uVar2 = 0;
      uVar4 = (uint)uVar1 & 3;
      if ((uVar1 & 3) != 0) {
        param_1[8] = param_1[8] + 1;
        lVar3 = 1;
        FUN_00116f10(param_1,1);
        if (param_1[5] == 0) {
          (*(code *)param_1[3])(&DAT_0011e263,2,param_1[2]);
        }
        uVar2 = 1;
        if (uVar4 != 1) {
          if (uVar4 != 2) {
            param_1[8] = param_1[8] + 1;
            lVar3 = 2;
            FUN_00116f10(param_1,1);
            if (param_1[5] == 0) {
              (*(code *)param_1[3])(&DAT_0011e263,2,param_1[2]);
            }
          }
          param_1[8] = param_1[8] + 1;
          uVar2 = lVar3 + 1;
          FUN_00116f10(param_1,1);
          if (param_1[5] == 0) {
            (*(code *)param_1[3])(&DAT_0011e263,2,param_1[2]);
          }
        }
      }
      while( true ) {
        param_1[8] = param_1[8] + 1;
        FUN_00116f10(param_1,1);
        if (uVar2 == uVar1) break;
        if (param_1[5] == 0) {
          (*(code *)param_1[3])(&DAT_0011e263,2,param_1[2]);
        }
        param_1[8] = param_1[8] + 1;
        FUN_00116f10(param_1,1);
        if (param_1[5] == 0) {
          (*(code *)param_1[3])(&DAT_0011e263,2,param_1[2]);
        }
        param_1[8] = param_1[8] + 1;
        FUN_00116f10(param_1,1);
        if (param_1[5] == 0) {
          (*(code *)param_1[3])(&DAT_0011e263,2,param_1[2]);
        }
        param_1[8] = param_1[8] + 1;
        FUN_00116f10(param_1,1);
        if (param_1[5] == 0) {
          (*(code *)param_1[3])(&DAT_0011e263,2,param_1[2]);
        }
        uVar2 = uVar2 + 4;
      }
      if (param_1[5] == 0) {
                    /* WARNING: Could not recover jumptable at 0x001171ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_1[3])(&DAT_0011fe61,2,param_1[2]);
        return;
      }
    }
  }
  return;
}


////>>0x00117230>>FUN_00117230>>////

void FUN_00117230(long *param_1)

{
  ulong uVar1;
  undefined8 local_20 [2];
  
  uVar1 = FUN_00116c80(param_1,local_20);
  if (uVar1 < 0x11) {
    if (uVar1 != 0) {
      FUN_00116ec0(param_1,local_20[0]);
      return;
    }
    *(undefined4 *)(param_1 + 5) = 1;
  }
  else if (param_1[5] == 0) {
    (*(code *)param_1[3])(&DAT_0011fe0b,2,param_1[2]);
    if (param_1[5] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00117288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[3])((param_1[4] - uVar1) + *param_1,uVar1,param_1[2]);
      return;
    }
  }
  return;
}


////>>0x001172c0>>FUN_001172c0>>////

void FUN_001172c0(long param_1,undefined8 param_2)

{
  size_t sVar1;
  char acStack_38 [40];
  
  snprintf(acStack_38,0x11,"%lx",param_2);
  if (*(long *)(param_1 + 0x28) == 0) {
    sVar1 = strlen(acStack_38);
    (**(code **)(param_1 + 0x18))(acStack_38,sVar1,*(undefined8 *)(param_1 + 0x10));
  }
  return;
}


////>>0x00117310>>FUN_00117310>>////

void FUN_00117310(long *param_1)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  char *__s;
  size_t sVar7;
  long lVar8;
  ulong uVar9;
  undefined local_31;
  long local_30 [2];
  
  uVar5 = *(uint *)(param_1 + 7);
  if (uVar5 == 0xffffffff) {
LAB_00117332:
    uVar3 = param_1[4];
    if (uVar3 < (ulong)param_1[1]) {
      cVar2 = *(char *)(*param_1 + uVar3);
      if (cVar2 == 'B') {
        param_1[4] = uVar3 + 1;
        lVar8 = FUN_00116890(param_1);
        if (*(int *)((long)param_1 + 0x2c) == 0) {
          lVar4 = param_1[4];
          param_1[4] = lVar8;
          if (*(int *)(param_1 + 5) == 0) {
            FUN_00117310(param_1);
          }
          param_1[4] = lVar4;
          uVar5 = *(uint *)(param_1 + 7);
          goto LAB_00117346;
        }
LAB_00117400:
        uVar5 = *(uint *)(param_1 + 7);
        goto LAB_00117346;
      }
      if (cVar2 != '\0') {
        uVar1 = uVar3 + 1;
        param_1[4] = uVar1;
        if (cVar2 < 'z') {
          if ('g' < cVar2) {
            uVar9 = 1L << (cVar2 + 0x98U & 0x3f);
            if ((uVar9 & 0x210a5) == 0) {
              if ((uVar9 & 0x10852) == 0) {
                if (cVar2 == 'p') {
                  if (param_1[5] == 0) {
                    (*(code *)param_1[3])("_",1,param_1[2]);
                    uVar5 = *(uint *)(param_1 + 7);
                    goto LAB_00117346;
                  }
                  goto LAB_00117400;
                }
                goto LAB_001173d8;
              }
LAB_00117410:
              if (((uVar1 < (ulong)param_1[1]) && (*(char *)(*param_1 + uVar1) == 'n')) &&
                 (param_1[4] = uVar3 + 2, param_1[5] == 0)) {
                (*(code *)param_1[3])(&DAT_0011e562,1,param_1[2]);
              }
            }
            if (*(int *)(param_1 + 5) == 0) {
              FUN_00117230(param_1);
              iVar6 = *(int *)(param_1 + 5);
              goto LAB_0011742b;
            }
            goto LAB_00117400;
          }
          if (cVar2 == 'b') {
            lVar8 = FUN_00116c80(param_1,local_30);
            if (lVar8 == 1) {
              if (local_30[0] == 0) {
                if (param_1[5] == 0) {
                  (*(code *)param_1[3])("false",5,param_1[2]);
                  iVar6 = *(int *)(param_1 + 5);
                }
                else {
LAB_0011751c:
                  iVar6 = *(int *)(param_1 + 5);
                }
              }
              else {
                if (local_30[0] != 1) goto LAB_00117528;
                if (param_1[5] != 0) goto LAB_0011751c;
                (*(code *)param_1[3])(&DAT_0011e288,4,param_1[2]);
                iVar6 = *(int *)(param_1 + 5);
              }
LAB_0011742b:
              if (((iVar6 == 0) && (*(int *)(param_1 + 6) != 0)) && (param_1[5] == 0)) {
                (*(code *)param_1[3])(&DAT_0011e273,2,param_1[2]);
                __s = (char *)FUN_00116d50((int)cVar2);
                sVar7 = strlen(__s);
                if (param_1[5] == 0) {
                  (*(code *)param_1[3])(__s,sVar7,param_1[2]);
                  uVar5 = *(uint *)(param_1 + 7);
                  goto LAB_00117346;
                }
              }
              goto LAB_00117400;
            }
          }
          else {
            if (cVar2 != 'c') {
              if (cVar2 == 'a') goto LAB_00117410;
              goto LAB_001173d8;
            }
            lVar8 = FUN_00116c80(param_1,local_30);
            if (lVar8 - 1U < 8) {
              if (param_1[5] == 0) {
                (*(code *)param_1[3])(&DAT_0011fe04,1,param_1[2]);
                lVar8 = param_1[5];
                if (local_30[0] == 9) {
                  if (lVar8 == 0) {
                    (*(code *)param_1[3])(&DAT_0011fe12,2,param_1[2]);
                    lVar8 = param_1[5];
joined_r0x001176b9:
                    if (lVar8 == 0) {
                      (*(code *)param_1[3])(&DAT_0011fe04,1,param_1[2]);
                    }
                  }
                }
                else if (local_30[0] == 0xd) {
                  if (lVar8 == 0) {
                    (*(code *)param_1[3])(&DAT_0011fe15,2,param_1[2]);
                    lVar8 = param_1[5];
                    goto joined_r0x001176b9;
                  }
                }
                else if (local_30[0] == 10) {
                  if (lVar8 == 0) {
                    (*(code *)param_1[3])(&DAT_0011fe18,2,param_1[2]);
                    lVar8 = param_1[5];
                    goto joined_r0x001176b9;
                  }
                }
                else {
                  if (0x5c < local_30[0] - 0x21U) {
                    if (lVar8 == 0) {
                      (*(code *)param_1[3])(&DAT_0011fe1b,3,param_1[2]);
                    }
                    goto LAB_001174d8;
                  }
                  local_31 = (undefined)local_30[0];
                  if (lVar8 == 0) {
                    (*(code *)param_1[3])(&local_31,1,param_1[2]);
                    lVar8 = param_1[5];
                    goto joined_r0x001176b9;
                  }
                }
              }
              else if (((local_30[0] != 9) && (local_30[0] != 0xd)) &&
                      ((local_30[0] != 10 && (0x5c < local_30[0] - 0x21U)))) {
LAB_001174d8:
                FUN_001172c0(param_1,local_30[0]);
                if (param_1[5] == 0) {
                  (*(code *)param_1[3])(&DAT_0011fe1f,1,param_1[2]);
                  lVar8 = param_1[5];
                  goto joined_r0x001176b9;
                }
              }
              goto LAB_0011751c;
            }
          }
LAB_00117528:
          *(undefined4 *)(param_1 + 5) = 1;
          goto LAB_00117400;
        }
      }
LAB_001173d8:
      uVar5 = *(uint *)(param_1 + 7);
    }
  }
  else {
    uVar5 = uVar5 + 1;
    *(uint *)(param_1 + 7) = uVar5;
    if (uVar5 < 0x401) goto LAB_00117332;
  }
  *(undefined4 *)(param_1 + 5) = 1;
LAB_00117346:
  if (uVar5 != 0xffffffff) {
    *(uint *)(param_1 + 7) = uVar5 - 1;
  }
  return;
}


////>>0x00117730>>FUN_00117730>>////

long * FUN_00117730(long *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  iVar3 = *(int *)((long)param_2 + 0x34);
  uVar7 = param_2[4];
  uVar6 = param_2[1];
  if (iVar3 == -1) {
    bVar4 = false;
LAB_001177e3:
    if (uVar6 <= uVar7) goto LAB_00117753;
    lVar8 = *param_2;
    bVar2 = *(byte *)(lVar8 + uVar7);
  }
  else {
    if (uVar6 <= uVar7) goto LAB_00117753;
    lVar8 = *param_2;
    bVar4 = false;
    bVar2 = *(byte *)(lVar8 + uVar7);
    if (bVar2 == 0x75) {
      uVar7 = uVar7 + 1;
      bVar4 = true;
      param_2[4] = uVar7;
      goto LAB_001177e3;
    }
  }
  if (bVar2 == 0) {
LAB_00117753:
    *(undefined4 *)(param_2 + 5) = 1;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return param_1;
  }
  uVar7 = uVar7 + 1;
  param_2[4] = uVar7;
  if (((&DAT_0011fbc0)[(ulong)bVar2 * 2] & 4) == 0) goto LAB_00117753;
  uVar5 = (ulong)((char)bVar2 + -0x30);
  if (bVar2 == 0x30) {
    if ((iVar3 != -1) && (uVar7 < uVar6)) {
LAB_001177d0:
      if (*(char *)(lVar8 + uVar7) == '_') {
        uVar7 = uVar7 + 1;
      }
    }
  }
  else {
    while (uVar7 < uVar6) {
      bVar2 = *(byte *)(lVar8 + uVar7);
      if (((&DAT_0011fbc0)[(ulong)bVar2 * 2] & 4) == 0) {
        if (iVar3 != -1) goto LAB_001177d0;
        break;
      }
      if (bVar2 == 0) {
        *(undefined4 *)(param_2 + 5) = 1;
        uVar5 = uVar5 * 10 - 0x30;
      }
      else {
        uVar7 = uVar7 + 1;
        param_2[4] = uVar7;
        uVar5 = uVar5 * 10 + (long)((char)bVar2 + -0x30);
      }
    }
  }
  param_2[4] = uVar7 + uVar5;
  if ((uVar6 < uVar7 + uVar5) || (CARRY8(uVar7,uVar5) != false)) goto LAB_00117753;
  lVar8 = uVar7 + lVar8;
  if (bVar4) {
    if (uVar5 == 0) {
      uVar7 = 0;
    }
    else {
      uVar11 = (uint)uVar5 & 7;
      lVar10 = 0;
      uVar6 = uVar5;
      if ((uVar5 & 7) == 0) {
LAB_0011790b:
        while (uVar1 = uVar6 - 1, uVar7 = uVar1, lVar9 = lVar10, *(char *)(lVar8 + uVar1) != '_') {
          uVar7 = uVar6 - 2;
          lVar9 = lVar10 + 1;
          if (*(char *)(lVar8 + uVar7) == '_') break;
          uVar7 = uVar6 - 3;
          lVar9 = lVar10 + 2;
          if (*(char *)(lVar8 + -2 + uVar1) == '_') break;
          uVar7 = uVar6 - 4;
          lVar9 = lVar10 + 3;
          if (*(char *)(lVar8 + -3 + uVar1) == '_') break;
          uVar7 = uVar6 - 5;
          lVar9 = lVar10 + 4;
          if (*(char *)(lVar8 + -4 + uVar1) == '_') break;
          uVar7 = uVar6 - 6;
          lVar9 = lVar10 + 5;
          if (*(char *)(lVar8 + -5 + uVar1) == '_') break;
          uVar7 = uVar6 - 7;
          lVar9 = lVar10 + 6;
          if (*(char *)(lVar8 + -6 + uVar1) == '_') break;
          uVar7 = uVar6 - 8;
          lVar9 = lVar10 + 7;
          if ((*(char *)(lVar8 + -7 + uVar1) == '_') ||
             (lVar10 = lVar10 + 8, uVar6 = uVar7, lVar9 = lVar10, uVar7 == 0)) break;
        }
      }
      else {
        lVar9 = 0;
        uVar7 = uVar5;
        if (uVar11 == 1) {
LAB_001178f0:
          uVar7 = uVar7 - 1;
          if ((*(char *)(lVar8 + uVar7) != '_') &&
             (lVar10 = lVar9 + 1, uVar6 = uVar7, lVar9 = lVar10, uVar7 != 0)) goto LAB_0011790b;
        }
        else {
          lVar9 = 0;
          if (uVar11 == 2) {
LAB_001178de:
            uVar7 = uVar7 - 1;
            if (*(char *)(lVar8 + uVar7) != '_') {
              lVar9 = lVar9 + 1;
              goto LAB_001178f0;
            }
          }
          else {
            lVar9 = 0;
            if (uVar11 == 3) {
LAB_001178cc:
              uVar7 = uVar7 - 1;
              if (*(char *)(lVar8 + uVar7) != '_') {
                lVar9 = lVar9 + 1;
                goto LAB_001178de;
              }
            }
            else {
              lVar9 = 0;
              if (uVar11 == 4) {
LAB_001178ba:
                uVar7 = uVar7 - 1;
                if (*(char *)(lVar8 + uVar7) != '_') {
                  lVar9 = lVar9 + 1;
                  goto LAB_001178cc;
                }
              }
              else {
                lVar9 = 0;
                if (uVar11 == 5) {
LAB_001178a8:
                  uVar7 = uVar7 - 1;
                  if (*(char *)(lVar8 + uVar7) != '_') {
                    lVar9 = lVar9 + 1;
                    goto LAB_001178ba;
                  }
                }
                else {
                  lVar9 = 0;
                  if (uVar11 != 6) {
                    uVar7 = uVar5 - 1;
                    if (*(char *)(lVar8 + uVar7) == '_') goto LAB_00117a40;
                    lVar9 = 1;
                  }
                  uVar7 = uVar7 - 1;
                  if (*(char *)(lVar8 + uVar7) != '_') {
                    lVar9 = lVar9 + 1;
                    goto LAB_001178a8;
                  }
                }
              }
            }
          }
        }
      }
      if (lVar9 != 0) {
        lVar10 = (uVar5 - lVar9) + lVar8;
        uVar5 = uVar7;
        goto LAB_001179b5;
      }
    }
LAB_00117a40:
    uVar5 = uVar7;
    *(undefined4 *)(param_2 + 5) = 1;
    lVar10 = 0;
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    lVar10 = 0;
LAB_001179b5:
    if (uVar5 == 0) {
      lVar8 = 0;
    }
  }
  param_1[1] = uVar5;
  *param_1 = lVar8;
  param_1[2] = lVar10;
  param_1[3] = lVar9;
  return param_1;
}


////>>0x00117a70>>FUN_00117a70>>////

void FUN_00117a70(long param_1)

{
  undefined2 *puVar1;
  bool bVar2;
  char *pcVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined2 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined2 *puVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  char *param_7;
  ulong param_8;
  long param_9;
  ulong param_10;
  ulong local_80;
  ulong local_78;
  size_t local_70;
  byte local_39 [9];
  
  if (*(long *)(param_1 + 0x28) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x34) != -1) {
    iVar6 = 0x3c;
    uVar18 = 4;
    if (param_9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00118284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x18))(param_7,param_8,*(undefined8 *)(param_1 + 0x10));
      return;
    }
    while (((((((local_78 = uVar18, uVar18 < param_8 && (local_78 = uVar18 * 2, local_78 < param_8))
               && (local_78 = uVar18 * 4, local_78 < param_8)) &&
              ((local_78 = uVar18 * 8, local_78 < param_8 &&
               (local_78 = uVar18 * 0x10, local_78 < param_8)))) &&
             ((local_78 = uVar18 * 0x20, local_78 < param_8 &&
              ((local_78 = uVar18 * 0x40, local_78 < param_8 &&
               (local_78 = uVar18 * 0x80, local_78 < param_8)))))) &&
            (local_78 = uVar18 * 0x100, local_78 < param_8)) &&
           (local_78 = uVar18 * 0x200, local_78 < param_8))) {
      uVar18 = uVar18 * 0x400;
      iVar6 = iVar6 + -10;
      if (iVar6 == 0) {
LAB_00117b4d:
        *(undefined4 *)(param_1 + 0x28) = 1;
        return;
      }
    }
    local_70 = local_78 * 4;
    puVar7 = (undefined2 *)malloc(local_70);
    if (puVar7 == (undefined2 *)0x0) goto LAB_00117b4d;
    if (param_8 == 0) {
      if (param_10 == 0) goto LAB_0011839d;
      goto LAB_00117ea3;
    }
    uVar18 = 0;
    uVar13 = (uint)param_8 & 7;
    if ((param_8 & 7) == 0) goto LAB_00117dd1;
    if (uVar13 != 1) {
      if (uVar13 != 2) {
        if (uVar13 != 3) {
          if (uVar13 != 4) {
            if (uVar13 != 5) {
              if (uVar13 != 6) {
                cVar4 = *param_7;
                *puVar7 = 0;
                *(undefined *)(puVar7 + 1) = 0;
                *(char *)((long)puVar7 + 3) = cVar4;
              }
              uVar18 = (ulong)(uVar13 != 6);
              cVar4 = param_7[uVar18];
              puVar7[uVar18 * 2] = 0;
              *(undefined *)(puVar7 + uVar18 * 2 + 1) = 0;
              *(char *)((long)puVar7 + uVar18 * 4 + 3) = cVar4;
              uVar18 = uVar18 + 1;
            }
            cVar4 = param_7[uVar18];
            puVar7[uVar18 * 2] = 0;
            *(undefined *)(puVar7 + uVar18 * 2 + 1) = 0;
            *(char *)((long)puVar7 + uVar18 * 4 + 3) = cVar4;
            uVar18 = uVar18 + 1;
          }
          cVar4 = param_7[uVar18];
          puVar7[uVar18 * 2] = 0;
          *(undefined *)(puVar7 + uVar18 * 2 + 1) = 0;
          *(char *)((long)puVar7 + uVar18 * 4 + 3) = cVar4;
          uVar18 = uVar18 + 1;
        }
        cVar4 = param_7[uVar18];
        puVar7[uVar18 * 2] = 0;
        *(undefined *)(puVar7 + uVar18 * 2 + 1) = 0;
        *(char *)((long)puVar7 + uVar18 * 4 + 3) = cVar4;
        uVar18 = uVar18 + 1;
      }
      cVar4 = param_7[uVar18];
      puVar7[uVar18 * 2] = 0;
      *(undefined *)(puVar7 + uVar18 * 2 + 1) = 0;
      *(char *)((long)puVar7 + uVar18 * 4 + 3) = cVar4;
      uVar18 = uVar18 + 1;
    }
    cVar4 = param_7[uVar18];
    puVar7[uVar18 * 2] = 0;
    *(undefined *)(puVar7 + uVar18 * 2 + 1) = 0;
    *(char *)((long)puVar7 + uVar18 * 4 + 3) = cVar4;
    for (uVar18 = uVar18 + 1; param_8 != uVar18; uVar18 = uVar18 + 8) {
LAB_00117dd1:
      cVar4 = param_7[uVar18];
      lVar16 = uVar18 + 1;
      puVar7[uVar18 * 2] = 0;
      *(undefined *)(puVar7 + uVar18 * 2 + 1) = 0;
      *(char *)((long)puVar7 + uVar18 * 4 + 3) = cVar4;
      cVar4 = param_7[uVar18 + 1];
      lVar8 = uVar18 + 2;
      puVar7[lVar16 * 2] = 0;
      *(char *)((long)puVar7 + lVar16 * 4 + 3) = cVar4;
      cVar4 = param_7[lVar8];
      *(undefined *)(puVar7 + lVar16 * 2 + 1) = 0;
      *(char *)((long)puVar7 + lVar8 * 4 + 3) = cVar4;
      cVar4 = param_7[uVar18 + 3];
      puVar7[lVar8 * 2] = 0;
      *(undefined *)(puVar7 + lVar8 * 2 + 1) = 0;
      lVar16 = uVar18 + 3;
      *(char *)((long)puVar7 + lVar16 * 4 + 3) = cVar4;
      cVar4 = param_7[uVar18 + 4];
      puVar7[lVar16 * 2] = 0;
      *(undefined *)(puVar7 + lVar16 * 2 + 1) = 0;
      lVar16 = uVar18 + 4;
      *(char *)((long)puVar7 + lVar16 * 4 + 3) = cVar4;
      cVar4 = param_7[uVar18 + 5];
      puVar7[lVar16 * 2] = 0;
      *(undefined *)(puVar7 + lVar16 * 2 + 1) = 0;
      lVar16 = uVar18 + 5;
      *(char *)((long)puVar7 + lVar16 * 4 + 3) = cVar4;
      cVar4 = param_7[uVar18 + 6];
      puVar7[lVar16 * 2] = 0;
      *(undefined *)(puVar7 + lVar16 * 2 + 1) = 0;
      lVar16 = uVar18 + 6;
      *(char *)((long)puVar7 + lVar16 * 4 + 3) = cVar4;
      cVar4 = param_7[uVar18 + 7];
      puVar7[lVar16 * 2] = 0;
      *(undefined *)(puVar7 + lVar16 * 2 + 1) = 0;
      lVar16 = uVar18 + 7;
      puVar7[lVar16 * 2] = 0;
      *(undefined *)(puVar7 + lVar16 * 2 + 1) = 0;
      *(char *)((long)puVar7 + lVar16 * 4 + 3) = cVar4;
    }
    if (param_10 == 0) {
      param_10 = param_8 * 4;
LAB_00118441:
      puVar1 = (undefined2 *)(param_10 + (long)puVar7);
      param_10 = 0;
      uVar13 = (int)puVar1 - (int)puVar7 & 7;
      puVar10 = puVar7;
      if (uVar13 != 0) {
        if (uVar13 != 1) {
          if (uVar13 != 2) {
            if (uVar13 != 3) {
              if (uVar13 != 4) {
                if (uVar13 != 5) {
                  if (uVar13 != 6) {
                    param_10 = (ulong)(*(char *)puVar7 != '\0');
                    puVar10 = (undefined2 *)((long)puVar7 + 1);
                  }
                  if (*(char *)puVar10 != '\0') {
                    *(char *)((long)puVar7 + param_10) = *(char *)puVar10;
                    param_10 = param_10 + 1;
                  }
                  puVar10 = (undefined2 *)((long)puVar10 + 1);
                }
                if (*(char *)puVar10 != '\0') {
                  *(char *)((long)puVar7 + param_10) = *(char *)puVar10;
                  param_10 = param_10 + 1;
                }
                puVar10 = (undefined2 *)((long)puVar10 + 1);
              }
              if (*(char *)puVar10 != '\0') {
                *(char *)((long)puVar7 + param_10) = *(char *)puVar10;
                param_10 = param_10 + 1;
              }
              puVar10 = (undefined2 *)((long)puVar10 + 1);
            }
            if (*(char *)puVar10 != '\0') {
              *(char *)((long)puVar7 + param_10) = *(char *)puVar10;
              param_10 = param_10 + 1;
            }
            puVar10 = (undefined2 *)((long)puVar10 + 1);
          }
          if (*(char *)puVar10 != '\0') {
            *(char *)((long)puVar7 + param_10) = *(char *)puVar10;
            param_10 = param_10 + 1;
          }
          puVar10 = (undefined2 *)((long)puVar10 + 1);
        }
        if (*(char *)puVar10 != '\0') {
          *(char *)((long)puVar7 + param_10) = *(char *)puVar10;
          param_10 = param_10 + 1;
        }
        puVar10 = (undefined2 *)((long)puVar10 + 1);
        goto joined_r0x00118507;
      }
      do {
        if (*(char *)puVar10 != '\0') {
          *(char *)((long)puVar7 + param_10) = *(char *)puVar10;
          param_10 = param_10 + 1;
        }
        if (*(char *)((long)puVar10 + 1) != '\0') {
          *(char *)((long)puVar7 + param_10) = *(char *)((long)puVar10 + 1);
          param_10 = param_10 + 1;
        }
        if (*(char *)(puVar10 + 1) != '\0') {
          *(char *)((long)puVar7 + param_10) = *(char *)(puVar10 + 1);
          param_10 = param_10 + 1;
        }
        if (*(char *)((long)puVar10 + 3) != '\0') {
          *(char *)((long)puVar7 + param_10) = *(char *)((long)puVar10 + 3);
          param_10 = param_10 + 1;
        }
        if (*(char *)(puVar10 + 2) != '\0') {
          *(char *)((long)puVar7 + param_10) = *(char *)(puVar10 + 2);
          param_10 = param_10 + 1;
        }
        if (*(char *)((long)puVar10 + 5) != '\0') {
          *(char *)((long)puVar7 + param_10) = *(char *)((long)puVar10 + 5);
          param_10 = param_10 + 1;
        }
        if (*(char *)(puVar10 + 3) != '\0') {
          *(char *)((long)puVar7 + param_10) = *(char *)(puVar10 + 3);
          param_10 = param_10 + 1;
        }
        if (*(char *)((long)puVar10 + 7) != '\0') {
          *(char *)((long)puVar7 + param_10) = *(char *)((long)puVar10 + 7);
          param_10 = param_10 + 1;
        }
        puVar10 = puVar10 + 4;
joined_r0x00118507:
      } while (puVar10 != puVar1);
LAB_0011839d:
      (**(code **)(param_1 + 0x18))(puVar7,param_10,*(undefined8 *)(param_1 + 0x10));
      puVar10 = puVar7;
LAB_00117f80:
      free(puVar10);
      return;
    }
LAB_00117ea3:
    lVar16 = 0;
    uVar18 = 0x48;
    uVar15 = 0;
    local_80 = 700;
    uVar13 = 0x80;
    puVar10 = puVar7;
    do {
      lVar8 = 1;
      uVar19 = 0;
      uVar9 = -uVar18;
      do {
        uVar9 = uVar9 + 0x24;
        if (CARRY8(uVar18,uVar9)) {
          if (param_10 <= uVar15) goto LAB_00117f80;
          uVar17 = 1;
        }
        else {
          uVar17 = 0x1a;
          if (uVar9 < 0x1b) {
            uVar17 = uVar9;
          }
          if (uVar17 == 0) {
            uVar17 = 1;
          }
          if (param_10 <= uVar15) goto LAB_00117f80;
        }
        uVar15 = uVar15 + 1;
        bVar5 = *(byte *)(param_9 + -1 + uVar15);
        if ((*(ushort *)(&DAT_0011fbc0 + (ulong)bVar5 * 2) & 8) == 0) {
          if ((*(ushort *)(&DAT_0011fbc0 + (ulong)bVar5 * 2) & 4) == 0) goto LAB_00117f75;
          uVar11 = bVar5 - 0x16;
        }
        else {
          uVar11 = bVar5 - 0x61;
        }
        uVar19 = uVar19 + (ulong)(uVar11 & 0xff) * lVar8;
        lVar8 = lVar8 * (0x24 - uVar17);
      } while (uVar17 <= (uVar11 & 0xff));
      uVar9 = param_8 + 1;
      uVar18 = (uVar19 + lVar16) % uVar9;
      uVar13 = uVar13 + (int)((uVar19 + lVar16) / uVar9);
      if (local_78 < uVar9) {
        uVar17 = local_78 * 2;
        if ((uVar9 <= uVar17) && (uVar17 >> 0x3e == 0)) {
          local_70 = local_78 << 3;
          local_78 = uVar17;
          goto LAB_0011810b;
        }
LAB_00117f75:
        *(undefined4 *)(param_1 + 0x28) = 1;
        goto LAB_00117f80;
      }
LAB_0011810b:
      puVar7 = (undefined2 *)realloc(puVar10,local_70);
      if (puVar7 == (undefined2 *)0x0) goto LAB_00117f75;
      puVar10 = puVar7 + uVar18 * 2;
      memmove(puVar10 + 2,puVar10,(param_8 - uVar18) * 4);
      if (uVar13 < 0x10000) {
        *(undefined *)puVar10 = 0;
        if (0x7ff < uVar13) {
          bVar5 = 0xe0;
          goto LAB_001181a7;
        }
        bVar5 = 0;
        bVar12 = 0xc0;
      }
      else {
        bVar5 = 0x80;
        *(byte *)puVar10 = (byte)(uVar13 >> 0x12) | 0xf0;
LAB_001181a7:
        bVar5 = (byte)(uVar13 >> 0xc) & 0x3f | bVar5;
        bVar12 = 0x80;
      }
      *(byte *)((long)puVar10 + 1) = bVar5;
      *(byte *)(puVar10 + 1) = (byte)(uVar13 >> 6) & 0x3f | bVar12;
      *(byte *)((long)puVar10 + 3) = (byte)uVar13 & 0x3f | 0x80;
      if (param_10 == uVar15) break;
      lVar8 = 0;
      lVar16 = uVar18 + 1;
      uVar18 = (uVar19 / local_80) / uVar9 + uVar19 / local_80;
      uVar19 = uVar18;
      if (0x1c7 < uVar18) {
        do {
          lVar8 = lVar8 + 0x24;
          uVar18 = uVar19 / 0x23;
          bVar2 = 0x3e57 < uVar19;
          uVar19 = uVar18;
        } while (bVar2);
      }
      local_80 = 2;
      uVar18 = (uVar18 * 0x24) / (uVar18 + 0x26) + lVar8;
      param_8 = uVar9;
      puVar10 = puVar7;
    } while (uVar15 < param_10);
    param_10 = uVar9 * 4;
    if (param_10 != 0) goto LAB_00118441;
    goto LAB_0011839d;
  }
  if (param_8 < 2) {
    if (param_8 == 0) {
      return;
    }
    cVar4 = *param_7;
    param_8 = 1;
  }
  else {
    cVar4 = *param_7;
    if ((cVar4 == '_') && (param_7[1] == '$')) {
      param_7 = param_7 + 1;
      param_8 = param_8 - 1;
      cVar4 = '$';
    }
  }
  lVar16 = 0;
  do {
    if (cVar4 == '$') {
      if (param_8 < 3) goto LAB_001182a0;
      cVar4 = param_7[1];
      if (cVar4 == 'C') {
        lVar8 = 2;
        lVar20 = 1;
        local_39[0] = 0x2c;
      }
      else {
        if (param_8 == 3) {
          param_8 = 3;
          goto LAB_001182a0;
        }
        if (cVar4 == 'S') {
          if (param_7[2] != 'P') goto LAB_001182a0;
          lVar8 = 3;
          lVar20 = 2;
          local_39[0] = 0x40;
        }
        else if (cVar4 == 'B') {
          if (param_7[2] != 'P') goto LAB_001182a0;
          lVar8 = 3;
          lVar20 = 2;
          local_39[0] = 0x2a;
        }
        else if (cVar4 == 'R') {
          if (param_7[2] == 'F') {
            lVar8 = 3;
            lVar20 = 2;
            local_39[0] = 0x26;
          }
          else {
            if (param_7[2] != 'P') goto LAB_001182a0;
            lVar8 = 3;
            lVar20 = 2;
            local_39[0] = 0x29;
          }
        }
        else if (cVar4 == 'L') {
          if (param_7[2] == 'T') {
            lVar8 = 3;
            lVar20 = 2;
            local_39[0] = 0x3c;
          }
          else {
            if (param_7[2] != 'P') goto LAB_001182a0;
            lVar8 = 3;
            lVar20 = 2;
            local_39[0] = 0x28;
          }
        }
        else if (cVar4 == 'G') {
          if (param_7[2] != 'T') goto LAB_001182a0;
          lVar8 = 3;
          lVar20 = 2;
          local_39[0] = 0x3e;
        }
        else {
          if (cVar4 != 'u') goto LAB_001182a0;
          if (param_8 == 4) {
            param_8 = 4;
            goto LAB_001182a0;
          }
          cVar4 = param_7[2];
          if ((byte)(cVar4 - 0x30U) < 10) {
            iVar6 = cVar4 + -0x30;
          }
          else if ((5 < (byte)(cVar4 + 0x9fU)) || (iVar6 = cVar4 + -0x57, iVar6 < 0))
          goto LAB_001182a0;
          cVar4 = param_7[3];
          if ((byte)(cVar4 - 0x30U) < 10) {
            iVar14 = cVar4 + -0x30;
          }
          else if ((5 < (byte)(cVar4 + 0x9fU)) || (iVar14 = cVar4 + -0x57, iVar14 < 0))
          goto LAB_001182a0;
          if ((7 < iVar6) ||
             (local_39[0] = (byte)(iVar6 << 4) | (byte)iVar14, (char)local_39[0] < ' '))
          goto LAB_001182a0;
          lVar8 = 4;
          lVar20 = 3;
        }
      }
      if (param_7[lVar8] != '$') {
LAB_001182a0:
        local_39[0] = 0;
        if (lVar16 == 0) {
          (**(code **)(param_1 + 0x18))(param_7,param_8,*(undefined8 *)(param_1 + 0x10));
          return;
        }
        return;
      }
      if (lVar16 == 0) {
        (**(code **)(param_1 + 0x18))(local_39,1,*(undefined8 *)(param_1 + 0x10));
      }
      param_8 = param_8 - (lVar20 + 2);
      pcVar3 = param_7 + lVar20 + 2;
joined_r0x00118027:
      param_7 = pcVar3;
      if (param_8 == 0) {
        return;
      }
      lVar16 = *(long *)(param_1 + 0x28);
    }
    else {
      if (cVar4 != '.') {
        uVar18 = 0;
        uVar13 = (uint)param_8 & 3;
        if ((param_8 & 3) == 0) goto LAB_00117c36;
        if (uVar13 == 1) {
LAB_00117c18:
          uVar15 = uVar18;
          if ((param_7[uVar18] != '$') && (param_7[uVar18] != '.')) {
            uVar18 = uVar18 + 1;
            while( true ) {
              if (uVar18 == param_8) {
                if (lVar16 == 0) {
                  (**(code **)(param_1 + 0x18))(param_7,uVar18,*(undefined8 *)(param_1 + 0x10));
                  return;
                }
                return;
              }
LAB_00117c36:
              uVar15 = uVar18;
              if ((param_7[uVar18] == '$') || (param_7[uVar18] == '.')) break;
              uVar15 = uVar18 + 1;
              if ((param_7[uVar15] == '$') || (param_7[uVar15] == '.')) break;
              uVar15 = uVar18 + 2;
              if ((param_7[uVar15] == '$') || (param_7[uVar15] == '.')) break;
              uVar15 = uVar18 + 3;
              if ((param_7[uVar18 + 3] == '$') || (param_7[uVar18 + 3] == '.')) break;
              uVar18 = uVar18 + 4;
            }
          }
        }
        else if (uVar13 == 2) {
LAB_00117bff:
          uVar15 = uVar18;
          if ((param_7[uVar18] != '$') && (param_7[uVar18] != '.')) {
            uVar18 = uVar18 + 1;
            goto LAB_00117c18;
          }
        }
        else {
          uVar15 = uVar18;
          if ((*param_7 != '$') && (*param_7 != '.')) {
            uVar18 = 1;
            goto LAB_00117bff;
          }
        }
        param_8 = param_8 - uVar15;
        pcVar3 = param_7 + uVar15;
        if (lVar16 == 0) {
          (**(code **)(param_1 + 0x18))(param_7,uVar15,*(undefined8 *)(param_1 + 0x10));
        }
        goto joined_r0x00118027;
      }
      if (param_8 == 1) {
        if (lVar16 == 0) {
          (**(code **)(param_1 + 0x18))(".",1,*(undefined8 *)(param_1 + 0x10));
          return;
        }
        return;
      }
      if (param_7[1] == '.') {
        if (lVar16 == 0) {
          (**(code **)(param_1 + 0x18))(&DAT_0011e14b,2,*(undefined8 *)(param_1 + 0x10));
        }
        param_8 = param_8 - 2;
        pcVar3 = param_7 + 2;
        goto joined_r0x00118027;
      }
      if (lVar16 == 0) {
        param_7 = param_7 + 1;
        (**(code **)(param_1 + 0x18))(".",1,*(undefined8 *)(param_1 + 0x10));
        param_8 = param_8 - 1;
        lVar16 = *(long *)(param_1 + 0x28);
      }
      else {
        param_7 = param_7 + 1;
        param_8 = param_8 - 1;
      }
    }
    cVar4 = *param_7;
  } while( true );
}


////>>0x00118640>>FUN_00118640>>////

void FUN_00118640(void **param_1,ulong param_2)

{
  void *pvVar1;
  void *__size;
  void *pvVar2;
  
  if (*(int *)(param_1 + 3) != 0) {
    return;
  }
  pvVar1 = param_1[2];
  if (param_2 <= (ulong)((long)pvVar1 - (long)param_1[1])) {
    return;
  }
  pvVar2 = (void *)(param_2 + (long)param_1[1]);
  if (pvVar1 <= pvVar2) {
    __size = (void *)0x4;
    if (pvVar1 != (void *)0x0) {
      __size = pvVar1;
    }
    do {
      if (pvVar2 <= __size) {
        pvVar1 = realloc(*param_1,(size_t)__size);
        if (pvVar1 != (void *)0x0) {
          *param_1 = pvVar1;
          param_1[2] = __size;
          return;
        }
        free(*param_1);
        *param_1 = (void *)0x0;
        *(undefined (*) [16])(param_1 + 1) = (undefined  [16])0x0;
        break;
      }
      __size = (void *)((long)__size * 2);
    } while (pvVar1 <= __size);
  }
  *(undefined4 *)(param_1 + 3) = 1;
  return;
}


////>>0x001186e0>>FUN_001186e0>>////

void FUN_001186e0(void *param_1,size_t param_2,long *param_3)

{
  FUN_00118640(param_3);
  if (*(int *)(param_3 + 3) == 0) {
    memcpy((void *)(param_3[1] + *param_3),param_1,param_2);
    param_3[1] = param_3[1] + param_2;
  }
  return;
}


////>>0x00118720>>FUN_00118720>>////

void FUN_00118720(long *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte local_59;
  ulong local_58 [2];
  ulong local_48;
  
  uVar3 = *(uint *)(param_1 + 7);
  if (uVar3 != 0xffffffff) {
    uVar3 = uVar3 + 1;
    *(uint *)(param_1 + 7) = uVar3;
    if (uVar3 < 0x401) goto LAB_00118748;
    goto LAB_00118755;
  }
LAB_00118748:
  uVar6 = param_1[4];
  uVar7 = param_1[1];
  if (uVar7 <= uVar6) goto LAB_00118755;
  lVar5 = *param_1;
  cVar1 = *(char *)(lVar5 + uVar6);
  if (cVar1 == '\0') goto switchD_001187af_caseD_44;
  uVar8 = uVar6 + 1;
  param_1[4] = uVar8;
  switch(cVar1) {
  case 'B':
    lVar5 = FUN_00116890(param_1);
    if (*(int *)((long)param_1 + 0x2c) == 0) {
      lVar4 = param_1[4];
      param_1[4] = lVar5;
      if (*(int *)(param_1 + 5) == 0) {
        FUN_00118720(param_1,param_2);
      }
      param_1[4] = lVar4;
      uVar3 = *(uint *)(param_1 + 7);
      goto LAB_0011875c;
    }
    goto LAB_0011893b;
  case 'C':
    if (uVar8 < uVar7) {
      lVar4 = 0;
      if (*(char *)(lVar5 + uVar8) == 's') {
        param_1[4] = uVar6 + 2;
        lVar4 = FUN_00116890(param_1);
        lVar4 = lVar4 + 1;
      }
      FUN_00117730(local_58,param_1);
      FUN_00117a70(param_1);
      if (*(int *)(param_1 + 6) != 0) goto LAB_00118987;
    }
    else {
      FUN_00117730(local_58,param_1);
      FUN_00117a70(param_1);
      if (*(int *)(param_1 + 6) != 0) {
        lVar4 = 0;
LAB_00118987:
        if (param_1[5] == 0) {
          (*(code *)param_1[3])(&DAT_0011fe21,1,param_1[2]);
        }
        FUN_001172c0(param_1,lVar4);
        if (param_1[5] == 0) {
          (*(code *)param_1[3])(&DAT_0011e56b,1,param_1[2]);
          uVar3 = *(uint *)(param_1 + 7);
          goto LAB_0011875c;
        }
      }
    }
    goto LAB_0011893b;
  default:
    goto switchD_001187af_caseD_44;
  case 'I':
    if (*(int *)(param_1 + 5) == 0) {
      FUN_00118720(param_1,param_2);
    }
    if (param_2 == 0) {
LAB_00118892:
      if (param_1[5] != 0) goto LAB_00118918;
      (*(code *)param_1[3])(&DAT_0011e54d,1,param_1[2]);
      if (*(int *)(param_1 + 5) != 0) break;
    }
    else {
      if (param_1[5] == 0) {
        (*(code *)param_1[3])(&DAT_0011e14b,2,param_1[2]);
        goto LAB_00118892;
      }
LAB_00118918:
      if (*(int *)(param_1 + 5) != 0) goto LAB_0011893b;
    }
    lVar5 = 0;
    do {
      uVar7 = param_1[4];
      if ((uVar7 < (ulong)param_1[1]) && (*(char *)(*param_1 + uVar7) == 'E')) {
        param_1[4] = uVar7 + 1;
        break;
      }
      if ((lVar5 != 0) && (param_1[5] == 0)) {
        (*(code *)param_1[3])(&DAT_0011e263,2,param_1[2]);
      }
      lVar5 = lVar5 + 1;
      FUN_001197f0(param_1);
    } while (*(int *)(param_1 + 5) == 0);
    break;
  case 'M':
  case 'X':
    if ((uVar8 < uVar7) && (*(char *)(lVar5 + uVar8) == 's')) {
      param_1[4] = uVar6 + 2;
      FUN_00116890(param_1);
    }
    uVar2 = *(undefined4 *)((long)param_1 + 0x2c);
    *(undefined4 *)((long)param_1 + 0x2c) = 1;
    if (*(int *)(param_1 + 5) == 0) {
      FUN_00118720(param_1,param_2);
    }
    *(undefined4 *)((long)param_1 + 0x2c) = uVar2;
    if (param_1[5] == 0) {
      (*(code *)param_1[3])(&DAT_0011e54d,1,param_1[2]);
      FUN_00118f00(param_1);
    }
    else {
      FUN_00118f00(param_1);
    }
    if (cVar1 != 'M') goto LAB_00118804;
    break;
  case 'N':
    if ((uVar8 < uVar7) && (local_59 = *(byte *)(lVar5 + uVar8), local_59 != 0)) {
      uVar6 = uVar6 + 2;
      uVar8 = (ulong)local_59;
      param_1[4] = uVar6;
      if (((&DAT_0011fbc0)[uVar8 * 2] & 0x88) != 0) {
        if (*(int *)(param_1 + 5) == 0) {
          FUN_00118720(param_1,param_2);
          uVar6 = param_1[4];
          uVar7 = param_1[1];
          uVar8 = (ulong)local_59;
        }
        lVar5 = 0;
        if ((uVar6 < uVar7) && (*(char *)(*param_1 + uVar6) == 's')) {
          param_1[4] = uVar6 + 1;
          lVar5 = FUN_00116890(param_1);
          lVar5 = lVar5 + 1;
        }
        FUN_00117730(local_58,param_1);
        if (((&DAT_0011fbc0)[uVar8 * 2] & 0x80) == 0) {
          if ((local_48 | local_58[0]) != 0) {
            if (param_1[5] == 0) {
              (*(code *)param_1[3])(&DAT_0011e14b,2,param_1[2]);
            }
            FUN_00117a70(param_1);
            uVar3 = *(uint *)(param_1 + 7);
            goto LAB_0011875c;
          }
          goto LAB_0011893b;
        }
        if (param_1[5] == 0) {
          (*(code *)param_1[3])(&DAT_0011fe23,3,param_1[2]);
          lVar4 = param_1[5];
          if (local_59 == 0x43) {
            if (lVar4 == 0) {
              (*(code *)param_1[3])("closure",7,param_1[2]);
              goto LAB_00118add;
            }
            goto LAB_00118cd0;
          }
          if (local_59 == 0x53) {
            if (lVar4 != 0) goto LAB_00118cd0;
            (*(code *)param_1[3])(&DAT_0011fe2f,4,param_1[2]);
          }
          else {
            if (lVar4 != 0) goto LAB_00118cd0;
            (*(code *)param_1[3])(&local_59,1,param_1[2]);
          }
LAB_00118add:
          if ((local_48 | local_58[0]) != 0) {
            if (param_1[5] == 0) {
              (*(code *)param_1[3])(&DAT_0011e14c,1,param_1[2]);
            }
            goto LAB_00118afe;
          }
        }
        else {
LAB_00118cd0:
          if ((local_48 | local_58[0]) != 0) {
LAB_00118afe:
            FUN_00117a70(param_1);
          }
        }
        if (param_1[5] == 0) {
          (*(code *)param_1[3])("#",1,param_1[2]);
        }
        FUN_00116ec0(param_1,lVar5);
        if (param_1[5] == 0) {
          (*(code *)param_1[3])(&DAT_0011fe1f,1,param_1[2]);
          uVar3 = *(uint *)(param_1 + 7);
          goto LAB_0011875c;
        }
        goto LAB_0011893b;
      }
    }
    goto switchD_001187af_caseD_44;
  case 'Y':
    if (param_1[5] == 0) {
      (*(code *)param_1[3])(&DAT_0011e54d,1,param_1[2]);
    }
    FUN_00118f00(param_1);
LAB_00118804:
    if (param_1[5] == 0) {
      (*(code *)param_1[3])(&DAT_0011fe34,4,param_1[2]);
      if (*(int *)(param_1 + 5) == 0) goto LAB_0011882b;
    }
    else {
      if (*(int *)(param_1 + 5) != 0) goto LAB_0011893b;
LAB_0011882b:
      FUN_00118720(param_1,0);
    }
  }
  if (param_1[5] == 0) {
    (*(code *)param_1[3])(&DAT_0011e59f,1,param_1[2]);
    uVar3 = *(uint *)(param_1 + 7);
  }
  else {
LAB_0011893b:
    uVar3 = *(uint *)(param_1 + 7);
  }
LAB_0011875c:
  if (uVar3 != 0xffffffff) {
    *(uint *)(param_1 + 7) = uVar3 - 1;
  }
  return;
switchD_001187af_caseD_44:
  uVar3 = *(uint *)(param_1 + 7);
LAB_00118755:
  *(undefined4 *)(param_1 + 5) = 1;
  goto LAB_0011875c;
}


////>>0x00118d20>>FUN_00118d20>>////

ulong FUN_00118d20(long *param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 7) == -1) {
    uVar2 = param_1[4];
    if (uVar2 < (ulong)param_1[1]) {
LAB_00118da0:
      if (*(char *)(*param_1 + uVar2) == 'B') {
        param_1[4] = uVar2 + 1;
        lVar4 = FUN_00116890(param_1);
        uVar2 = (ulong)*(uint *)((long)param_1 + 0x2c);
        if (*(uint *)((long)param_1 + 0x2c) == 0) {
          lVar1 = param_1[4];
          param_1[4] = lVar4;
          if (*(int *)(param_1 + 5) == 0) {
            uVar2 = FUN_00118d20(param_1);
          }
          param_1[4] = lVar1;
          uVar3 = *(uint *)(param_1 + 7);
        }
        else {
          uVar3 = *(uint *)(param_1 + 7);
          uVar2 = 0;
        }
      }
      else {
        if (*(char *)(*param_1 + uVar2) != 'I') {
          if (*(int *)(param_1 + 5) != 0) {
            uVar3 = *(uint *)(param_1 + 7);
            if (uVar3 == 0xffffffff) {
              return 0;
            }
            goto LAB_00118dc2;
          }
          goto LAB_00118d4e;
        }
        param_1[4] = uVar2 + 1;
        if (*(int *)(param_1 + 5) == 0) {
          FUN_00118720(param_1,0);
          if (param_1[5] == 0) {
LAB_00118ea0:
            (*(code *)param_1[3])(&DAT_0011e54d,1,param_1[2]);
          }
          if (*(int *)(param_1 + 5) == 0) {
            lVar4 = 0;
            do {
              uVar2 = param_1[4];
              if ((uVar2 < (ulong)param_1[1]) && (*(char *)(*param_1 + uVar2) == 'E')) {
                uVar3 = *(uint *)(param_1 + 7);
                param_1[4] = uVar2 + 1;
                uVar2 = 1;
                goto LAB_00118df3;
              }
              if ((lVar4 != 0) && (param_1[5] == 0)) {
                (*(code *)param_1[3])(&DAT_0011e263,2,param_1[2]);
              }
              lVar4 = lVar4 + 1;
              FUN_001197f0(param_1);
            } while (*(int *)(param_1 + 5) == 0);
          }
        }
        else if (param_1[5] == 0) goto LAB_00118ea0;
        uVar3 = *(uint *)(param_1 + 7);
        uVar2 = 1;
      }
LAB_00118df3:
      if (uVar3 == 0xffffffff) {
        return uVar2;
      }
      goto LAB_00118d62;
    }
    if (*(int *)(param_1 + 5) != 0) {
      return 0;
    }
LAB_00118d4e:
    FUN_00118720(param_1,0);
    uVar3 = *(uint *)(param_1 + 7);
  }
  else {
    uVar3 = *(int *)(param_1 + 7) + 1;
    *(uint *)(param_1 + 7) = uVar3;
    if (uVar3 < 0x401) {
      uVar2 = param_1[4];
      if (uVar2 < (ulong)param_1[1]) goto LAB_00118da0;
      if (*(int *)(param_1 + 5) == 0) goto LAB_00118d4e;
LAB_00118dc2:
      uVar2 = 0;
      goto LAB_00118d62;
    }
    *(undefined4 *)(param_1 + 5) = 1;
  }
  uVar2 = 0;
  if (uVar3 == 0xffffffff) {
    return 0;
  }
LAB_00118d62:
  *(uint *)(param_1 + 7) = uVar3 - 1;
  return uVar2;
}


////>>0x00118f00>>FUN_00118f00>>////

void FUN_00118f00(long *param_1)

{
  char *__s;
  size_t sVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined *local_58;
  ulong uStack_50;
  long local_48;
  
  if (*(int *)(param_1 + 5) != 0) {
    return;
  }
  uVar2 = param_1[4];
  uVar6 = param_1[1];
  if ((uVar2 < uVar6) && (cVar3 = *(char *)(*param_1 + uVar2), cVar3 != '\0')) {
    iVar7 = (int)cVar3;
    param_1[4] = uVar2 + 1;
  }
  else {
    *(undefined4 *)(param_1 + 5) = 1;
    cVar3 = '\0';
    iVar7 = 0;
  }
  __s = (char *)FUN_00116d50(iVar7);
  if (__s != (char *)0x0) {
    sVar1 = strlen(__s);
    if (param_1[5] != 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00118f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[3])(__s,sVar1,param_1[2],(code *)param_1[3]);
    return;
  }
  iVar7 = *(int *)(param_1 + 7);
  if (iVar7 != -1) {
    *(uint *)(param_1 + 7) = iVar7 + 1U;
    if (0x400 < iVar7 + 1U) {
      *(undefined4 *)(param_1 + 5) = 1;
      *(int *)(param_1 + 7) = iVar7;
      return;
    }
    switch(cVar3) {
    case 'A':
    case 'S':
      goto switchD_00118fbc_caseD_41;
    case 'B':
      goto switchD_00118fbc_caseD_42;
    default:
      goto switchD_00118fbc_caseD_43;
    case 'D':
      goto switchD_00118fbc_caseD_44;
    case 'F':
      goto switchD_00118fbc_caseD_46;
    case 'O':
    case 'P':
      goto switchD_00118fbc_caseD_4f;
    case 'Q':
    case 'R':
      goto switchD_00118fbc_caseD_51;
    case 'T':
      goto switchD_00118fbc_caseD_54;
    }
  }
  switch(cVar3) {
  case 'A':
  case 'S':
    goto switchD_00118fbc_caseD_41;
  case 'B':
switchD_00118fbc_caseD_42:
    lVar4 = FUN_00116890(param_1);
    if (*(int *)((long)param_1 + 0x2c) == 0) {
      lVar5 = param_1[4];
      param_1[4] = lVar4;
      FUN_00118f00(param_1);
      param_1[4] = lVar5;
    }
    goto LAB_00119020;
  default:
switchD_00118fbc_caseD_43:
    param_1[4] = param_1[4] + -1;
    if (*(int *)(param_1 + 5) == 0) {
      FUN_00118720(param_1,0);
    }
    goto LAB_00119020;
  case 'D':
switchD_00118fbc_caseD_44:
    if (param_1[5] == 0) {
      (*(code *)param_1[3])(&DAT_0011fe64,4,param_1[2]);
    }
    lVar4 = param_1[8];
    FUN_00116ff0(param_1);
    if (*(int *)(param_1 + 5) == 0) {
      uVar2 = param_1[4];
      lVar5 = 0;
      do {
        uVar6 = param_1[1];
        if ((uVar2 < uVar6) && (*(char *)(*param_1 + uVar2) == 'E')) {
          uVar2 = uVar2 + 1;
          param_1[4] = uVar2;
          goto LAB_00119391;
        }
        if ((lVar5 != 0) && (param_1[5] == 0)) {
          (*(code *)param_1[3])(&DAT_0011fe69,3,param_1[2]);
        }
        if (*(int *)(param_1 + 5) != 0) {
          param_1[8] = lVar4;
          uVar2 = param_1[4];
          if ((ulong)param_1[1] <= uVar2) goto LAB_00119355;
          goto LAB_001193a0;
        }
        iVar7 = FUN_00118d20(param_1);
        uVar2 = param_1[4];
        if (uVar2 < (ulong)param_1[1]) {
          do {
            if (*(char *)(*param_1 + uVar2) != 'p') goto LAB_0011937a;
            param_1[4] = uVar2 + 1;
            if (iVar7 == 0) {
              if (param_1[5] == 0) {
                (*(code *)param_1[3])(&DAT_0011e54d,1,param_1[2]);
              }
            }
            else if (param_1[5] == 0) {
              (*(code *)param_1[3])(&DAT_0011e263,2,param_1[2]);
            }
            FUN_00117730(&local_58,param_1);
            FUN_00117a70(param_1);
            if (param_1[5] == 0) {
              (*(code *)param_1[3])(&DAT_0011fe6d,3,param_1[2]);
            }
            FUN_00118f00(param_1);
            uVar2 = param_1[4];
            iVar7 = 1;
          } while (uVar2 < (ulong)param_1[1]);
LAB_00119490:
          if (param_1[5] == 0) {
            (*(code *)param_1[3])(&DAT_0011e59f,1,param_1[2]);
            uVar2 = param_1[4];
          }
        }
        else {
LAB_0011937a:
          if (iVar7 != 0) goto LAB_00119490;
        }
        lVar5 = lVar5 + 1;
      } while (*(int *)(param_1 + 5) == 0);
    }
    else {
      uVar2 = param_1[4];
    }
    uVar6 = param_1[1];
LAB_00119391:
    param_1[8] = lVar4;
    if (uVar6 <= uVar2) {
LAB_00119355:
      *(undefined4 *)(param_1 + 5) = 1;
      return;
    }
LAB_001193a0:
    if (*(char *)(*param_1 + uVar2) != 'L') goto LAB_00119355;
    param_1[4] = uVar2 + 1;
    lVar4 = FUN_00116890(param_1);
    if (lVar4 != 0) {
      if (param_1[5] == 0) {
        (*(code *)param_1[3])(&DAT_0011fe69,3,param_1[2]);
      }
      FUN_00116f10(param_1,lVar4);
    }
    goto LAB_00119020;
  case 'F':
switchD_00118fbc_caseD_46:
    lVar4 = param_1[8];
    FUN_00116ff0(param_1);
    uVar2 = param_1[4];
    uVar6 = param_1[1];
    if (uVar2 < uVar6) {
      lVar5 = *param_1;
      cVar3 = *(char *)(lVar5 + uVar2);
      if (cVar3 == 'U') {
        uVar2 = uVar2 + 1;
        param_1[4] = uVar2;
        if (param_1[5] == 0) {
          (*(code *)param_1[3])("unsafe ",7,param_1[2]);
          uVar2 = param_1[4];
          uVar6 = param_1[1];
        }
        if (uVar6 <= uVar2) goto LAB_00119213;
        lVar5 = *param_1;
        cVar3 = *(char *)(lVar5 + uVar2);
      }
      if (cVar3 != 'K') goto LAB_00119213;
      param_1[4] = uVar2 + 1;
      if ((uVar2 + 1 < uVar6) && (*(char *)(lVar5 + 1 + uVar2) == 'C')) {
        local_58 = &DAT_0011fe39;
        uStack_50 = 1;
        param_1[4] = uVar2 + 2;
        lVar5 = param_1[5];
        if (lVar5 == 0) {
LAB_0011978e:
          (*(code *)param_1[3])("extern \"",8,param_1[2]);
          lVar5 = param_1[5];
          if (uStack_50 != 0) goto LAB_00119703;
        }
        else {
LAB_00119703:
          uVar2 = 0;
          do {
            uVar6 = uVar2 + 1;
            if (local_58[uVar2] == '_') {
              if (lVar5 == 0) {
                (*(code *)param_1[3])(local_58,uVar2,param_1[2]);
                lVar5 = param_1[5];
                if (lVar5 == 0) {
                  (*(code *)param_1[3])(&DAT_0011e562,1,param_1[2]);
                  lVar5 = param_1[5];
                }
              }
              local_58 = local_58 + uVar6;
              uStack_50 = (uStack_50 - 1) - uVar2;
              uVar6 = 1;
            }
            uVar2 = uVar6;
          } while (uVar6 < uStack_50);
        }
        if ((param_1[5] == 0) &&
           ((*(code *)param_1[3])(local_58,uStack_50,param_1[2]), param_1[5] == 0)) {
          (*(code *)param_1[3])("\" ",2,param_1[2]);
          goto LAB_00119213;
        }
        goto LAB_0011922d;
      }
      FUN_00117730(&local_58,param_1);
      if ((local_58 != (undefined *)0x0) && (local_48 == 0)) {
        if (param_1[5] == 0) goto LAB_0011978e;
        lVar5 = param_1[5];
        if (uStack_50 != 0) goto LAB_00119703;
        goto LAB_0011922d;
      }
      *(undefined4 *)(param_1 + 5) = 1;
    }
    else {
LAB_00119213:
      if (param_1[5] == 0) {
        (*(code *)param_1[3])(&DAT_0011fe5b,3,param_1[2]);
      }
LAB_0011922d:
      lVar5 = 0;
      iVar7 = *(int *)(param_1 + 5);
      while (iVar7 == 0) {
        uVar2 = param_1[4];
        if ((uVar2 < (ulong)param_1[1]) && (*(char *)(*param_1 + uVar2) == 'E')) {
          param_1[4] = uVar2 + 1;
          break;
        }
        if ((lVar5 != 0) && (param_1[5] == 0)) {
          (*(code *)param_1[3])(&DAT_0011e263,2,param_1[2]);
        }
        lVar5 = lVar5 + 1;
        FUN_00118f00(param_1);
        iVar7 = *(int *)(param_1 + 5);
      }
      if (param_1[5] == 0) {
        (*(code *)param_1[3])(&DAT_0011e4be,1,param_1[2]);
        uVar2 = param_1[4];
        if ((uVar2 < (ulong)param_1[1]) && (*(char *)(*param_1 + uVar2) == 'u')) {
LAB_0011954b:
          param_1[4] = uVar2 + 1;
          goto LAB_001192cb;
        }
        if (param_1[5] == 0) {
          (*(code *)param_1[3])(&DAT_0011fe5f,4,param_1[2]);
        }
      }
      else {
        uVar2 = param_1[4];
        if ((uVar2 < (ulong)param_1[1]) && (*(char *)(*param_1 + uVar2) == 'u')) goto LAB_0011954b;
      }
      FUN_00118f00(param_1);
    }
LAB_001192cb:
    param_1[8] = lVar4;
    goto LAB_00119020;
  case 'O':
  case 'P':
switchD_00118fbc_caseD_4f:
    if (param_1[5] == 0) {
      (*(code *)param_1[3])(&DAT_0011e6bd,1,param_1[2]);
      if (cVar3 != 'P') goto LAB_00119079;
      if (param_1[5] == 0) {
        (*(code *)param_1[3])("const ",6,param_1[2]);
      }
    }
    break;
  case 'Q':
  case 'R':
switchD_00118fbc_caseD_51:
    if (param_1[5] == 0) {
      (*(code *)param_1[3])(&DAT_0011e494,1,param_1[2]);
      uVar6 = param_1[1];
    }
    uVar2 = param_1[4];
    if ((uVar2 < uVar6) && (*(char *)(*param_1 + uVar2) == 'L')) {
      param_1[4] = uVar2 + 1;
      lVar4 = FUN_00116890(param_1);
      if (lVar4 != 0) {
        FUN_00116f10(param_1,lVar4);
        if (param_1[5] != 0) break;
        (*(code *)param_1[3])(" ",1,param_1[2]);
      }
    }
    if (cVar3 != 'R') {
LAB_00119079:
      if (param_1[5] == 0) {
        (*(code *)param_1[3])(&DAT_0011fe3b,4,param_1[2]);
      }
    }
    break;
  case 'T':
switchD_00118fbc_caseD_54:
    if (param_1[5] == 0) {
      (*(code *)param_1[3])(&DAT_0011e267,1,param_1[2]);
    }
    lVar4 = 0;
    if (*(int *)(param_1 + 5) == 0) {
      do {
        uVar2 = param_1[4];
        if ((uVar2 < (ulong)param_1[1]) && (*(char *)(*param_1 + uVar2) == 'E')) {
          param_1[4] = uVar2 + 1;
          break;
        }
        if ((lVar4 != 0) && (param_1[5] == 0)) {
          (*(code *)param_1[3])(&DAT_0011e263,2,param_1[2]);
        }
        lVar4 = lVar4 + 1;
        FUN_00118f00(param_1);
      } while (*(int *)(param_1 + 5) == 0);
      if (lVar4 == 1) {
        if (param_1[5] != 0) goto LAB_00119020;
        (*(code *)param_1[3])(&DAT_0011e4c3,1,param_1[2]);
      }
    }
    if (param_1[5] == 0) {
      (*(code *)param_1[3])(&DAT_0011e4be,1,param_1[2]);
    }
    goto LAB_00119020;
  }
  FUN_00118f00(param_1);
  goto LAB_00119020;
switchD_00118fbc_caseD_41:
  if (param_1[5] == 0) {
    (*(code *)param_1[3])(&DAT_0011fe21,1,param_1[2]);
  }
  FUN_00118f00(param_1);
  if (cVar3 == 'A') {
    if (param_1[5] == 0) {
      (*(code *)param_1[3])(&DAT_0011fe47,2,param_1[2]);
      if (*(int *)(param_1 + 5) != 0) goto LAB_0011910c;
    }
    else if (*(int *)(param_1 + 5) != 0) goto LAB_00119020;
    FUN_00117310(param_1);
  }
LAB_0011910c:
  if (param_1[5] == 0) {
    (*(code *)param_1[3])(&DAT_0011e56b,1,param_1[2]);
  }
LAB_00119020:
  if (*(int *)(param_1 + 7) == -1) {
    return;
  }
  *(int *)(param_1 + 7) = *(int *)(param_1 + 7) + -1;
  return;
}


////>>0x001197f0>>FUN_001197f0>>////

void FUN_001197f0(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[4];
  if (uVar1 < (ulong)param_1[1]) {
    if (*(char *)(*param_1 + uVar1) == 'L') {
      param_1[4] = uVar1 + 1;
      uVar2 = FUN_00116890();
      FUN_00116f10(param_1,uVar2);
      return;
    }
    if (*(char *)(*param_1 + uVar1) == 'K') {
      param_1[4] = uVar1 + 1;
      if (*(int *)(param_1 + 5) == 0) {
        FUN_00117310();
        return;
      }
      return;
    }
  }
  FUN_00118f00();
  return;
}


////>>0x00119860>>FUN_00119860>>////



void FUN_00119860(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = sbrk(0);
  fprintf(_stderr,"\n%s%sout of memory allocating %lu bytes after a total of %lu bytes\n","","",
          param_1,(long)pvVar1 + -0x125100);
                    
  exit(1);
}


////>>0x001198b0>>FUN_001198b0>>////

void FUN_001198b0(void **param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  size_t __n;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *__dest;
  undefined8 *unaff_R13;
  
  pvVar1 = *param_1;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined8 *)0x20;
    if ((undefined8 *)0x1f < param_2) {
      puVar2 = param_2;
    }
    pvVar1 = malloc((size_t)puVar2);
    if (pvVar1 != (void *)0x0) {
      *param_1 = pvVar1;
      param_1[1] = pvVar1;
      param_1[2] = (void *)((long)pvVar1 + (long)puVar2);
      return;
    }
    FUN_00119860(puVar2);
  }
  else {
    if (param_2 <= (undefined8 *)((long)param_1[2] - (long)param_1[1])) {
      return;
    }
    lVar3 = (long)param_1[1] - (long)pvVar1;
    puVar2 = (undefined8 *)(((long)param_2 + lVar3) * 2);
    unaff_R13 = (undefined8 *)0x1;
    if (puVar2 != (undefined8 *)0x0) {
      unaff_R13 = puVar2;
    }
    param_2 = unaff_R13;
    pvVar1 = realloc(pvVar1,(size_t)unaff_R13);
    if (pvVar1 != (void *)0x0) {
      *param_1 = pvVar1;
      param_1[1] = (void *)((long)pvVar1 + lVar3);
      param_1[2] = (void *)((long)pvVar1 + (long)puVar2);
      return;
    }
  }
  FUN_00119860();
  if (*(char *)param_2 == '\0') {
    return;
  }
  __n = strlen((char *)param_2);
  if (__n != 0) {
    FUN_001198b0(unaff_R13,__n);
    __dest = (undefined *)*unaff_R13;
    puVar4 = (undefined *)(unaff_R13[1] - 1);
    if (__dest <= (undefined *)(unaff_R13[1] - 1)) {
      do {
        puVar5 = puVar4 + -1;
        puVar4[__n] = *puVar4;
        __dest = (undefined *)*unaff_R13;
        puVar4 = puVar5;
      } while (__dest <= puVar5);
    }
    memcpy(__dest,param_2,__n);
    unaff_R13[1] = unaff_R13[1] + __n;
  }
  return;
}


////>>0x00119980>>FUN_00119980>>////

void FUN_00119980(undefined8 *param_1,char *param_2)

{
  size_t __n;
  undefined *puVar1;
  undefined *puVar2;
  undefined *__dest;
  
  if (*param_2 == '\0') {
    return;
  }
  __n = strlen(param_2);
  if (__n != 0) {
    FUN_001198b0(param_1,__n);
    __dest = (undefined *)*param_1;
    puVar1 = (undefined *)(param_1[1] - 1);
    if (__dest <= (undefined *)(param_1[1] - 1)) {
      do {
        puVar2 = puVar1 + -1;
        puVar1[__n] = *puVar1;
        __dest = (undefined *)*param_1;
        puVar1 = puVar2;
      } while (__dest <= puVar2);
    }
    memcpy(__dest,param_2,__n);
    param_1[1] = param_1[1] + __n;
  }
  return;
}


////>>0x00119a00>>FUN_00119a00>>////

undefined8 * FUN_00119a00(long *param_1,undefined8 *param_2,size_t param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  
  switch(param_3) {
  case 6:
    iVar3 = strncmp((char *)param_2,"__ctor",6);
    if (iVar3 == 0) {
      FUN_001198b0(param_1,4);
      *(undefined4 *)param_1[1] = 0x73696874;
      param_1[1] = param_1[1] + 4;
      return (undefined8 *)((long)param_2 + 6);
    }
    iVar3 = strncmp((char *)param_2,"__dtor",6);
    if (iVar3 == 0) {
      FUN_001198b0(param_1,5);
      puVar2 = (undefined4 *)param_1[1];
      *puVar2 = 0x6968747e;
      *(undefined *)(puVar2 + 1) = 0x73;
      param_1[1] = param_1[1] + 5;
      return (undefined8 *)((long)param_2 + 6);
    }
    iVar3 = strncmp((char *)param_2,"__initZ",7);
    pcVar6 = "initializer for ";
    if (iVar3 == 0) {
LAB_00119c47:
      FUN_00119980(param_1,pcVar6);
      lVar4 = *param_1;
      if (param_1[1] == lVar4) {
        lVar5 = -1;
      }
      else {
        lVar5 = (long)(((int)param_1[1] - (int)lVar4) + -1);
      }
      param_1[1] = lVar4 + lVar5;
      return (undefined8 *)((long)param_2 + 6);
    }
    iVar3 = strncmp((char *)param_2,"__vtblZ",7);
    if (iVar3 == 0) {
      pcVar6 = "vtable for ";
      goto LAB_00119c47;
    }
    break;
  case 7:
    iVar3 = strncmp((char *)param_2,"__ClassZ",8);
    if (iVar3 == 0) {
      FUN_00119980(param_1,"ClassInfo for ");
      lVar4 = *param_1;
      if (param_1[1] == lVar4) {
        lVar5 = -1;
      }
      else {
        lVar5 = (long)(((int)param_1[1] - (int)lVar4) + -1);
      }
      param_1[1] = lVar4 + lVar5;
      return (undefined8 *)((long)param_2 + 7);
    }
    break;
  default:
    if (param_3 == 0) {
      return param_2;
    }
    break;
  case 10:
    iVar3 = strncmp((char *)param_2,"__postblitMFZ",0xd);
    if (iVar3 == 0) {
      FUN_001198b0(param_1,10);
      puVar1 = (undefined8 *)param_1[1];
      *puVar1 = 0x6968742873696874;
      *(undefined2 *)(puVar1 + 1) = 0x2973;
      param_1[1] = param_1[1] + 10;
      return (undefined8 *)((long)param_2 + 0xd);
    }
    break;
  case 0xb:
    iVar3 = strncmp((char *)param_2,"__InterfaceZ",0xc);
    if (iVar3 == 0) {
      FUN_00119980(param_1,"Interface for ");
      lVar4 = *param_1;
      if (param_1[1] == lVar4) {
        lVar5 = -1;
      }
      else {
        lVar5 = (long)(((int)param_1[1] - (int)lVar4) + -1);
      }
      param_1[1] = lVar4 + lVar5;
      return (undefined8 *)((long)param_2 + 0xb);
    }
    FUN_001198b0(param_1,0xb);
    puVar1 = (undefined8 *)param_1[1];
    *puVar1 = *param_2;
    *(undefined4 *)((long)puVar1 + 7) = *(undefined4 *)((long)param_2 + 7);
    lVar4 = param_1[1] + 0xb;
    goto LAB_00119a73;
  case 0xc:
    iVar3 = strncmp((char *)param_2,"__ModuleInfoZ",0xd);
    if (iVar3 == 0) {
      FUN_00119980(param_1,"ModuleInfo for ");
      lVar4 = *param_1;
      if (param_1[1] == lVar4) {
        lVar5 = -1;
      }
      else {
        lVar5 = (long)(((int)param_1[1] - (int)lVar4) + -1);
      }
      param_1[1] = lVar4 + lVar5;
      return (undefined8 *)((long)param_2 + 0xc);
    }
    FUN_001198b0(param_1,0xc);
    puVar1 = (undefined8 *)param_1[1];
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
    lVar4 = param_1[1] + 0xc;
    goto LAB_00119a73;
  }
  FUN_001198b0(param_1,param_3);
  memcpy((void *)param_1[1],param_2,param_3);
  lVar4 = param_1[1] + param_3;
LAB_00119a73:
  param_1[1] = lVar4;
  return (undefined8 *)((long)param_2 + param_3);
}


////>>0x00119d90>>FUN_00119d90>>////

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00119d90(long param_1,byte *param_2,byte param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  char *pcVar17;
  undefined8 *puVar18;
  undefined uStack_51;
  undefined local_50 [8];
  undefined8 local_48;
  
  if (((param_3 & 0xfd) != 0x75) && (param_3 != 0x61)) {
    if (param_3 == 0x62) {
      pbVar12 = (byte *)FUN_001166e0(param_2,&local_48);
      if (pbVar12 != (byte *)0x0) {
        pcVar17 = "false";
        uVar11 = 5 - (ulong)(local_48 != 0);
        if (local_48 != 0) {
          pcVar17 = &DAT_0011e288;
        }
        FUN_001198b0(param_1,uVar11);
        puVar7 = *(undefined8 **)(param_1 + 8);
        uVar8 = uVar11 & 0xffffffff;
        if ((uint)uVar11 < 8) {
          if ((uVar11 & 4) == 0) {
            if (((int)uVar8 != 0) && (*(char *)puVar7 = *pcVar17, (uVar11 & 2) != 0)) {
              *(undefined2 *)((long)puVar7 + (uVar8 - 2)) =
                   *(undefined2 *)((long)pcVar17 + (uVar8 - 2));
            }
          }
          else {
            *(undefined4 *)puVar7 = *(undefined4 *)pcVar17;
            *(undefined4 *)((long)puVar7 + (uVar8 - 4)) =
                 *(undefined4 *)((long)pcVar17 + (uVar8 - 4));
          }
        }
        else {
          puVar16 = (undefined8 *)((ulong)(puVar7 + 1) & 0xfffffffffffffff8);
          *puVar7 = *(undefined8 *)pcVar17;
          *(undefined8 *)((long)puVar7 + ((uVar11 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)pcVar17 + ((uVar11 & 0xffffffff) - 8));
          puVar18 = (undefined8 *)((long)pcVar17 - ((long)puVar7 - (long)puVar16));
          uVar15 = (uint)uVar11 + (int)((long)puVar7 - (long)puVar16) & 0xfffffff8;
          if (7 < uVar15) {
            uVar8 = 8;
            uVar13 = uVar15 - 1 >> 3 & 7;
            *puVar16 = *puVar18;
            if (8 < uVar15) {
              if (uVar13 != 0) {
                uVar9 = uVar8;
                if (uVar13 != 1) {
                  if (uVar13 != 2) {
                    if (uVar13 != 3) {
                      if (uVar13 != 4) {
                        if (uVar13 != 5) {
                          if (uVar13 != 6) {
                            uVar8 = 0x10;
                            puVar16[1] = puVar18[1];
                          }
                          uVar9 = (ulong)((int)uVar8 + 8);
                          *(undefined8 *)((long)puVar16 + uVar8) =
                               *(undefined8 *)((long)puVar18 + uVar8);
                        }
                        uVar8 = (ulong)((int)uVar9 + 8);
                        *(undefined8 *)((long)puVar16 + uVar9) =
                             *(undefined8 *)((long)puVar18 + uVar9);
                      }
                      uVar9 = (ulong)((int)uVar8 + 8);
                      *(undefined8 *)((long)puVar16 + uVar8) =
                           *(undefined8 *)((long)puVar18 + uVar8);
                    }
                    uVar8 = (ulong)((int)uVar9 + 8);
                    *(undefined8 *)((long)puVar16 + uVar9) = *(undefined8 *)((long)puVar18 + uVar9);
                  }
                  uVar9 = (ulong)((int)uVar8 + 8);
                  *(undefined8 *)((long)puVar16 + uVar8) = *(undefined8 *)((long)puVar18 + uVar8);
                }
                uVar13 = (int)uVar9 + 8;
                uVar8 = (ulong)uVar13;
                *(undefined8 *)((long)puVar16 + uVar9) = *(undefined8 *)((long)puVar18 + uVar9);
                if (uVar15 <= uVar13) goto LAB_0011a52e;
              }
              do {
                *(undefined8 *)((long)puVar16 + uVar8) = *(undefined8 *)((long)puVar18 + uVar8);
                iVar1 = (int)uVar8;
                *(undefined8 *)((long)puVar16 + (ulong)(iVar1 + 8)) =
                     *(undefined8 *)((long)puVar18 + (ulong)(iVar1 + 8));
                uVar8 = (ulong)(iVar1 + 0x40U);
                *(undefined8 *)((long)puVar16 + (ulong)(iVar1 + 0x10)) =
                     *(undefined8 *)((long)puVar18 + (ulong)(iVar1 + 0x10));
                *(undefined8 *)((long)puVar16 + (ulong)(iVar1 + 0x18)) =
                     *(undefined8 *)((long)puVar18 + (ulong)(iVar1 + 0x18));
                *(undefined8 *)((long)puVar16 + (ulong)(iVar1 + 0x20)) =
                     *(undefined8 *)((long)puVar18 + (ulong)(iVar1 + 0x20));
                *(undefined8 *)((long)puVar16 + (ulong)(iVar1 + 0x28)) =
                     *(undefined8 *)((long)puVar18 + (ulong)(iVar1 + 0x28));
                *(undefined8 *)((long)puVar16 + (ulong)(iVar1 + 0x30)) =
                     *(undefined8 *)((long)puVar18 + (ulong)(iVar1 + 0x30));
                *(undefined8 *)((long)puVar16 + (ulong)(iVar1 + 0x38)) =
                     *(undefined8 *)((long)puVar18 + (ulong)(iVar1 + 0x38));
              } while (iVar1 + 0x40U < uVar15);
            }
          }
        }
LAB_0011a52e:
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar11;
        return pbVar12;
      }
    }
    else {
      pbVar12 = param_2;
      if (((&DAT_0011fbc0)[(ulong)*param_2 * 2] & 4) != 0) {
        do {
          pbVar6 = pbVar12;
          pbVar12 = pbVar6 + 1;
        } while (((&DAT_0011fbc0)[(ulong)pbVar6[1] * 2] & 4) != 0);
        pbVar6 = pbVar6 + (1 - (long)param_2);
        if (pbVar6 != (byte *)0x0) {
          FUN_001198b0(param_1,pbVar6);
          memcpy(*(void **)(param_1 + 8),param_2,(size_t)pbVar6);
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + (long)pbVar6;
        }
        switch(param_3) {
        case 0x68:
        case 0x6b:
        case 0x74:
          FUN_001198b0(param_1,1);
          **(undefined **)(param_1 + 8) = 0x75;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
          return pbVar12;
        default:
          return pbVar12;
        case 0x6c:
          FUN_001198b0(param_1,1);
          **(undefined **)(param_1 + 8) = 0x4c;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
          return pbVar12;
        case 0x6d:
          FUN_001198b0(param_1,2);
          **(undefined2 **)(param_1 + 8) = 0x4c75;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 2;
          return pbVar12;
        }
      }
    }
    return (byte *)0x0;
  }
  pbVar12 = (byte *)FUN_001166e0(param_2,local_50);
  if (pbVar12 == (byte *)0x0) {
    return (byte *)0;
  }
  FUN_001198b0(param_1);
  uVar11 = (ulong)local_50;
  **(undefined **)(param_1 + 8) = 0x27;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  if (param_3 == 0x61) {
    if ((long)local_50 - 0x20U < 0x5f) {
      FUN_001198b0(param_1,1);
      **(undefined **)(param_1 + 8) = (char)uVar11;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      goto LAB_00119fa4;
    }
    FUN_001198b0(param_1,2);
    uVar15 = 2;
    **(undefined2 **)(param_1 + 8) = 0x785c;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 2;
joined_r0x0011a2f8:
    if (uVar11 != 0) goto LAB_00119ea7;
LAB_0011a2fe:
    uVar8 = 0x14;
LAB_00119efc:
    uVar13 = uVar15;
    if ((int)uVar15 < 1) {
      uVar13 = 1;
    }
    lVar10 = -(long)(int)(uVar15 - 1);
    if ((int)uVar15 < 1) {
      lVar10 = 0;
    }
    lVar10 = lVar10 + -1 + (long)(int)uVar8;
    puVar7 = (undefined8 *)(local_50 + lVar10 + 8);
    if (uVar13 < 8) {
      if ((uVar13 & 4) == 0) {
        if ((uVar13 != 0) && (*(undefined *)puVar7 = 0x30, (uVar13 & 2) != 0)) {
          *(undefined2 *)(local_50 + (ulong)uVar13 + lVar10 + 6) = 0x3030;
        }
      }
      else {
        *(undefined4 *)puVar7 = 0x30303030;
        *(undefined4 *)(local_50 + (ulong)uVar13 + lVar10 + 4) = 0x30303030;
      }
    }
    else {
      *puVar7 = 0x3030303030303030;
      puVar16 = (undefined8 *)((ulong)(&stack0xffffffffffffffc0 + lVar10) & 0xfffffffffffffff8);
      *(undefined8 *)(&uStack_51 + (ulong)uVar13 + lVar10 + 1) = 0x3030303030303030;
      uVar13 = uVar13 + ((int)puVar7 - (int)puVar16) & 0xfffffff8;
      if (7 < uVar13) {
        uVar3 = 8;
        uVar5 = 8;
        *puVar16 = 0x3030303030303030;
        uVar14 = uVar13 - 1 >> 3 & 7;
        if (8 < uVar13) {
          uVar4 = uVar3;
          if (uVar14 != 0) {
            if (uVar14 != 1) {
              if (uVar14 != 2) {
                if (uVar14 != 3) {
                  if (uVar14 != 4) {
                    if (uVar14 != 5) {
                      if (uVar14 != 6) {
                        uVar5 = 0x10;
                        puVar16[1] = 0x3030303030303030;
                      }
                      uVar3 = uVar5 + 8;
                      *(undefined8 *)((long)puVar16 + (ulong)uVar5) = 0x3030303030303030;
                    }
                    uVar11 = (ulong)uVar3;
                    uVar3 = uVar3 + 8;
                    *(undefined8 *)((long)puVar16 + uVar11) = 0x3030303030303030;
                  }
                  uVar11 = (ulong)uVar3;
                  uVar3 = uVar3 + 8;
                  *(undefined8 *)((long)puVar16 + uVar11) = 0x3030303030303030;
                }
                uVar11 = (ulong)uVar3;
                uVar3 = uVar3 + 8;
                *(undefined8 *)((long)puVar16 + uVar11) = 0x3030303030303030;
              }
              uVar11 = (ulong)uVar3;
              uVar3 = uVar3 + 8;
              *(undefined8 *)((long)puVar16 + uVar11) = 0x3030303030303030;
            }
            *(undefined8 *)((long)puVar16 + (ulong)uVar3) = 0x3030303030303030;
            uVar4 = uVar3 + 8;
            if (uVar13 <= uVar3 + 8) goto LAB_00119f54;
          }
          do {
            *(undefined8 *)((long)puVar16 + (ulong)uVar4) = 0x3030303030303030;
            *(undefined8 *)((long)puVar16 + (ulong)(uVar4 + 8)) = 0x3030303030303030;
            *(undefined8 *)((long)puVar16 + (ulong)(uVar4 + 0x10)) = 0x3030303030303030;
            uVar5 = uVar4 + 0x40;
            *(undefined8 *)((long)puVar16 + (ulong)(uVar4 + 0x18)) = 0x3030303030303030;
            *(undefined8 *)((long)puVar16 + (ulong)(uVar4 + 0x20)) = 0x3030303030303030;
            *(undefined8 *)((long)puVar16 + (ulong)(uVar4 + 0x28)) = 0x3030303030303030;
            *(undefined8 *)((long)puVar16 + (ulong)(uVar4 + 0x30)) = 0x3030303030303030;
            *(undefined8 *)((long)puVar16 + (ulong)(uVar4 + 0x38)) = 0x3030303030303030;
            uVar4 = uVar5;
          } while (uVar5 < uVar13);
        }
      }
    }
LAB_00119f54:
    uVar8 = (ulong)((int)uVar8 - uVar15);
  }
  else {
    if (param_3 == 0x75) {
      FUN_001198b0(param_1,2);
      uVar15 = 4;
      **(undefined2 **)(param_1 + 8) = 0x755c;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 2;
      if (uVar11 == 0) goto LAB_0011a2fe;
    }
    else {
      if (param_3 == 0x77) {
        FUN_001198b0(param_1,2);
        uVar15 = 8;
        **(undefined2 **)(param_1 + 8) = 0x555c;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 2;
        goto joined_r0x0011a2f8;
      }
      if (local_50 == (undefined  [8])0x0) goto LAB_00119fa4;
      uVar15 = 0;
    }
LAB_00119ea7:
    uVar8 = 0x13;
    while( true ) {
      uVar13 = (uint)uVar11 & 0xf;
      cVar2 = (char)uVar13;
      if (uVar13 < 10) {
        (&stack0xffffffffffffffc0)[uVar8 - 8] = cVar2 + '0';
      }
      else {
        (&stack0xffffffffffffffc0)[uVar8 - 8] = cVar2 + 'W';
      }
      if (uVar11 >> 4 == 0) break;
      uVar8 = uVar8 - 1;
      uVar11 = uVar11 >> 4;
    }
    local_50 = (undefined  [8])0x0;
    uVar15 = (uVar15 - 0x14) + (int)uVar8;
    if (0 < (int)uVar15) goto LAB_00119efc;
  }
  lVar10 = (long)(int)uVar8;
  uVar11 = 0x14 - lVar10;
  FUN_001198b0(param_1,uVar11);
  puVar16 = *(undefined8 **)(param_1 + 8);
  puVar7 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar10 + -8);
  uVar15 = (uint)uVar11;
  if (uVar15 < 8) {
    if ((uVar11 & 4) == 0) {
      if ((uVar15 != 0) && (*(undefined *)puVar16 = *(undefined *)puVar7, (uVar11 & 2) != 0)) {
        *(undefined2 *)((long)puVar16 + ((uVar11 & 0xffffffff) - 2)) =
             *(undefined2 *)(local_50 + (uVar11 & 0xffffffff) + lVar10 + 6);
      }
    }
    else {
      *(undefined4 *)puVar16 = *(undefined4 *)puVar7;
      *(undefined4 *)((long)puVar16 + ((uVar11 & 0xffffffff) - 4)) =
           *(undefined4 *)(local_50 + (uVar11 & 0xffffffff) + lVar10 + 4);
    }
  }
  else {
    puVar18 = (undefined8 *)((ulong)(puVar16 + 1) & 0xfffffffffffffff8);
    *puVar16 = *puVar7;
    *(undefined8 *)((long)puVar16 + ((uVar11 & 0xffffffff) - 8)) =
         *(undefined8 *)(local_50 + (uVar11 & 0xffffffff) + lVar10);
    puVar7 = (undefined8 *)((long)puVar7 - ((long)puVar16 - (long)puVar18));
    uVar15 = (int)((long)puVar16 - (long)puVar18) + uVar15 & 0xfffffff8;
    if (7 < uVar15) {
      uVar8 = 8;
      uVar13 = uVar15 - 1 >> 3 & 7;
      *puVar18 = *puVar7;
      if (8 < uVar15) {
        if (uVar13 != 0) {
          uVar9 = uVar8;
          if (uVar13 != 1) {
            if (uVar13 != 2) {
              if (uVar13 != 3) {
                if (uVar13 != 4) {
                  if (uVar13 != 5) {
                    if (uVar13 != 6) {
                      uVar8 = 0x10;
                      puVar18[1] = puVar7[1];
                    }
                    uVar9 = (ulong)((int)uVar8 + 8);
                    *(undefined8 *)((long)puVar18 + uVar8) = *(undefined8 *)((long)puVar7 + uVar8);
                  }
                  uVar8 = (ulong)((int)uVar9 + 8);
                  *(undefined8 *)((long)puVar18 + uVar9) = *(undefined8 *)((long)puVar7 + uVar9);
                }
                uVar9 = (ulong)((int)uVar8 + 8);
                *(undefined8 *)((long)puVar18 + uVar8) = *(undefined8 *)((long)puVar7 + uVar8);
              }
              uVar8 = (ulong)((int)uVar9 + 8);
              *(undefined8 *)((long)puVar18 + uVar9) = *(undefined8 *)((long)puVar7 + uVar9);
            }
            uVar9 = (ulong)((int)uVar8 + 8);
            *(undefined8 *)((long)puVar18 + uVar8) = *(undefined8 *)((long)puVar7 + uVar8);
          }
          uVar13 = (int)uVar9 + 8;
          uVar8 = (ulong)uVar13;
          *(undefined8 *)((long)puVar18 + uVar9) = *(undefined8 *)((long)puVar7 + uVar9);
          if (uVar15 <= uVar13) goto LAB_00119f9f;
        }
        do {
          *(undefined8 *)((long)puVar18 + uVar8) = *(undefined8 *)((long)puVar7 + uVar8);
          iVar1 = (int)uVar8;
          *(undefined8 *)((long)puVar18 + (ulong)(iVar1 + 8)) =
               *(undefined8 *)((long)puVar7 + (ulong)(iVar1 + 8));
          uVar8 = (ulong)(iVar1 + 0x40U);
          *(undefined8 *)((long)puVar18 + (ulong)(iVar1 + 0x10)) =
               *(undefined8 *)((long)puVar7 + (ulong)(iVar1 + 0x10));
          *(undefined8 *)((long)puVar18 + (ulong)(iVar1 + 0x18)) =
               *(undefined8 *)((long)puVar7 + (ulong)(iVar1 + 0x18));
          *(undefined8 *)((long)puVar18 + (ulong)(iVar1 + 0x20)) =
               *(undefined8 *)((long)puVar7 + (ulong)(iVar1 + 0x20));
          *(undefined8 *)((long)puVar18 + (ulong)(iVar1 + 0x28)) =
               *(undefined8 *)((long)puVar7 + (ulong)(iVar1 + 0x28));
          *(undefined8 *)((long)puVar18 + (ulong)(iVar1 + 0x30)) =
               *(undefined8 *)((long)puVar7 + (ulong)(iVar1 + 0x30));
          *(undefined8 *)((long)puVar18 + (ulong)(iVar1 + 0x38)) =
               *(undefined8 *)((long)puVar7 + (ulong)(iVar1 + 0x38));
        } while (iVar1 + 0x40U < uVar15);
      }
    }
  }
LAB_00119f9f:
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar11;
LAB_00119fa4:
  FUN_001198b0(param_1,1);
  **(undefined **)(param_1 + 8) = 0x27;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  return pbVar12;
}


////>>0x0011a5d0>>FUN_0011a5d0>>////

byte * FUN_0011a5d0(long param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  
  if (((*param_2 == 0x4e) && (param_2[1] == 0x41)) && (param_2[2] == 0x4e)) {
    FUN_001198b0(param_1,3);
    puVar3 = *(undefined2 **)(param_1 + 8);
    *puVar3 = 0x614e;
    *(undefined *)(puVar3 + 1) = 0x4e;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 3;
    return param_2 + 3;
  }
  if (((*param_2 == 0x49) && (param_2[1] == 0x4e)) && (param_2[2] == 0x46)) {
    FUN_001198b0(param_1,3);
    puVar3 = *(undefined2 **)(param_1 + 8);
    *puVar3 = 0x6e49;
    *(undefined *)(puVar3 + 1) = 0x66;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 3;
    return param_2 + 3;
  }
  iVar5 = strncmp((char *)param_2,"NINF",4);
  if (iVar5 == 0) {
    FUN_001198b0(param_1,4);
    **(undefined4 **)(param_1 + 8) = 0x666e492d;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 4;
    return param_2 + 4;
  }
  if (*param_2 == 0x4e) {
    param_2 = param_2 + 1;
    FUN_001198b0(param_1,1);
    **(undefined **)(param_1 + 8) = 0x2d;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    bVar1 = (&DAT_0011fbc1)[(ulong)*param_2 * 2];
  }
  else {
    bVar1 = (&DAT_0011fbc1)[(ulong)*param_2 * 2];
  }
  if ((bVar1 & 1) != 0) {
    FUN_001198b0(param_1,2);
    **(undefined2 **)(param_1 + 8) = 0x7830;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 2;
    FUN_001198b0(param_1,1);
    **(byte **)(param_1 + 8) = *param_2;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    FUN_001198b0(param_1,1);
    **(undefined **)(param_1 + 8) = 0x2e;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    bVar1 = param_2[1];
    bVar2 = (&DAT_0011fbc1)[(ulong)bVar1 * 2];
    pbVar4 = param_2 + 1;
    while ((bVar2 & 1) != 0) {
      FUN_001198b0(param_1,1);
      **(byte **)(param_1 + 8) = *pbVar4;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
      bVar2 = (&DAT_0011fbc1)[(ulong)bVar1 * 2];
    }
    if (bVar1 == 0x50) {
      FUN_001198b0(param_1,1);
      **(undefined **)(param_1 + 8) = 0x70;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      uVar6 = (ulong)pbVar4[1];
      pbVar7 = pbVar4 + 1;
      if (pbVar4[1] == 0x4e) {
        FUN_001198b0(param_1,1);
        **(undefined **)(param_1 + 8) = 0x2d;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
        uVar6 = (ulong)pbVar4[2];
        pbVar7 = pbVar4 + 2;
      }
      while (((&DAT_0011fbc0)[uVar6 * 2] & 4) != 0) {
        FUN_001198b0(param_1,1);
        **(byte **)(param_1 + 8) = *pbVar7;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
        uVar6 = (ulong)pbVar7[1];
        pbVar7 = pbVar7 + 1;
      }
      return pbVar7;
    }
  }
  return (byte *)0x0;
}


////>>0x0011a880>>FUN_0011a880>>////

char * FUN_0011a880(long param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != (char *)0x0) {
    while (cVar1 = *param_2, cVar1 != '\0') {
      if (cVar1 == 'x') {
        FUN_001198b0(param_1,6);
        puVar2 = *(undefined4 **)(param_1 + 8);
        *puVar2 = 0x6e6f6320;
        *(undefined2 *)(puVar2 + 1) = 0x7473;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 6;
        return param_2 + 1;
      }
      if ('x' < cVar1) {
        if (cVar1 == 'y') {
          FUN_001198b0(param_1,10);
          puVar3 = *(undefined8 **)(param_1 + 8);
          *puVar3 = 0x626174756d6d6920;
          *(undefined2 *)(puVar3 + 1) = 0x656c;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 10;
          return param_2 + 1;
        }
        return param_2;
      }
      if (cVar1 == 'N') {
        if (param_2[1] != 'g') {
          return (char *)0x0;
        }
        param_2 = param_2 + 2;
        FUN_001198b0(param_1,6);
        puVar2 = *(undefined4 **)(param_1 + 8);
        *puVar2 = 0x6f6e6920;
        *(undefined2 *)(puVar2 + 1) = 0x7475;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 6;
      }
      else {
        if (cVar1 != 'O') {
          return param_2;
        }
        param_2 = param_2 + 1;
        FUN_001198b0(param_1,7);
        puVar2 = *(undefined4 **)(param_1 + 8);
        *puVar2 = 0x61687320;
        *(undefined4 *)((long)puVar2 + 3) = 0x64657261;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 7;
      }
    }
  }
  return (char *)0x0;
}


////>>0x0011a9b0>>FUN_0011a9b0>>////

/* WARNING: Type propagation algorithm not settling */

byte * FUN_0011a9b0(long *param_1,byte *param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  size_t __n;
  void *__src;
  long lVar8;
  int iVar9;
  undefined local_58 [16];
  undefined8 local_48;
  
  lVar8 = 0;
  do {
    bVar1 = *param_2;
    lVar7 = lVar8;
    while (bVar1 != 0x30) {
      lVar8 = lVar7 + 1;
      if (lVar7 != 0) {
        FUN_001198b0(param_1,1);
        *(undefined *)param_1[1] = 0x2e;
        param_1[1] = param_1[1] + 1;
      }
      param_2 = (byte *)FUN_0011cf40(param_1,param_2,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
      if (*param_2 == 0x4d) {
        if (*param_1 == param_1[1]) {
          local_48 = 0;
          local_58 = (undefined  [16])0x0;
          uVar4 = FUN_0011a880(local_58,param_2 + 1);
          lVar7 = *param_1;
          lVar5 = param_1[1];
          if (lVar7 != lVar5) {
            iVar3 = 0;
            goto LAB_0011aad5;
          }
          iVar3 = 0;
          __src = (void *)local_58._0_8_;
        }
        else {
          iVar9 = (int)param_1[1] - (int)*param_1;
          local_48 = 0;
          local_58 = (undefined  [16])0x0;
          uVar4 = FUN_0011a880(local_58,param_2 + 1);
          lVar7 = *param_1;
          lVar5 = param_1[1];
          iVar3 = iVar9;
          if (lVar5 != lVar7) {
LAB_0011aad5:
            iVar9 = iVar3 - ((int)lVar5 - (int)lVar7);
          }
          __src = (void *)local_58._0_8_;
          if (iVar9 < 0) {
            param_1[1] = lVar7 + iVar3;
          }
        }
        pbVar6 = (byte *)FUN_0011b750(param_1,0,0,uVar4,param_3);
        if (param_4 != 0) {
LAB_0011ab16:
          if (((void *)local_58._8_8_ != __src) &&
             (__n = (size_t)(local_58._8_4_ - (int)__src), __n != 0)) {
            FUN_001198b0(param_1,__n);
            memcpy((void *)param_1[1],__src,__n);
            param_1[1] = param_1[1] + __n;
          }
        }
LAB_0011ab70:
        if ((pbVar6 == (byte *)0x0) || (*pbVar6 == 0)) {
          lVar7 = *param_1;
          iVar9 = iVar3 - ((int)param_1[1] - (int)lVar7);
          if (param_1[1] == lVar7) {
            iVar9 = iVar3;
          }
          pbVar6 = param_2;
          if (iVar9 < 0) {
            param_1[1] = lVar7 + iVar3;
          }
        }
        if (__src != (void *)0x0) {
          free(__src);
        }
        iVar3 = FUN_001167f0(pbVar6,param_3);
        param_2 = pbVar6;
        goto joined_r0x0011ac40;
      }
      uVar2 = *param_2 - 0x46;
      if (0x13 < (byte)uVar2) {
        iVar3 = FUN_001167f0(param_2,param_3);
        goto joined_r0x0011ac40;
      }
      if ((0xb9001UL >> ((ulong)uVar2 & 0x3f) & 1) != 0) {
        local_58 = (undefined  [16])0x0;
        local_48 = 0;
        iVar3 = 0;
        if (*param_1 != param_1[1]) {
          iVar3 = (int)param_1[1] - (int)*param_1;
        }
        pbVar6 = (byte *)FUN_0011b750(param_1,0,0,param_2,param_3);
        if (param_4 != 0) {
          __src = (void *)0x0;
          goto LAB_0011ab16;
        }
        __src = (void *)0x0;
        goto LAB_0011ab70;
      }
      iVar3 = FUN_001167f0(param_2,param_3);
      if (iVar3 == 0) {
        return param_2;
      }
      lVar7 = lVar8;
      bVar1 = *param_2;
    }
    do {
      param_2 = param_2 + 1;
    } while (*param_2 == 0x30);
    iVar3 = FUN_001167f0(param_2,param_3);
    lVar8 = lVar7;
joined_r0x0011ac40:
    if (iVar3 == 0) {
      return param_2;
    }
  } while( true );
}


////>>0x0011acb0>>FUN_0011acb0>>////

/* WARNING: Type propagation algorithm not settling */

char * FUN_0011acb0(long param_1,char *param_2,undefined8 param_3)

{
  long lVar1;
  byte *pbVar2;
  char cVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  void *pvVar10;
  size_t sVar11;
  byte *pbVar12;
  undefined local_48 [16];
  undefined8 local_38;
  
  if (param_2 == (char *)0x0) {
    return (char *)0;
  }
  if (*param_2 == '\0') {
    return (char *)0;
  }
  switch(*param_2) {
  case 'A':
    pcVar7 = (char *)FUN_0011acb0(param_1,param_2 + 1,param_3);
    FUN_001198b0(param_1,2);
    **(undefined2 **)(param_1 + 8) = 0x5d5b;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 2;
    return pcVar7;
  case 'B':
    pcVar7 = (char *)FUN_001166e0(param_2 + 1,local_48);
    if (pcVar7 == (char *)0x0) {
      return (char *)0;
    }
    FUN_001198b0(param_1,7);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x6c707554;
    *(undefined4 *)((long)puVar8 + 3) = 0x2821656c;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 7;
    while( true ) {
      lVar6 = local_48._0_8_;
      lVar1 = local_48._0_8_ + -1;
      local_48._0_8_ = lVar1;
      if (lVar6 == 0) break;
      pcVar7 = (char *)FUN_0011acb0(param_1,pcVar7,param_3);
      if (pcVar7 == (char *)0x0) {
        return (char *)0;
      }
      if (lVar1 != 0) {
        FUN_001198b0(param_1,2);
        **(undefined2 **)(param_1 + 8) = 0x202c;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 2;
      }
    }
    goto LAB_0011afb5;
  case 'C':
  case 'E':
  case 'S':
  case 'T':
    pcVar7 = (char *)FUN_0011a9b0(param_1,param_2 + 1,param_3,0);
    return pcVar7;
  case 'D':
    local_38 = 0;
    local_48 = (undefined  [16])0x0;
    pcVar7 = (char *)FUN_0011a880(local_48,param_2 + 1);
    pvVar10 = (void *)local_48._0_8_;
    if (local_48._8_8_ == local_48._0_8_) {
      sVar11 = 0;
      if (pcVar7 != (char *)0x0) goto LAB_0011ad9d;
      FUN_001198b0(param_1,8);
      **(undefined8 **)(param_1 + 8) = 0x65746167656c6564;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    }
    else {
      sVar11 = (size_t)(local_48._8_4_ - local_48._0_4_);
      if (pcVar7 != (char *)0x0) {
LAB_0011ad9d:
        if (*pcVar7 == 'Q') {
          pcVar7 = (char *)FUN_0011c000(param_1,pcVar7,param_3,1);
        }
        else if (*pcVar7 == '\0') {
          pcVar7 = (char *)0x0;
        }
        else {
          pcVar7 = (char *)FUN_0011be70(param_1,pcVar7,param_3);
        }
      }
      FUN_001198b0(param_1,8);
      **(undefined8 **)(param_1 + 8) = 0x65746167656c6564;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      if (sVar11 != 0) {
        FUN_001198b0(param_1,sVar11);
        memcpy(*(void **)(param_1 + 8),pvVar10,sVar11);
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + sVar11;
        goto LAB_0011adfa;
      }
    }
    goto joined_r0x0011b5f9;
  case 'F':
  case 'R':
  case 'U':
  case 'V':
  case 'W':
  case 'Y':
    goto switchD_0011ace6_caseD_46;
  case 'G':
    if (((&DAT_0011fbc0)[(ulong)(byte)param_2[1] * 2] & 4) == 0) {
      pcVar7 = (char *)FUN_0011acb0(param_1,param_2 + 1,param_3);
      FUN_001198b0(param_1,1);
      **(undefined **)(param_1 + 8) = 0x5b;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    }
    else {
      pbVar2 = (byte *)(param_2 + 2);
      do {
        pbVar12 = pbVar2;
        pbVar2 = pbVar12 + 1;
      } while (((&DAT_0011fbc0)[(ulong)*pbVar12 * 2] & 4) != 0);
      pcVar7 = (char *)FUN_0011acb0(param_1,pbVar12,param_3);
      pbVar12 = pbVar12 + (-1 - (long)param_2);
      FUN_001198b0(param_1,1);
      **(undefined **)(param_1 + 8) = 0x5b;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      if (pbVar12 != (byte *)0x0) {
        FUN_001198b0(param_1,pbVar12);
        memcpy(*(void **)(param_1 + 8),param_2 + 1,(size_t)pbVar12);
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + (long)pbVar12;
      }
    }
    FUN_001198b0(param_1,1);
    **(undefined **)(param_1 + 8) = 0x5d;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    return pcVar7;
  case 'H':
    local_38 = 0;
    local_48 = (undefined  [16])0x0;
    uVar9 = FUN_0011acb0(local_48,param_2 + 1,param_3);
    if (local_48._0_8_ == local_48._8_8_) {
      pcVar7 = (char *)FUN_0011acb0(param_1,uVar9,param_3);
      FUN_001198b0(param_1,1);
      **(undefined **)(param_1 + 8) = 0x5b;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    }
    else {
      sVar11 = (size_t)(local_48._8_4_ - local_48._0_4_);
      pcVar7 = (char *)FUN_0011acb0(param_1,uVar9,param_3);
      FUN_001198b0(param_1,1);
      **(undefined **)(param_1 + 8) = 0x5b;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      if (sVar11 != 0) {
        pvVar10 = (void *)local_48._0_8_;
        FUN_001198b0(param_1,sVar11);
        memcpy(*(void **)(param_1 + 8),pvVar10,sVar11);
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + sVar11;
      }
    }
    FUN_001198b0(param_1,1);
    **(undefined **)(param_1 + 8) = 0x5d;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    pvVar10 = (void *)local_48._0_8_;
joined_r0x0011b5f9:
    if (pvVar10 == (void *)0x0) {
      return pcVar7;
    }
LAB_0011adfa:
    free(pvVar10);
    return pcVar7;
  default:
    return (char *)0x0;
  case 'N':
    cVar3 = param_2[1];
    if (cVar3 == 'g') {
      param_2 = param_2 + 2;
      FUN_001198b0(param_1,6);
      puVar8 = *(undefined4 **)(param_1 + 8);
      *puVar8 = 0x756f6e69;
      goto LAB_0011b178;
    }
    if (cVar3 != 'h') {
      if (cVar3 == 'n') {
        FUN_001198b0(param_1,0xd);
        puVar5 = *(undefined8 **)(param_1 + 8);
        *puVar5 = 0x2a28666f65707974;
        *(undefined8 *)((long)puVar5 + 5) = 0x296c6c756e2a2866;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0xd;
        return param_2 + 2;
      }
      return (char *)0x0;
    }
    param_2 = param_2 + 2;
    FUN_001198b0(param_1,9);
    puVar5 = *(undefined8 **)(param_1 + 8);
    *puVar5 = 0x726f746365765f5f;
    *(undefined *)(puVar5 + 1) = 0x28;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 9;
    break;
  case 'O':
    param_2 = param_2 + 1;
    FUN_001198b0(param_1,7);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x72616873;
    *(undefined4 *)((long)puVar8 + 3) = 0x28646572;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 7;
    break;
  case 'P':
    pbVar2 = (byte *)(param_2 + 1);
    param_2 = param_2 + 1;
    if ((0x13 < (byte)(*pbVar2 - 0x46)) ||
       ((0xb9001UL >> ((ulong)(*pbVar2 - 0x46) & 0x3f) & 1) == 0)) {
      pcVar7 = (char *)FUN_0011acb0(param_1,param_2,param_3);
      FUN_001198b0(param_1,1);
      **(undefined **)(param_1 + 8) = 0x2a;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      return pcVar7;
    }
    goto switchD_0011ace6_caseD_46;
  case 'Q':
    pcVar7 = (char *)FUN_0011c000(param_1,param_2,param_3,0);
    return pcVar7;
  case 'a':
    FUN_001198b0(param_1,4);
    **(undefined4 **)(param_1 + 8) = 0x72616863;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 4;
    return param_2 + 1;
  case 'b':
    FUN_001198b0(param_1,4);
    **(undefined4 **)(param_1 + 8) = 0x6c6f6f62;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 4;
    return param_2 + 1;
  case 'c':
    FUN_001198b0(param_1,5);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x61657263;
    *(undefined *)(puVar8 + 1) = 0x6c;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 5;
    return param_2 + 1;
  case 'd':
    FUN_001198b0(param_1,6);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x62756f64;
    *(undefined2 *)(puVar8 + 1) = 0x656c;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 6;
    return param_2 + 1;
  case 'e':
    FUN_001198b0(param_1,4);
    **(undefined4 **)(param_1 + 8) = 0x6c616572;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 4;
    return param_2 + 1;
  case 'f':
    FUN_001198b0(param_1,5);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x616f6c66;
    *(undefined *)(puVar8 + 1) = 0x74;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 5;
    return param_2 + 1;
  case 'g':
    FUN_001198b0(param_1,4);
    **(undefined4 **)(param_1 + 8) = 0x65747962;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 4;
    return param_2 + 1;
  case 'h':
    FUN_001198b0(param_1,5);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x74796275;
    *(undefined *)(puVar8 + 1) = 0x65;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 5;
    return param_2 + 1;
  case 'i':
    FUN_001198b0(param_1,3);
    puVar4 = *(undefined2 **)(param_1 + 8);
    *puVar4 = 0x6e69;
    *(undefined *)(puVar4 + 1) = 0x74;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 3;
    return param_2 + 1;
  case 'j':
    FUN_001198b0(param_1,5);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x61657269;
    *(undefined *)(puVar8 + 1) = 0x6c;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 5;
    return param_2 + 1;
  case 'k':
    FUN_001198b0(param_1,4);
    **(undefined4 **)(param_1 + 8) = 0x746e6975;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 4;
    return param_2 + 1;
  case 'l':
    FUN_001198b0(param_1,4);
    **(undefined4 **)(param_1 + 8) = 0x676e6f6c;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 4;
    return param_2 + 1;
  case 'm':
    FUN_001198b0(param_1,5);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x6e6f6c75;
    *(undefined *)(puVar8 + 1) = 0x67;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 5;
    return param_2 + 1;
  case 'n':
    FUN_001198b0(param_1,0xc);
    puVar5 = *(undefined8 **)(param_1 + 8);
    *puVar5 = 0x6e28666f65707974;
    *(undefined4 *)(puVar5 + 1) = 0x296c6c75;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0xc;
    return param_2 + 1;
  case 'o':
    FUN_001198b0(param_1,6);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x6f6c6669;
    *(undefined2 *)(puVar8 + 1) = 0x7461;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 6;
    return param_2 + 1;
  case 'p':
    FUN_001198b0(param_1,7);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x756f6469;
    *(undefined4 *)((long)puVar8 + 3) = 0x656c6275;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 7;
    return param_2 + 1;
  case 'q':
    FUN_001198b0(param_1,6);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x6f6c6663;
    *(undefined2 *)(puVar8 + 1) = 0x7461;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 6;
    return param_2 + 1;
  case 'r':
    FUN_001198b0(param_1,7);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x756f6463;
    *(undefined4 *)((long)puVar8 + 3) = 0x656c6275;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 7;
    return param_2 + 1;
  case 's':
    FUN_001198b0(param_1,5);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x726f6873;
    *(undefined *)(puVar8 + 1) = 0x74;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 5;
    return param_2 + 1;
  case 't':
    FUN_001198b0(param_1,6);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x6f687375;
    *(undefined2 *)(puVar8 + 1) = 0x7472;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 6;
    return param_2 + 1;
  case 'u':
    FUN_001198b0(param_1,5);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x61686377;
    *(undefined *)(puVar8 + 1) = 0x72;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 5;
    return param_2 + 1;
  case 'v':
    FUN_001198b0(param_1,4);
    **(undefined4 **)(param_1 + 8) = 0x64696f76;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 4;
    return param_2 + 1;
  case 'w':
    FUN_001198b0(param_1,5);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x61686364;
    *(undefined *)(puVar8 + 1) = 0x72;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 5;
    return param_2 + 1;
  case 'x':
    param_2 = param_2 + 1;
    FUN_001198b0(param_1,6);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x736e6f63;
LAB_0011b178:
    *(undefined2 *)(puVar8 + 1) = 0x2874;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 6;
    break;
  case 'y':
    param_2 = param_2 + 1;
    FUN_001198b0(param_1,10);
    puVar5 = *(undefined8 **)(param_1 + 8);
    *puVar5 = 0x6c626174756d6d69;
    *(undefined2 *)(puVar5 + 1) = 0x2865;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 10;
    break;
  case 'z':
    if (param_2[1] == 'i') {
      FUN_001198b0(param_1,4);
      **(undefined4 **)(param_1 + 8) = 0x746e6563;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 4;
      return param_2 + 2;
    }
    if (param_2[1] != 'k') {
      return (char *)0;
    }
    FUN_001198b0(param_1,5);
    puVar8 = *(undefined4 **)(param_1 + 8);
    *puVar8 = 0x6e656375;
    *(undefined *)(puVar8 + 1) = 0x74;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 5;
    return param_2 + 2;
  }
  pcVar7 = (char *)FUN_0011acb0(param_1,param_2,param_3);
LAB_0011afb5:
  FUN_001198b0(param_1,1);
  **(undefined **)(param_1 + 8) = 0x29;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  return pcVar7;
switchD_0011ace6_caseD_46:
  pcVar7 = (char *)FUN_0011be70(param_1,param_2,param_3);
  FUN_001198b0(param_1,8);
  **(undefined8 **)(param_1 + 8) = 0x6e6f6974636e7566;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  return pcVar7;
}


////>>0x0011b750>>FUN_0011b750>>////

/* WARNING: Type propagation algorithm not settling */

char * FUN_0011b750(undefined *param_1,undefined *param_2,undefined *param_3,char *param_4,
                   undefined8 param_5)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  char *pcVar3;
  char cVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  long lVar9;
  undefined local_58 [16];
  undefined8 local_48;
  
  local_58 = (undefined  [16])0x0;
  local_48 = 0;
  if (param_2 == (undefined *)0x0) {
    param_2 = local_58;
  }
  if (param_4 == (char *)0x0) {
    if (param_1 == (undefined *)0x0) {
      return (char *)0x0;
    }
LAB_0011b7bd:
    pcVar6 = (char *)0x0;
    FUN_001198b0(param_1,1);
    **(undefined **)(param_1 + 8) = 0x28;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
LAB_0011b7e8:
    FUN_001198b0(param_1,1);
    **(undefined **)(param_1 + 8) = 0x29;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  }
  else {
    if (*param_4 == '\0') {
joined_r0x0011b7bb:
      if (param_1 == (undefined *)0x0) {
        pcVar6 = (char *)0x0;
        goto LAB_0011b807;
      }
      goto LAB_0011b7bd;
    }
    switch(*param_4) {
    case 'F':
      if (param_3 == (undefined *)0x0) {
        param_3 = local_58;
      }
      break;
    default:
      goto joined_r0x0011b7bb;
    case 'R':
      FUN_001198b0(param_2,0xc);
      puVar1 = *(undefined8 **)(param_2 + 8);
      *puVar1 = 0x43286e7265747865;
      *(undefined4 *)(puVar1 + 1) = 0x20292b2b;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0xc;
      if (param_3 == (undefined *)0x0) {
        param_3 = local_58;
      }
      break;
    case 'U':
      FUN_001198b0(param_2,10);
      puVar1 = *(undefined8 **)(param_2 + 8);
      *puVar1 = 0x43286e7265747865;
      *(undefined2 *)(puVar1 + 1) = 0x2029;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 10;
      if (param_3 == (undefined *)0x0) {
        param_3 = local_58;
      }
      break;
    case 'V':
      FUN_001198b0(param_2,0xf);
      puVar1 = *(undefined8 **)(param_2 + 8);
      *puVar1 = 0x50286e7265747865;
      *(undefined8 *)((long)puVar1 + 7) = 0x20296c6163736150;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0xf;
      if (param_3 == (undefined *)0x0) {
        param_3 = local_58;
      }
      break;
    case 'W':
      FUN_001198b0(param_2,0x10);
      puVar1 = *(undefined8 **)(param_2 + 8);
      *puVar1 = 0x57286e7265747865;
      puVar1[1] = 0x202973776f646e69;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x10;
      if (param_3 == (undefined *)0x0) {
        param_3 = local_58;
      }
      break;
    case 'Y':
      FUN_001198b0(param_2,0x14);
      puVar1 = *(undefined8 **)(param_2 + 8);
      *(undefined4 *)(puVar1 + 2) = 0x2029432d;
      *puVar1 = 0x4f286e7265747865;
      puVar1[1] = 0x6576697463656a62;
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x14;
      if (param_3 == (undefined *)0x0) {
        param_3 = local_58;
      }
    }
    cVar4 = param_4[1];
    if (cVar4 == '\0') goto joined_r0x0011b7bb;
    pcVar7 = param_4 + 3;
    pcVar6 = param_4 + 1;
    while (pcVar3 = pcVar7, cVar4 == 'N') {
      switch(pcVar3[-1]) {
      case 'a':
        FUN_001198b0(param_3,5);
        puVar5 = *(undefined4 **)(param_3 + 8);
        *puVar5 = 0x65727570;
        *(undefined *)(puVar5 + 1) = 0x20;
        lVar9 = *(long *)(param_3 + 8) + 5;
        break;
      case 'b':
        FUN_001198b0(param_3,8);
        **(undefined8 **)(param_3 + 8) = 0x20776f7268746f6e;
        lVar9 = *(long *)(param_3 + 8) + 8;
        break;
      case 'c':
        FUN_001198b0(param_3,4);
        **(undefined4 **)(param_3 + 8) = 0x20666572;
        lVar9 = *(long *)(param_3 + 8) + 4;
        break;
      case 'd':
        FUN_001198b0(param_3,10);
        puVar1 = *(undefined8 **)(param_3 + 8);
        *puVar1 = 0x747265706f727040;
        *(undefined2 *)(puVar1 + 1) = 0x2079;
        lVar9 = *(long *)(param_3 + 8) + 10;
        break;
      case 'e':
        FUN_001198b0(param_3,9);
        puVar1 = *(undefined8 **)(param_3 + 8);
        *puVar1 = 0x6465747375727440;
        *(undefined *)(puVar1 + 1) = 0x20;
        lVar9 = *(long *)(param_3 + 8) + 9;
        break;
      case 'f':
        FUN_001198b0(param_3,6);
        puVar5 = *(undefined4 **)(param_3 + 8);
        *puVar5 = 0x66617340;
        goto LAB_0011b8c7;
      case 'g':
      case 'h':
      case 'k':
      case 'n':
        pcVar6 = pcVar3 + -2;
        goto LAB_0011bbc0;
      case 'i':
        FUN_001198b0(param_3,6);
        puVar5 = *(undefined4 **)(param_3 + 8);
        *puVar5 = 0x676f6e40;
        *(undefined2 *)(puVar5 + 1) = 0x2063;
        *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 6;
        cVar4 = *pcVar3;
        goto joined_r0x0011b912;
      case 'j':
        FUN_001198b0(param_3,7);
        puVar5 = *(undefined4 **)(param_3 + 8);
        *puVar5 = 0x75746572;
        *(undefined4 *)((long)puVar5 + 3) = 0x206e7275;
        *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 7;
        cVar4 = *pcVar3;
        goto joined_r0x0011b912;
      case 'l':
        FUN_001198b0(param_3,6);
        puVar5 = *(undefined4 **)(param_3 + 8);
        *puVar5 = 0x706f6373;
        goto LAB_0011b8c7;
      case 'm':
        FUN_001198b0(param_3,6);
        puVar5 = *(undefined4 **)(param_3 + 8);
        *puVar5 = 0x76696c40;
LAB_0011b8c7:
        *(undefined2 *)(puVar5 + 1) = 0x2065;
        *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 6;
        cVar4 = *pcVar3;
        goto joined_r0x0011b912;
      default:
        goto joined_r0x0011b7bb;
      }
      *(long *)(param_3 + 8) = lVar9;
      cVar4 = *pcVar3;
joined_r0x0011b912:
      pcVar7 = pcVar3 + 2;
      pcVar6 = pcVar3;
    }
LAB_0011bbc0:
    puVar8 = local_58;
    if (param_1 != (undefined *)0x0) {
      FUN_001198b0(param_1,1);
      **(undefined **)(param_1 + 8) = 0x28;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      puVar8 = param_1;
    }
    lVar9 = 0;
    do {
      cVar4 = *pcVar6;
      if (cVar4 == '\0') break;
      if (cVar4 == 'Y') {
        if (lVar9 != 0) {
          FUN_001198b0(puVar8,2);
          **(undefined2 **)(puVar8 + 8) = 0x202c;
          *(long *)(puVar8 + 8) = *(long *)(puVar8 + 8) + 2;
        }
LAB_0011bc94:
        FUN_001198b0(puVar8,3);
        puVar2 = *(undefined2 **)(puVar8 + 8);
        *puVar2 = 0x2e2e;
        *(undefined *)(puVar2 + 1) = 0x2e;
        *(long *)(puVar8 + 8) = *(long *)(puVar8 + 8) + 3;
joined_r0x0011bccf:
        pcVar6 = pcVar6 + 1;
        break;
      }
      if (cVar4 == 'Z') goto joined_r0x0011bccf;
      if (cVar4 == 'X') goto LAB_0011bc94;
      if (lVar9 != 0) {
        FUN_001198b0(puVar8,2);
        **(undefined2 **)(puVar8 + 8) = 0x202c;
        *(long *)(puVar8 + 8) = *(long *)(puVar8 + 8) + 2;
        cVar4 = *pcVar6;
      }
      pcVar7 = pcVar6;
      if (cVar4 == 'M') {
        pcVar7 = pcVar6 + 1;
        FUN_001198b0(puVar8,6);
        puVar5 = *(undefined4 **)(puVar8 + 8);
        *puVar5 = 0x706f6373;
        *(undefined2 *)(puVar5 + 1) = 0x2065;
        *(long *)(puVar8 + 8) = *(long *)(puVar8 + 8) + 6;
        cVar4 = pcVar6[1];
      }
      pcVar6 = pcVar7;
      if (cVar4 == 'N') {
        if (pcVar7[1] == 'k') {
          pcVar6 = pcVar7 + 2;
          FUN_001198b0(puVar8,7);
          puVar5 = *(undefined4 **)(puVar8 + 8);
          *puVar5 = 0x75746572;
          *(undefined4 *)((long)puVar5 + 3) = 0x206e7275;
          *(long *)(puVar8 + 8) = *(long *)(puVar8 + 8) + 7;
          cVar4 = pcVar7[2];
          goto LAB_0011bc25;
        }
      }
      else {
LAB_0011bc25:
        if (cVar4 == 'J') {
          pcVar7 = pcVar6 + 1;
          FUN_001198b0(puVar8,4);
          **(undefined4 **)(puVar8 + 8) = 0x2074756f;
          *(long *)(puVar8 + 8) = *(long *)(puVar8 + 8) + 4;
        }
        else {
          pcVar7 = pcVar6;
          if (cVar4 < 'K') {
            if (cVar4 == 'I') {
              pcVar7 = pcVar6 + 1;
              FUN_001198b0(puVar8,3);
              puVar2 = *(undefined2 **)(puVar8 + 8);
              *puVar2 = 0x6e69;
              *(undefined *)(puVar2 + 1) = 0x20;
              *(long *)(puVar8 + 8) = *(long *)(puVar8 + 8) + 3;
              if (pcVar6[1] == 'K') {
                pcVar7 = pcVar6 + 2;
                goto LAB_0011bc3f;
              }
            }
          }
          else if (cVar4 == 'K') {
            pcVar7 = pcVar6 + 1;
LAB_0011bc3f:
            FUN_001198b0(puVar8,4);
            **(undefined4 **)(puVar8 + 8) = 0x20666572;
            *(long *)(puVar8 + 8) = *(long *)(puVar8 + 8) + 4;
          }
          else if (cVar4 == 'L') {
            FUN_001198b0(puVar8,5);
            puVar5 = *(undefined4 **)(puVar8 + 8);
            *puVar5 = 0x797a616c;
            *(undefined *)(puVar5 + 1) = 0x20;
            *(long *)(puVar8 + 8) = *(long *)(puVar8 + 8) + 5;
            pcVar7 = pcVar6 + 1;
          }
        }
      }
      lVar9 = lVar9 + 1;
      pcVar6 = (char *)FUN_0011acb0(puVar8,pcVar7,param_5);
    } while (pcVar6 != (char *)0x0);
    if (param_1 != (undefined *)0x0) goto LAB_0011b7e8;
  }
LAB_0011b807:
  if ((void *)local_58._0_8_ != (void *)0x0) {
    free((void *)local_58._0_8_);
  }
  return pcVar6;
}


////>>0x0011be70>>FUN_0011be70>>////

undefined8 FUN_0011be70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  void *pvVar3;
  undefined local_88 [16];
  undefined8 local_78;
  undefined local_68 [16];
  undefined8 local_58;
  undefined local_48 [16];
  undefined8 local_38;
  
  local_48 = (undefined  [16])0x0;
  local_68 = (undefined  [16])0x0;
  local_88 = (undefined  [16])0x0;
  local_38 = 0;
  local_58 = 0;
  local_78 = 0;
  uVar1 = FUN_0011b750(local_68,param_1,local_48,param_2,param_3);
  uVar1 = FUN_0011acb0(local_88,uVar1,param_3);
  pvVar3 = (void *)local_88._0_8_;
  if ((local_88._8_8_ == local_88._0_8_) ||
     (sVar2 = (size_t)(local_88._8_4_ - local_88._0_4_), sVar2 == 0)) {
    pvVar3 = (void *)local_68._0_8_;
    if (local_68._8_8_ != local_68._0_8_) goto LAB_0011bf02;
  }
  else {
    FUN_001198b0(param_1,sVar2);
    memcpy(*(void **)(param_1 + 8),pvVar3,sVar2);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + sVar2;
    pvVar3 = (void *)local_68._0_8_;
    if (local_68._8_8_ != local_68._0_8_) {
LAB_0011bf02:
      sVar2 = (size_t)((int)local_68._8_8_ - (int)pvVar3);
      if (sVar2 != 0) {
        FUN_001198b0(param_1,sVar2);
        memcpy(*(void **)(param_1 + 8),pvVar3,sVar2);
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + sVar2;
      }
    }
  }
  FUN_001198b0(param_1,1);
  **(undefined **)(param_1 + 8) = 0x20;
  pvVar3 = (void *)local_48._0_8_;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  if ((local_48._8_8_ == local_48._0_8_) ||
     (sVar2 = (size_t)(local_48._8_4_ - local_48._0_4_), sVar2 == 0)) {
    if ((void *)local_48._0_8_ == (void *)0x0) goto LAB_0011bf49;
  }
  else {
    FUN_001198b0(param_1,sVar2);
    memcpy(*(void **)(param_1 + 8),pvVar3,sVar2);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + sVar2;
  }
  free(pvVar3);
LAB_0011bf49:
  if ((void *)local_68._0_8_ != (void *)0x0) {
    free((void *)local_68._0_8_);
  }
  if ((void *)local_88._0_8_ != (void *)0x0) {
    free((void *)local_88._0_8_);
  }
  return uVar1;
}


////>>0x0011c000>>FUN_0011c000>>////

long FUN_0011c000(undefined8 param_1,char *param_2,long *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long local_40 [2];
  
  iVar1 = *(int *)(param_3 + 1);
  lVar3 = (long)param_2 - *param_3;
  if (iVar1 <= lVar3) {
    return 0;
  }
  *(int *)(param_3 + 1) = (int)lVar3;
  if ((((param_2 == (char *)0x0) || (*param_2 != 'Q')) ||
      (lVar2 = FUN_00116760(param_2 + 1,local_40), lVar2 == 0)) || (lVar3 < local_40[0])) {
    if (param_4 != 0) {
LAB_0011c0c0:
      *(int *)(param_3 + 1) = iVar1;
      return 0;
    }
    lVar2 = 0;
    lVar3 = FUN_0011acb0(param_1,0,param_3);
  }
  else {
    param_2 = param_2 + -local_40[0];
    if (param_4 != 0) {
      if (*param_2 == '\0') goto LAB_0011c0c0;
      lVar3 = FUN_0011be70(param_1,param_2,param_3);
      *(int *)(param_3 + 1) = iVar1;
      goto joined_r0x0011c0a4;
    }
    lVar3 = FUN_0011acb0(param_1,param_2,param_3);
  }
  *(int *)(param_3 + 1) = iVar1;
joined_r0x0011c0a4:
  if (lVar3 == 0) {
    return 0;
  }
  return lVar2;
}


////>>0x0011c0e0>>FUN_0011c0e0>>////

char * FUN_0011c0e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined local_28 [16];
  undefined8 local_18;
  
  pcVar1 = (char *)FUN_0011a9b0(param_1,param_2 + 2,param_3,1);
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == 'Z') {
      pcVar1 = pcVar1 + 1;
    }
    else {
      local_18 = 0;
      local_28 = (undefined  [16])0x0;
      pcVar1 = (char *)FUN_0011acb0(local_28,pcVar1,param_3);
      if ((void *)local_28._0_8_ != (void *)0x0) {
        free((void *)local_28._0_8_);
        return pcVar1;
      }
    }
  }
  return pcVar1;
}


////>>0x0011c160>>FUN_0011c160>>////

undefined2 * FUN_0011c160(long param_1,char *param_2,char *param_3,ulong param_4,undefined8 param_5)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  undefined2 *puVar5;
  char *pcVar6;
  size_t __n;
  long lVar7;
  long lVar8;
  char cVar9;
  byte bVar10;
  bool bVar11;
  long local_40 [2];
  
  if (param_2 == (char *)0x0) {
    return (undefined2 *)0x0;
  }
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    return (undefined2 *)0x0;
  }
  cVar9 = (char)param_4;
  switch(cVar1) {
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
    goto LAB_0011c1cf;
  case 'A':
    if (cVar9 == 'H') {
      puVar5 = (undefined2 *)FUN_001166e0(param_2 + 1,local_40);
      if (puVar5 != (undefined2 *)0x0) {
        FUN_001198b0(param_1,1);
        **(undefined **)(param_1 + 8) = 0x5b;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
        while (lVar7 = local_40[0] + -1, bVar11 = local_40[0] != 0, local_40[0] = lVar7, bVar11) {
          lVar8 = FUN_0011c160(param_1,puVar5,0,0,param_5);
          if (lVar8 == 0) {
            return (undefined2 *)0x0;
          }
          FUN_001198b0(param_1,1);
          **(undefined **)(param_1 + 8) = 0x3a;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
          puVar5 = (undefined2 *)FUN_0011c160(param_1,lVar8,0,0,param_5);
          if (puVar5 == (undefined2 *)0x0) {
            return (undefined2 *)0x0;
          }
          if (lVar7 != 0) {
            FUN_001198b0(param_1,2);
            **(undefined2 **)(param_1 + 8) = 0x202c;
            *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 2;
          }
        }
        goto LAB_0011c800;
      }
    }
    else {
      puVar5 = (undefined2 *)FUN_001166e0(param_2 + 1,local_40);
      if (puVar5 != (undefined2 *)0x0) {
        FUN_001198b0(param_1,1);
        **(undefined **)(param_1 + 8) = 0x5b;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
        while (lVar7 = local_40[0] + -1, bVar11 = local_40[0] != 0, local_40[0] = lVar7, bVar11) {
          puVar5 = (undefined2 *)FUN_0011c160(param_1,puVar5,0,0,param_5);
          if (puVar5 == (undefined2 *)0x0) {
            return (undefined2 *)0x0;
          }
          if (lVar7 != 0) {
            FUN_001198b0(param_1,2);
            **(undefined2 **)(param_1 + 8) = 0x202c;
            *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 2;
          }
        }
LAB_0011c800:
        FUN_001198b0(param_1,1);
        **(undefined **)(param_1 + 8) = 0x5d;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
        return puVar5;
      }
    }
    break;
  case 'N':
    param_2 = param_2 + 1;
    FUN_001198b0(param_1,1);
    param_4 = param_4 & 0xffffffff;
    **(undefined **)(param_1 + 8) = 0x2d;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    goto LAB_0011c1cf;
  case 'S':
    puVar5 = (undefined2 *)FUN_001166e0(param_2 + 1,local_40);
    if (puVar5 != (undefined2 *)0x0) {
      if (param_3 != (char *)0x0) {
        __n = strlen(param_3);
        FUN_001198b0(param_1,__n);
        memcpy(*(void **)(param_1 + 8),param_3,__n);
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + __n;
      }
      FUN_001198b0(param_1,1);
      **(undefined **)(param_1 + 8) = 0x28;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      while( true ) {
        lVar7 = local_40[0] + -1;
        if (local_40[0] == 0) {
          local_40[0] = lVar7;
          FUN_001198b0(param_1,1);
          **(undefined **)(param_1 + 8) = 0x29;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
          return puVar5;
        }
        local_40[0] = lVar7;
        puVar5 = (undefined2 *)FUN_0011c160(param_1,puVar5,0,0,param_5);
        if (puVar5 == (undefined2 *)0x0) break;
        if (lVar7 != 0) {
          FUN_001198b0(param_1,2);
          **(undefined2 **)(param_1 + 8) = 0x202c;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 2;
        }
      }
    }
    break;
  case 'a':
  case 'd':
  case 'w':
    pcVar6 = (char *)FUN_001166e0(param_2 + 1,local_40);
    if ((pcVar6 != (char *)0x0) && (*pcVar6 == '_')) {
      puVar5 = (undefined2 *)(pcVar6 + 1);
      FUN_001198b0(param_1,1);
      **(undefined **)(param_1 + 8) = 0x22;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      while( true ) {
        bVar11 = local_40[0] == 0;
        local_40[0] = local_40[0] + -1;
        if (bVar11) {
          FUN_001198b0(param_1,1);
          **(undefined **)(param_1 + 8) = 0x22;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
          if (cVar1 != 'a') {
            FUN_001198b0(param_1,1);
            **(char **)(param_1 + 8) = cVar1;
            *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
            return puVar5;
          }
          return puVar5;
        }
        if ((*(ushort *)(&DAT_0011fbc0 + (ulong)*(byte *)puVar5 * 2) & 0x100) == 0) break;
        bVar10 = *(byte *)((long)puVar5 + 1);
        uVar2 = *(ushort *)(&DAT_0011fbc0 + (ulong)bVar10 * 2);
        if ((uVar2 & 0x100) == 0) {
          return (undefined2 *)0x0;
        }
        bVar3 = *(byte *)puVar5 * '\x10';
        if ((*(ushort *)(&DAT_0011fbc0 + (ulong)*(byte *)puVar5 * 2) & 4) != 0) {
          if ((uVar2 & 4) == 0) goto LAB_0011c294;
LAB_0011c7aa:
          bVar3 = bVar3 | bVar10 - 0x30;
          switch(bVar3) {
          case 9:
            goto switchD_0011c2bf_caseD_9;
          case 10:
            goto switchD_0011c2bf_caseD_a;
          case 0xb:
            goto switchD_0011c2bf_caseD_b;
          case 0xc:
            goto switchD_0011c2bf_caseD_c;
          case 0xd:
            goto switchD_0011c2bf_caseD_d;
          default:
            goto switchD_0011c2bf_caseD_e;
          case 0x20:
            goto switchD_0011c2bf_caseD_20;
          }
        }
        bVar3 = bVar3 + 0x90;
        if ((uVar2 & 4) != 0) goto LAB_0011c7aa;
LAB_0011c294:
        if ((uVar2 & 0x80) == 0) {
          bVar10 = bVar10 + 0xa9;
        }
        else {
          bVar10 = bVar10 - 0x37;
        }
        bVar3 = bVar3 | bVar10;
        switch(bVar3) {
        case 9:
          goto switchD_0011c2bf_caseD_9;
        case 10:
switchD_0011c2bf_caseD_a:
          FUN_001198b0(param_1,2);
          **(undefined2 **)(param_1 + 8) = 0x6e5c;
          lVar7 = *(long *)(param_1 + 8) + 2;
          goto LAB_0011c540;
        case 0xb:
switchD_0011c2bf_caseD_b:
          FUN_001198b0(param_1,2);
          **(undefined2 **)(param_1 + 8) = 0x765c;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 2;
          break;
        case 0xc:
switchD_0011c2bf_caseD_c:
          FUN_001198b0(param_1,2);
          **(undefined2 **)(param_1 + 8) = 0x665c;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 2;
          break;
        case 0xd:
switchD_0011c2bf_caseD_d:
          FUN_001198b0(param_1,2);
          **(undefined2 **)(param_1 + 8) = 0x725c;
          *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 2;
          break;
        default:
switchD_0011c2bf_caseD_e:
          if (((&DAT_0011fbc0)[(ulong)bVar3 * 2] & 0x10) == 0) {
            FUN_001198b0(param_1,2);
            **(undefined2 **)(param_1 + 8) = 0x785c;
            *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 2;
            FUN_001198b0(param_1,2);
            **(undefined2 **)(param_1 + 8) = *puVar5;
            lVar7 = *(long *)(param_1 + 8) + 2;
          }
          else {
            FUN_001198b0(param_1,1);
            **(byte **)(param_1 + 8) = bVar3;
            lVar7 = *(long *)(param_1 + 8) + 1;
          }
          goto LAB_0011c540;
        case 0x20:
switchD_0011c2bf_caseD_20:
          FUN_001198b0(param_1,1);
          **(undefined **)(param_1 + 8) = 0x20;
          lVar7 = *(long *)(param_1 + 8) + 1;
LAB_0011c540:
          *(long *)(param_1 + 8) = lVar7;
        }
        puVar5 = puVar5 + 1;
      }
    }
    break;
  case 'c':
    pcVar6 = (char *)FUN_0011a5d0(param_1,param_2 + 1);
    FUN_001198b0(param_1,1);
    **(undefined **)(param_1 + 8) = 0x2b;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    if ((pcVar6 != (char *)0x0) && (*pcVar6 == 'c')) {
      puVar5 = (undefined2 *)FUN_0011a5d0(param_1,pcVar6 + 1);
      FUN_001198b0(param_1,1);
      **(undefined **)(param_1 + 8) = 0x69;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      return puVar5;
    }
    break;
  case 'e':
    puVar5 = (undefined2 *)FUN_0011a5d0(param_1,param_2 + 1);
    return puVar5;
  case 'f':
    if (((param_2[1] == '_') && (param_2[2] == 'D')) &&
       (iVar4 = FUN_001167f0(param_2 + 3,param_5), iVar4 != 0)) {
      puVar5 = (undefined2 *)FUN_0011c0e0(param_1,param_2 + 1,param_5);
      return puVar5;
    }
    break;
  case 'i':
    param_2 = param_2 + 1;
LAB_0011c1cf:
    puVar5 = (undefined2 *)FUN_00119d90(param_1,param_2,(int)cVar9,param_4);
    return puVar5;
  case 'n':
    FUN_001198b0(param_1,4);
    **(undefined4 **)(param_1 + 8) = 0x6c6c756e;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 4;
    return (undefined2 *)(param_2 + 1);
  }
  return (undefined2 *)0x0;
switchD_0011c2bf_caseD_9:
  FUN_001198b0(param_1,2);
  **(undefined2 **)(param_1 + 8) = 0x745c;
  lVar7 = *(long *)(param_1 + 8) + 2;
  goto LAB_0011c540;
}


////>>0x0011c870>>FUN_0011c870>>////

char * FUN_0011c870(long param_1,long param_2,long *param_3,long param_4)

{
  undefined2 *__src;
  ulong __n;
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  size_t sVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  undefined2 *local_78;
  undefined2 *puStack_70;
  undefined8 local_68;
  undefined local_58 [16];
  undefined8 local_48;
  
  iVar2 = FUN_001167f0(param_2 + 3,param_3);
  if ((iVar2 != 0) && (*(char *)(param_2 + 3) != '0')) {
    pcVar4 = (char *)FUN_0011cf40(param_1,param_2 + 3,param_3);
    bVar12 = param_4 != -1;
    local_68 = 0;
    local_78 = (undefined2 *)0x0;
    puStack_70 = (undefined2 *)0x0;
    if (pcVar4 != (char *)0x0) {
      lVar11 = 0;
LAB_0011c8fe:
      do {
        cVar1 = *pcVar4;
        if (cVar1 == '\0') goto LAB_0011c978;
        if (cVar1 == 'Z') {
          pcVar4 = pcVar4 + 1;
          goto LAB_0011c978;
        }
        if (lVar11 != 0) {
          FUN_001198b0(&local_78,2);
          *puStack_70 = 0x202c;
          puStack_70 = puStack_70 + 1;
          cVar1 = *pcVar4;
        }
        if (cVar1 == 'H') {
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 1;
        }
        if (cVar1 == 'V') {
          cVar1 = pcVar4[1];
          pcVar5 = pcVar4 + 1;
          if (cVar1 == 'Q') {
            lVar7 = FUN_00116760(pcVar4 + 2,local_58);
            if ((lVar7 == 0) || ((long)pcVar5 - *param_3 < (long)local_58._0_8_)) break;
            cVar1 = pcVar5[-local_58._0_8_];
            local_58 = (undefined  [16])0x0;
            local_48 = 0;
            uVar6 = FUN_0011acb0(local_58,pcVar5,param_3);
            FUN_001198b0(local_58,1);
            *(undefined *)local_58._8_8_ = 0;
          }
          else {
            local_58 = (undefined  [16])0x0;
            local_48 = 0;
            uVar6 = FUN_0011acb0(local_58,pcVar5,param_3);
            FUN_001198b0(local_58,1);
            *(undefined *)local_58._8_8_ = 0;
          }
          pcVar4 = (char *)FUN_0011c160(&local_78,uVar6,local_58._0_8_,(int)cVar1,param_3);
          if ((void *)local_58._0_8_ != (void *)0x0) {
            free((void *)local_58._0_8_);
          }
        }
        else {
          if ('V' < cVar1) {
            if ((cVar1 != 'X') ||
               (pcVar5 = (char *)FUN_001166e0(pcVar4 + 1,local_58), pcVar5 == (char *)0x0)) break;
            sVar8 = strlen(pcVar5);
            __n = local_58._0_8_;
            if (sVar8 < (ulong)local_58._0_8_) break;
            pcVar4 = pcVar5;
            if (local_58._0_8_ != 0) {
              FUN_001198b0(&local_78,local_58._0_8_);
              pcVar4 = pcVar5 + __n;
              memcpy(puStack_70,pcVar5,__n);
              puStack_70 = (undefined2 *)((long)puStack_70 + __n);
            }
            lVar11 = lVar11 + 1;
            goto LAB_0011c8fe;
          }
          if (cVar1 == 'S') {
            pcVar5 = pcVar4 + 1;
            if (((pcVar4[1] == '_') && (pcVar4[2] == 'D')) &&
               (iVar2 = FUN_001167f0(pcVar4 + 3,param_3), iVar2 != 0)) {
              pcVar4 = (char *)FUN_0011c0e0(&local_78,pcVar5,param_3);
            }
            else if (pcVar4[1] == 'Q') {
              pcVar4 = (char *)FUN_0011a9b0(&local_78,pcVar5,param_3,0);
            }
            else {
              pcVar4 = (char *)FUN_001166e0(pcVar5,local_58);
              if ((pcVar4 == (char *)0x0) || (lVar7 = local_58._0_8_, local_58._0_8_ == 0)) break;
              iVar2 = (int)puStack_70 - (int)local_78;
              lVar10 = local_58._0_8_;
              pcVar5 = pcVar4;
              if (puStack_70 == local_78) {
                iVar2 = 0;
              }
              do {
                if (lVar10 == 0) {
                  iVar3 = FUN_001167f0(pcVar4,param_3);
                  pcVar9 = pcVar5;
                  lVar10 = lVar7;
                  if (iVar3 == 0) {
                    if ((*pcVar4 != '_') || (pcVar4[1] != 'D')) goto joined_r0x0011cd36;
                    pcVar5 = (char *)0x0;
LAB_0011cd5a:
                    iVar3 = FUN_001167f0(pcVar4 + 2,param_3);
                    if ((iVar3 == 0) ||
                       (pcVar4 = (char *)FUN_0011c0e0(&local_78,pcVar4,param_3),
                       pcVar4 != (char *)0x0)) {
                      if (pcVar5 != (char *)0x0) goto LAB_0011cbc3;
                      goto joined_r0x0011cd36;
                    }
                  }
                  else {
                    pcVar4 = (char *)FUN_0011a9b0(&local_78,pcVar4,param_3,0);
                    if (pcVar4 != (char *)0x0) {
                      lVar11 = lVar11 + 1;
                      goto LAB_0011c8fe;
                    }
                    pcVar5 = (char *)0x0;
                  }
LAB_0011cc56:
                  lVar10 = lVar10 / 10;
                  if (puStack_70 != local_78) goto LAB_0011cc03;
LAB_0011cc88:
                  if (iVar2 < 0) goto LAB_0011cc98;
                }
                else {
                  iVar3 = FUN_001167f0(pcVar4,param_3);
                  pcVar9 = pcVar4;
                  if (iVar3 == 0) {
                    if ((*pcVar4 == '_') && (pcVar4[1] == 'D')) goto LAB_0011cd5a;
                  }
                  else {
                    pcVar4 = (char *)FUN_0011a9b0(&local_78,pcVar4,param_3,0);
                    if (pcVar4 == (char *)0x0) goto LAB_0011cc56;
                  }
LAB_0011cbc3:
                  if ((long)pcVar4 - (long)pcVar9 == lVar10) goto joined_r0x0011cd36;
                  lVar10 = lVar10 / 10;
                  if (local_78 == puStack_70) goto LAB_0011cc88;
LAB_0011cc03:
                  if (iVar2 < (int)puStack_70 - (int)local_78) {
LAB_0011cc98:
                    puStack_70 = (undefined2 *)((long)local_78 + (long)iVar2);
                  }
                }
                pcVar4 = pcVar9 + -1;
              } while (pcVar5 != (char *)0x0);
              pcVar4 = (char *)0x0;
            }
          }
          else {
            if (cVar1 != 'T') break;
            pcVar4 = (char *)FUN_0011acb0(&local_78,pcVar4 + 1,param_3);
          }
        }
joined_r0x0011cd36:
        lVar11 = lVar11 + 1;
      } while (pcVar4 != (char *)0x0);
    }
    bVar12 = false;
    pcVar4 = (char *)0x0;
LAB_0011c978:
    FUN_001198b0(param_1,2);
    __src = local_78;
    **(undefined2 **)(param_1 + 8) = 0x2821;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 2;
    if ((local_78 != puStack_70) && (sVar8 = (size_t)((int)puStack_70 - (int)local_78), sVar8 != 0))
    {
      FUN_001198b0(param_1,sVar8);
      memcpy(*(void **)(param_1 + 8),__src,sVar8);
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + sVar8;
    }
    FUN_001198b0(param_1,1);
    **(undefined **)(param_1 + 8) = 0x29;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    if (local_78 != (undefined2 *)0x0) {
      free(local_78);
    }
    if (!bVar12) {
      return pcVar4;
    }
    if ((long)pcVar4 - param_2 == param_4) {
      return pcVar4;
    }
  }
  return (char *)0x0;
}


////>>0x0011cf40>>FUN_0011cf40>>////

long FUN_0011cf40(undefined8 param_1,byte *param_2,long *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  byte *__s;
  size_t sVar5;
  long lVar6;
  char *__s_00;
  ulong uVar7;
  long lVar8;
  ulong local_38;
  ulong local_30;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
LAB_0011cf65:
  do {
    __s = param_2;
    bVar3 = *__s;
    if (bVar3 == 0) {
      return 0;
    }
    if (bVar3 == 0x51) {
      lVar6 = FUN_00116760(__s + 1,&local_30);
      if (lVar6 == 0) {
        lVar8 = 0;
      }
      else if ((long)__s - *param_3 < (long)local_30) {
        lVar8 = 0;
        lVar6 = 0;
      }
      else {
        lVar8 = (long)__s - local_30;
      }
      __s_00 = (char *)FUN_001166e0(lVar8,&local_30);
      if (__s_00 == (char *)0x0) {
        return 0;
      }
      sVar5 = strlen(__s_00);
      if (sVar5 < local_30) {
        return 0;
      }
      lVar8 = FUN_00119a00(param_1,__s_00);
      if (lVar8 == 0) {
        return 0;
      }
      return lVar6;
    }
    if (((bVar3 == 0x5f) && (__s[1] == 0x5f)) && ((byte)(__s[2] + 0xac) < 2)) {
      uVar7 = 0xffffffffffffffff;
LAB_0011d1ad:
      lVar6 = FUN_0011c870(param_1,__s,param_3,uVar7);
      return lVar6;
    }
    __s = (byte *)FUN_001166e0(__s,&local_38);
    uVar7 = local_38;
    if (__s == (byte *)0x0) {
      return 0;
    }
    if (local_38 == 0) {
      return 0;
    }
    sVar5 = strlen((char *)__s);
    if (sVar5 < uVar7) {
      return 0;
    }
    if (uVar7 < 5) {
      if (((uVar7 != 4) || (*__s != 0x5f)) || (__s[1] != 0x5f)) goto LAB_0011cfcc;
    }
    else {
      if ((*__s != 0x5f) || (__s[1] != 0x5f)) goto LAB_0011cfcc;
      if ((byte)(__s[2] + 0xac) < 2) goto LAB_0011d1ad;
    }
    if (__s[2] != 0x53) goto LAB_0011cfcc;
    param_2 = __s + 3;
    pbVar2 = __s + uVar7;
    if (pbVar2 <= param_2) goto LAB_0011d180;
    uVar4 = (int)pbVar2 - (int)param_2 & 7;
    if (uVar4 == 0) goto LAB_0011d0d0;
    if (uVar4 != 1) {
      if (uVar4 != 2) {
        if (uVar4 != 3) {
          if (uVar4 != 4) {
            if (uVar4 != 5) {
              if (uVar4 != 6) {
                if (((&DAT_0011fbc0)[(ulong)__s[3] * 2] & 4) == 0) goto LAB_0011d180;
                param_2 = __s + 4;
              }
              if (((&DAT_0011fbc0)[(ulong)*param_2 * 2] & 4) == 0) goto LAB_0011d180;
              param_2 = param_2 + 1;
            }
            if (((&DAT_0011fbc0)[(ulong)*param_2 * 2] & 4) == 0) goto LAB_0011d180;
            param_2 = param_2 + 1;
          }
          if (((&DAT_0011fbc0)[(ulong)*param_2 * 2] & 4) == 0) goto LAB_0011d180;
          param_2 = param_2 + 1;
        }
        if (((&DAT_0011fbc0)[(ulong)*param_2 * 2] & 4) == 0) goto LAB_0011d180;
        param_2 = param_2 + 1;
      }
      if (((&DAT_0011fbc0)[(ulong)*param_2 * 2] & 4) == 0) goto LAB_0011d180;
      param_2 = param_2 + 1;
    }
    if (((&DAT_0011fbc0)[(ulong)*param_2 * 2] & 4) == 0) goto LAB_0011d180;
    param_2 = param_2 + 1;
    if (param_2 != pbVar2) {
LAB_0011d0d0:
      bVar3 = (&DAT_0011fbc0)[(ulong)*param_2 * 2];
      pbVar1 = param_2;
      while (((((param_2 = pbVar1, (bVar3 & 4) != 0 &&
                (param_2 = pbVar1 + 1, ((&DAT_0011fbc0)[(ulong)pbVar1[1] * 2] & 4) != 0)) &&
               (param_2 = pbVar1 + 2, ((&DAT_0011fbc0)[(ulong)pbVar1[2] * 2] & 4) != 0)) &&
              ((param_2 = pbVar1 + 3, ((&DAT_0011fbc0)[(ulong)pbVar1[3] * 2] & 4) != 0 &&
               (param_2 = pbVar1 + 4, ((&DAT_0011fbc0)[(ulong)pbVar1[4] * 2] & 4) != 0)))) &&
             ((param_2 = pbVar1 + 5, ((&DAT_0011fbc0)[(ulong)pbVar1[5] * 2] & 4) != 0 &&
              ((param_2 = pbVar1 + 6, ((&DAT_0011fbc0)[(ulong)pbVar1[6] * 2] & 4) != 0 &&
               (param_2 = pbVar1 + 7, ((&DAT_0011fbc0)[(ulong)pbVar1[7] * 2] & 4) != 0))))))) {
        pbVar1 = pbVar1 + 8;
        param_2 = pbVar1;
        if (pbVar1 == pbVar2) goto LAB_0011cf65;
        bVar3 = (&DAT_0011fbc0)[(ulong)*pbVar1 * 2];
      }
LAB_0011d180:
      if (pbVar2 != param_2) {
LAB_0011cfcc:
        lVar6 = FUN_00119a00(param_1,__s,uVar7);
        return lVar6;
      }
    }
  } while( true );
}


////>>0x0011d2a0>>FUN_0011d2a0>>////

bool FUN_0011d2a0(undefined8 *******param_1,uint param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  char cVar11;
  int iVar12;
  size_t sVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *******pppppppuVar17;
  char *pcVar18;
  undefined8 uStack_250;
  undefined auStack_248 [8];
  undefined8 local_240;
  undefined8 *******local_238;
  undefined8 *******local_230;
  int local_228;
  byte local_221;
  uint local_220;
  uint local_21c;
  undefined8 *******local_218;
  char *local_210;
  uint local_208;
  undefined8 *******local_200;
  undefined *local_1f8;
  undefined4 local_1f0;
  uint local_1ec;
  undefined *local_1e8;
  undefined4 local_1e0;
  int local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  int local_1c4;
  undefined4 local_1c0;
  undefined local_1b8 [256];
  long local_b8;
  undefined local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined local_88 [8];
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_240 = param_3;
  local_21c = param_2;
  if ((*(char *)param_1 == '_') && (*(char *)((long)param_1 + 1) == 'Z')) {
    iVar12 = 1;
  }
  else {
    uStack_250 = 0x11d2e1;
    iVar12 = strncmp((char *)param_1,"_GLOBAL_",8);
    if ((((iVar12 == 0) &&
         (((byte)(*(byte *)(param_1 + 1) - 0x24) < 0x3c &&
          ((0xf7fffffffffffbfeU >> ((ulong)(*(byte *)(param_1 + 1) - 0x24) & 0x3f) & 1) == 0)))) &&
        ((cVar11 = *(char *)((long)param_1 + 9), cVar11 == 'D' || (cVar11 == 'I')))) &&
       (*(char *)((long)param_1 + 10) == '_')) {
      iVar12 = (cVar11 != 'I') + 2;
    }
    else {
      iVar12 = 0;
      if ((local_21c & 0x10) == 0) {
        return false;
      }
    }
  }
  local_1c4 = 1;
  local_228 = (iVar12 != 2) + 0x45;
  local_220 = local_21c & 1;
  local_221 = ((byte)(local_21c >> 0x12) ^ 1) & 1;
  local_238 = (undefined8 *******)((long)param_1 + 1);
  do {
    uStack_250 = 0x11d407;
    sVar13 = strlen((char *)param_1);
    local_208 = local_21c;
    local_210 = (char *)((long)param_1 + sVar13);
    local_1dc = (int)sVar13;
    local_1ec = local_1dc * 2;
    local_1f0 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    if ((0x800 < local_1ec) && (local_221 != 0)) {
      return false;
    }
    lVar2 = (long)(int)local_1ec * -0x20;
    local_1f8 = auStack_248 + lVar2;
    lVar3 = -((long)local_1dc * 8 + 0xfU & 0xfffffffffffffff0);
    local_1e8 = auStack_248 + lVar3 + lVar2;
    local_218 = param_1;
    local_200 = param_1;
    if (iVar12 == 1) {
      puVar9 = auStack_248 + lVar2;
      puVar10 = auStack_248 + lVar3 + lVar2;
      if ((*(char *)param_1 == '_') &&
         (local_200 = local_238, puVar9 = auStack_248 + lVar2, puVar10 = auStack_248 + lVar3 + lVar2
         , *(char *)((long)param_1 + 1) == 'Z')) {
        local_200 = (undefined8 *******)((long)param_1 + 2);
        local_230 = &local_218;
        if ((*(char *)((long)param_1 + 2) == 'G') || (*(char *)((long)param_1 + 2) == 'T')) {
          local_1f8 = auStack_248 + lVar2;
          local_1e8 = auStack_248 + lVar3 + lVar2;
          *(undefined8 *)(auStack_248 + lVar3 + lVar2 + -8) = 0x11d703;
          lVar14 = FUN_00115f90();
        }
        else {
          *(undefined8 *)(auStack_248 + lVar3 + lVar2 + -8) = 0x11d51f;
          lVar14 = FUN_00113410(&local_218,1);
        }
        pppppppuVar5 = local_230;
        if ((local_208 & 1) != 0) {
          cVar11 = *(char *)local_200;
          pppppppuVar4 = local_200;
          while (cVar11 == '.') {
            cVar11 = *(char *)((long)pppppppuVar4 + 1);
            bVar1 = (byte)(cVar11 + 0x9fU) < 0x1a;
            local_230 = param_1;
            if ((bVar1) || (cVar11 == '_')) {
              if (((byte)(cVar11 - 0x30U) < 10 || bVar1) || (cVar11 == '_')) goto LAB_0011d57d;
              cVar11 = *(char *)pppppppuVar4;
              pppppppuVar17 = pppppppuVar4;
            }
            else {
              if (9 < (byte)(cVar11 - 0x30U)) break;
LAB_0011d57d:
              pppppppuVar17 = (undefined8 *******)((long)pppppppuVar4 + 2);
              cVar11 = *(char *)((long)pppppppuVar4 + 2);
              while (((byte)(cVar11 + 0x9fU) < 0x1a || (byte)(cVar11 - 0x30U) < 10 ||
                     (cVar11 == '_'))) {
                pcVar18 = (char *)((long)pppppppuVar17 + 1);
                pppppppuVar17 = (undefined8 *******)((long)pppppppuVar17 + 1);
                cVar11 = *pcVar18;
              }
            }
            while (cVar11 == '.') {
              while( true ) {
                if (9 < (byte)(*(char *)((long)pppppppuVar17 + 1) - 0x30U)) goto LAB_0011d5f4;
                cVar11 = *(char *)((long)pppppppuVar17 + 2);
                pppppppuVar17 = (undefined8 *******)((long)pppppppuVar17 + 2);
                if (9 < (byte)(cVar11 - 0x30U)) break;
                do {
                  pcVar18 = (char *)((long)pppppppuVar17 + 1);
                  pppppppuVar17 = (undefined8 *******)((long)pppppppuVar17 + 1);
                } while ((byte)(*pcVar18 - 0x30U) < 10);
                if (*pcVar18 != '.') goto LAB_0011d5f4;
              }
            }
LAB_0011d5f4:
            local_200 = pppppppuVar17;
            *(undefined8 *)(auStack_248 + lVar3 + lVar2 + -8) = 0x11d607;
            uVar15 = FUN_00105250(pppppppuVar5,pppppppuVar4,(int)pppppppuVar17 - (int)pppppppuVar4);
            *(undefined8 *)(auStack_248 + lVar3 + lVar2 + -8) = 0x11d61a;
            lVar14 = FUN_001050d0(pppppppuVar5,0x4f,lVar14,uVar15);
            param_1 = local_230;
            pppppppuVar4 = pppppppuVar17;
            cVar11 = *(char *)pppppppuVar17;
          }
        }
        goto LAB_0011d3c6;
      }
    }
    else {
      if (iVar12 - 2U < 2) {
        pcVar18 = (char *)((long)param_1 + 0xb);
        if ((*(char *)((long)param_1 + 0xb) == '_') && (*(char *)((long)param_1 + 0xc) == 'Z')) {
          local_200 = (undefined8 *******)((long)param_1 + 0xd);
          local_230 = &local_218;
          if ((*(char *)((long)param_1 + 0xd) == 'G') || (*(char *)((long)param_1 + 0xd) == 'T')) {
            local_1f8 = auStack_248 + lVar2;
            local_1e8 = auStack_248 + lVar3 + lVar2;
            *(undefined8 *)(auStack_248 + lVar3 + lVar2 + -8) = 0x11d6e1;
            uVar15 = FUN_00115f90();
            pcVar18 = (char *)local_200;
          }
          else {
            local_1f8 = auStack_248 + lVar2;
            local_1e8 = auStack_248 + lVar3 + lVar2;
            *(undefined8 *)(auStack_248 + lVar3 + lVar2 + -8) = 0x11d670;
            uVar15 = FUN_00113410(&local_218,0);
            pcVar18 = (char *)local_200;
          }
        }
        else {
          local_200 = (undefined8 *******)pcVar18;
          local_1f8 = auStack_248 + lVar2;
          local_1e8 = auStack_248 + lVar3 + lVar2;
          *(undefined8 *)(auStack_248 + lVar3 + lVar2 + -8) = 0x11d380;
          sVar13 = strlen(pcVar18);
          local_230 = &local_218;
          *(undefined8 *)(auStack_248 + lVar3 + lVar2 + -8) = 0x11d398;
          uVar15 = FUN_00105250(&local_218,pcVar18,sVar13 & 0xffffffff);
        }
        iVar6 = local_228;
        pppppppuVar5 = local_230;
        *(undefined8 *)(auStack_248 + lVar3 + lVar2 + -8) = 0x11d3af;
        lVar14 = FUN_001050d0(pppppppuVar5,iVar6,uVar15,0);
        *(undefined8 *)(auStack_248 + lVar3 + lVar2 + -8) = 0x11d3ba;
        sVar13 = strlen(pcVar18);
        local_200 = (undefined8 *******)(pcVar18 + sVar13);
      }
      else {
        local_1f8 = auStack_248 + lVar2;
        local_1e8 = auStack_248 + lVar3 + lVar2;
        *(undefined8 *)(auStack_248 + lVar3 + lVar2 + -8) = 0x11d63c;
        lVar14 = FUN_001140f0(&local_218);
      }
LAB_0011d3c6:
      puVar9 = local_1f8;
      puVar10 = local_1e8;
      if (((local_220 == 0) || (*(char *)local_200 == '\0')) && (lVar14 != 0)) {
        local_a8 = FUN_001042b0;
        local_b8 = 0;
        local_b0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_78 = 0;
        local_a0 = local_240;
        local_70 = 0;
        local_60 = 0;
        local_50 = 0;
        _local_88 = (undefined  [16])0x0;
        *(undefined8 *)(auStack_248 + lVar3 + lVar2 + -8) = 0x11d7ca;
        FUN_001056b0(local_1b8,lVar14);
        uVar7 = local_21c;
        if ((int)local_88._4_4_ < 0x800) {
          local_88._4_4_ = 0;
        }
        lVar16 = (long)local_60._4_4_;
        local_48 = 0;
        iVar12 = local_50._4_4_ * local_60._4_4_;
        if (local_60._4_4_ < 1) {
          lVar16 = 1;
        }
        local_50 = CONCAT44(iVar12,(undefined4)local_50);
        lVar16 = lVar16 * -0x10;
        local_68 = auStack_248 + lVar16 + lVar3 + lVar2;
        if (iVar12 < 1) {
          iVar12 = 1;
        }
        local_58 = auStack_248 + (long)iVar12 * -0x10 + lVar16 + lVar3 + lVar2;
        *(undefined8 *)(auStack_248 + (long)iVar12 * -0x10 + lVar16 + lVar3 + lVar2 + -8) = 0x11d82e
        ;
        FUN_00105800(local_1b8,uVar7,lVar14);
        uVar15 = local_a0;
        lVar14 = local_b8;
        local_1b8[local_b8] = 0;
        pcVar8 = local_a8;
        *(undefined8 *)(auStack_248 + lVar3 + lVar2 + -8) = 0x11d850;
        (*pcVar8)(local_1b8,lVar14,uVar15);
        return local_88._0_4_ == 0;
      }
    }
    local_1e8 = puVar10;
    local_1f8 = puVar9;
    if (local_1c4 != -1) {
      return false;
    }
    local_1c4 = 0;
  } while( true );
}


////>>0x0011d890>>FUN_0011d890>>////

bool FUN_0011d890(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = *param_1 - 0x4b;
  if ((byte)uVar2 < 0x28) {
    return (0xffffff7ffffff7feU >> ((ulong)uVar2 & 0x3f) & 1) == 0;
  }
  if (*param_1 != 0x44) {
    return false;
  }
  bVar1 = param_1[1];
  if ((bVar1 != 0x78) && (bVar1 != 0x6f)) {
    return bVar1 == 0x4f || bVar1 == 0x77;
  }
  return true;
}


////>>0x0011d8e8>>_DT_FINI>>////

void _DT_FINI(void)

{
  return;
}

