
/* Recovered from embedded debug metadata:
   E:\Ourlib\mfcfnt.cpp
   ccFntTy::_SarrToTxt */

char * __thiscall ccFntTy::_SarrToTxt(ccFntTy *this,char *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar8;
  char *pcVar9;
  undefined4 local_54;
  undefined4 local_50 [16];
  int local_10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  if (param_2 != 0) {
    local_54 = DAT_00858df8;
    DAT_00858df8 = &local_54;
    iVar3 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      if (param_1 == (char *)0x0) {
        iVar6 = 0;
        iVar3 = *(int *)(param_2 + 8);
        if (0 < iVar3) {
          if (iVar3 < 1) {
            pcVar7 = (char *)0x0;
            goto LAB_007130e8;
          }
          do {
            pcVar7 = *(char **)(*(int *)(param_2 + 0x14) + iVar6 * 4);
LAB_007130e8:
            if (pcVar7 != (char *)0x0) {
              uVar4 = 0xffffffff;
              do {
                if (uVar4 == 0) break;
                uVar4 = uVar4 - 1;
                cVar1 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 != '\0');
              local_c = local_c + ~uVar4 + 2;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar3);
        }
        param_1 = (char *)FUN_006aac10(local_c);
      }
      iVar3 = 0;
      pcVar7 = param_1;
      if (0 < *(int *)(param_2 + 8)) {
        if (*(int *)(param_2 + 8) < 1) {
          pcVar8 = (char *)0x0;
          goto LAB_00713134;
        }
        do {
          pcVar8 = *(char **)(*(int *)(param_2 + 0x14) + iVar3 * 4);
LAB_00713134:
          if (pcVar8 != (char *)0x0) {
            if (pcVar7 != (char *)0x0) {
              uVar4 = 0xffffffff;
              do {
                pcVar9 = pcVar8;
                if (uVar4 == 0) break;
                uVar4 = uVar4 - 1;
                pcVar9 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar9;
              } while (cVar1 != '\0');
              uVar4 = ~uVar4;
              pcVar8 = pcVar9 + -uVar4;
              pcVar9 = pcVar7;
              for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar9 = pcVar9 + 4;
              }
              for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                *pcVar9 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar9 = pcVar9 + 1;
              }
            }
            cVar1 = *pcVar7;
            while (cVar1 != '\0') {
              pcVar8 = pcVar7 + 1;
              pcVar7 = pcVar7 + 1;
              cVar1 = *pcVar8;
            }
            if (iVar3 < *(int *)(param_2 + 8) + -1) {
              *pcVar7 = DAT_007c8ff4;
              pcVar7 = pcVar7 + 1;
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_2 + 8));
      }
      *pcVar7 = '\0';
      DAT_00858df8 = (undefined4 *)local_54;
      return param_1;
    }
    DAT_00858df8 = (undefined4 *)local_54;
    iVar6 = FUN_006ad4d0(s_E__Ourlib_mfcfnt_cpp_007f0190,0x8ff,0,iVar3,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      pcVar7 = (char *)(*pcVar2)();
      return pcVar7;
    }
    if ((local_10 != 0) && (local_8 != 0)) {
      FUN_006ab060(&local_8);
    }
    FUN_006a5e40(iVar3,0,0x7f0190,0x903);
  }
  return (char *)0x0;
}

