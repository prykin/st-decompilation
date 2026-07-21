
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=005FAC8D MOVSX EAX,word ptr [EBP + 0x8] */

void __thiscall
FUN_005fac40(void *this,short param_1,int param_2,int param_3,short param_4,short param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_00000006;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_00000012;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_00000016;

  iVar1 = _param_1;
  if (*(int *)((int)this + 0x2e6) != 0) {
    if (_param_1 == 0) {
      _param_1 = _param_4;
      _param_4 = _param_5;
      _param_5 = param_6;
    }
    else {
      thunk_FUN_00416270(this,&param_1,(int *)&param_4,(int *)&param_5);
    }
    if (param_2 == 1) {
      *(int *)(*(int *)((int)this + 0x2e6) + 0x14) = (int)param_1;
      *(int *)(*(int *)((int)this + 0x2e6) + 0x18) = (int)param_4;
      *(int *)(*(int *)((int)this + 0x2e6) + 0x1c) = param_5 + -0x32;
      *(uint *)(*(int *)((int)this + 0x2e6) + 0x68) = PTR_00802a38->field_00E4;
      *(undefined4 *)(*(int *)((int)this + 0x2e6) + 100) = 9;
      *(undefined4 *)(*(int *)((int)this + 0x2e6) + 0x60) =
           *(undefined4 *)(*(int *)((int)this + 0x2e6) + 0x1c);
      *(undefined4 *)(*(int *)((int)this + 0x2e6) + 0x34) =
           *(undefined4 *)(*(int *)((int)this + 0x2e6) + 0x14);
      *(undefined4 *)(*(int *)((int)this + 0x2e6) + 0x38) =
           *(undefined4 *)(*(int *)((int)this + 0x2e6) + 0x18);
      if (iVar1 == 0) {
        param_3 = *(int *)(*(int *)((int)this + 0x2e6) + 0x3c);
      }
      else {
        *(int *)(*(int *)((int)this + 0x2e6) + 0x3c) = param_3;
      }
      iVar1 = *(int *)((int)this + 0x2e6);
      iVar2 = *(int *)(iVar1 + 0x1c) - param_3;
      if (iVar2 != 0) {
        *(int *)(iVar1 + 0x50) = (*(int *)(iVar1 + 100) * 100) / iVar2 + 1;
        *(undefined4 *)(*(int *)((int)this + 0x2e6) + 0x54) =
             *(undefined4 *)(*(int *)((int)this + 0x2e6) + 0x50);
      }
    }
  }
  return;
}

