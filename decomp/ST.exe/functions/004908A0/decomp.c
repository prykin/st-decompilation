
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004908A0 parameter used as this of STFishC::sub_004162B0 @ 004908C1
   [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=0046F5C0 @ 0046FB46
   -> CMP CMP EAX,0x1 | 0046F5C0 @ 0046FCDD -> CMP CMP EAX,0x1 */

int __thiscall FUN_004908a0(void *this,STFishC *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int local_10;
  undefined2 local_c [2];
  undefined2 local_8 [2];

  local_10 = 1000000;
  STFishC::sub_004162B0(param_1,(undefined2 *)&param_1,local_8,local_c);
  iVar6 = 0;
  iVar5 = param_2;
  do {
    sVar4 = local_8[0] + (short)iVar6;
    sVar3 = local_c[0] + 1;
    sVar1 = (short)param_1 + (short)iVar5;
    if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar4 < 0)) ||
       (((g_worldGrid.sizeY <= sVar4 || (sVar3 < 0)) ||
        ((g_worldGrid.sizeZ <= sVar3 ||
         (iVar5 = param_2,
         g_worldGrid.cells
         [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar4 +
          (int)sVar1].objects[0] == (STWorldObject *)0x0)))))) {
      iVar2 = FUN_006aadd0((int)*(short *)((int)this + 0x47),(int)*(short *)((int)this + 0x49),
                           (int)*(short *)((int)this + 0x4b),(short)param_1 + iVar5,
                           local_8[0] + iVar6,local_c[0] + 1);
      if (iVar2 < local_10) {
        *(short *)((int)this + 0x56c) = (short)iVar5 + (short)param_1;
        *(short *)((int)this + 0x56e) = (short)iVar6 + local_8[0];
        *(short *)((int)this + 0x570) = local_c[0] + 1;
        local_10 = iVar2;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  return (uint)(local_10 != 1000000);
}

