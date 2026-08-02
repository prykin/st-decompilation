
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006C2050 -> 006AB060 @ 006C212A

   [STUtilityFunctionApplier] free_and_null: frees a non-null allocation and clears the caller-owned
   pointer
   Evidence: body pattern verified */

void FreeAndNull(void **value)

{
  if (*value != nullptr) {
    Library::MSVCRT::thunk_FUN_006a4950(*value);
    *value = nullptr;
  }
  return;
}

