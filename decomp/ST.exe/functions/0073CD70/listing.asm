FUN_0073cd70:
0073CD70  55                        PUSH EBP
0073CD71  8B EC                     MOV EBP,ESP
0073CD73  83 EC 08                  SUB ESP,0x8
0073CD76  53                        PUSH EBX
0073CD77  56                        PUSH ESI
0073CD78  57                        PUSH EDI
LAB_0073cd79:
0073CD79  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0073CD7D  75 1E                     JNZ 0x0073cd9d
0073CD7F  68 50 FE 79 00            PUSH 0x79fe50
0073CD84  6A 00                     PUSH 0x0
0073CD86  6A 69                     PUSH 0x69
0073CD88  68 88 0A 7A 00            PUSH 0x7a0a88
0073CD8D  6A 02                     PUSH 0x2
0073CD8F  E8 0C 42 FF FF            CALL 0x00730fa0
0073CD94  83 C4 14                  ADD ESP,0x14
0073CD97  83 F8 01                  CMP EAX,0x1
0073CD9A  75 01                     JNZ 0x0073cd9d
0073CD9C  CC                        INT3
LAB_0073cd9d:
0073CD9D  33 C0                     XOR EAX,EAX
0073CD9F  85 C0                     TEST EAX,EAX
0073CDA1  75 D6                     JNZ 0x0073cd79
0073CDA3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073CDA6  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0073CDA9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073CDAC  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0073CDAF  25 83 00 00 00            AND EAX,0x83
0073CDB4  85 C0                     TEST EAX,EAX
0073CDB6  74 0D                     JZ 0x0073cdc5
0073CDB8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CDBB  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0073CDBE  83 E2 40                  AND EDX,0x40
0073CDC1  85 D2                     TEST EDX,EDX
0073CDC3  74 08                     JZ 0x0073cdcd
LAB_0073cdc5:
0073CDC5  83 C8 FF                  OR EAX,0xffffffff
0073CDC8  E9 7C 01 00 00            JMP 0x0073cf49
LAB_0073cdcd:
0073CDCD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073CDD0  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0073CDD3  83 E1 02                  AND ECX,0x2
0073CDD6  85 C9                     TEST ECX,ECX
0073CDD8  74 16                     JZ 0x0073cdf0
0073CDDA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073CDDD  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0073CDE0  0C 20                     OR AL,0x20
0073CDE2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CDE5  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0073CDE8  83 C8 FF                  OR EAX,0xffffffff
0073CDEB  E9 59 01 00 00            JMP 0x0073cf49
LAB_0073cdf0:
0073CDF0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073CDF3  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0073CDF6  0C 01                     OR AL,0x1
0073CDF8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CDFB  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0073CDFE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073CE01  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0073CE04  25 0C 01 00 00            AND EAX,0x10c
0073CE09  85 C0                     TEST EAX,EAX
0073CE0B  75 0E                     JNZ 0x0073ce1b
0073CE0D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CE10  51                        PUSH ECX
0073CE11  E8 2A 60 00 00            CALL 0x00742e40
0073CE16  83 C4 04                  ADD ESP,0x4
0073CE19  EB 0B                     JMP 0x0073ce26
LAB_0073ce1b:
0073CE1B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073CE1E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073CE21  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0073CE24  89 0A                     MOV dword ptr [EDX],ECX
LAB_0073ce26:
0073CE26  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073CE29  8B 42 18                  MOV EAX,dword ptr [EDX + 0x18]
0073CE2C  50                        PUSH EAX
0073CE2D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CE30  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0073CE33  52                        PUSH EDX
0073CE34  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073CE37  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0073CE3A  51                        PUSH ECX
0073CE3B  E8 10 72 00 00            CALL 0x00744050
0073CE40  83 C4 0C                  ADD ESP,0xc
0073CE43  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073CE46  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0073CE49  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073CE4C  83 78 04 00               CMP dword ptr [EAX + 0x4],0x0
0073CE50  74 09                     JZ 0x0073ce5b
0073CE52  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CE55  83 79 04 FF               CMP dword ptr [ECX + 0x4],-0x1
0073CE59  75 30                     JNZ 0x0073ce8b
LAB_0073ce5b:
0073CE5B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073CE5E  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0073CE61  F7 D8                     NEG EAX
0073CE63  1B C0                     SBB EAX,EAX
0073CE65  83 E0 10                  AND EAX,0x10
0073CE68  83 C0 10                  ADD EAX,0x10
0073CE6B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CE6E  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0073CE71  0B D0                     OR EDX,EAX
0073CE73  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073CE76  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
0073CE79  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CE7C  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
0073CE83  83 C8 FF                  OR EAX,0xffffffff
0073CE86  E9 BE 00 00 00            JMP 0x0073cf49
LAB_0073ce8b:
0073CE8B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073CE8E  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0073CE91  25 82 00 00 00            AND EAX,0x82
0073CE96  85 C0                     TEST EAX,EAX
0073CE98  75 53                     JNZ 0x0073ceed
0073CE9A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CE9D  83 79 10 FF               CMP dword ptr [ECX + 0x10],-0x1
0073CEA1  74 21                     JZ 0x0073cec4
0073CEA3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073CEA6  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
0073CEA9  C1 F8 05                  SAR EAX,0x5
0073CEAC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CEAF  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0073CEB2  83 E2 1F                  AND EDX,0x1f
0073CEB5  8B 04 85 A0 A1 85 00      MOV EAX,dword ptr [EAX*0x4 + 0x85a1a0]
0073CEBC  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0073CEBF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0073CEC2  EB 07                     JMP 0x0073cecb
LAB_0073cec4:
0073CEC4  C7 45 F8 F8 1F 7F 00      MOV dword ptr [EBP + -0x8],0x7f1ff8
LAB_0073cecb:
0073CECB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0073CECE  0F BE 42 04               MOVSX EAX,byte ptr [EDX + 0x4]
0073CED2  25 82 00 00 00            AND EAX,0x82
0073CED7  3D 82 00 00 00            CMP EAX,0x82
0073CEDC  75 0F                     JNZ 0x0073ceed
0073CEDE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CEE1  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0073CEE4  80 CE 20                  OR DH,0x20
0073CEE7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073CEEA  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
LAB_0073ceed:
0073CEED  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CEF0  81 79 18 00 02 00 00      CMP dword ptr [ECX + 0x18],0x200
0073CEF7  75 27                     JNZ 0x0073cf20
0073CEF9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073CEFC  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0073CEFF  83 E0 08                  AND EAX,0x8
0073CF02  85 C0                     TEST EAX,EAX
0073CF04  74 1A                     JZ 0x0073cf20
0073CF06  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CF09  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0073CF0C  81 E2 00 04 00 00         AND EDX,0x400
0073CF12  85 D2                     TEST EDX,EDX
0073CF14  75 0A                     JNZ 0x0073cf20
0073CF16  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073CF19  C7 40 18 00 10 00 00      MOV dword ptr [EAX + 0x18],0x1000
LAB_0073cf20:
0073CF20  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CF23  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0073CF26  83 EA 01                  SUB EDX,0x1
0073CF29  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073CF2C  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0073CF2F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CF32  8B 11                     MOV EDX,dword ptr [ECX]
0073CF34  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0073CF37  25 FF 00 00 00            AND EAX,0xff
0073CF3C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CF3F  8B 11                     MOV EDX,dword ptr [ECX]
0073CF41  83 C2 01                  ADD EDX,0x1
0073CF44  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073CF47  89 11                     MOV dword ptr [ECX],EDX
LAB_0073cf49:
0073CF49  5F                        POP EDI
0073CF4A  5E                        POP ESI
0073CF4B  5B                        POP EBX
0073CF4C  8B E5                     MOV ESP,EBP
0073CF4E  5D                        POP EBP
0073CF4F  C3                        RET
