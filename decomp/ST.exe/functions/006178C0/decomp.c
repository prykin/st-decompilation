
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jbomb_m.Cpp
   JumpManagC::CheckSystrm */

void __thiscall JumpManagC::CheckSystrm(JumpManagC *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int local_8;
  
  iVar4 = *(int *)(this + 0x5e);
  iVar3 = 1;
  if (iVar4 != 0) {
    uVar5 = 0;
    if (0 < *(int *)(iVar4 + 0xc)) {
      bVar6 = *(int *)(iVar4 + 0xc) != 0;
      do {
        if ((bVar6) && (iVar4 = *(int *)(iVar4 + 8) * uVar5 + *(int *)(iVar4 + 0x1c), iVar4 != 0)) {
          if (*(int *)(iVar4 + 0x18) == 0) {
            iVar3 = -2;
          }
          else {
            iVar2 = FUN_006e62d0(DAT_00802a38,*(int *)(iVar4 + 0x1c),&local_8);
            if (iVar2 == -4) {
              iVar3 = -3;
            }
            else if (*(int *)(iVar4 + 0x18) == local_8) {
              if (*(int *)(local_8 + 0x8b) != *(int *)(iVar4 + 0x20)) {
                iVar3 = -5;
              }
            }
            else {
              iVar3 = -4;
            }
          }
        }
        else {
          iVar3 = -1;
        }
        uVar5 = uVar5 + 1;
        iVar4 = *(int *)(this + 0x5e);
        bVar6 = uVar5 < *(uint *)(iVar4 + 0xc);
      } while ((int)uVar5 < (int)*(uint *)(iVar4 + 0xc));
      if (iVar3 == 0) {
        iVar4 = ReportDebugMessage(s_E____titans_nick_to_jbomb_m_Cpp_007d005c,0x8a,0,0,
                                   s_JumpManagC__CheckSystrm_CheckPro_007d00a0,0);
        if (iVar4 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  return;
}

