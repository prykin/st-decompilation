FUN_006a0c90:
006A0C90  55                        PUSH EBP
006A0C91  8B EC                     MOV EBP,ESP
006A0C93  83 EC 0C                  SUB ESP,0xc
006A0C96  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A0C99  56                        PUSH ESI
006A0C9A  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006A0C9D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006A0CA0  33 C9                     XOR ECX,ECX
006A0CA2  57                        PUSH EDI
006A0CA3  85 F6                     TEST ESI,ESI
006A0CA5  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006A0CA8  0F 8C AA 00 00 00         JL 0x006a0d58
006A0CAE  83 FE 05                  CMP ESI,0x5
006A0CB1  0F 8F A1 00 00 00         JG 0x006a0d58
006A0CB7  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006A0CBA  85 FF                     TEST EDI,EDI
006A0CBC  0F 8C 96 00 00 00         JL 0x006a0d58
006A0CC2  83 FF 04                  CMP EDI,0x4
006A0CC5  0F 8F 8D 00 00 00         JG 0x006a0d58
006A0CCB  33 D2                     XOR EDX,EDX
006A0CCD  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006A0CD0  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
006A0CD4  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A0CD7  83 FA 01                  CMP EDX,0x1
006A0CDA  75 04                     JNZ 0x006a0ce0
006A0CDC  8B C8                     MOV ECX,EAX
006A0CDE  33 C0                     XOR EAX,EAX
LAB_006a0ce0:
006A0CE0  53                        PUSH EBX
006A0CE1  50                        PUSH EAX
006A0CE2  51                        PUSH ECX
006A0CE3  57                        PUSH EDI
006A0CE4  56                        PUSH ESI
006A0CE5  52                        PUSH EDX
006A0CE6  E8 C1 33 D6 FF            CALL 0x004040ac
006A0CEB  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006A0CEE  83 C4 14                  ADD ESP,0x14
006A0CF1  83 FB 01                  CMP EBX,0x1
006A0CF4  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
006A0CF8  74 10                     JZ 0x006a0d0a
006A0CFA  81 FB FF 00 00 00         CMP EBX,0xff
006A0D00  75 04                     JNZ 0x006a0d06
006A0D02  85 F6                     TEST ESI,ESI
006A0D04  74 04                     JZ 0x006a0d0a
LAB_006a0d06:
006A0D06  33 C0                     XOR EAX,EAX
006A0D08  EB 05                     JMP 0x006a0d0f
LAB_006a0d0a:
006A0D0A  B8 01 00 00 00            MOV EAX,0x1
LAB_006a0d0f:
006A0D0F  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A0D12  50                        PUSH EAX
006A0D13  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A0D16  50                        PUSH EAX
006A0D17  51                        PUSH ECX
006A0D18  57                        PUSH EDI
006A0D19  56                        PUSH ESI
006A0D1A  E8 20 32 D6 FF            CALL 0x00403f3f
006A0D1F  83 C4 14                  ADD ESP,0x14
006A0D22  83 FB 01                  CMP EBX,0x1
006A0D25  5B                        POP EBX
006A0D26  75 06                     JNZ 0x006a0d2e
006A0D28  66 89 45 F6               MOV word ptr [EBP + -0xa],AX
006A0D2C  EB 04                     JMP 0x006a0d32
LAB_006a0d2e:
006A0D2E  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
LAB_006a0d32:
006A0D32  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A0D35  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A0D38  6A 00                     PUSH 0x0
006A0D3A  8D 55 F4                  LEA EDX,[EBP + -0xc]
006A0D3D  6A 00                     PUSH 0x0
006A0D3F  52                        PUSH EDX
006A0D40  50                        PUSH EAX
006A0D41  8D 54 3E FF               LEA EDX,[ESI + EDI*0x1 + -0x1]
006A0D45  51                        PUSH ECX
006A0D46  52                        PUSH EDX
006A0D47  50                        PUSH EAX
006A0D48  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A0D4B  51                        PUSH ECX
006A0D4C  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006A0D4F  51                        PUSH ECX
006A0D50  E8 45 27 D6 FF            CALL 0x0040349a
006A0D55  83 C4 24                  ADD ESP,0x24
LAB_006a0d58:
006A0D58  5F                        POP EDI
006A0D59  5E                        POP ESI
006A0D5A  8B E5                     MOV ESP,EBP
006A0D5C  5D                        POP EBP
006A0D5D  C2 1C 00                  RET 0x1c
