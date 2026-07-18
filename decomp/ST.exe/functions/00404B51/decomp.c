
void __thiscall thunk_FUN_005b9010(void *this,int param_1)

{
  short sVar1;
  code *pcVar2;
  void *this_00;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  void *pvStack_c;
  uint uStack_8;
  
  *(undefined4 *)((int)this + 0x2d) = 0x20;
  uStack_50 = DAT_00858df8;
  DAT_00858df8 = &uStack_50;
  pvStack_c = this;
  iVar4 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  this_00 = pvStack_c;
  if (iVar4 == 0) {
    uStack_8 = uStack_8 & 0xffffff00;
    if (*(char *)((int)pvStack_c + 0x9a) != '\0') {
      do {
        uVar5 = uStack_8 & 0xff;
        if ((*(int *)((int)this_00 + uVar5 * 4 + 0x66) == 0) ||
           (sVar1 = *(short *)(param_1 + uVar5 * 2), sVar1 == 0)) {
          *(undefined2 *)((int)this_00 + uVar5 * 2 + 0x1c82) = *(undefined2 *)(param_1 + uVar5 * 2);
        }
        else {
          if (sVar1 < 1) {
            *(undefined4 *)((int)this_00 + 0x31) = 0;
          }
          else {
            *(undefined4 *)((int)this_00 + 0x31) = 1;
          }
          FUN_006e6080(this_00,2,*(undefined4 *)((int)this_00 + uVar5 * 4 + 0x66),
                       (undefined4 *)((int)this_00 + 0x1d));
        }
        bVar3 = (char)uStack_8 + 1;
        uStack_8 = CONCAT31(uStack_8._1_3_,bVar3);
      } while (bVar3 < *(byte *)((int)this_00 + 0x9a));
    }
    DAT_00858df8 = (undefined4 *)uStack_50;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_50;
  iVar6 = FUN_006ad4d0(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x1c1,0,iVar4,&DAT_007a4ccc);
  if (iVar6 == 0) {
    FUN_006a5e40(iVar4,0,0x7ccb74,0x1c1);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

