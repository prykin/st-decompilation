
float10 FUN_00682300(char *param_1)

{
  float10 fVar1;
  
  if (*param_1 == '\x02') {
    return (float10)*(float *)(param_1 + 1);
  }
  fVar1 = thunk_FUN_0067f820((int)*(short *)(param_1 + 1));
  return fVar1;
}

