FUN_0073dc60:
0073DC60  55                        PUSH EBP
0073DC61  8B EC                     MOV EBP,ESP
0073DC63  83 EC 6C                  SUB ESP,0x6c
0073DC66  68 81 00 00 00            PUSH 0x81
0073DC6B  68 E4 0A 7A 00            PUSH 0x7a0ae4
0073DC70  6A 02                     PUSH 0x2
0073DC72  68 00 01 00 00            PUSH 0x100
0073DC77  E8 88 34 CC FF            CALL 0x00401104
0073DC7C  83 C4 10                  ADD ESP,0x10
0073DC7F  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0073DC82  83 7D B0 00               CMP dword ptr [EBP + -0x50],0x0
0073DC86  75 0A                     JNZ 0x0073dc92
0073DC88  6A 1B                     PUSH 0x1b
0073DC8A  E8 C1 5B FF FF            CALL 0x00733850
0073DC8F  83 C4 04                  ADD ESP,0x4
LAB_0073dc92:
0073DC92  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0073DC95  A3 A0 A1 85 00            MOV [0x0085a1a0],EAX
0073DC9A  C7 05 DC A2 85 00 20 00 00 00  MOV dword ptr [0x0085a2dc],0x20
0073DCA4  EB 09                     JMP 0x0073dcaf
LAB_0073dca6:
0073DCA6  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0073DCA9  83 C1 08                  ADD ECX,0x8
0073DCAC  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
LAB_0073dcaf:
0073DCAF  8B 15 A0 A1 85 00         MOV EDX,dword ptr [0x0085a1a0]
0073DCB5  81 C2 00 01 00 00         ADD EDX,0x100
0073DCBB  39 55 B0                  CMP dword ptr [EBP + -0x50],EDX
0073DCBE  73 19                     JNC 0x0073dcd9
0073DCC0  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0073DCC3  C6 40 04 00               MOV byte ptr [EAX + 0x4],0x0
0073DCC7  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0073DCCA  C7 01 FF FF FF FF         MOV dword ptr [ECX],0xffffffff
0073DCD0  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0073DCD3  C6 42 05 0A               MOV byte ptr [EDX + 0x5],0xa
0073DCD7  EB CD                     JMP 0x0073dca6
LAB_0073dcd9:
0073DCD9  8D 45 B8                  LEA EAX,[EBP + -0x48]
0073DCDC  50                        PUSH EAX
0073DCDD  FF 15 E8 BB 85 00         CALL dword ptr [0x0085bbe8]
0073DCE3  8B 4D EA                  MOV ECX,dword ptr [EBP + -0x16]
0073DCE6  81 E1 FF FF 00 00         AND ECX,0xffff
0073DCEC  85 C9                     TEST ECX,ECX
0073DCEE  0F 84 7A 01 00 00         JZ 0x0073de6e
0073DCF4  83 7D EC 00               CMP dword ptr [EBP + -0x14],0x0
0073DCF8  0F 84 70 01 00 00         JZ 0x0073de6e
0073DCFE  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0073DD01  8B 02                     MOV EAX,dword ptr [EDX]
0073DD03  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0073DD06  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0073DD09  83 C1 04                  ADD ECX,0x4
0073DD0C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0073DD0F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073DD12  03 55 9C                  ADD EDX,dword ptr [EBP + -0x64]
0073DD15  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
0073DD18  81 7D 9C 00 08 00 00      CMP dword ptr [EBP + -0x64],0x800
0073DD1F  7D 08                     JGE 0x0073dd29
0073DD21  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0073DD24  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
0073DD27  EB 07                     JMP 0x0073dd30
LAB_0073dd29:
0073DD29  C7 45 98 00 08 00 00      MOV dword ptr [EBP + -0x68],0x800
LAB_0073dd30:
0073DD30  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
0073DD33  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
0073DD36  C7 45 A4 01 00 00 00      MOV dword ptr [EBP + -0x5c],0x1
0073DD3D  EB 09                     JMP 0x0073dd48
LAB_0073dd3f:
0073DD3F  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
0073DD42  83 C2 01                  ADD EDX,0x1
0073DD45  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
LAB_0073dd48:
0073DD48  A1 DC A2 85 00            MOV EAX,[0x0085a2dc]
0073DD4D  3B 45 9C                  CMP EAX,dword ptr [EBP + -0x64]
0073DD50  0F 8D 87 00 00 00         JGE 0x0073dddd
0073DD56  68 B6 00 00 00            PUSH 0xb6
0073DD5B  68 E4 0A 7A 00            PUSH 0x7a0ae4
0073DD60  6A 02                     PUSH 0x2
0073DD62  68 00 01 00 00            PUSH 0x100
0073DD67  E8 98 33 CC FF            CALL 0x00401104
0073DD6C  83 C4 10                  ADD ESP,0x10
0073DD6F  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0073DD72  83 7D B0 00               CMP dword ptr [EBP + -0x50],0x0
0073DD76  75 0B                     JNZ 0x0073dd83
0073DD78  8B 0D DC A2 85 00         MOV ECX,dword ptr [0x0085a2dc]
0073DD7E  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
0073DD81  EB 5A                     JMP 0x0073dddd
LAB_0073dd83:
0073DD83  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
0073DD86  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0073DD89  89 04 95 A0 A1 85 00      MOV dword ptr [EDX*0x4 + 0x85a1a0],EAX
0073DD90  8B 0D DC A2 85 00         MOV ECX,dword ptr [0x0085a2dc]
0073DD96  83 C1 20                  ADD ECX,0x20
0073DD99  89 0D DC A2 85 00         MOV dword ptr [0x0085a2dc],ECX
0073DD9F  EB 09                     JMP 0x0073ddaa
LAB_0073dda1:
0073DDA1  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0073DDA4  83 C2 08                  ADD EDX,0x8
0073DDA7  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
LAB_0073ddaa:
0073DDAA  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
0073DDAD  8B 0C 85 A0 A1 85 00      MOV ECX,dword ptr [EAX*0x4 + 0x85a1a0]
0073DDB4  81 C1 00 01 00 00         ADD ECX,0x100
0073DDBA  39 4D B0                  CMP dword ptr [EBP + -0x50],ECX
0073DDBD  73 19                     JNC 0x0073ddd8
0073DDBF  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0073DDC2  C6 42 04 00               MOV byte ptr [EDX + 0x4],0x0
0073DDC6  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0073DDC9  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
0073DDCF  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0073DDD2  C6 41 05 0A               MOV byte ptr [ECX + 0x5],0xa
0073DDD6  EB C9                     JMP 0x0073dda1
LAB_0073ddd8:
0073DDD8  E9 62 FF FF FF            JMP 0x0073dd3f
LAB_0073dddd:
0073DDDD  C7 45 A8 00 00 00 00      MOV dword ptr [EBP + -0x58],0x0
0073DDE4  EB 1B                     JMP 0x0073de01
LAB_0073dde6:
0073DDE6  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0073DDE9  83 C2 01                  ADD EDX,0x1
0073DDEC  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
0073DDEF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073DDF2  83 C0 01                  ADD EAX,0x1
0073DDF5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073DDF8  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0073DDFB  83 C1 04                  ADD ECX,0x4
0073DDFE  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
LAB_0073de01:
0073DE01  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0073DE04  3B 55 9C                  CMP EDX,dword ptr [EBP + -0x64]
0073DE07  7D 65                     JGE 0x0073de6e
0073DE09  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0073DE0C  83 38 FF                  CMP dword ptr [EAX],-0x1
0073DE0F  74 58                     JZ 0x0073de69
0073DE11  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073DE14  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0073DE17  83 E2 01                  AND EDX,0x1
0073DE1A  85 D2                     TEST EDX,EDX
0073DE1C  74 4B                     JZ 0x0073de69
0073DE1E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073DE21  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0073DE24  83 E1 08                  AND ECX,0x8
0073DE27  85 C9                     TEST ECX,ECX
0073DE29  75 10                     JNZ 0x0073de3b
0073DE2B  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
0073DE2E  8B 02                     MOV EAX,dword ptr [EDX]
0073DE30  50                        PUSH EAX
0073DE31  FF 15 54 BC 85 00         CALL dword ptr [0x0085bc54]
0073DE37  85 C0                     TEST EAX,EAX
0073DE39  74 2E                     JZ 0x0073de69
LAB_0073de3b:
0073DE3B  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0073DE3E  C1 F9 05                  SAR ECX,0x5
0073DE41  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0073DE44  83 E2 1F                  AND EDX,0x1f
0073DE47  8B 04 8D A0 A1 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x85a1a0]
0073DE4E  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0073DE51  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
0073DE54  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0073DE57  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0073DE5A  8B 08                     MOV ECX,dword ptr [EAX]
0073DE5C  89 0A                     MOV dword ptr [EDX],ECX
0073DE5E  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0073DE61  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073DE64  8A 08                     MOV CL,byte ptr [EAX]
0073DE66  88 4A 04                  MOV byte ptr [EDX + 0x4],CL
LAB_0073de69:
0073DE69  E9 78 FF FF FF            JMP 0x0073dde6
LAB_0073de6e:
0073DE6E  C7 45 A8 00 00 00 00      MOV dword ptr [EBP + -0x58],0x0
0073DE75  EB 09                     JMP 0x0073de80
LAB_0073de77:
0073DE77  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0073DE7A  83 C2 01                  ADD EDX,0x1
0073DE7D  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
LAB_0073de80:
0073DE80  83 7D A8 03               CMP dword ptr [EBP + -0x58],0x3
0073DE84  0F 8D D1 00 00 00         JGE 0x0073df5b
0073DE8A  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0073DE8D  8B 0D A0 A1 85 00         MOV ECX,dword ptr [0x0085a1a0]
0073DE93  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
0073DE96  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
0073DE99  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0073DE9C  83 38 FF                  CMP dword ptr [EAX],-0x1
0073DE9F  0F 85 A2 00 00 00         JNZ 0x0073df47
0073DEA5  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0073DEA8  C6 41 04 81               MOV byte ptr [ECX + 0x4],0x81
0073DEAC  83 7D A8 00               CMP dword ptr [EBP + -0x58],0x0
0073DEB0  75 09                     JNZ 0x0073debb
0073DEB2  C7 45 94 F6 FF FF FF      MOV dword ptr [EBP + -0x6c],0xfffffff6
0073DEB9  EB 10                     JMP 0x0073decb
LAB_0073debb:
0073DEBB  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0073DEBE  83 EA 01                  SUB EDX,0x1
0073DEC1  F7 DA                     NEG EDX
0073DEC3  1B D2                     SBB EDX,EDX
0073DEC5  83 C2 F5                  ADD EDX,-0xb
0073DEC8  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
LAB_0073decb:
0073DECB  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
0073DECE  50                        PUSH EAX
0073DECF  FF 15 B4 BC 85 00         CALL dword ptr [0x0085bcb4]
0073DED5  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0073DED8  83 7D B4 FF               CMP dword ptr [EBP + -0x4c],-0x1
0073DEDC  74 58                     JZ 0x0073df36
0073DEDE  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0073DEE1  51                        PUSH ECX
0073DEE2  FF 15 54 BC 85 00         CALL dword ptr [0x0085bc54]
0073DEE8  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0073DEEB  83 7D AC 00               CMP dword ptr [EBP + -0x54],0x0
0073DEEF  74 45                     JZ 0x0073df36
0073DEF1  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0073DEF4  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0073DEF7  89 02                     MOV dword ptr [EDX],EAX
0073DEF9  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0073DEFC  81 E1 FF 00 00 00         AND ECX,0xff
0073DF02  83 F9 02                  CMP ECX,0x2
0073DF05  75 10                     JNZ 0x0073df17
0073DF07  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0073DF0A  8A 42 04                  MOV AL,byte ptr [EDX + 0x4]
0073DF0D  0C 40                     OR AL,0x40
0073DF0F  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0073DF12  88 41 04                  MOV byte ptr [ECX + 0x4],AL
0073DF15  EB 1D                     JMP 0x0073df34
LAB_0073df17:
0073DF17  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0073DF1A  81 E2 FF 00 00 00         AND EDX,0xff
0073DF20  83 FA 03                  CMP EDX,0x3
0073DF23  75 0F                     JNZ 0x0073df34
0073DF25  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0073DF28  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
0073DF2B  80 C9 08                  OR CL,0x8
0073DF2E  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0073DF31  88 4A 04                  MOV byte ptr [EDX + 0x4],CL
LAB_0073df34:
0073DF34  EB 0F                     JMP 0x0073df45
LAB_0073df36:
0073DF36  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0073DF39  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
0073DF3C  80 C9 40                  OR CL,0x40
0073DF3F  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0073DF42  88 4A 04                  MOV byte ptr [EDX + 0x4],CL
LAB_0073df45:
0073DF45  EB 0F                     JMP 0x0073df56
LAB_0073df47:
0073DF47  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0073DF4A  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
0073DF4D  80 C9 80                  OR CL,0x80
0073DF50  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0073DF53  88 4A 04                  MOV byte ptr [EDX + 0x4],CL
LAB_0073df56:
0073DF56  E9 1C FF FF FF            JMP 0x0073de77
LAB_0073df5b:
0073DF5B  A1 DC A2 85 00            MOV EAX,[0x0085a2dc]
0073DF60  50                        PUSH EAX
0073DF61  FF 15 50 BC 85 00         CALL dword ptr [0x0085bc50]
0073DF67  8B E5                     MOV ESP,EBP
0073DF69  5D                        POP EBP
0073DF6A  C3                        RET
