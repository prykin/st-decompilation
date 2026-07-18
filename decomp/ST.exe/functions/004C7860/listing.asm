FUN_004c7860:
004C7860  55                        PUSH EBP
004C7861  8B EC                     MOV EBP,ESP
004C7863  83 EC 08                  SUB ESP,0x8
004C7866  53                        PUSH EBX
004C7867  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004C786A  56                        PUSH ESI
004C786B  57                        PUSH EDI
004C786C  8D 43 FF                  LEA EAX,[EBX + -0x1]
004C786F  33 FF                     XOR EDI,EDI
004C7871  83 F8 07                  CMP EAX,0x7
004C7874  8B F1                     MOV ESI,ECX
004C7876  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004C7879  0F 87 2A 01 00 00         JA 0x004c79a9
switchD_004c787f::switchD:
004C787F  FF 24 85 18 7B 4C 00      JMP dword ptr [EAX*0x4 + 0x4c7b18]
switchD_004c787f::caseD_0:
004C7886  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004C7889  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004C788C  50                        PUSH EAX
004C788D  51                        PUSH ECX
004C788E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C7894  E8 A4 C8 F3 FF            CALL 0x0040413d
004C7899  85 C0                     TEST EAX,EAX
004C789B  0F 84 08 01 00 00         JZ 0x004c79a9
004C78A1  0F BF 15 44 B2 7F 00      MOVSX EDX,word ptr [0x007fb244]
004C78A8  8B 86 B8 05 00 00         MOV EAX,dword ptr [ESI + 0x5b8]
004C78AE  4A                        DEC EDX
004C78AF  3B C2                     CMP EAX,EDX
004C78B1  0F 8D F2 00 00 00         JGE 0x004c79a9
switchD_004c787f::caseD_2:
004C78B7  BF 01 00 00 00            MOV EDI,0x1
004C78BC  E9 AC 00 00 00            JMP 0x004c796d
switchD_004c787f::caseD_1:
004C78C1  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004C78C4  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004C78C7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C78CD  53                        PUSH EBX
004C78CE  50                        PUSH EAX
004C78CF  E8 7B D9 F3 FF            CALL 0x0040524f
004C78D4  85 C0                     TEST EAX,EAX
004C78D6  75 2A                     JNZ 0x004c7902
004C78D8  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004C78DB  53                        PUSH EBX
004C78DC  51                        PUSH ECX
004C78DD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C78E3  E8 83 9F F3 FF            CALL 0x0040186b
004C78E8  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004C78EB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C78F1  40                        INC EAX
004C78F2  50                        PUSH EAX
004C78F3  53                        PUSH EBX
004C78F4  52                        PUSH EDX
004C78F5  E8 48 AA F3 FF            CALL 0x00402342
004C78FA  85 C0                     TEST EAX,EAX
004C78FC  0F 84 AA 00 00 00         JZ 0x004c79ac
LAB_004c7902:
004C7902  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004C7905  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C790B  53                        PUSH EBX
004C790C  50                        PUSH EAX
004C790D  E8 FB D9 F3 FF            CALL 0x0040530d
004C7912  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004C7915  53                        PUSH EBX
004C7916  8B D0                     MOV EDX,EAX
004C7918  51                        PUSH ECX
004C7919  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C791F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004C7922  E8 44 9F F3 FF            CALL 0x0040186b
004C7927  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004C792A  3B C2                     CMP EAX,EDX
004C792C  7D 7B                     JGE 0x004c79a9
004C792E  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004C7931  BF 01 00 00 00            MOV EDI,0x1
004C7936  EB 35                     JMP 0x004c796d
switchD_004c787f::caseD_5:
004C7938  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004C793B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004C793E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004C7941  50                        PUSH EAX
004C7942  51                        PUSH ECX
004C7943  52                        PUSH EDX
004C7944  53                        PUSH EBX
004C7945  8B CE                     MOV ECX,ESI
004C7947  E8 D5 DE F3 FF            CALL 0x00405821
004C794C  EB 19                     JMP 0x004c7967
switchD_004c787f::caseD_3:
004C794E  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004C7951  6A 31                     PUSH 0x31
004C7953  50                        PUSH EAX
004C7954  EB 06                     JMP 0x004c795c
switchD_004c787f::caseD_7:
004C7956  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004C7959  6A 75                     PUSH 0x75
004C795B  51                        PUSH ECX
LAB_004c795c:
004C795C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C7962  E8 04 9F F3 FF            CALL 0x0040186b
LAB_004c7967:
004C7967  8B F8                     MOV EDI,EAX
004C7969  85 FF                     TEST EDI,EDI
004C796B  74 3C                     JZ 0x004c79a9
LAB_004c796d:
004C796D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004C7970  85 C0                     TEST EAX,EAX
004C7972  74 35                     JZ 0x004c79a9
004C7974  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004C7977  6A FF                     PUSH -0x1
004C7979  52                        PUSH EDX
004C797A  53                        PUSH EBX
004C797B  8B CE                     MOV ECX,ESI
004C797D  E8 D7 A1 F3 FF            CALL 0x00401b59
004C7982  39 9E 61 03 00 00         CMP dword ptr [ESI + 0x361],EBX
004C7988  75 13                     JNZ 0x004c799d
004C798A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004C798D  8B 96 69 03 00 00         MOV EDX,dword ptr [ESI + 0x369]
004C7993  3B D1                     CMP EDX,ECX
004C7995  75 06                     JNZ 0x004c799d
004C7997  03 86 6D 03 00 00         ADD EAX,dword ptr [ESI + 0x36d]
LAB_004c799d:
004C799D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004C79A0  03 C2                     ADD EAX,EDX
004C79A2  83 F8 63                  CMP EAX,0x63
004C79A5  7E 02                     JLE 0x004c79a9
004C79A7  33 FF                     XOR EDI,EDI
LAB_004c79a9:
004C79A9  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
switchD_004c787f::default:
004C79AC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004C79AF  85 C0                     TEST EAX,EAX
004C79B1  0F 84 56 01 00 00         JZ 0x004c7b0d
004C79B7  85 FF                     TEST EDI,EDI
004C79B9  0F 84 4E 01 00 00         JZ 0x004c7b0d
004C79BF  8B 06                     MOV EAX,dword ptr [ESI]
004C79C1  8B CE                     MOV ECX,ESI
004C79C3  33 FF                     XOR EDI,EDI
004C79C5  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
004C79CB  85 C0                     TEST EAX,EAX
004C79CD  0F 84 3A 01 00 00         JZ 0x004c7b0d
004C79D3  83 BE 45 02 00 00 06      CMP dword ptr [ESI + 0x245],0x6
004C79DA  0F 84 2D 01 00 00         JZ 0x004c7b0d
004C79E0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004C79E3  83 F8 07                  CMP EAX,0x7
004C79E6  0F 87 21 01 00 00         JA 0x004c7b0d
switchD_004c79ec::switchD:
004C79EC  FF 24 85 38 7B 4C 00      JMP dword ptr [EAX*0x4 + 0x4c7b38]
switchD_004c79ec::caseD_1:
004C79F3  8B 86 61 03 00 00         MOV EAX,dword ptr [ESI + 0x361]
004C79F9  85 C0                     TEST EAX,EAX
004C79FB  0F 85 0C 01 00 00         JNZ 0x004c7b0d
004C7A01  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004C7A04  53                        PUSH EBX
004C7A05  51                        PUSH ECX
004C7A06  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C7A0C  E8 0E A4 F3 FF            CALL 0x00401e1f
004C7A11  85 C0                     TEST EAX,EAX
004C7A13  0F 85 F4 00 00 00         JNZ 0x004c7b0d
004C7A19  8B 96 39 02 00 00         MOV EDX,dword ptr [ESI + 0x239]
004C7A1F  8B 04 95 04 FC 7B 00      MOV EAX,dword ptr [EDX*0x4 + 0x7bfc04]
004C7A26  80 3C 18 00               CMP byte ptr [EAX + EBX*0x1],0x0
004C7A2A  0F 84 D8 00 00 00         JZ 0x004c7b08
004C7A30  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004C7A33  53                        PUSH EBX
004C7A34  51                        PUSH ECX
004C7A35  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C7A3B  E8 56 B9 F3 FF            CALL 0x00403396
004C7A40  85 C0                     TEST EAX,EAX
004C7A42  0F 84 C5 00 00 00         JZ 0x004c7b0d
004C7A48  BF 01 00 00 00            MOV EDI,0x1
004C7A4D  8B C7                     MOV EAX,EDI
004C7A4F  5F                        POP EDI
004C7A50  5E                        POP ESI
004C7A51  5B                        POP EBX
004C7A52  8B E5                     MOV ESP,EBP
004C7A54  5D                        POP EBP
004C7A55  C2 14 00                  RET 0x14
switchD_004c79ec::caseD_2:
004C7A58  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004C7A5E  85 C0                     TEST EAX,EAX
004C7A60  0F 85 A7 00 00 00         JNZ 0x004c7b0d
004C7A66  BF 01 00 00 00            MOV EDI,0x1
004C7A6B  8B C7                     MOV EAX,EDI
004C7A6D  5F                        POP EDI
004C7A6E  5E                        POP ESI
004C7A6F  5B                        POP EBX
004C7A70  8B E5                     MOV ESP,EBP
004C7A72  5D                        POP EBP
004C7A73  C2 14 00                  RET 0x14
switchD_004c79ec::caseD_4:
004C7A76  8B 16                     MOV EDX,dword ptr [ESI]
004C7A78  8B CE                     MOV ECX,ESI
004C7A7A  FF 52 7C                  CALL dword ptr [EDX + 0x7c]
004C7A7D  83 F8 64                  CMP EAX,0x64
004C7A80  0F 84 87 00 00 00         JZ 0x004c7b0d
switchD_004c79ec::caseD_5:
004C7A86  8B 86 61 03 00 00         MOV EAX,dword ptr [ESI + 0x361]
004C7A8C  85 C0                     TEST EAX,EAX
004C7A8E  75 7D                     JNZ 0x004c7b0d
004C7A90  BF 01 00 00 00            MOV EDI,0x1
004C7A95  8B C7                     MOV EAX,EDI
004C7A97  5F                        POP EDI
004C7A98  5E                        POP ESI
004C7A99  5B                        POP EBX
004C7A9A  8B E5                     MOV ESP,EBP
004C7A9C  5D                        POP EBP
004C7A9D  C2 14 00                  RET 0x14
switchD_004c79ec::caseD_6:
004C7AA0  8B CE                     MOV ECX,ESI
004C7AA2  E8 C9 D9 F3 FF            CALL 0x00405470
004C7AA7  85 C0                     TEST EAX,EAX
004C7AA9  74 62                     JZ 0x004c7b0d
004C7AAB  81 EB DD 00 00 00         SUB EBX,0xdd
004C7AB1  74 27                     JZ 0x004c7ada
004C7AB3  4B                        DEC EBX
004C7AB4  75 57                     JNZ 0x004c7b0d
004C7AB6  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004C7AB9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C7ABF  50                        PUSH EAX
004C7AC0  E8 BF A7 F3 FF            CALL 0x00402284
004C7AC5  3B 45 10                  CMP EAX,dword ptr [EBP + 0x10]
004C7AC8  7C 43                     JL 0x004c7b0d
004C7ACA  BF 01 00 00 00            MOV EDI,0x1
004C7ACF  8B C7                     MOV EAX,EDI
004C7AD1  5F                        POP EDI
004C7AD2  5E                        POP ESI
004C7AD3  5B                        POP EBX
004C7AD4  8B E5                     MOV ESP,EBP
004C7AD6  5D                        POP EBP
004C7AD7  C2 14 00                  RET 0x14
LAB_004c7ada:
004C7ADA  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004C7ADD  51                        PUSH ECX
004C7ADE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C7AE4  E8 6B BE F3 FF            CALL 0x00403954
004C7AE9  3B 45 10                  CMP EAX,dword ptr [EBP + 0x10]
004C7AEC  7C 1F                     JL 0x004c7b0d
004C7AEE  BF 01 00 00 00            MOV EDI,0x1
004C7AF3  8B C7                     MOV EAX,EDI
004C7AF5  5F                        POP EDI
004C7AF6  5E                        POP ESI
004C7AF7  5B                        POP EBX
004C7AF8  8B E5                     MOV ESP,EBP
004C7AFA  5D                        POP EBP
004C7AFB  C2 14 00                  RET 0x14
switchD_004c79ec::caseD_7:
004C7AFE  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004C7B04  85 C0                     TEST EAX,EAX
004C7B06  75 05                     JNZ 0x004c7b0d
switchD_004c79ec::caseD_0:
004C7B08  BF 01 00 00 00            MOV EDI,0x1
switchD_004c79ec::default:
004C7B0D  8B C7                     MOV EAX,EDI
004C7B0F  5F                        POP EDI
004C7B10  5E                        POP ESI
004C7B11  5B                        POP EBX
004C7B12  8B E5                     MOV ESP,EBP
004C7B14  5D                        POP EBP
004C7B15  C2 14 00                  RET 0x14
