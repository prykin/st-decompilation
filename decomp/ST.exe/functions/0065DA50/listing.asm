FUN_0065da50:
0065DA50  55                        PUSH EBP
0065DA51  8B EC                     MOV EBP,ESP
0065DA53  83 EC 08                  SUB ESP,0x8
0065DA56  53                        PUSH EBX
0065DA57  56                        PUSH ESI
0065DA58  8B F1                     MOV ESI,ECX
0065DA5A  57                        PUSH EDI
0065DA5B  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0065DA5E  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0065DA65  66 8B 46 7D               MOV AX,word ptr [ESI + 0x7d]
0065DA69  66 3D FE FF               CMP AX,0xfffe
0065DA6D  0F 84 19 01 00 00         JZ 0x0065db8c
0065DA73  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065DA79  85 C9                     TEST ECX,ECX
0065DA7B  0F 84 0B 01 00 00         JZ 0x0065db8c
0065DA81  50                        PUSH EAX
0065DA82  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0065DA85  50                        PUSH EAX
0065DA86  E8 6E 82 DA FF            CALL 0x00405cf9
0065DA8B  85 C0                     TEST EAX,EAX
0065DA8D  0F 84 F9 00 00 00         JZ 0x0065db8c
0065DA93  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065DA99  85 C9                     TEST ECX,ECX
0065DA9B  0F 84 EB 00 00 00         JZ 0x0065db8c
0065DAA1  8A 96 81 00 00 00         MOV DL,byte ptr [ESI + 0x81]
0065DAA7  84 D2                     TEST DL,DL
0065DAA9  7C 08                     JL 0x0065dab3
0065DAAB  80 FA 08                  CMP DL,0x8
0065DAAE  0F BE DA                  MOVSX EBX,DL
0065DAB1  7C 03                     JL 0x0065dab6
LAB_0065dab3:
0065DAB3  8B 5E 24                  MOV EBX,dword ptr [ESI + 0x24]
LAB_0065dab6:
0065DAB6  8A 55 0C                  MOV DL,byte ptr [EBP + 0xc]
0065DAB9  80 FA 08                  CMP DL,0x8
0065DABC  75 07                     JNZ 0x0065dac5
0065DABE  88 5D 0C                  MOV byte ptr [EBP + 0xc],BL
0065DAC1  8A D3                     MOV DL,BL
0065DAC3  EB 09                     JMP 0x0065dace
LAB_0065dac5:
0065DAC5  84 D2                     TEST DL,DL
0065DAC7  7C 09                     JL 0x0065dad2
0065DAC9  80 FA 08                  CMP DL,0x8
0065DACC  7F 04                     JG 0x0065dad2
LAB_0065dace:
0065DACE  84 D2                     TEST DL,DL
0065DAD0  7D 32                     JGE 0x0065db04
LAB_0065dad2:
0065DAD2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0065DAD5  85 D2                     TEST EDX,EDX
0065DAD7  75 15                     JNZ 0x0065daee
0065DAD9  8B C8                     MOV ECX,EAX
0065DADB  E8 55 3C DA FF            CALL 0x00401735
0065DAE0  5F                        POP EDI
0065DAE1  5E                        POP ESI
0065DAE2  25 FF FF 00 00            AND EAX,0xffff
0065DAE7  5B                        POP EBX
0065DAE8  8B E5                     MOV ESP,EBP
0065DAEA  5D                        POP EBP
0065DAEB  C2 08 00                  RET 0x8
LAB_0065daee:
0065DAEE  52                        PUSH EDX
0065DAEF  8B C8                     MOV ECX,EAX
0065DAF1  E8 32 5D DA FF            CALL 0x00403828
0065DAF6  5F                        POP EDI
0065DAF7  5E                        POP ESI
0065DAF8  25 FF FF 00 00            AND EAX,0xffff
0065DAFD  5B                        POP EBX
0065DAFE  8B E5                     MOV ESP,EBP
0065DB00  5D                        POP EBP
0065DB01  C2 08 00                  RET 0x8
LAB_0065db04:
0065DB04  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0065DB07  85 C0                     TEST EAX,EAX
0065DB09  75 09                     JNZ 0x0065db14
0065DB0B  8B CE                     MOV ECX,ESI
0065DB0D  E8 BD 3D DA FF            CALL 0x004018cf
0065DB12  EB 08                     JMP 0x0065db1c
LAB_0065db14:
0065DB14  50                        PUSH EAX
0065DB15  8B CE                     MOV ECX,ESI
0065DB17  E8 9A 7E DA FF            CALL 0x004059b6
LAB_0065db1c:
0065DB1C  8B F8                     MOV EDI,EAX
0065DB1E  85 FF                     TEST EDI,EDI
0065DB20  74 6A                     JZ 0x0065db8c
0065DB22  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0065DB25  33 DB                     XOR EBX,EBX
0065DB27  85 C0                     TEST EAX,EAX
0065DB29  7E 5B                     JLE 0x0065db86
0065DB2B  EB 03                     JMP 0x0065db30
LAB_0065db2d:
0065DB2D  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_0065db30:
0065DB30  3B D8                     CMP EBX,EAX
0065DB32  73 0D                     JNC 0x0065db41
0065DB34  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0065DB37  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0065DB3A  0F AF C3                  IMUL EAX,EBX
0065DB3D  03 C1                     ADD EAX,ECX
0065DB3F  EB 02                     JMP 0x0065db43
LAB_0065db41:
0065DB41  33 C0                     XOR EAX,EAX
LAB_0065db43:
0065DB43  66 8B 08                  MOV CX,word ptr [EAX]
0065DB46  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
0065DB49  6A 01                     PUSH 0x1
0065DB4B  51                        PUSH ECX
0065DB4C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065DB52  52                        PUSH EDX
0065DB53  E8 62 4D DA FF            CALL 0x004028ba
0065DB58  8B F0                     MOV ESI,EAX
0065DB5A  85 F6                     TEST ESI,ESI
0065DB5C  74 20                     JZ 0x0065db7e
0065DB5E  8B 06                     MOV EAX,dword ptr [ESI]
0065DB60  8B CE                     MOV ECX,ESI
0065DB62  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0065DB68  85 C0                     TEST EAX,EAX
0065DB6A  74 12                     JZ 0x0065db7e
0065DB6C  8B 16                     MOV EDX,dword ptr [ESI]
0065DB6E  8B CE                     MOV ECX,ESI
0065DB70  FF 52 6C                  CALL dword ptr [EDX + 0x6c]
0065DB73  0F BE 4D 0C               MOVSX ECX,byte ptr [EBP + 0xc]
0065DB77  3B C8                     CMP ECX,EAX
0065DB79  75 03                     JNZ 0x0065db7e
0065DB7B  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_0065db7e:
0065DB7E  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0065DB81  43                        INC EBX
0065DB82  3B D8                     CMP EBX,EAX
0065DB84  7C A7                     JL 0x0065db2d
LAB_0065db86:
0065DB86  57                        PUSH EDI
0065DB87  E8 84 05 05 00            CALL 0x006ae110
LAB_0065db8c:
0065DB8C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065DB8F  5F                        POP EDI
0065DB90  5E                        POP ESI
0065DB91  5B                        POP EBX
0065DB92  8B E5                     MOV ESP,EBP
0065DB94  5D                        POP EBP
0065DB95  C2 08 00                  RET 0x8
