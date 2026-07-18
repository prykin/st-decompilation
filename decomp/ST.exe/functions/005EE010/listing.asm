FUN_005ee010:
005EE010  55                        PUSH EBP
005EE011  8B EC                     MOV EBP,ESP
005EE013  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005EE016  56                        PUSH ESI
005EE017  8B F1                     MOV ESI,ECX
005EE019  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005EE01C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005EE01F  89 8E 7B 02 00 00         MOV dword ptr [ESI + 0x27b],ECX
005EE025  33 C9                     XOR ECX,ECX
005EE027  8A 8E 51 02 00 00         MOV CL,byte ptr [ESI + 0x251]
005EE02D  89 86 77 02 00 00         MOV dword ptr [ESI + 0x277],EAX
005EE033  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005EE036  89 96 7F 02 00 00         MOV dword ptr [ESI + 0x27f],EDX
005EE03C  3B C8                     CMP ECX,EAX
005EE03E  74 0D                     JZ 0x005ee04d
005EE040  8B CE                     MOV ECX,ESI
005EE042  88 86 51 02 00 00         MOV byte ptr [ESI + 0x251],AL
005EE048  E8 B6 68 E1 FF            CALL 0x00404903
LAB_005ee04d:
005EE04D  8B 86 3A 02 00 00         MOV EAX,dword ptr [ESI + 0x23a]
005EE053  5E                        POP ESI
005EE054  5D                        POP EBP
005EE055  C2 10 00                  RET 0x10
