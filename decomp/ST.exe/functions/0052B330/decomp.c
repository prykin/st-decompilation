
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STReturnSemanticsApplier] boolean_return_domain.
   Evidence: all explicit return values are constants in {0,1}: [0, 0, 0, 0, 1, 0] */

bool __fastcall FUN_0052b330(AnonShape_0052B330_71C9FFBF *param_1)

{
  bool bVar1;

  bVar1 = true;
  if (param_1->field_0DC7 != '\x01') {
    if (param_1->field_0DC7 != '\x02') {
      return false;
    }
    if (0x13 < (uint)param_1->field_0DC8) {
      return false;
    }
    param_1->field_0DC8 = param_1->field_0DC8 + 1;
    return false;
  }
  param_1->field_0DC8 = param_1->field_0DC8 + 1;
  if (((param_1->field_0DCD == '\0') || (param_1->field_0DCD == '\x01')) &&
     ((float)param_1->field_0DD6 != (float)param_1->field_0DCE)) {
    bVar1 = false;
    param_1->field_0DD6 = (float)param_1->field_0DD6 + param_1->field_0DDE;
    if (param_1->field_0DE6 != _DAT_0079034c) {
      param_1->field_0DDE = param_1->field_0DE6 + param_1->field_0DDE;
    }
    if (param_1->field_0DDE <= _DAT_0079034c) {
      if ((float)param_1->field_0DD6 < (float)param_1->field_0DCE) {
        param_1->field_0DD6 = param_1->field_0DCE;
        goto LAB_0052b416;
      }
    }
    else if ((float)param_1->field_0DCE < (float)param_1->field_0DD6) {
      param_1->field_0DD6 = param_1->field_0DCE;
LAB_0052b416:
      param_1->field_0DCD = 2;
      bVar1 = true;
    }
  }
  if (((param_1->field_0DCD == '\0') || (param_1->field_0DCD == '\x02')) &&
     ((float)param_1->field_0DDA != (float)param_1->field_0DD2)) {
    param_1->field_0DDA = (float)param_1->field_0DDA + param_1->field_0DE2;
    if (param_1->field_0DEA != _DAT_0079034c) {
      param_1->field_0DE2 = param_1->field_0DEA + param_1->field_0DE2;
    }
    if (param_1->field_0DE2 <= _DAT_0079034c) {
      if ((float)param_1->field_0DD2 <= (float)param_1->field_0DDA) goto cf_common_exit_0052B581;
      param_1->field_0DDA = param_1->field_0DD2;
    }
    else {
      if ((float)param_1->field_0DDA <= (float)param_1->field_0DD2) goto cf_common_exit_0052B581;
      param_1->field_0DDA = param_1->field_0DD2;
    }
    param_1->field_0DCD = 1;
    if ((float)param_1->field_0DD6 != (float)param_1->field_0DCE) {
cf_common_exit_0052B581:
      if (param_1->field_0DB3 == 0) {
        return false;
      }
      FUN_006e6540(param_1->field_0DB3,param_1->field_0DD6,param_1->field_0DDA,-1);
      return true;
    }
  }
  else if (!bVar1) goto cf_common_exit_0052B581;
  param_1->field_0DC7 = 2;
  if ((int *)param_1->field_0DB3 != (int *)0x0) {
    FUN_006e6580(PTR_00807598,(int *)param_1->field_0DB3);
  }
  param_1->field_0DB3 = 0;
  param_1->field_0DC8 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  FUN_006e65c0(PTR_00807598,
               *(undefined4 *)(&param_1->field_0xdbf + (uint)(byte)param_1->field_0DCC * 4),
               (char)*(undefined2 *)
                      (*(int *)(&param_1->field_0x9c8 + (uint)(byte)param_1->field_0DCC * 4) + 0x23)
               ,param_1->field_0DD6,param_1->field_0DDA,5,5,1);
  thunk_FUN_005252c0((param_1->field_0DCC != '\0') + CASE_B6);
  return false;
}

