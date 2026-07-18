FUN_004e80f0:
004E80F0  55                        PUSH EBP
004E80F1  8B EC                     MOV EBP,ESP
004E80F3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004E80F6  53                        PUSH EBX
004E80F7  56                        PUSH ESI
004E80F8  33 DB                     XOR EBX,EBX
004E80FA  8D 90 5D FF FF FF         LEA EDX,[EAX + 0xffffff5d]
004E8100  57                        PUSH EDI
004E8101  83 FA 1B                  CMP EDX,0x1b
004E8104  8B F9                     MOV EDI,ECX
004E8106  77 3E                     JA 0x004e8146
004E8108  33 C9                     XOR ECX,ECX
004E810A  8A 8A 58 81 4E 00         MOV CL,byte ptr [EDX + 0x4e8158]
switchD_004e8110::switchD:
004E8110  FF 24 8D 50 81 4E 00      JMP dword ptr [ECX*0x4 + 0x4e8150]
switchD_004e8110::caseD_a3:
004E8117  8D B4 40 3E FE FF FF      LEA ESI,[EAX + EAX*0x2 + 0xfffffe3e]
004E811E  C1 E6 02                  SHL ESI,0x2
004E8121  8B 86 7C F6 7B 00         MOV EAX,dword ptr [ESI + 0x7bf67c]
004E8127  85 C0                     TEST EAX,EAX
004E8129  7C 16                     JL 0x004e8141
004E812B  74 14                     JZ 0x004e8141
004E812D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E8130  50                        PUSH EAX
004E8131  52                        PUSH EDX
004E8132  8B CF                     MOV ECX,EDI
004E8134  E8 32 97 F1 FF            CALL 0x0040186b
004E8139  3B 86 80 F6 7B 00         CMP EAX,dword ptr [ESI + 0x7bf680]
004E813F  7C 05                     JL 0x004e8146
LAB_004e8141:
004E8141  BB 01 00 00 00            MOV EBX,0x1
switchD_004e8110::caseD_a4:
004E8146  5F                        POP EDI
004E8147  8B C3                     MOV EAX,EBX
004E8149  5E                        POP ESI
004E814A  5B                        POP EBX
004E814B  5D                        POP EBP
004E814C  C2 08 00                  RET 0x8
