
void FUN_00751c40(undefined4 param_1,uint param_2,int param_3,uint *param_4,int param_5)

{
  undefined1 local_38 [14];
  undefined2 local_2a;
  int local_28;
  int local_18;
  uint local_10 [3];

  local_2a = (undefined2)param_3;
  local_18 = param_5;
  local_28 = 0;
  if ((((0xf < param_3) && (param_5 == 3)) && (local_28 = param_5, param_4 == (uint *)0x0)) &&
     (param_3 == 0x10)) {
    local_10[0] = 0xf800;
    local_10[1] = 0x7e0;
    local_10[2] = 0x1f;
    param_4 = local_10;
  }
  Library::DKW::JPG::FUN_00754530((int)local_38,param_4,0,0,param_1,param_2);
  return;
}

