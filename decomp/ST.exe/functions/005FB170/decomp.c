
void __fastcall FUN_005fb170(STColl3C *param_1)

{
  switch(param_1->field_02DD) {
  case 1:
    thunk_FUN_005f66b0((STJellyGunC *)param_1);
    return;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    STColl3C::LoadImagSpr(param_1,0);
    thunk_FUN_005fa070((int *)param_1);
    param_1->field_02DD = 0xd;
  }
  return;
}

