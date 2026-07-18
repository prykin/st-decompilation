
uint __thiscall thunk_FUN_004176c0(void *this,short param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar6 = CONCAT22((short)((uint)unaff_ESI >> 0x10),*(short *)((int)this + 0x86));
  iVar8 = (int)param_1;
  uVar3 = (iVar8 / (int)*(short *)((int)this + 0x86)) * iVar6;
  uVar7 = iVar6 + uVar3;
  uVar1 = iVar8 - (short)uVar7;
  uVar4 = (int)uVar1 >> 0x1f;
  uVar2 = iVar8 - (short)uVar3;
  uVar5 = (int)uVar2 >> 0x1f;
  if ((int)((uVar1 ^ uVar4) - uVar4) <= (int)((uVar2 ^ uVar5) - uVar5)) {
    uVar3 = uVar7;
  }
  return -(uint)((short)uVar3 != 0x168) & uVar3;
}

