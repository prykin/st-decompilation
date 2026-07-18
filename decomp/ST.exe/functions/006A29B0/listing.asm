FUN_006a29b0:
006A29B0  55                        PUSH EBP
006A29B1  8B EC                     MOV EBP,ESP
006A29B3  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A29B6  33 C0                     XOR EAX,EAX
006A29B8  83 F9 01                  CMP ECX,0x1
006A29BB  0F 85 8B 00 00 00         JNZ 0x006a2a4c
006A29C1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A29C4  85 C9                     TEST ECX,ECX
006A29C6  75 5D                     JNZ 0x006a2a25
006A29C8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A29CB  83 FA 01                  CMP EDX,0x1
006A29CE  75 24                     JNZ 0x006a29f4
006A29D0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006A29D3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A29D6  83 E0 0F                  AND EAX,0xf
006A29D9  0C 10                     OR AL,0x10
006A29DB  C1 E0 08                  SHL EAX,0x8
006A29DE  25 FF BF 00 00            AND EAX,0xbfff
006A29E3  C1 E1 0E                  SHL ECX,0xe
006A29E6  0B C1                     OR EAX,ECX
006A29E8  25 0F DF 00 00            AND EAX,0xdf0f
006A29ED  0D 10 20 00 00            OR EAX,0x2010
006A29F2  5D                        POP EBP
006A29F3  C3                        RET
LAB_006a29f4:
006A29F4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A29F7  83 F9 01                  CMP ECX,0x1
006A29FA  7F 10                     JG 0x006a2a0c
006A29FC  85 C9                     TEST ECX,ECX
006A29FE  7E 0C                     JLE 0x006a2a0c
006A2A00  8D 44 0A FE               LEA EAX,[EDX + ECX*0x1 + -0x2]
006A2A04  C1 E0 08                  SHL EAX,0x8
006A2A07  25 00 0F 00 00            AND EAX,0xf00
LAB_006a2a0c:
006A2A0C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A2A0F  25 FF BF 00 00            AND EAX,0xbfff
006A2A14  C1 E1 0E                  SHL ECX,0xe
006A2A17  0B C1                     OR EAX,ECX
006A2A19  25 0F DF 00 00            AND EAX,0xdf0f
006A2A1E  0D 10 20 00 00            OR EAX,0x2010
006A2A23  5D                        POP EBP
006A2A24  C3                        RET
LAB_006a2a25:
006A2A25  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A2A28  83 F9 01                  CMP ECX,0x1
006A2A2B  7F 13                     JG 0x006a2a40
006A2A2D  85 C9                     TEST ECX,ECX
006A2A2F  7E 0F                     JLE 0x006a2a40
006A2A31  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A2A34  8D 44 0A FF               LEA EAX,[EDX + ECX*0x1 + -0x1]
006A2A38  C1 E0 08                  SHL EAX,0x8
006A2A3B  25 00 0F 00 00            AND EAX,0xf00
LAB_006a2a40:
006A2A40  25 0F DF 00 00            AND EAX,0xdf0f
006A2A45  0D 10 20 00 00            OR EAX,0x2010
006A2A4A  5D                        POP EBP
006A2A4B  C3                        RET
LAB_006a2a4c:
006A2A4C  83 F9 03                  CMP ECX,0x3
006A2A4F  75 3C                     JNZ 0x006a2a8d
006A2A51  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006A2A54  B9 A0 64 00 00            MOV ECX,0x64a0
006A2A59  83 F8 01                  CMP EAX,0x1
006A2A5C  7F 1A                     JG 0x006a2a78
006A2A5E  85 C0                     TEST EAX,EAX
006A2A60  7E 16                     JLE 0x006a2a78
006A2A62  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A2A65  8D 4C 01 FF               LEA ECX,[ECX + EAX*0x1 + -0x1]
006A2A69  C1 E1 08                  SHL ECX,0x8
006A2A6C  81 E1 00 0F 00 00         AND ECX,0xf00
006A2A72  81 C9 A0 60 00 00         OR ECX,0x60a0
LAB_006a2a78:
006A2A78  83 C0 F9                  ADD EAX,-0x7
006A2A7B  81 E1 0F FF 00 00         AND ECX,0xff0f
006A2A81  C1 E0 04                  SHL EAX,0x4
006A2A84  25 F0 00 00 00            AND EAX,0xf0
006A2A89  0B C1                     OR EAX,ECX
006A2A8B  5D                        POP EBP
006A2A8C  C3                        RET
LAB_006a2a8d:
006A2A8D  85 C9                     TEST ECX,ECX
006A2A8F  75 44                     JNZ 0x006a2ad5
006A2A91  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A2A94  85 C0                     TEST EAX,EAX
006A2A96  75 29                     JNZ 0x006a2ac1
006A2A98  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A2A9B  8D 41 FF                  LEA EAX,[ECX + -0x1]
006A2A9E  C1 E0 08                  SHL EAX,0x8
006A2AA1  25 00 0F 00 00            AND EAX,0xf00
006A2AA6  80 CC 40                  OR AH,0x40
006A2AA9  49                        DEC ECX
006A2AAA  85 C9                     TEST ECX,ECX
006A2AAC  75 1C                     JNZ 0x006a2aca
006A2AAE  25 FF EF 00 00            AND EAX,0xefff
006A2AB3  80 CC 10                  OR AH,0x10
006A2AB6  33 D2                     XOR EDX,EDX
006A2AB8  8A F4                     MOV DH,AH
006A2ABA  8A 55 10                  MOV DL,byte ptr [EBP + 0x10]
006A2ABD  8B C2                     MOV EAX,EDX
006A2ABF  5D                        POP EBP
006A2AC0  C3                        RET
LAB_006a2ac1:
006A2AC1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A2AC4  83 E0 0F                  AND EAX,0xf
006A2AC7  C1 E0 08                  SHL EAX,0x8
LAB_006a2aca:
006A2ACA  33 D2                     XOR EDX,EDX
006A2ACC  8A F4                     MOV DH,AH
006A2ACE  8A 55 10                  MOV DL,byte ptr [EBP + 0x10]
006A2AD1  8B C2                     MOV EAX,EDX
006A2AD3  5D                        POP EBP
006A2AD4  C3                        RET
LAB_006a2ad5:
006A2AD5  83 F9 02                  CMP ECX,0x2
006A2AD8  75 13                     JNZ 0x006a2aed
006A2ADA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006A2ADD  83 C0 F9                  ADD EAX,-0x7
006A2AE0  C1 E0 08                  SHL EAX,0x8
006A2AE3  25 00 0F 00 00            AND EAX,0xf00
006A2AE8  0D 10 30 00 00            OR EAX,0x3010
LAB_006a2aed:
006A2AED  5D                        POP EBP
006A2AEE  C3                        RET
