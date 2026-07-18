
void __thiscall thunk_FUN_004fe4f0(void *this,int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 extraout_EDX;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  UINT UVar8;
  undefined4 uStack_5c;
  undefined4 auStack_58 [16];
  void *pvStack_18;
  undefined4 *puStack_14;
  uint uStack_10;
  uint uStack_c;
  char cStack_5;
  
  if (param_1 == 0) {
    puStack_14 = *(undefined4 **)((int)this + 0x19c);
    bVar3 = *(byte *)((int)this + 0xc6c);
  }
  else {
    puStack_14 = *(undefined4 **)((int)this + 0x184);
    bVar3 = *(byte *)((int)this + 0xb7e);
  }
  uStack_c = CONCAT31(uStack_c._1_3_,bVar3);
  if (param_1 == 0) {
    cStack_5 = *(char *)((int)this + 0xc53);
  }
  else {
    cStack_5 = *(char *)((int)this + 0xb65);
  }
  if (bVar3 < 0x65) {
    uStack_5c = DAT_00858df8;
    DAT_00858df8 = &uStack_5c;
    pvStack_18 = this;
    iVar4 = __setjmp3(auStack_58,0,unaff_EDI,unaff_ESI);
    puVar2 = puStack_14;
    if (iVar4 == 0) {
      bVar3 = (byte)uStack_c;
      cVar6 = (char)(((uStack_c & 0xff) * 7) / 10);
      uStack_10 = CONCAT31(uStack_10._1_3_,cVar6);
      if (((byte)uStack_c != 0) && (cVar6 == '\0')) {
        uStack_10 = CONCAT31(uStack_10._1_3_,1);
      }
      if ((byte)uStack_c < 0x46) {
        iVar4 = (-(uint)((byte)uStack_c < 0x14) & 6) + 6;
      }
      else {
        iVar4 = 0;
      }
      FUN_006b55f0(puStack_14,0,5,0x1f,*(int *)((int)pvStack_18 + 0x286),0,0,iVar4,uStack_10 & 0xff,
                   6);
      if ((param_1 == 0) && (cStack_5 == '\x02')) {
        UVar8 = 0x36ba;
        uVar7 = uStack_c;
      }
      else {
        UVar8 = 0x36b1;
        uVar7 = CONCAT31((int3)((uint)extraout_EDX >> 8),'d' - bVar3);
      }
      thunk_FUN_004f1d90((int)puVar2,5,0x27,uVar7,UVar8);
      DAT_00858df8 = (undefined4 *)uStack_5c;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_5c;
    iVar5 = FUN_006ad4d0(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x2f,0,iVar4,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c23cc,0x2f);
  }
  return;
}

