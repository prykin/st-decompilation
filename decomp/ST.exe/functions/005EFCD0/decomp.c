
void __fastcall FUN_005efcd0(AnonShape_005EFCD0_3603EDD8 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;

  sVar1 = param_1->field_0047;
  sVar2 = param_1->field_0049;
  sVar3 = param_1->field_004B;
  param_1->field_024E = 0;
  if ((((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
       ((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)))) ||
      ((g_worldGrid.sizeZ <= sVar3 ||
       (g_worldGrid.cells
        [(int)g_worldGrid.planeStride * (int)sVar3 + (int)g_worldGrid.sizeX * (int)sVar2 +
         (int)sVar1].objects[0] == (STWorldObject *)0x0)))) &&
     (iVar4 = DumpClassC::WritePtr(sVar1,sVar2,sVar3,0,(AnonShape_00495EC0_95A268C6 *)param_1),
     iVar4 == 0)) {
    param_1->field_0252 = param_1->field_0252 + '\x01';
    thunk_FUN_005f06e0((AnonShape_005F0620_60AA17CE *)param_1);
    sVar1 = param_1->field_0047;
    sVar2 = param_1->field_0049;
    param_1->field_0246 = param_1->field_004B;
    param_1->field_005F = param_1->field_004B;
    param_1->field_027B = param_1->field_02C2;
    param_1->field_0242 = sVar1;
    param_1->field_0244 = sVar2;
    param_1->field_0277 = param_1->field_02BE;
    param_1->field_027F = param_1->field_02C6;
    param_1->field_005B = sVar1;
    param_1->field_005D = sVar2;
    if (param_1->field_02A7 != 0) {
      param_1->field_02A7 = 0;
      param_1->field_02AB = 0;
      param_1->field_024F = 0;
    }
    iVar4 = (int)(short)(sVar1 * 0xc9 + 100);
    if ((param_1->field_02BE == iVar4) && (param_1->field_02C2 == (int)(short)(sVar2 * 0xc9 + 100)))
    {
      iVar4 = PTR_00802a38->field_00E4;
      param_1->field_023A = 0;
      param_1->field_028F = iVar4 + 10;
      return;
    }
    param_1->field_028F = PTR_00802a38->field_00E4 + 10;
    thunk_FUN_005ecd70(param_1,iVar4,(int)(short)(sVar2 * 0xc9 + 100),param_1->field_02C6,
                       param_1->field_02BA,'\x01',0x1e);
    param_1->field_023A = 2;
  }
  return;
}

