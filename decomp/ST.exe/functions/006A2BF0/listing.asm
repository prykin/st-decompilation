FUN_006a2bf0:
006A2BF0  55                        PUSH EBP
006A2BF1  8B EC                     MOV EBP,ESP
006A2BF3  56                        PUSH ESI
006A2BF4  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006A2BF7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A2BFA  8B D6                     MOV EDX,ESI
006A2BFC  83 E2 0F                  AND EDX,0xf
006A2BFF  8B CA                     MOV ECX,EDX
006A2C01  C1 E1 08                  SHL ECX,0x8
006A2C04  83 F8 01                  CMP EAX,0x1
006A2C07  75 3C                     JNZ 0x006a2c45
006A2C09  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A2C0C  81 E1 00 DF 00 00         AND ECX,0xdf00
006A2C12  83 E0 0F                  AND EAX,0xf
006A2C15  80 CC 02                  OR AH,0x2
006A2C18  C1 E0 04                  SHL EAX,0x4
006A2C1B  0B C1                     OR EAX,ECX
006A2C1D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A2C20  83 E1 0F                  AND ECX,0xf
006A2C23  0B C1                     OR EAX,ECX
006A2C25  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A2C28  85 C9                     TEST ECX,ECX
006A2C2A  0F 85 89 00 00 00         JNZ 0x006a2cb9
006A2C30  25 FF EF 00 00            AND EAX,0xefff
006A2C35  80 CC 10                  OR AH,0x10
006A2C38  83 FE 01                  CMP ESI,0x1
006A2C3B  75 7C                     JNZ 0x006a2cb9
006A2C3D  25 00 DF 00 00            AND EAX,0xdf00
006A2C42  5E                        POP ESI
006A2C43  5D                        POP EBP
006A2C44  C3                        RET
LAB_006a2c45:
006A2C45  83 F8 03                  CMP EAX,0x3
006A2C48  75 29                     JNZ 0x006a2c73
006A2C4A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A2C4D  83 CA 30                  OR EDX,0x30
006A2C50  83 C0 F9                  ADD EAX,-0x7
006A2C53  81 E1 00 C0 00 00         AND ECX,0xc000
006A2C59  C1 E0 04                  SHL EAX,0x4
006A2C5C  25 F0 00 00 00            AND EAX,0xf0
006A2C61  5E                        POP ESI
006A2C62  C1 E2 08                  SHL EDX,0x8
006A2C65  0B C2                     OR EAX,EDX
006A2C67  0B C1                     OR EAX,ECX
006A2C69  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A2C6C  83 E1 0F                  AND ECX,0xf
006A2C6F  0B C1                     OR EAX,ECX
006A2C71  5D                        POP EBP
006A2C72  C3                        RET
LAB_006a2c73:
006A2C73  85 C0                     TEST EAX,EAX
006A2C75  75 27                     JNZ 0x006a2c9e
006A2C77  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A2C7A  85 C0                     TEST EAX,EAX
006A2C7C  75 16                     JNZ 0x006a2c94
006A2C7E  83 FE 01                  CMP ESI,0x1
006A2C81  75 08                     JNZ 0x006a2c8b
006A2C83  B8 00 11 00 00            MOV EAX,0x1100
006A2C88  5E                        POP ESI
006A2C89  5D                        POP EBP
006A2C8A  C3                        RET
LAB_006a2c8b:
006A2C8B  81 E1 FF EF 00 00         AND ECX,0xefff
006A2C91  80 CD 10                  OR CH,0x10
LAB_006a2c94:
006A2C94  33 C0                     XOR EAX,EAX
006A2C96  5E                        POP ESI
006A2C97  8A E5                     MOV AH,CH
006A2C99  8A 45 18                  MOV AL,byte ptr [EBP + 0x18]
006A2C9C  5D                        POP EBP
006A2C9D  C3                        RET
LAB_006a2c9e:
006A2C9E  83 F8 02                  CMP EAX,0x2
006A2CA1  75 14                     JNZ 0x006a2cb7
006A2CA3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A2CA6  5E                        POP ESI
006A2CA7  C1 E0 05                  SHL EAX,0x5
006A2CAA  83 E8 10                  SUB EAX,0x10
006A2CAD  25 F0 00 00 00            AND EAX,0xf0
006A2CB2  80 CC 71                  OR AH,0x71
006A2CB5  5D                        POP EBP
006A2CB6  C3                        RET
LAB_006a2cb7:
006A2CB7  8B C1                     MOV EAX,ECX
LAB_006a2cb9:
006A2CB9  5E                        POP ESI
006A2CBA  5D                        POP EBP
006A2CBB  C3                        RET
