
////>>0x00102000>>_DT_INIT>>////

void _DT_INIT(void)

{
  __gmon_start__();
  return;
}


////>>0x00102020>>FUN_00102020>>////

void FUN_00102020(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x0)();
  return;
}


////>>0x00102030>>cplus_demangle_name_to_style>>////

void cplus_demangle_name_to_style(void)

{
  cplus_demangle_name_to_style();
  return;
}


////>>0x00102040>>free>>////



void free(void *__ptr)

{
  free(__ptr);
  return;
}


////>>0x00102050>>ferror>>////



int ferror(FILE *__stream)

{
  int iVar1;
  
  iVar1 = ferror(__stream);
  return iVar1;
}


////>>0x00102060>>fread>>////



size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}


////>>0x00102070>>cplus_demangle_set_style>>////

void cplus_demangle_set_style(void)

{
  cplus_demangle_set_style();
  return;
}


////>>0x00102080>>fclose>>////



int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}


////>>0x00102090>>dcgettext>>////

void dcgettext(void)

{
  dcgettext();
  return;
}


////>>0x001020a0>>strlen>>////



size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}


////>>0x001020b0>>getopt_long>>////

void getopt_long(void)

{
  getopt_long();
  return;
}


////>>0x001020c0>>strchr>>////



char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strchr(__s,__c);
  return pcVar1;
}


////>>0x001020d0>>printf>>////



int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}


////>>0x001020e0>>xrealloc>>////

void xrealloc(void)

{
  xrealloc();
  return;
}


////>>0x001020f0>>xmalloc>>////

void xmalloc(void)

{
  xmalloc();
  return;
}


////>>0x00102100>>xmalloc_set_program_name>>////

void xmalloc_set_program_name(void)

{
  xmalloc_set_program_name();
  return;
}


////>>0x00102110>>xstrdup>>////

void xstrdup(void)

{
  xstrdup();
  return;
}


////>>0x00102120>>fputc>>////



int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputc(__c,__stream);
  return iVar1;
}


////>>0x00102130>>putc>>////



int putc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = putc(__c,__stream);
  return iVar1;
}


////>>0x00102140>>fprintf>>////



int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = fprintf(__stream,__format);
  return iVar1;
}


////>>0x00102150>>ftell>>////



long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = ftell(__stream);
  return lVar1;
}


////>>0x00102160>>stat>>////



int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = stat(__file,__buf);
  return iVar1;
}


////>>0x00102170>>memcpy>>////



void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}


////>>0x00102180>>fflush>>////



int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush(__stream);
  return iVar1;
}


////>>0x00102190>>fseek>>////



int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = fseek(__stream,__off,__whence);
  return iVar1;
}


////>>0x001021a0>>cplus_demangle>>////

void cplus_demangle(void)

{
  cplus_demangle();
  return;
}


////>>0x001021b0>>bfd_set_error_program_name>>////

void bfd_set_error_program_name(void)

{
  bfd_set_error_program_name();
  return;
}


////>>0x001021c0>>memmove>>////



void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}


////>>0x001021d0>>fopen>>////



FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}


////>>0x001021e0>>xexit>>////

void xexit(void)

{
  xexit();
  return;
}


////>>0x001021f0>>exit>>////



void exit(int __status)

{
                    
  exit(__status);
}


////>>0x00102200>>fwrite>>////



size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}


////>>0x00102210>>getc>>////



int getc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = getc(__stream);
  return iVar1;
}


////>>0x00102220>>__cxa_finalize>>////

void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}


////>>0x00102230>>FUN_00102230>>////



void FUN_00102230(ulong param_1)

{
  byte in_AL;
  void *__ptr;
  char *unaff_RBX;
  
  if (unaff_RBX[in_AL] == '_') {
    param_1 = (ulong)((int)param_1 + 1);
  }
  __ptr = (void *)cplus_demangle(unaff_RBX + param_1,DAT_00105108);
  if (__ptr != (void *)0x0) {
    if (*unaff_RBX == '.') {
      putc(0x2e,_stdout);
    }
    printf("%s",__ptr);
    free(__ptr);
    return;
  }
  printf("%s");
  return;
}


////>>0x0010225e>>FUN_0010225e>>////



void FUN_0010225e(FILE *param_1,int param_2)

{
  char *__format;
  undefined8 *puVar1;
  
  fprintf(param_1,"Usage: %s [options] [mangled names]\n",DAT_0010d148);
  fprintf(param_1,"Options are:\n  [-_|--strip-underscore]     Ignore first leading underscore%s\n",
          "");
  fprintf(param_1,"  [-n|--no-strip-underscore]  Do not ignore a leading underscore%s\n",
          " (default)");
  fwrite("  [-p|--no-params]            Do not display function arguments\n  [-i|--no-verbose]           Do not show implementation details (if any)\n  [-R|--recurse-limit]        Enable a limit on recursion whilst demangling.  [Default]\n  ]-r|--no-recurse-limit]     Disable a limit on recursion whilst demangling\n  [-t|--types]                Also attempt to demangle type encodings\n  [-s|--format "
         ,1,0x184,param_1);
  fprintf(param_1,"{%s",_libiberty_demanglers);
  puVar1 = (undefined8 *)&libiberty_demanglers;
  while (*(int *)(puVar1 + 4) != 0) {
    fprintf(param_1,",%s",puVar1[3]);
    puVar1 = puVar1 + 3;
  }
  fputc(0x7d,param_1);
  fwrite(&DAT_001035e8,1,2,param_1);
  fwrite("  [@<file>]                   Read extra options from <file>\n  [-h|--help]                 Display this information\n  [-v|--version]              Show the version information\nDemangled names are displayed to stdout.\nIf a name cannot be demangled it is just echoed to stdout.\nIf no names are provided on the command line, stdin is read.\n"
         ,1,0x150,param_1);
  if (param_2 == 0) {
    __format = (char *)dcgettext(0,"Report bugs to %s.\n",5);
    fprintf(param_1,__format,"<https://sourceware.org/bugzilla/>");
  }
                    
  exit(param_2);
}


////>>0x00102380>>FUN_00102380>>////



void FUN_00102380(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  void *__ptr;
  ulong uVar2;
  
  uVar1 = (uint)(*param_1 == '.' || *param_1 == '$');
  uVar2 = (ulong)uVar1;
  if ((_DAT_0010d140 != 0) && (param_1[uVar1] == '_')) {
    uVar2 = (ulong)(uVar1 + 1);
  }
  __ptr = (void *)cplus_demangle(param_1 + uVar2,DAT_00105108);
  if (__ptr != (void *)0x0) {
    if (*param_1 == '.') {
      putc(0x2e,_stdout);
    }
    printf("%s",__ptr);
    free(__ptr);
    return;
  }
  printf("%s",param_1,param_4);
  return;
}


////>>0x00102400>>entry>>////

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  __libc_start_main(FUN_001024f0,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


////>>0x00102430>>FUN_00102430>>////

/* WARNING: Removing unreachable block (ram,0x00102443) */
/* WARNING: Removing unreachable block (ram,0x0010244f) */

void FUN_00102430(void)

{
  return;
}


////>>0x00102460>>FUN_00102460>>////

/* WARNING: Removing unreachable block (ram,0x00102484) */
/* WARNING: Removing unreachable block (ram,0x00102490) */

void FUN_00102460(void)

{
  return;
}


////>>0x001024a0>>_FINI_0>>////

void _FINI_0(void)

{
  if (DAT_00105120 != '\0') {
    return;
  }
  __cxa_finalize(PTR_LOOP_00105100);
  FUN_00102430();
  DAT_00105120 = 1;
  return;
}


////>>0x001024e0>>_INIT_0>>////

void _INIT_0(void)

{
  FUN_00102460();
  return;
}


////>>0x001024f0>>FUN_001024f0>>////



undefined8 FUN_001024f0(int param_1,long *param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FILE *__stream;
  size_t __n;
  byte *__s;
  size_t sVar10;
  byte *__ptr;
  long lVar11;
  long *plVar12;
  long *__src;
  long *plVar13;
  undefined8 uVar14;
  char *pcVar15;
  byte *pbVar16;
  long lVar17;
  undefined **ppuVar18;
  long lVar19;
  byte *pbVar20;
  ulong unaff_R13;
  int local_110;
  int local_10c;
  size_t local_108;
  long local_100;
  stat local_c8;
  
  DAT_0010d148 = *param_2;
  xmalloc_set_program_name();
  bfd_set_error_program_name(DAT_0010d148);
  plVar12 = param_2;
  if (1 < param_1) {
    local_10c = 2000;
    unaff_R13 = 1;
    local_110 = 0;
    do {
      iVar9 = (int)unaff_R13;
      lVar17 = (long)iVar9;
      if (*(char *)plVar12[lVar17] == '@') {
        local_10c = local_10c + -1;
        if (local_10c == 0) goto LAB_00102bdd;
        pcVar15 = (char *)plVar12[lVar17] + 1;
        iVar7 = stat(pcVar15,&local_c8);
        if (iVar7 < 0) goto LAB_00102900;
        if ((local_c8.st_mode & 0xf000) == 0x4000) {
          lVar17 = *plVar12;
          pcVar15 = "%s: error: @-file refers to a directory\n";
          do {
            fprintf(_stderr,pcVar15,lVar17);
            xexit(1);
LAB_00102bdd:
            lVar17 = *plVar12;
            pcVar15 = "%s: error: too many @-files encountered\n";
          } while( true );
        }
        __stream = fopen(pcVar15,"r");
        if (__stream == (FILE *)0x0) goto LAB_00102900;
        iVar7 = fseek(__stream,0,2);
        if (((iVar7 == -1) || (__n = ftell(__stream), __n == 0xffffffffffffffff)) ||
           (iVar7 = fseek(__stream,0,0), iVar7 == -1)) {
LAB_001029a0:
          fclose(__stream);
          if (iVar9 + 1 < param_1) goto LAB_0010290d;
          break;
        }
        __s = (byte *)xmalloc(__n + 1);
        sVar10 = fread(__s,1,__n,__stream);
        if ((__n != sVar10) && (iVar7 = ferror(__stream), iVar7 != 0)) {
          free(__s);
          goto LAB_001029a0;
        }
        __s[sVar10] = 0;
        bVar6 = *__s;
        pbVar16 = __s;
        if (bVar6 != 0) {
LAB_00102680:
          if (((&_sch_istable)[(ulong)bVar6 * 2] & 0x40) != 0) goto LAB_00102670;
          strlen((char *)__s);
          __ptr = (byte *)xmalloc();
          __src = (long *)0x0;
          iVar7 = 0;
          bVar3 = false;
          bVar5 = false;
          bVar4 = false;
          local_100 = 0;
          pbVar16 = __s;
          do {
            while (((&_sch_istable)[(ulong)*pbVar16 * 2] & 0x40) != 0) {
              pbVar16 = pbVar16 + 1;
            }
            if ((iVar7 == 0) || (iVar7 + -1 <= (int)local_100)) {
              if (__src == (long *)0x0) {
                iVar7 = 8;
                __src = (long *)xmalloc(0x40);
              }
              else {
                iVar7 = iVar7 * 2;
                __src = (long *)xrealloc(__src,(long)iVar7 << 3);
              }
              plVar13 = __src + local_100;
              *plVar13 = 0;
            }
            else {
              plVar13 = __src + local_100;
            }
            bVar6 = *pbVar16;
            pbVar20 = __ptr;
            while (bVar6 != 0) {
              while( true ) {
                if ((((&_sch_istable)[(ulong)bVar6 * 2] & 0x40) != 0) &&
                   (!(bool)(bVar5 | bVar4 | bVar3))) {
                  bVar4 = false;
                  bVar3 = false;
                  bVar5 = false;
                  goto LAB_0010276f;
                }
                if (!bVar4) break;
                pbVar16 = pbVar16 + 1;
                *pbVar20 = bVar6;
                pbVar20 = pbVar20 + 1;
                bVar4 = false;
                bVar6 = *pbVar16;
                if (bVar6 == 0) goto LAB_0010276f;
              }
              if (bVar6 == 0x5c) {
                bVar4 = true;
              }
              else if (bVar5) {
                if (bVar6 == 0x27) {
                  bVar5 = false;
                }
                else {
LAB_001028e1:
                  *pbVar20 = bVar6;
                  pbVar20 = pbVar20 + 1;
                }
              }
              else if (bVar3) {
                if (bVar6 != 0x22) goto LAB_001028e1;
                bVar3 = false;
              }
              else if (bVar6 == 0x27) {
                bVar5 = true;
              }
              else {
                if (bVar6 != 0x22) goto LAB_001028e1;
                bVar3 = true;
              }
              pbVar1 = pbVar16 + 1;
              pbVar16 = pbVar16 + 1;
              bVar6 = *pbVar1;
            }
LAB_0010276f:
            *pbVar20 = 0;
            lVar11 = xstrdup(__ptr);
            *plVar13 = lVar11;
            __src[local_100 + 1] = 0;
            bVar6 = *pbVar16;
            bVar2 = (&_sch_istable)[(ulong)bVar6 * 2];
            while ((bVar2 & 0x40) != 0) {
              bVar6 = pbVar16[1];
              pbVar16 = pbVar16 + 1;
              bVar2 = (&_sch_istable)[(ulong)bVar6 * 2];
            }
            local_100 = local_100 + 1;
          } while (bVar6 != 0);
          free(__ptr);
          plVar13 = plVar12;
          if (param_2 == plVar12) goto LAB_00102adb;
          goto LAB_00102807;
        }
LAB_00102abe:
        __src = (long *)xmalloc(8);
        *__src = 0;
        if (param_2 == plVar12) {
LAB_00102adb:
          if (*plVar12 == 0) {
            iVar7 = 0;
          }
          else {
            lVar11 = 1;
            do {
              iVar7 = (int)lVar11;
              plVar13 = plVar12 + lVar11;
              lVar11 = lVar11 + 1;
            } while (*plVar13 != 0);
          }
          lVar19 = 0;
          plVar13 = (long *)xmalloc((long)(iVar7 + 1) << 3);
          lVar11 = *plVar12;
          while (lVar11 != 0) {
            uVar14 = xstrdup();
            *(undefined8 *)((long)plVar13 + lVar19) = uVar14;
            lVar19 = lVar19 + 8;
            lVar11 = *(long *)((long)plVar12 + lVar19);
          }
          *(undefined8 *)((long)plVar13 + lVar19) = 0;
LAB_00102807:
          plVar12 = plVar13;
          if (*__src == 0) goto LAB_00102ba3;
          lVar11 = 0;
          do {
            lVar11 = lVar11 + 1;
          } while (__src[lVar11] != 0);
          local_108 = lVar11 * 8;
        }
        else {
LAB_00102ba3:
          lVar11 = 0;
          local_108 = 0;
        }
        free((void *)plVar12[lVar17]);
        plVar12 = (long *)xrealloc(plVar12,(lVar11 + 1 + (long)param_1) * 8);
        iVar7 = param_1 + -1 + (int)lVar11;
        memmove(plVar12 + lVar17 + lVar11,plVar12 + lVar17 + 1,(long)(param_1 - iVar9) << 3);
        memcpy(plVar12 + lVar17,__src,local_108);
        free(__src);
        free(__s);
        fclose(__stream);
        uVar8 = local_110 + 1;
        unaff_R13 = lVar17 * 8;
        param_1 = iVar7;
        if (iVar7 <= (int)uVar8) break;
      }
      else {
LAB_00102900:
        if (param_1 <= iVar9 + 1) break;
LAB_0010290d:
        uVar8 = iVar9 + 1;
        local_110 = iVar9;
      }
      unaff_R13 = (ulong)uVar8;
    } while( true );
  }
  ppuVar18 = &PTR_s_strip_underscore_00104be0;
  while (iVar9 = getopt_long(param_1,plVar12,"_hinprRs:tv",&PTR_s_strip_underscore_00104be0,0),
        iVar9 != -1) {
    switch(iVar9) {
    case 0x3f:
switchD_001029f9_caseD_3f:
      FUN_0010225e(_stderr,1);
    case 0x5f:
switchD_001029f9_caseD_5f:
      _DAT_0010d140 = 1;
      break;
    default:
      do {
        iVar9 = getopt_long(param_1,plVar12,"_hinprRs:tv",&PTR_s_strip_underscore_00104be0,0);
        if (iVar9 == -1) goto LAB_00102a6c;
        switch(iVar9) {
        case 0x3f:
          goto switchD_001029f9_caseD_3f;
        case 0x52:
          goto switchD_001029f9_caseD_52;
        case 0x5f:
          goto switchD_001029f9_caseD_5f;
        case 0x68:
          goto switchD_001029f9_caseD_68;
        case 0x69:
          goto switchD_001029f9_caseD_69;
        case 0x6e:
          goto switchD_001029f9_caseD_6e;
        case 0x70:
          goto switchD_001029f9_caseD_70;
        case 0x72:
          goto switchD_001029f9_caseD_72;
        case 0x73:
          goto switchD_001029f9_caseD_73;
        case 0x74:
          goto switchD_001029f9_caseD_74;
        case 0x76:
          goto switchD_001029f9_caseD_76;
        }
      } while( true );
    case 0x52:
switchD_001029f9_caseD_52:
      DAT_00105108 = DAT_00105108 & 0xfffbffff;
      break;
    case 0x68:
switchD_001029f9_caseD_68:
      FUN_0010225e(_stdout,0);
    case 0x74:
switchD_001029f9_caseD_74:
      DAT_00105108 = DAT_00105108 | 0x10;
      break;
    case 0x69:
switchD_001029f9_caseD_69:
      DAT_00105108 = DAT_00105108 & 0xfffffff7;
      break;
    case 0x6e:
switchD_001029f9_caseD_6e:
      _DAT_0010d140 = 0;
      break;
    case 0x70:
switchD_001029f9_caseD_70:
      DAT_00105108 = DAT_00105108 & 0xfffffffe;
      break;
    case 0x72:
switchD_001029f9_caseD_72:
      DAT_00105108 = DAT_00105108 | 0x40000;
      break;
    case 0x73:
switchD_001029f9_caseD_73:
      iVar9 = cplus_demangle_name_to_style(_optarg);
      if (iVar9 == 0) {
        fprintf(_stderr,"%s: unknown demangling style `%s\'\n",DAT_0010d148,_optarg);
        return 1;
      }
      cplus_demangle_set_style(iVar9);
      break;
    case 0x76:
switchD_001029f9_caseD_76:
      printf("GNU %s %s\n","c++filt","(GNU Binutils for Debian) 2.40");
      pcVar15 = (char *)dcgettext(0,"Copyright (C) 2023 Free Software Foundation, Inc.\n",5);
      printf(pcVar15);
      pcVar15 = (char *)dcgettext(0,
                                  "This program is free software; you may redistribute it under the terms of\nthe GNU General Public License version 3 or (at your option) any later version.\nThis program has absolutely no warranty.\n"
                                  ,5);
      printf(pcVar15);
                    
      exit(0);
    }
  }
LAB_00102a6c:
  if (_optind < param_1) {
    do {
      FUN_00102380(plVar12[_optind]);
      putc(10,_stdout);
      _optind = _optind + 1;
    } while (_optind < param_1);
  }
  else {
    if (_current_demangling_style == 0x8000) {
LAB_00102c76:
      ppuVar18 = (undefined **)&stdout;
      do {
        unaff_R13 = 0;
        uVar8 = getc(_stdin);
        while( true ) {
          plVar12 = (long *)(unaff_R13 & 0xffffffff);
          if (uVar8 == 0xffffffff) goto LAB_00102d0d;
          if ((((&_sch_istable)[(ulong)(uVar8 & 0xff) * 2] & 0x8c) == 0) &&
             (pcVar15 = strchr("_$.",uVar8), pcVar15 == (char *)0x0)) {
            if ((int)plVar12 != 0) goto LAB_00102d6f;
            goto LAB_00102d47;
          }
          if (unaff_R13 == 0x7ffe) break;
          (&DAT_00105140)[unaff_R13] = (char)uVar8;
          unaff_R13 = unaff_R13 + 1;
          uVar8 = getc(_stdin);
        }
        plVar12 = (long *)0x7ffe;
LAB_00102d6f:
        *(undefined *)(plVar12 + 0x20a28) = 0;
        FUN_00102380(&DAT_00105140);
LAB_00102d47:
        putc(uVar8,_stdout);
        if (uVar8 == 10) {
          fflush(_stdout);
        }
      } while( true );
    }
    if (_current_demangling_style < 0x8001) {
      if (((_current_demangling_style == 0x100) || (_current_demangling_style == 0x4000)) ||
         (_current_demangling_style == 4)) goto LAB_00102c76;
    }
    else if ((_current_demangling_style - 0x10000U & 0xfffeffff) == 0) goto LAB_00102c76;
    FUN_00102e20("Internal error: no symbol alphabet for current style");
LAB_00102d0d:
    if ((int)unaff_R13 != 0) {
      *(undefined *)(plVar12 + 0x20a28) = 0;
      FUN_00102380();
    }
    fflush((FILE *)*ppuVar18);
  }
  return 0;
LAB_00102670:
  bVar6 = pbVar16[1];
  pbVar16 = pbVar16 + 1;
  if (bVar6 == 0) goto LAB_00102abe;
  goto LAB_00102680;
}


////>>0x00102e20>>FUN_00102e20>>////



void FUN_00102e20(void)

{
  fflush(_stdout);
  fprintf(_stderr,"%s: ",DAT_0010d148);
  fwrite("Internal error: no symbol alphabet for current style",1,0x34,_stderr);
  putc(10,_stderr);
  xexit(1);
  return;
}


////>>0x00102f00>>_DT_FINI>>////

void _DT_FINI(void)

{
  return;
}

