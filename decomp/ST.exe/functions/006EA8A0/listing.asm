FUN_006ea8a0:
006EA8A0  55                        PUSH EBP
006EA8A1  8B EC                     MOV EBP,ESP
006EA8A3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006EA8A6  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EA8AC  3B D0                     CMP EDX,EAX
006EA8AE  0F 83 90 00 00 00         JNC 0x006ea944
006EA8B4  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006EA8BA  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EA8BD  C1 E0 03                  SHL EAX,0x3
006EA8C0  2B C2                     SUB EAX,EDX
006EA8C2  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA8C5  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006EA8C8  8B 08                     MOV ECX,dword ptr [EAX]
006EA8CA  F6 C5 80                  TEST CH,0x80
006EA8CD  74 75                     JZ 0x006ea944
006EA8CF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006EA8D2  8B 90 94 00 00 00         MOV EDX,dword ptr [EAX + 0x94]
006EA8D8  3B CA                     CMP ECX,EDX
006EA8DA  7D 5A                     JGE 0x006ea936
006EA8DC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006EA8DF  85 D2                     TEST EDX,EDX
006EA8E1  7E 22                     JLE 0x006ea905
006EA8E3  56                        PUSH ESI
006EA8E4  8B B0 A4 00 00 00         MOV ESI,dword ptr [EAX + 0xa4]
006EA8EA  80 4C 8E 03 01            OR byte ptr [ESI + ECX*0x4 + 0x3],0x1
006EA8EF  89 90 98 00 00 00         MOV dword ptr [EAX + 0x98],EDX
006EA8F5  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006EA8F8  8D 4C 8E 02               LEA ECX,[ESI + ECX*0x4 + 0x2]
006EA8FC  89 90 9C 00 00 00         MOV dword ptr [EAX + 0x9c],EDX
006EA902  5E                        POP ESI
006EA903  EB 11                     JMP 0x006ea916
LAB_006ea905:
006EA905  8B 90 A4 00 00 00         MOV EDX,dword ptr [EAX + 0xa4]
006EA90B  66 81 64 8A 02 FF FE      AND word ptr [EDX + ECX*0x4 + 0x2],0xfeff
006EA912  8D 4C 8A 02               LEA ECX,[EDX + ECX*0x4 + 0x2]
LAB_006ea916:
006EA916  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006EA919  85 C9                     TEST ECX,ECX
006EA91B  75 36                     JNZ 0x006ea953
006EA91D  8B 08                     MOV ECX,dword ptr [EAX]
006EA91F  F7 C1 01 00 01 00         TEST ECX,0x10001
006EA925  74 2C                     JZ 0x006ea953
006EA927  81 E1 FF FF 87 FF         AND ECX,0xff87ffff
006EA92D  83 C9 04                  OR ECX,0x4
006EA930  89 08                     MOV dword ptr [EAX],ECX
006EA932  5D                        POP EBP
006EA933  C2 10 00                  RET 0x10
LAB_006ea936:
006EA936  68 04 EF 7E 00            PUSH 0x7eef04
006EA93B  E8 60 E8 FF FF            CALL 0x006e91a0
006EA940  5D                        POP EBP
006EA941  C2 10 00                  RET 0x10
LAB_006ea944:
006EA944  83 FA FF                  CMP EDX,-0x1
006EA947  74 0A                     JZ 0x006ea953
006EA949  68 04 EF 7E 00            PUSH 0x7eef04
006EA94E  E8 FD E2 FF FF            CALL 0x006e8c50
LAB_006ea953:
006EA953  5D                        POP EBP
006EA954  C2 10 00                  RET 0x10
