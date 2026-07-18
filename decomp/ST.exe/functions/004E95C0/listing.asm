FUN_004e95c0:
004E95C0  55                        PUSH EBP
004E95C1  8B EC                     MOV EBP,ESP
004E95C3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E95C6  56                        PUSH ESI
004E95C7  8B F1                     MOV ESI,ECX
004E95C9  57                        PUSH EDI
004E95CA  8B 7A 18                  MOV EDI,dword ptr [EDX + 0x18]
004E95CD  33 C0                     XOR EAX,EAX
004E95CF  8B 8E D8 04 00 00         MOV ECX,dword ptr [ESI + 0x4d8]
004E95D5  3B CF                     CMP ECX,EDI
004E95D7  75 43                     JNZ 0x004e961c
004E95D9  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
004E95DF  C7 86 D8 04 00 00 FF FF 00 00  MOV dword ptr [ESI + 0x4d8],0xffff
004E95E9  85 C0                     TEST EAX,EAX
004E95EB  74 2A                     JZ 0x004e9617
004E95ED  8B 86 EC 04 00 00         MOV EAX,dword ptr [ESI + 0x4ec]
004E95F3  8B 8E E8 04 00 00         MOV ECX,dword ptr [ESI + 0x4e8]
004E95F9  8B 96 E4 04 00 00         MOV EDX,dword ptr [ESI + 0x4e4]
004E95FF  50                        PUSH EAX
004E9600  51                        PUSH ECX
004E9601  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
004E9607  52                        PUSH EDX
004E9608  E8 C7 87 F1 FF            CALL 0x00401dd4
004E960D  C7 86 E0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4e0],0x0
LAB_004e9617:
004E9617  B8 01 00 00 00            MOV EAX,0x1
LAB_004e961c:
004E961C  5F                        POP EDI
004E961D  5E                        POP ESI
004E961E  5D                        POP EBP
004E961F  C2 04 00                  RET 0x4
