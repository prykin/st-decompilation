
/* WARNING: Removing unreachable block (ram,0x00483eb6) */

undefined4 __thiscall thunk_FUN_00483e30(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar2 = (int)*(short *)((int)this + 0x41) - (int)*(short *)(param_1 + 0x41);
  uVar1 = *(uint *)((int)this + 0x80c);
  uVar3 = (int)*(short *)((int)this + 0x43) - (int)*(short *)(param_1 + 0x43);
  uVar4 = (int)*(short *)((int)this + 0x41) - (int)*(short *)(param_1 + 0x45);
  uVar5 = (int)*(short *)((int)this + 0x45) - (int)*(short *)(param_1 + 0x45);
  lVar6 = __allmul(uVar3 + uVar4,
                   ((int)uVar3 >> 0x1f) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar3,uVar4),uVar5,
                   (int)uVar5 >> 0x1f);
  lVar7 = __allmul(uVar2,(int)uVar2 >> 0x1f,uVar2,(int)uVar2 >> 0x1f);
  lVar8 = __allmul(uVar1,(int)uVar1 >> 0x1f,uVar1,(int)uVar1 >> 0x1f);
  if (lVar7 + lVar6 <= lVar8) {
    return 1;
  }
  return 0;
}

