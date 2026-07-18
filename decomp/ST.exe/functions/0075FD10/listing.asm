FUN_0075fd10:
0075FD10  55                        PUSH EBP
0075FD11  8B EC                     MOV EBP,ESP
0075FD13  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075FD16  53                        PUSH EBX
0075FD17  56                        PUSH ESI
0075FD18  57                        PUSH EDI
0075FD19  8B 08                     MOV ECX,dword ptr [EAX]
0075FD1B  68 00 04 00 00            PUSH 0x400
0075FD20  6A 01                     PUSH 0x1
0075FD22  50                        PUSH EAX
0075FD23  FF 11                     CALL dword ptr [ECX]
0075FD25  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0075FD28  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075FD2B  C1 E3 09                  SHL EBX,0x9
0075FD2E  81 EB 00 02 00 00         SUB EBX,0x200
0075FD34  BF 98 21 7A 00            MOV EDI,0x7a2198
0075FD39  8B F0                     MOV ESI,EAX
LAB_0075fd3b:
0075FD3B  33 C9                     XOR ECX,ECX
LAB_0075fd3d:
0075FD3D  33 C0                     XOR EAX,EAX
0075FD3F  83 C6 04                  ADD ESI,0x4
0075FD42  8A 04 0F                  MOV AL,byte ptr [EDI + ECX*0x1]
0075FD45  8B D0                     MOV EDX,EAX
0075FD47  C1 E2 08                  SHL EDX,0x8
0075FD4A  2B D0                     SUB EDX,EAX
0075FD4C  B8 01 FE 00 00            MOV EAX,0xfe01
0075FD51  D1 E2                     SHL EDX,0x1
0075FD53  2B C2                     SUB EAX,EDX
0075FD55  99                        CDQ
0075FD56  F7 FB                     IDIV EBX
0075FD58  41                        INC ECX
0075FD59  83 F9 10                  CMP ECX,0x10
0075FD5C  89 46 FC                  MOV dword ptr [ESI + -0x4],EAX
0075FD5F  7C DC                     JL 0x0075fd3d
0075FD61  83 C7 10                  ADD EDI,0x10
0075FD64  81 FF 98 22 7A 00         CMP EDI,0x7a2298
0075FD6A  7C CF                     JL 0x0075fd3b
0075FD6C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075FD6F  5F                        POP EDI
0075FD70  5E                        POP ESI
0075FD71  5B                        POP EBX
0075FD72  5D                        POP EBP
0075FD73  C2 08 00                  RET 0x8
