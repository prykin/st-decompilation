FUN_005ef950:
005EF950  55                        PUSH EBP
005EF951  8B EC                     MOV EBP,ESP
005EF953  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005EF956  B8 89 88 88 88            MOV EAX,0x88888889
005EF95B  F7 E9                     IMUL ECX
005EF95D  03 D1                     ADD EDX,ECX
005EF95F  56                        PUSH ESI
005EF960  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
005EF963  C1 FA 03                  SAR EDX,0x3
005EF966  8B C2                     MOV EAX,EDX
005EF968  C1 E8 1F                  SHR EAX,0x1f
005EF96B  03 D0                     ADD EDX,EAX
005EF96D  B8 89 88 88 88            MOV EAX,0x88888889
005EF972  8B CA                     MOV ECX,EDX
005EF974  F7 EE                     IMUL ESI
005EF976  03 D6                     ADD EDX,ESI
005EF978  5E                        POP ESI
005EF979  C1 FA 03                  SAR EDX,0x3
005EF97C  8B C2                     MOV EAX,EDX
005EF97E  C1 E8 1F                  SHR EAX,0x1f
005EF981  03 D0                     ADD EDX,EAX
005EF983  3B CA                     CMP ECX,EDX
005EF985  75 06                     JNZ 0x005ef98d
005EF987  33 C0                     XOR EAX,EAX
005EF989  5D                        POP EBP
005EF98A  C2 08 00                  RET 0x8
LAB_005ef98d:
005EF98D  7E 1B                     JLE 0x005ef9aa
005EF98F  8B C2                     MOV EAX,EDX
005EF991  2B C1                     SUB EAX,ECX
005EF993  2B CA                     SUB ECX,EDX
005EF995  83 C0 18                  ADD EAX,0x18
005EF998  33 D2                     XOR EDX,EDX
005EF99A  3B C8                     CMP ECX,EAX
005EF99C  0F 9D C2                  SETGE DL
005EF99F  4A                        DEC EDX
005EF9A0  83 E2 FE                  AND EDX,0xfffffffe
005EF9A3  42                        INC EDX
005EF9A4  8B C2                     MOV EAX,EDX
005EF9A6  5D                        POP EBP
005EF9A7  C2 08 00                  RET 0x8
LAB_005ef9aa:
005EF9AA  8B C1                     MOV EAX,ECX
005EF9AC  2B C2                     SUB EAX,EDX
005EF9AE  2B D1                     SUB EDX,ECX
005EF9B0  83 C0 18                  ADD EAX,0x18
005EF9B3  33 C9                     XOR ECX,ECX
005EF9B5  3B D0                     CMP EDX,EAX
005EF9B7  0F 9D C1                  SETGE CL
005EF9BA  49                        DEC ECX
005EF9BB  83 E1 02                  AND ECX,0x2
005EF9BE  49                        DEC ECX
005EF9BF  8B C1                     MOV EAX,ECX
005EF9C1  5D                        POP EBP
005EF9C2  C2 08 00                  RET 0x8
