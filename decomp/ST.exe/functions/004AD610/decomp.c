#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/byte Evidence: all
   resolved direct callers consume only AL or kill the result; narrow_uses=2, ignored=0, full=0,
   unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator definition
   width on every path; sites=005F0BA0 @ 005F0C13 -> read as AL on every CFG path | 005FA180 @
   005FA1F4 -> read as AL on every CFG path */

byte __fastcall FUN_004ad610(RecoveredRecord_004AD610_D99117A2 *param_1)

{
  return param_1->field_0011;
}

