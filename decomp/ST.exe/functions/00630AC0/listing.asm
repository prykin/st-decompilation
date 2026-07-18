FUN_00630ac0:
00630AC0  55                        PUSH EBP
00630AC1  8B EC                     MOV EBP,ESP
00630AC3  51                        PUSH ECX
00630AC4  53                        PUSH EBX
00630AC5  56                        PUSH ESI
00630AC6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00630AC9  57                        PUSH EDI
00630ACA  8B F9                     MOV EDI,ECX
00630ACC  33 F6                     XOR ESI,ESI
00630ACE  8B 4F 38                  MOV ECX,dword ptr [EDI + 0x38]
00630AD1  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00630AD4  0F 83 9A 00 00 00         JNC 0x00630b74
00630ADA  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00630ADD  8B 59 1C                  MOV EBX,dword ptr [ECX + 0x1c]
00630AE0  0F AF C2                  IMUL EAX,EDX
00630AE3  03 C3                     ADD EAX,EBX
00630AE5  85 C0                     TEST EAX,EAX
00630AE7  0F 84 87 00 00 00         JZ 0x00630b74
00630AED  0F BF 70 04               MOVSX ESI,word ptr [EAX + 0x4]
00630AF1  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
00630AF8  0F AF F3                  IMUL ESI,EBX
00630AFB  0F BF 58 02               MOVSX EBX,word ptr [EAX + 0x2]
00630AFF  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
00630B06  03 F3                     ADD ESI,EBX
00630B08  0F BF 18                  MOVSX EBX,word ptr [EAX]
00630B0B  0F AF F2                  IMUL ESI,EDX
00630B0E  0F BF 40 06               MOVSX EAX,word ptr [EAX + 0x6]
00630B12  03 F3                     ADD ESI,EBX
00630B14  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00630B17  8D 1C 32                  LEA EBX,[EDX + ESI*0x1]
00630B1A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00630B1D  52                        PUSH EDX
00630B1E  51                        PUSH ECX
00630B1F  E8 4C 01 08 00            CALL 0x006b0c70
00630B24  85 C0                     TEST EAX,EAX
00630B26  75 41                     JNZ 0x00630b69
00630B28  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00630B2B  B8 01 00 00 00            MOV EAX,0x1
00630B30  3B C8                     CMP ECX,EAX
00630B32  75 10                     JNZ 0x00630b44
00630B34  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
00630B37  5F                        POP EDI
00630B38  C6 04 31 00               MOV byte ptr [ECX + ESI*0x1],0x0
00630B3C  5E                        POP ESI
00630B3D  5B                        POP EBX
00630B3E  8B E5                     MOV ESP,EBP
00630B40  5D                        POP EBP
00630B41  C2 04 00                  RET 0x4
LAB_00630b44:
00630B44  8B 57 34                  MOV EDX,dword ptr [EDI + 0x34]
00630B47  32 C9                     XOR CL,CL
00630B49  88 0C 16                  MOV byte ptr [ESI + EDX*0x1],CL
00630B4C  8B 57 34                  MOV EDX,dword ptr [EDI + 0x34]
00630B4F  88 4C 16 01               MOV byte ptr [ESI + EDX*0x1 + 0x1],CL
00630B53  8B 57 34                  MOV EDX,dword ptr [EDI + 0x34]
00630B56  88 0C 13                  MOV byte ptr [EBX + EDX*0x1],CL
00630B59  8B 57 34                  MOV EDX,dword ptr [EDI + 0x34]
00630B5C  5F                        POP EDI
00630B5D  5E                        POP ESI
00630B5E  88 4C 13 01               MOV byte ptr [EBX + EDX*0x1 + 0x1],CL
00630B62  5B                        POP EBX
00630B63  8B E5                     MOV ESP,EBP
00630B65  5D                        POP EBP
00630B66  C2 04 00                  RET 0x4
LAB_00630b69:
00630B69  5F                        POP EDI
00630B6A  5E                        POP ESI
00630B6B  33 C0                     XOR EAX,EAX
00630B6D  5B                        POP EBX
00630B6E  8B E5                     MOV ESP,EBP
00630B70  5D                        POP EBP
00630B71  C2 04 00                  RET 0x4
LAB_00630b74:
00630B74  8B C6                     MOV EAX,ESI
00630B76  5F                        POP EDI
00630B77  5E                        POP ESI
00630B78  5B                        POP EBX
00630B79  8B E5                     MOV ESP,EBP
00630B7B  5D                        POP EBP
00630B7C  C2 04 00                  RET 0x4
