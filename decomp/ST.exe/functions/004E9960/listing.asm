FUN_004e9960:
004E9960  55                        PUSH EBP
004E9961  8B EC                     MOV EBP,ESP
004E9963  8B 81 F8 04 00 00         MOV EAX,dword ptr [ECX + 0x4f8]
004E9969  85 C0                     TEST EAX,EAX
004E996B  74 4A                     JZ 0x004e99b7
004E996D  8B 81 FC 04 00 00         MOV EAX,dword ptr [ECX + 0x4fc]
004E9973  85 C0                     TEST EAX,EAX
004E9975  74 40                     JZ 0x004e99b7
004E9977  8B 81 1B 06 00 00         MOV EAX,dword ptr [ECX + 0x61b]
004E997D  85 C0                     TEST EAX,EAX
004E997F  74 36                     JZ 0x004e99b7
004E9981  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E9984  8B 80 B0 05 00 00         MOV EAX,dword ptr [EAX + 0x5b0]
004E998A  89 02                     MOV dword ptr [EDX],EAX
004E998C  8B 81 1B 06 00 00         MOV EAX,dword ptr [ECX + 0x61b]
004E9992  8B 90 B4 05 00 00         MOV EDX,dword ptr [EAX + 0x5b4]
004E9998  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004E999B  89 10                     MOV dword ptr [EAX],EDX
004E999D  8B 89 1B 06 00 00         MOV ECX,dword ptr [ECX + 0x61b]
004E99A3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E99A6  8B 91 B8 05 00 00         MOV EDX,dword ptr [ECX + 0x5b8]
004E99AC  89 10                     MOV dword ptr [EAX],EDX
004E99AE  B8 01 00 00 00            MOV EAX,0x1
004E99B3  5D                        POP EBP
004E99B4  C2 0C 00                  RET 0xc
LAB_004e99b7:
004E99B7  33 C0                     XOR EAX,EAX
004E99B9  5D                        POP EBP
004E99BA  C2 0C 00                  RET 0xc
