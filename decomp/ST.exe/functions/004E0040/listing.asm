FUN_004e0040:
004E0040  53                        PUSH EBX
004E0041  56                        PUSH ESI
004E0042  8B F1                     MOV ESI,ECX
004E0044  57                        PUSH EDI
004E0045  33 DB                     XOR EBX,EBX
004E0047  8B 86 B8 05 00 00         MOV EAX,dword ptr [ESI + 0x5b8]
004E004D  8B 8E B4 05 00 00         MOV ECX,dword ptr [ESI + 0x5b4]
004E0053  8B 96 B0 05 00 00         MOV EDX,dword ptr [ESI + 0x5b0]
004E0059  50                        PUSH EAX
004E005A  89 9E D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EBX
004E0060  89 9E D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EBX
004E0066  C7 86 D8 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4d8],0xffffffff
004E0070  89 9E E0 04 00 00         MOV dword ptr [ESI + 0x4e0],EBX
004E0076  89 9E E4 04 00 00         MOV dword ptr [ESI + 0x4e4],EBX
004E007C  89 9E E8 04 00 00         MOV dword ptr [ESI + 0x4e8],EBX
004E0082  51                        PUSH ECX
004E0083  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E0089  52                        PUSH EDX
004E008A  E8 B9 5D F2 FF            CALL 0x00405e48
004E008F  8B F8                     MOV EDI,EAX
004E0091  3B FB                     CMP EDI,EBX
004E0093  0F 84 80 00 00 00         JZ 0x004e0119
004E0099  8B 07                     MOV EAX,dword ptr [EDI]
004E009B  8B CF                     MOV ECX,EDI
004E009D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E00A0  8B 8E AC 05 00 00         MOV ECX,dword ptr [ESI + 0x5ac]
004E00A6  89 86 DC 04 00 00         MOV dword ptr [ESI + 0x4dc],EAX
004E00AC  83 C1 C8                  ADD ECX,-0x38
004E00AF  83 F9 29                  CMP ECX,0x29
004E00B2  77 3B                     JA 0x004e00ef
004E00B4  33 D2                     XOR EDX,EDX
004E00B6  8A 91 88 01 4E 00         MOV DL,byte ptr [ECX + 0x4e0188]
switchD_004e00bc::switchD:
004E00BC  FF 24 95 74 01 4E 00      JMP dword ptr [EDX*0x4 + 0x4e0174]
switchD_004e00bc::caseD_38:
004E00C3  3D DC 00 00 00            CMP EAX,0xdc
004E00C8  75 25                     JNZ 0x004e00ef
004E00CA  EB 19                     JMP 0x004e00e5
switchD_004e00bc::caseD_39:
004E00CC  3D DD 00 00 00            CMP EAX,0xdd
004E00D1  75 1C                     JNZ 0x004e00ef
004E00D3  EB 10                     JMP 0x004e00e5
switchD_004e00bc::caseD_4f:
004E00D5  3D DE 00 00 00            CMP EAX,0xde
004E00DA  75 13                     JNZ 0x004e00ef
004E00DC  EB 07                     JMP 0x004e00e5
switchD_004e00bc::caseD_61:
004E00DE  3D DE 00 00 00            CMP EAX,0xde
004E00E3  75 0A                     JNZ 0x004e00ef
LAB_004e00e5:
004E00E5  C7 86 D4 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d4],0x1
switchD_004e00bc::caseD_3a:
004E00EF  39 9E D4 04 00 00         CMP dword ptr [ESI + 0x4d4],EBX
004E00F5  74 22                     JZ 0x004e0119
004E00F7  8B 87 59 02 00 00         MOV EAX,dword ptr [EDI + 0x259]
004E00FD  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004E0100  33 C9                     XOR ECX,ECX
004E0102  89 86 E0 04 00 00         MOV dword ptr [ESI + 0x4e0],EAX
004E0108  66 8B 4E 32               MOV CX,word ptr [ESI + 0x32]
004E010C  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004E010F  51                        PUSH ECX
004E0110  52                        PUSH EDX
004E0111  50                        PUSH EAX
004E0112  8B CF                     MOV ECX,EDI
004E0114  E8 82 50 F2 FF            CALL 0x0040519b
LAB_004e0119:
004E0119  83 BE AC 05 00 00 61      CMP dword ptr [ESI + 0x5ac],0x61
004E0120  75 4B                     JNZ 0x004e016d
004E0122  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
004E0128  89 9E 18 05 00 00         MOV dword ptr [ESI + 0x518],EBX
004E012E  89 86 20 05 00 00         MOV dword ptr [ESI + 0x520],EAX
004E0134  89 9E 1C 05 00 00         MOV dword ptr [ESI + 0x51c],EBX
004E013A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004E0140  3B C3                     CMP EAX,EBX
004E0142  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004E0148  89 96 24 05 00 00         MOV dword ptr [ESI + 0x524],EDX
004E014E  74 0A                     JZ 0x004e015a
004E0150  C7 86 28 05 00 00 06 00 00 00  MOV dword ptr [ESI + 0x528],0x6
LAB_004e015a:
004E015A  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004E015D  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E0160  50                        PUSH EAX
004E0161  51                        PUSH ECX
004E0162  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E0168  E8 27 2F F2 FF            CALL 0x00403094
LAB_004e016d:
004E016D  5F                        POP EDI
004E016E  5E                        POP ESI
004E016F  33 C0                     XOR EAX,EAX
004E0171  5B                        POP EBX
004E0172  C3                        RET
