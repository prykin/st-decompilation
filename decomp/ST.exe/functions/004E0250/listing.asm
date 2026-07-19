FUN_004e0250:
004E0250  53                        PUSH EBX
004E0251  56                        PUSH ESI
004E0252  8B F1                     MOV ESI,ECX
004E0254  57                        PUSH EDI
004E0255  8B 86 D4 04 00 00         MOV EAX,dword ptr [ESI + 0x4d4]
004E025B  85 C0                     TEST EAX,EAX
004E025D  0F 85 E9 00 00 00         JNZ 0x004e034c
004E0263  8B 86 B8 05 00 00         MOV EAX,dword ptr [ESI + 0x5b8]
004E0269  8B 8E B4 05 00 00         MOV ECX,dword ptr [ESI + 0x5b4]
004E026F  8B 96 B0 05 00 00         MOV EDX,dword ptr [ESI + 0x5b0]
004E0275  50                        PUSH EAX
004E0276  51                        PUSH ECX
004E0277  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E027D  52                        PUSH EDX
004E027E  E8 C5 5B F2 FF            CALL 0x00405e48
004E0283  8B F8                     MOV EDI,EAX
004E0285  85 FF                     TEST EDI,EDI
004E0287  0F 84 BF 00 00 00         JZ 0x004e034c
004E028D  8B 07                     MOV EAX,dword ptr [EDI]
004E028F  8B CF                     MOV ECX,EDI
004E0291  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E0294  8B 8E AC 05 00 00         MOV ECX,dword ptr [ESI + 0x5ac]
004E029A  89 86 DC 04 00 00         MOV dword ptr [ESI + 0x4dc],EAX
004E02A0  83 C1 C8                  ADD ECX,-0x38
004E02A3  BB 01 00 00 00            MOV EBX,0x1
004E02A8  83 F9 29                  CMP ECX,0x29
004E02AB  77 37                     JA 0x004e02e4
004E02AD  33 D2                     XOR EDX,EDX
004E02AF  8A 91 64 03 4E 00         MOV DL,byte ptr [ECX + 0x4e0364]
switchD_004e02b5::switchD:
004E02B5  FF 24 95 50 03 4E 00      JMP dword ptr [EDX*0x4 + 0x4e0350]
switchD_004e02b5::caseD_38:
004E02BC  3D DC 00 00 00            CMP EAX,0xdc
004E02C1  75 21                     JNZ 0x004e02e4
004E02C3  EB 19                     JMP 0x004e02de
switchD_004e02b5::caseD_39:
004E02C5  3D DD 00 00 00            CMP EAX,0xdd
004E02CA  75 18                     JNZ 0x004e02e4
004E02CC  EB 10                     JMP 0x004e02de
switchD_004e02b5::caseD_4f:
004E02CE  3D DE 00 00 00            CMP EAX,0xde
004E02D3  75 0F                     JNZ 0x004e02e4
004E02D5  EB 07                     JMP 0x004e02de
switchD_004e02b5::caseD_61:
004E02D7  3D DE 00 00 00            CMP EAX,0xde
004E02DC  75 06                     JNZ 0x004e02e4
LAB_004e02de:
004E02DE  89 9E D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EBX
FUN_004e0250::cf_common_exit_004E02E4:
004E02E4  8B 86 D4 04 00 00         MOV EAX,dword ptr [ESI + 0x4d4]
004E02EA  85 C0                     TEST EAX,EAX
004E02EC  74 5E                     JZ 0x004e034c
004E02EE  8B 87 59 02 00 00         MOV EAX,dword ptr [EDI + 0x259]
004E02F4  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004E02F7  33 C9                     XOR ECX,ECX
004E02F9  89 86 E0 04 00 00         MOV dword ptr [ESI + 0x4e0],EAX
004E02FF  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
004E0303  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004E0306  51                        PUSH ECX
004E0307  52                        PUSH EDX
004E0308  50                        PUSH EAX
004E0309  8B CF                     MOV ECX,EDI
004E030B  E8 8B 4E F2 FF            CALL 0x0040519b
004E0310  83 BE AC 05 00 00 61      CMP dword ptr [ESI + 0x5ac],0x61
004E0317  75 1E                     JNZ 0x004e0337
004E0319  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
004E031F  85 C0                     TEST EAX,EAX
004E0321  89 86 20 05 00 00         MOV dword ptr [ESI + 0x520],EAX
004E0327  74 23                     JZ 0x004e034c
004E0329  C7 86 28 05 00 00 06 00 00 00  MOV dword ptr [ESI + 0x528],0x6
004E0333  5F                        POP EDI
004E0334  5E                        POP ESI
004E0335  5B                        POP EBX
004E0336  C3                        RET
LAB_004e0337:
004E0337  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
004E033B  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004E033E  51                        PUSH ECX
004E033F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E0345  52                        PUSH EDX
004E0346  53                        PUSH EBX
004E0347  E8 02 46 F2 FF            CALL 0x0040494e
LAB_004e034c:
004E034C  5F                        POP EDI
004E034D  5E                        POP ESI
004E034E  5B                        POP EBX
004E034F  C3                        RET
