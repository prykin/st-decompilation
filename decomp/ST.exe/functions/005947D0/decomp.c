#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9D4>00402621

   [STObjectFactoryApplier] Central object factory for 0x100EF (ST_OBJECT_TYPE_100EF).
   Evidence: registry[86] at 007CA9D0 stores type 0x100EF and executable pointer 00402621;
   allocation size 280 has no unique current class-layout match */

void * __cdecl FUN_005947d0(void)

{
  undefined4 *this;

  this = FUN_006b04d0(0x118);
  if (this != (undefined4 *)0x0) {
    sub_006E5FB0(this);
    *this = 0x79c01c;
    memset(this + 0x22, 0, 0x80); /* compiler bulk-zero initialization */
    this[0x43] = 0;
    this[0x45] = 0;
    this[0x44] = 0;
    this[0x42] = 0xffffffff;
    this[0x21] = 1;
    return this;
  }
  return (void *)0x0;
}

