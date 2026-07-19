
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settsobj.cpp
   SettMapSTy::SetListCtrls */

void __thiscall SettMapSTy::SetListCtrls(SettMapSTy *this)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  SettMapSTy *pSVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined4 unaff_ESI;
  char *pcVar9;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  SettMapSTy *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar6 = __setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar5 = local_14;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Start_settsobj_cpp_007cd544,0x3b,0,iVar6,&DAT_007a4ccc,
                               s_SettMapSTy__SetListCtrls_007cd56c);
    if (iVar8 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Start_settsobj_cpp_007cd544,0x3b);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_14[0x1e26] == (SettMapSTy)0x2) {
    local_8 = *(int *)(local_14 + 7999);
  }
  else {
    local_8 = *(int *)(local_14 + 0x1f43);
  }
  *(undefined4 *)(local_14 + 0x29) = 2;
  *(undefined4 *)(local_14 + 0x2d) = 0x20;
  local_c = 0;
  local_10 = 0x7e3;
  do {
    iVar8 = 0;
    iVar6 = local_10;
    do {
      if (*(int *)(pSVar5 + (iVar6 + iVar8) * 4) != 0) {
        iVar1 = *(int *)(pSVar5 + 0x1f84);
        if ((iVar1 == 0) || (*(uint *)(iVar1 + 0xc) <= (uint)(*(int *)(pSVar5 + 0x1f88) + local_c)))
        {
          pcVar9 = (char *)0x0;
        }
        else {
          pcVar9 = (char *)(*(int *)(iVar1 + 8) * (*(int *)(pSVar5 + 0x1f88) + local_c) +
                           *(int *)(iVar1 + 0x1c));
        }
        uVar2 = *(undefined4 *)(pSVar5 + (iVar6 + iVar8) * 4);
        *(undefined4 *)(pSVar5 + 0x31) = 0;
        *(undefined4 *)(pSVar5 + 0x25) = uVar2;
        if (pcVar9 != (char *)0x0) {
          switch(iVar8) {
          case 0:
            if (*(byte **)(pcVar9 + 0x50) != (byte *)0x0) {
              FUN_006ae110(*(byte **)(pcVar9 + 0x50));
            }
            if (pSVar5[0x1e26] == (SettMapSTy)0x2) {
              puVar7 = thunk_FUN_0067e0e0(local_8,(uint)(byte)pcVar9[2],0xffffffff);
            }
            else {
              puVar7 = thunk_FUN_0067dfd0(local_8,(uint)(byte)pcVar9[3],DAT_0080995c);
            }
            *(uint **)(pcVar9 + 0x50) = puVar7;
            if (puVar7[3] <= (uint)(byte)pcVar9[5]) {
              pcVar9[5] = (char)puVar7[3];
            }
            if ((puVar7[3] == 0) && (pcVar9[4] == '\x04')) {
              pcVar9[4] = '\x01';
            }
            break;
          case 1:
          case 2:
            if ((pSVar5[0x1e26] != (SettMapSTy)0x2) && (*pcVar9 != '\0')) {
              cVar4 = pcVar9[4];
joined_r0x005d502e:
              if (cVar4 != '\0') goto LAB_005d5030;
            }
            break;
          case 3:
            if (((pSVar5[0x1e26] != (SettMapSTy)0x2) || (pcVar9[4] != '\x02')) &&
               (*(int *)(*(int *)(pcVar9 + 0x50) + 0xc) != 0)) {
LAB_005d5030:
              *(undefined4 *)(pSVar5 + 0x31) = 1;
            }
            break;
          case 5:
            if ((((DAT_0080874d != -1) && (*pcVar9 != '\0')) && (pcVar9[4] != '\0')) &&
               (pSVar5[0x1e26] != (SettMapSTy)0x2)) {
              if ((pcVar9[4] == '\x02') &&
                 (cVar4 = DAT_00808a8f, *(int *)(pcVar9 + 6) == DAT_0080877f))
              goto joined_r0x005d502e;
              goto LAB_005d5030;
            }
          }
        }
        (**(code **)(**(int **)(pSVar5 + 0xc) + 0x18))(pSVar5 + 0x1d);
        iVar6 = local_10;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 8);
    local_10 = iVar6 + 8;
    local_c = local_c + 1;
    if (0x832 < local_10) {
      g_currentExceptionFrame = local_58.previous;
      return;
    }
  } while( true );
}

