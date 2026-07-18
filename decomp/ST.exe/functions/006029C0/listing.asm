FUN_006029c0:
006029C0  55                        PUSH EBP
006029C1  8B EC                     MOV EBP,ESP
006029C3  83 EC 4C                  SUB ESP,0x4c
006029C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006029CB  56                        PUSH ESI
006029CC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006029CF  57                        PUSH EDI
006029D0  8D 55 B8                  LEA EDX,[EBP + -0x48]
006029D3  8D 4D B4                  LEA ECX,[EBP + -0x4c]
006029D6  6A 00                     PUSH 0x0
006029D8  52                        PUSH EDX
006029D9  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006029E0  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006029E3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006029E9  E8 02 AE 12 00            CALL 0x0072d7f0
006029EE  83 C4 08                  ADD ESP,0x8
006029F1  85 C0                     TEST EAX,EAX
006029F3  0F 85 5D 01 00 00         JNZ 0x00602b56
006029F9  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006029FC  83 BE 41 02 00 00 01      CMP dword ptr [ESI + 0x241],0x1
00602A03  75 0F                     JNZ 0x00602a14
00602A05  8B 86 72 03 00 00         MOV EAX,dword ptr [ESI + 0x372]
00602A0B  8B 04 85 00 EC 7C 00      MOV EAX,dword ptr [EAX*0x4 + 0x7cec00]
00602A12  EB 0D                     JMP 0x00602a21
LAB_00602a14:
00602A14  8B 8E 72 03 00 00         MOV ECX,dword ptr [ESI + 0x372]
00602A1A  8B 04 8D EC EB 7C 00      MOV EAX,dword ptr [ECX*0x4 + 0x7cebec]
LAB_00602a21:
00602A21  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
00602A27  6A 1D                     PUSH 0x1d
00602A29  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
00602A2F  50                        PUSH EAX
00602A30  52                        PUSH EDX
00602A31  6A 0E                     PUSH 0xe
00602A33  8B CF                     MOV ECX,EDI
00602A35  E8 49 17 E0 FF            CALL 0x00404183
00602A3A  85 C0                     TEST EAX,EAX
00602A3C  0F 85 1C 01 00 00         JNZ 0x00602b5e
00602A42  6A 0E                     PUSH 0xe
00602A44  8B CF                     MOV ECX,EDI
00602A46  E8 5B 30 E0 FF            CALL 0x00405aa6
00602A4B  8B 86 87 03 00 00         MOV EAX,dword ptr [ESI + 0x387]
00602A51  8B CF                     MOV ECX,EDI
00602A53  50                        PUSH EAX
00602A54  6A 0E                     PUSH 0xe
00602A56  E8 09 E6 DF FF            CALL 0x00401064
00602A5B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00602A61  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00602A67  8B CF                     MOV ECX,EDI
00602A69  52                        PUSH EDX
00602A6A  6A 0E                     PUSH 0xe
00602A6C  E8 CF 27 E0 FF            CALL 0x00405240
00602A71  A1 CC 73 80 00            MOV EAX,[0x008073cc]
00602A76  8B CF                     MOV ECX,EDI
00602A78  50                        PUSH EAX
00602A79  E8 2B 32 E0 FF            CALL 0x00405ca9
00602A7E  8B 86 49 02 00 00         MOV EAX,dword ptr [ESI + 0x249]
00602A84  C6 86 7A 03 00 00 01      MOV byte ptr [ESI + 0x37a],0x1
00602A8B  85 C0                     TEST EAX,EAX
00602A8D  0F 8C 81 00 00 00         JL 0x00602b14
00602A93  8B 8E 72 03 00 00         MOV ECX,dword ptr [ESI + 0x372]
00602A99  6A 1D                     PUSH 0x1d
00602A9B  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00602A9E  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
00602AA4  8B 04 95 3C EC 7C 00      MOV EAX,dword ptr [EDX*0x4 + 0x7cec3c]
00602AAB  50                        PUSH EAX
00602AAC  51                        PUSH ECX
00602AAD  6A 0C                     PUSH 0xc
00602AAF  8B CF                     MOV ECX,EDI
00602AB1  E8 CD 16 E0 FF            CALL 0x00404183
00602AB6  85 C0                     TEST EAX,EAX
00602AB8  0F 85 A0 00 00 00         JNZ 0x00602b5e
00602ABE  8B 96 8F 03 00 00         MOV EDX,dword ptr [ESI + 0x38f]
00602AC4  8B CF                     MOV ECX,EDI
00602AC6  52                        PUSH EDX
00602AC7  6A 0C                     PUSH 0xc
00602AC9  E8 96 E5 DF FF            CALL 0x00401064
00602ACE  6A 0C                     PUSH 0xc
00602AD0  8B CF                     MOV ECX,EDI
00602AD2  E8 CF 2F E0 FF            CALL 0x00405aa6
00602AD7  6A 0C                     PUSH 0xc
00602AD9  8B CF                     MOV ECX,EDI
00602ADB  E8 DC 05 E0 FF            CALL 0x004030bc
00602AE0  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00602AE5  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00602AEB  51                        PUSH ECX
00602AEC  6A 0C                     PUSH 0xc
00602AEE  8B CF                     MOV ECX,EDI
00602AF0  E8 4B 27 E0 FF            CALL 0x00405240
00602AF5  8B 96 ED 01 00 00         MOV EDX,dword ptr [ESI + 0x1ed]
00602AFB  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00602B01  68 30 75 00 00            PUSH 0x7530
00602B06  6A 00                     PUSH 0x0
00602B08  6A 00                     PUSH 0x0
00602B0A  6A 01                     PUSH 0x1
00602B0C  6A 0C                     PUSH 0xc
00602B0E  52                        PUSH EDX
00602B0F  E8 DC 73 0E 00            CALL 0x006e9ef0
LAB_00602b14:
00602B14  C7 86 6E 03 00 00 02 00 00 00  MOV dword ptr [ESI + 0x36e],0x2
00602B1E  A1 24 67 80 00            MOV EAX,[0x00806724]
00602B23  0F BF 48 23               MOVSX ECX,word ptr [EAX + 0x23]
00602B27  49                        DEC ECX
00602B28  C6 86 9F 03 00 00 FF      MOV byte ptr [ESI + 0x39f],0xff
00602B2F  89 8E 97 03 00 00         MOV dword ptr [ESI + 0x397],ECX
00602B35  8B CF                     MOV ECX,EDI
00602B37  E8 90 27 E0 FF            CALL 0x004052cc
00602B3C  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00602B3F  89 86 9B 03 00 00         MOV dword ptr [ESI + 0x39b],EAX
00602B45  B8 01 00 00 00            MOV EAX,0x1
00602B4A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00602B50  5F                        POP EDI
00602B51  5E                        POP ESI
00602B52  8B E5                     MOV ESP,EBP
00602B54  5D                        POP EBP
00602B55  C3                        RET
LAB_00602b56:
00602B56  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00602B59  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_00602b5e:
00602B5E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00602B61  5F                        POP EDI
00602B62  5E                        POP ESI
00602B63  8B E5                     MOV ESP,EBP
00602B65  5D                        POP EBP
00602B66  C3                        RET
