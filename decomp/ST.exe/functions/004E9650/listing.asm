FUN_004e9650:
004E9650  55                        PUSH EBP
004E9651  8B EC                     MOV EBP,ESP
004E9653  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E9656  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E9659  56                        PUSH ESI
004E965A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004E965D  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
004E9663  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
004E9669  57                        PUSH EDI
004E966A  C7 06 FF FF FF FF         MOV dword ptr [ESI],0xffffffff
004E9670  81 B9 D8 04 00 00 FF FF 00 00  CMP dword ptr [ECX + 0x4d8],0xffff
004E967A  74 18                     JZ 0x004e9694
004E967C  8B B9 E4 04 00 00         MOV EDI,dword ptr [ECX + 0x4e4]
004E9682  89 3E                     MOV dword ptr [ESI],EDI
004E9684  8B B1 E8 04 00 00         MOV ESI,dword ptr [ECX + 0x4e8]
004E968A  89 32                     MOV dword ptr [EDX],ESI
004E968C  8B 89 EC 04 00 00         MOV ECX,dword ptr [ECX + 0x4ec]
004E9692  89 08                     MOV dword ptr [EAX],ECX
LAB_004e9694:
004E9694  5F                        POP EDI
004E9695  33 C0                     XOR EAX,EAX
004E9697  5E                        POP ESI
004E9698  5D                        POP EBP
004E9699  C2 0C 00                  RET 0xc
