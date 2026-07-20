
void __thiscall
FUN_00490b30(void *this,AnonShape_00490B30_6CCF6294 *param_1,short param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  AnonShape_00490B30_6CCF6294 *objPtr;
  int iVar4;
  uint uVar5;
  char cVar6;
  
  objPtr = param_1;
  cVar6 = (char)param_1;
  if ((*(char *)((int)this + 0x33a) == cVar6) && (*(short *)((int)this + 0x33f) == param_2)) {
    *(undefined2 *)((int)this + 0x33f) = (undefined2)param_3;
  }
  if (*(int *)((int)this + 0x45d) == 2) {
    sVar1 = *(short *)((int)this + 0x800);
    sVar2 = *(short *)((int)this + 0x804);
    sVar3 = *(short *)((int)this + 0x802);
    if (((((sVar1 < 0) || (SHORT_007fb240 <= sVar1)) || (sVar3 < 0)) ||
        ((SHORT_007fb242 <= sVar3 || (sVar2 < 0)))) || (SHORT_007fb244 <= sVar2)) {
      param_1 = (AnonShape_00490B30_6CCF6294 *)0x0;
    }
    else {
      param_1 = (AnonShape_00490B30_6CCF6294 *)
                g_worldCells
                [(int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar3 + (int)sVar1].
                objects[0];
    }
    if ((((param_1 != (AnonShape_00490B30_6CCF6294 *)0x0) &&
         (param_1->field_0018 == *(int *)((int)this + 0x7f4))) ||
        (iVar4 = FUN_006e62d0(PTR_00802a38,*(int *)((int)this + 0x7f4),(int *)&param_1), iVar4 != -4
        )) && ((param_1->field_0032 == param_2 && (param_1->field_0024 == (int)cVar6)))) {
      uVar5 = STAllPlayersC::GetObjPtr(g_sTAllPlayers_007FA174,(uint)objPtr,param_3,CASE_1);
      *(undefined4 *)((int)this + 0x7f4) = *(undefined4 *)(uVar5 + 0x18);
    }
  }
  return;
}

