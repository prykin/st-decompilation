
void __thiscall
FUN_00490b30(void *this,AnonShape_00490B30_6CCF6294 *param_1,short param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  STGameObjC *pSVar5;
  char objPtr;

  objPtr = (char)param_1;
  if ((*(char *)((int)this + 0x33a) == objPtr) && (*(short *)((int)this + 0x33f) == param_2)) {
    *(undefined2 *)((int)this + 0x33f) = (undefined2)param_3;
  }
  if (*(int *)((int)this + 0x45d) == 2) {
    sVar1 = *(short *)((int)this + 0x800);
    sVar2 = *(short *)((int)this + 0x804);
    sVar3 = *(short *)((int)this + 0x802);
    if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
        ((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)))) || (g_worldGrid.sizeZ <= sVar2)) {
      param_1 = (AnonShape_00490B30_6CCF6294 *)0x0;
    }
    else {
      param_1 = (AnonShape_00490B30_6CCF6294 *)
                g_worldGrid.cells
                [(int)g_worldGrid.planeStride * (int)sVar2 + (int)g_worldGrid.sizeX * (int)sVar3 +
                 (int)sVar1].objects[0];
    }
    if ((((param_1 != (AnonShape_00490B30_6CCF6294 *)0x0) &&
         (param_1->field_0018 == *(int *)((int)this + 0x7f4))) ||
        (iVar4 = FUN_006e62d0(g_playSystem_00802A38,*(int *)((int)this + 0x7f4),(int *)&param_1),
        iVar4 != -4)) && ((param_1->field_0032 == param_2 && (param_1->field_0024 == (int)objPtr))))
    {
      pSVar5 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,objPtr,param_3,CASE_1);
      *(undefined4 *)((int)this + 0x7f4) = pSVar5->field_0018;
    }
  }
  return;
}

