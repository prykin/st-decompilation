MMsgTy::FUN_005b8f40:
005B8F40  55                        PUSH EBP
005B8F41  8B EC                     MOV EBP,ESP
005B8F43  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005B8F46  85 C0                     TEST EAX,EAX
005B8F48  74 29                     JZ 0x005b8f73
005B8F4A  56                        PUSH ESI
005B8F4B  8B 30                     MOV ESI,dword ptr [EAX]
005B8F4D  8D 91 9C 1C 00 00         LEA EDX,[ECX + 0x1c9c]
005B8F53  6A 00                     PUSH 0x0
005B8F55  6A 00                     PUSH 0x0
005B8F57  6A 01                     PUSH 0x1
005B8F59  89 32                     MOV dword ptr [EDX],ESI
005B8F5B  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
005B8F5E  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
005B8F61  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005B8F64  89 72 08                  MOV dword ptr [EDX + 0x8],ESI
005B8F67  8A 40 0C                  MOV AL,byte ptr [EAX + 0xc]
005B8F6A  88 42 0C                  MOV byte ptr [EDX + 0xc],AL
005B8F6D  E8 33 90 E4 FF            CALL 0x00401fa5
005B8F72  5E                        POP ESI
LAB_005b8f73:
005B8F73  5D                        POP EBP
005B8F74  C2 04 00                  RET 0x4
