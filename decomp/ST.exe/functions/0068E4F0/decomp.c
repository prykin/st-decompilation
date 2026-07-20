
uint * __thiscall FUN_0068e4f0(void *this,int param_1)

{
  uint uVar1;
  uint *groupContent;
  int iVar2;
  uint *groupContent_00;
  undefined2 *puVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 local_c;
  uint local_8;
  
  groupContent = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,2,0x14);
  iVar2 = *(int *)((int)this + 0xa5);
  local_8 = 0;
  if (0 < *(int *)(iVar2 + 0xc)) {
    bVar7 = *(int *)(iVar2 + 0xc) != 0;
    iVar4 = extraout_EDX;
    do {
      uVar6 = local_8;
      if (bVar7) {
        iVar4 = *(int *)(iVar2 + 0x1c);
        iVar2 = *(int *)(iVar2 + 8) * local_8 + iVar4;
      }
      else {
        iVar2 = 0;
      }
      if ((*(AnonShape_0065E360_B94C37CB **)(iVar2 + 4) != (AnonShape_0065E360_B94C37CB *)0x0) &&
         (groupContent_00 =
               thunk_FUN_0065e360(*(AnonShape_0065E360_B94C37CB **)(iVar2 + 4),iVar4,param_1),
         iVar4 = extraout_EDX_00, groupContent_00 != (uint *)0x0)) {
        uVar1 = groupContent_00[3];
        if ((uVar1 != 0) && (uVar5 = 0, uVar6 = local_8, 0 < (int)uVar1)) {
          bVar7 = uVar1 != 0;
          iVar2 = extraout_EDX_00;
          do {
            if (bVar7) {
              puVar3 = (undefined2 *)(groupContent_00[2] * uVar5 + groupContent_00[7]);
            }
            else {
              puVar3 = (undefined2 *)0x0;
            }
            local_c = CONCAT22((short)((uint)iVar2 >> 0x10),*puVar3);
            Library::DKW::TBL::FUN_006ae1c0(groupContent,&local_c);
            uVar5 = uVar5 + 1;
            bVar7 = uVar5 < groupContent_00[3];
            iVar2 = extraout_EDX_01;
            uVar6 = local_8;
          } while ((int)uVar5 < (int)groupContent_00[3]);
        }
        FUN_006ae110((byte *)groupContent_00);
        iVar4 = extraout_EDX_02;
      }
      local_8 = uVar6 + 1;
      iVar2 = *(int *)((int)this + 0xa5);
      bVar7 = local_8 < *(uint *)(iVar2 + 0xc);
    } while ((int)local_8 < (int)*(uint *)(iVar2 + 0xc));
  }
  if (groupContent[3] != 0) {
    return groupContent;
  }
  FUN_006ae110((byte *)groupContent);
  return (uint *)0x0;
}

