STAllPlayersC::GetTOBJList:
0043E780  55                        PUSH EBP
0043E781  8B EC                     MOV EBP,ESP
0043E783  83 EC 54                  SUB ESP,0x54
0043E786  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0043E78A  53                        PUSH EBX
0043E78B  56                        PUSH ESI
0043E78C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043E78F  57                        PUSH EDI
0043E790  6A 00                     PUSH 0x0
0043E792  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0043E795  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0043E798  C1 E1 04                  SHL ECX,0x4
0043E79B  03 C8                     ADD ECX,EAX
0043E79D  8B 04 4D 29 4E 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4e29]
0043E7A4  8D 4D AC                  LEA ECX,[EBP + -0x54]
0043E7A7  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0043E7AA  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0043E7AD  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0043E7B2  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0043E7B5  8D 55 B0                  LEA EDX,[EBP + -0x50]
0043E7B8  52                        PUSH EDX
0043E7B9  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0043E7BC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0043E7C2  E8 29 F0 2E 00            CALL 0x0072d7f0
0043E7C7  8B F0                     MOV ESI,EAX
0043E7C9  83 C4 08                  ADD ESP,0x8
0043E7CC  85 F6                     TEST ESI,ESI
0043E7CE  0F 85 DB 00 00 00         JNZ 0x0043e8af
0043E7D4  6A 01                     PUSH 0x1
0043E7D6  6A 02                     PUSH 0x2
0043E7D8  50                        PUSH EAX
0043E7D9  50                        PUSH EAX
0043E7DA  E8 B1 FA 26 00            CALL 0x006ae290
0043E7DF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0043E7E2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043E7E5  33 FF                     XOR EDI,EDI
0043E7E7  85 C0                     TEST EAX,EAX
0043E7E9  0F 8E AB 00 00 00         JLE 0x0043e89a
0043E7EF  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_0043e7f2:
0043E7F2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0043E7F5  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0043E7F8  8B 34 B9                  MOV ESI,dword ptr [ECX + EDI*0x4]
0043E7FB  85 F6                     TEST ESI,ESI
0043E7FD  74 5C                     JZ 0x0043e85b
0043E7FF  8B 16                     MOV EDX,dword ptr [ESI]
0043E801  8B CE                     MOV ECX,ESI
0043E803  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0043E806  3B C3                     CMP EAX,EBX
0043E808  75 51                     JNZ 0x0043e85b
0043E80A  8B 06                     MOV EAX,dword ptr [ESI]
0043E80C  8B CE                     MOV ECX,ESI
0043E80E  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0043E814  85 C0                     TEST EAX,EAX
0043E816  74 43                     JZ 0x0043e85b
0043E818  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0043E81B  85 C9                     TEST ECX,ECX
0043E81D  75 07                     JNZ 0x0043e826
0043E81F  B8 01 00 00 00            MOV EAX,0x1
0043E824  EB 37                     JMP 0x0043e85d
LAB_0043e826:
0043E826  8D 43 C8                  LEA EAX,[EBX + -0x38]
0043E829  83 F8 26                  CMP EAX,0x26
0043E82C  77 2D                     JA 0x0043e85b
0043E82E  33 D2                     XOR EDX,EDX
0043E830  8A 90 04 E9 43 00         MOV DL,byte ptr [EAX + 0x43e904]
switchD_0043e836::switchD:
0043E836  FF 24 95 FC E8 43 00      JMP dword ptr [EDX*0x4 + 0x43e8fc]
switchD_0043e836::caseD_38:
0043E83D  83 F9 01                  CMP ECX,0x1
0043E840  75 19                     JNZ 0x0043e85b
0043E842  8B 06                     MOV EAX,dword ptr [ESI]
0043E844  8D 4D F0                  LEA ECX,[EBP + -0x10]
0043E847  51                        PUSH ECX
0043E848  8B CE                     MOV ECX,ESI
0043E84A  FF 90 88 00 00 00         CALL dword ptr [EAX + 0x88]
0043E850  85 C0                     TEST EAX,EAX
0043E852  7E 07                     JLE 0x0043e85b
0043E854  B8 01 00 00 00            MOV EAX,0x1
0043E859  EB 02                     JMP 0x0043e85d
switchD_0043e836::caseD_3a:
0043E85B  33 C0                     XOR EAX,EAX
LAB_0043e85d:
0043E85D  83 F8 01                  CMP EAX,0x1
0043E860  75 2C                     JNZ 0x0043e88e
0043E862  80 7D 14 FF               CMP byte ptr [EBP + 0x14],0xff
0043E866  74 19                     JZ 0x0043e881
0043E868  8B 16                     MOV EDX,dword ptr [ESI]
0043E86A  8B CE                     MOV ECX,ESI
0043E86C  FF 52 6C                  CALL dword ptr [EDX + 0x6c]
0043E86F  0F BE 4D 14               MOVSX ECX,byte ptr [EBP + 0x14]
0043E873  3B C1                     CMP EAX,ECX
0043E875  75 17                     JNZ 0x0043e88e
0043E877  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0043E87A  83 C6 32                  ADD ESI,0x32
0043E87D  56                        PUSH ESI
0043E87E  52                        PUSH EDX
0043E87F  EB 08                     JMP 0x0043e889
LAB_0043e881:
0043E881  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043E884  83 C6 32                  ADD ESI,0x32
0043E887  56                        PUSH ESI
0043E888  50                        PUSH EAX
LAB_0043e889:
0043E889  E8 32 F9 26 00            CALL 0x006ae1c0
LAB_0043e88e:
0043E88E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043E891  47                        INC EDI
0043E892  3B F8                     CMP EDI,EAX
0043E894  0F 8C 58 FF FF FF         JL 0x0043e7f2
LAB_0043e89a:
0043E89A  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0043E89D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043E8A0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0043E8A6  5F                        POP EDI
0043E8A7  5E                        POP ESI
0043E8A8  5B                        POP EBX
0043E8A9  8B E5                     MOV ESP,EBP
0043E8AB  5D                        POP EBP
0043E8AC  C2 10 00                  RET 0x10
LAB_0043e8af:
0043E8AF  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0043E8B2  68 94 7F 7A 00            PUSH 0x7a7f94
0043E8B7  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043E8BC  56                        PUSH ESI
0043E8BD  6A 00                     PUSH 0x0
0043E8BF  68 BF 1F 00 00            PUSH 0x1fbf
0043E8C4  68 04 60 7A 00            PUSH 0x7a6004
0043E8C9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0043E8CF  E8 FC EB 26 00            CALL 0x006ad4d0
0043E8D4  83 C4 18                  ADD ESP,0x18
0043E8D7  85 C0                     TEST EAX,EAX
0043E8D9  74 01                     JZ 0x0043e8dc
0043E8DB  CC                        INT3
LAB_0043e8dc:
0043E8DC  68 C0 1F 00 00            PUSH 0x1fc0
0043E8E1  68 04 60 7A 00            PUSH 0x7a6004
0043E8E6  6A 00                     PUSH 0x0
0043E8E8  56                        PUSH ESI
0043E8E9  E8 52 75 26 00            CALL 0x006a5e40
0043E8EE  5F                        POP EDI
0043E8EF  5E                        POP ESI
0043E8F0  33 C0                     XOR EAX,EAX
0043E8F2  5B                        POP EBX
0043E8F3  8B E5                     MOV ESP,EBP
0043E8F5  5D                        POP EBP
0043E8F6  C2 10 00                  RET 0x10
