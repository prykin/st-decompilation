
/* [STUtilityFunctionApplier] darray_get_element: copies the indexed DArray element and returns
   index or -4
   Evidence: body pattern verified */

int __fastcall DArrayGetElement(DArrayTy *array,uint index,void *outElement)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;

  if (array->count <= index) {
    return -4;
  }
  uVar2 = array->elementSize;
  if (uVar2 == 4) {
    *(undefined4 *)outElement = *(undefined4 *)((int)array->data + index * 4);
    return index;
  }
  puVar3 = (undefined4 *)(uVar2 * index + (int)array->data);
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)outElement = *puVar3;
    puVar3 = puVar3 + 1;
    outElement = (undefined4 *)((int)outElement + 4);
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)outElement = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    outElement = (undefined4 *)((int)outElement + 1);
  }
  return index;
}

