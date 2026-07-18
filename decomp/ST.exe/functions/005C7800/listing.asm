FUN_005c7800:
005C7800  55                        PUSH EBP
005C7801  8B EC                     MOV EBP,ESP
005C7803  B8 7C 5A 00 00            MOV EAX,0x5a7c
005C7808  E8 33 62 16 00            CALL 0x0072da40
005C780D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005C7812  53                        PUSH EBX
005C7813  56                        PUSH ESI
005C7814  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005C7817  57                        PUSH EDI
005C7818  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
005C781E  8D 8D 78 FF FF FF         LEA ECX,[EBP + 0xffffff78]
005C7824  6A 00                     PUSH 0x0
005C7826  52                        PUSH EDX
005C7827  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
005C782D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C7833  E8 B8 5F 16 00            CALL 0x0072d7f0
005C7838  83 C4 08                  ADD ESP,0x8
005C783B  85 C0                     TEST EAX,EAX
005C783D  0F 85 6F 07 00 00         JNZ 0x005c7fb2
005C7843  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005C7846  8B CB                     MOV ECX,EBX
005C7848  8B 03                     MOV EAX,dword ptr [EBX]
005C784A  FF 50 24                  CALL dword ptr [EAX + 0x24]
005C784D  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005C7852  85 C0                     TEST EAX,EAX
005C7854  74 2A                     JZ 0x005c7880
005C7856  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
005C785C  85 C9                     TEST ECX,ECX
005C785E  74 14                     JZ 0x005c7874
005C7860  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005C7863  83 F9 FF                  CMP ECX,-0x1
005C7866  74 18                     JZ 0x005c7880
005C7868  51                        PUSH ECX
005C7869  8B 48 60                  MOV ECX,dword ptr [EAX + 0x60]
005C786C  51                        PUSH ECX
005C786D  E8 7E C2 0E 00            CALL 0x006b3af0
005C7872  EB 0C                     JMP 0x005c7880
LAB_005c7874:
005C7874  8B 90 AD 00 00 00         MOV EDX,dword ptr [EAX + 0xad]
005C787A  52                        PUSH EDX
005C787B  E8 90 12 0F 00            CALL 0x006b8b10
LAB_005c7880:
005C7880  6A 00                     PUSH 0x0
005C7882  8B CB                     MOV ECX,EBX
005C7884  E8 4C D1 E3 FF            CALL 0x004049d5
005C7889  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C788E  6A 00                     PUSH 0x0
005C7890  50                        PUSH EAX
005C7891  E8 AA 5E 0F 00            CALL 0x006bd740
005C7896  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005C789B  8D 4D BC                  LEA ECX,[EBP + -0x44]
005C789E  51                        PUSH ECX
005C789F  8B 50 44                  MOV EDX,dword ptr [EAX + 0x44]
005C78A2  52                        PUSH EDX
005C78A3  50                        PUSH EAX
005C78A4  E8 87 CD 0F 00            CALL 0x006c4630
005C78A9  A1 38 67 80 00            MOV EAX,[0x00806738]
005C78AE  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
005C78B4  8B 15 30 67 80 00         MOV EDX,dword ptr [0x00806730]
005C78BA  50                        PUSH EAX
005C78BB  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005C78C0  51                        PUSH ECX
005C78C1  52                        PUSH EDX
005C78C2  6A 00                     PUSH 0x0
005C78C4  6A 00                     PUSH 0x0
005C78C6  50                        PUSH EAX
005C78C7  E8 B4 CF 0F 00            CALL 0x006c4880
005C78CC  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005C78D2  8D 4D BC                  LEA ECX,[EBP + -0x44]
005C78D5  51                        PUSH ECX
005C78D6  52                        PUSH EDX
005C78D7  A3 58 17 81 00            MOV [0x00811758],EAX
005C78DC  E8 FF CB 0F 00            CALL 0x006c44e0
005C78E1  A1 34 67 80 00            MOV EAX,[0x00806734]
005C78E6  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
005C78EC  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C78F2  50                        PUSH EAX
005C78F3  51                        PUSH ECX
005C78F4  6A 00                     PUSH 0x0
005C78F6  6A 00                     PUSH 0x0
005C78F8  52                        PUSH EDX
005C78F9  E8 82 E6 0E 00            CALL 0x006b5f80
005C78FE  A1 58 17 81 00            MOV EAX,[0x00811758]
005C7903  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005C7909  6A 00                     PUSH 0x0
005C790B  50                        PUSH EAX
005C790C  6A 00                     PUSH 0x0
005C790E  6A 00                     PUSH 0x0
005C7910  51                        PUSH ECX
005C7911  E8 2A CD 0E 00            CALL 0x006b4640
005C7916  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005C791C  6A 00                     PUSH 0x0
005C791E  6A 00                     PUSH 0x0
005C7920  52                        PUSH EDX
005C7921  E8 4A 3A 0F 00            CALL 0x006bb370
005C7926  8B 83 3F 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f3f]
005C792C  85 C0                     TEST EAX,EAX
005C792E  74 09                     JZ 0x005c7939
005C7930  50                        PUSH EAX
005C7931  E8 3A 98 12 00            CALL 0x006f1170
005C7936  83 C4 04                  ADD ESP,0x4
LAB_005c7939:
005C7939  A0 7E 87 80 00            MOV AL,[0x0080877e]
005C793E  84 C0                     TEST AL,AL
005C7940  0F 84 9A 01 00 00         JZ 0x005c7ae0
005C7946  A0 A0 67 80 00            MOV AL,[0x008067a0]
005C794B  84 C0                     TEST AL,AL
005C794D  74 2E                     JZ 0x005c797d
005C794F  A1 64 17 81 00            MOV EAX,[0x00811764]
005C7954  85 C0                     TEST EAX,EAX
005C7956  74 25                     JZ 0x005c797d
005C7958  83 C0 18                  ADD EAX,0x18
005C795B  8D B3 5F 1A 00 00         LEA ESI,[EBX + 0x1a5f]
005C7961  50                        PUSH EAX
005C7962  56                        PUSH ESI
005C7963  E8 F8 E7 0E 00            CALL 0x006b6160
005C7968  56                        PUSH ESI
005C7969  6A 04                     PUSH 0x4
005C796B  B9 90 2A 80 00            MOV ECX,0x802a90
005C7970  C6 83 7F 1A 00 00 00      MOV byte ptr [EBX + 0x1a7f],0x0
005C7977  FF 15 70 C0 85 00         CALL dword ptr [0x0085c070]
LAB_005c797d:
005C797D  B9 8C 00 00 00            MOV ECX,0x8c
005C7982  33 C0                     XOR EAX,EAX
005C7984  BF E0 3D 85 00            MOV EDI,0x853de0
005C7989  F3 AB                     STOSD.REP ES:EDI
005C798B  66 AB                     STOSW ES:EDI
005C798D  8B 83 53 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f53]
005C7993  33 C9                     XOR ECX,ECX
005C7995  A3 E0 3D 85 00            MOV [0x00853de0],EAX
005C799A  8A 8B 5C 1F 00 00         MOV CL,byte ptr [EBX + 0x1f5c]
005C79A0  33 C0                     XOR EAX,EAX
005C79A2  89 0D F4 3F 85 00         MOV dword ptr [0x00853ff4],ECX
005C79A8  8A 83 57 1F 00 00         MOV AL,byte ptr [EBX + 0x1f57]
005C79AE  83 E8 00                  SUB EAX,0x0
005C79B1  74 63                     JZ 0x005c7a16
005C79B3  48                        DEC EAX
005C79B4  74 42                     JZ 0x005c79f8
005C79B6  48                        DEC EAX
005C79B7  75 73                     JNZ 0x005c7a2c
005C79B9  8A 83 5C 1F 00 00         MOV AL,byte ptr [EBX + 0x1f5c]
005C79BF  3C 03                     CMP AL,0x3
005C79C1  76 0E                     JBE 0x005c79d1
005C79C3  B2 05                     MOV DL,0x5
005C79C5  3A D0                     CMP DL,AL
005C79C7  1B F6                     SBB ESI,ESI
005C79C9  83 E6 05                  AND ESI,0x5
005C79CC  83 C6 30                  ADD ESI,0x30
005C79CF  EB 05                     JMP 0x005c79d6
LAB_005c79d1:
005C79D1  BE 2B 00 00 00            MOV ESI,0x2b
LAB_005c79d6:
005C79D6  E8 E5 6C 16 00            CALL 0x0072e6c0
005C79DB  B9 41 00 00 00            MOV ECX,0x41
LAB_005c79e0:
005C79E0  2B CE                     SUB ECX,ESI
005C79E2  33 D2                     XOR EDX,EDX
005C79E4  F7 F1                     DIV ECX
005C79E6  03 D6                     ADD EDX,ESI
005C79E8  D1 E2                     SHL EDX,0x1
005C79EA  89 15 F0 3F 85 00         MOV dword ptr [0x00853ff0],EDX
005C79F0  89 15 EC 3F 85 00         MOV dword ptr [0x00853fec],EDX
005C79F6  EB 34                     JMP 0x005c7a2c
LAB_005c79f8:
005C79F8  8A 8B 5C 1F 00 00         MOV CL,byte ptr [EBX + 0x1f5c]
005C79FE  B2 03                     MOV DL,0x3
005C7A00  3A D1                     CMP DL,CL
005C7A02  1B F6                     SBB ESI,ESI
005C7A04  83 E6 04                  AND ESI,0x4
005C7A07  83 C6 21                  ADD ESI,0x21
005C7A0A  E8 B1 6C 16 00            CALL 0x0072e6c0
005C7A0F  B9 2E 00 00 00            MOV ECX,0x2e
005C7A14  EB CA                     JMP 0x005c79e0
LAB_005c7a16:
005C7A16  E8 A5 6C 16 00            CALL 0x0072e6c0
005C7A1B  83 E0 0F                  AND EAX,0xf
005C7A1E  8D 44 00 28               LEA EAX,[EAX + EAX*0x1 + 0x28]
005C7A22  A3 F0 3F 85 00            MOV [0x00853ff0],EAX
005C7A27  A3 EC 3F 85 00            MOV [0x00853fec],EAX
LAB_005c7a2c:
005C7A2C  E8 8F 6C 16 00            CALL 0x0072e6c0
005C7A31  83 E0 01                  AND EAX,0x1
005C7A34  83 C0 04                  ADD EAX,0x4
005C7A37  A3 01 40 85 00            MOV [0x00854001],EAX
005C7A3C  33 C0                     XOR EAX,EAX
005C7A3E  8A 83 5D 1F 00 00         MOV AL,byte ptr [EBX + 0x1f5d]
005C7A44  83 E8 00                  SUB EAX,0x0
005C7A47  74 2C                     JZ 0x005c7a75
005C7A49  48                        DEC EAX
005C7A4A  74 16                     JZ 0x005c7a62
005C7A4C  48                        DEC EAX
005C7A4D  75 3D                     JNZ 0x005c7a8c
005C7A4F  E8 6C 6C 16 00            CALL 0x0072e6c0
005C7A54  33 D2                     XOR EDX,EDX
005C7A56  B9 0B 00 00 00            MOV ECX,0xb
005C7A5B  F7 F1                     DIV ECX
005C7A5D  83 C2 32                  ADD EDX,0x32
005C7A60  EB 24                     JMP 0x005c7a86
LAB_005c7a62:
005C7A62  E8 59 6C 16 00            CALL 0x0072e6c0
005C7A67  33 D2                     XOR EDX,EDX
005C7A69  B9 0B 00 00 00            MOV ECX,0xb
005C7A6E  F7 F1                     DIV ECX
005C7A70  83 C2 28                  ADD EDX,0x28
005C7A73  EB 11                     JMP 0x005c7a86
LAB_005c7a75:
005C7A75  E8 46 6C 16 00            CALL 0x0072e6c0
005C7A7A  33 D2                     XOR EDX,EDX
005C7A7C  B9 0B 00 00 00            MOV ECX,0xb
005C7A81  F7 F1                     DIV ECX
005C7A83  83 C2 1E                  ADD EDX,0x1e
LAB_005c7a86:
005C7A86  89 15 05 40 85 00         MOV dword ptr [0x00854005],EDX
LAB_005c7a8c:
005C7A8C  33 C0                     XOR EAX,EAX
005C7A8E  8A 83 5E 1F 00 00         MOV AL,byte ptr [EBX + 0x1f5e]
005C7A94  83 E8 00                  SUB EAX,0x0
005C7A97  74 20                     JZ 0x005c7ab9
005C7A99  48                        DEC EAX
005C7A9A  74 10                     JZ 0x005c7aac
005C7A9C  48                        DEC EAX
005C7A9D  75 2A                     JNZ 0x005c7ac9
005C7A9F  E8 1C 6C 16 00            CALL 0x0072e6c0
005C7AA4  83 E0 01                  AND EAX,0x1
005C7AA7  83 C0 06                  ADD EAX,0x6
005C7AAA  EB 18                     JMP 0x005c7ac4
LAB_005c7aac:
005C7AAC  E8 0F 6C 16 00            CALL 0x0072e6c0
005C7AB1  83 E0 01                  AND EAX,0x1
005C7AB4  83 C0 04                  ADD EAX,0x4
005C7AB7  EB 0B                     JMP 0x005c7ac4
LAB_005c7ab9:
005C7AB9  E8 02 6C 16 00            CALL 0x0072e6c0
005C7ABE  83 E0 01                  AND EAX,0x1
005C7AC1  83 C0 02                  ADD EAX,0x2
LAB_005c7ac4:
005C7AC4  A3 09 40 85 00            MOV [0x00854009],EAX
LAB_005c7ac9:
005C7AC9  8A 93 5F 1F 00 00         MOV DL,byte ptr [EBX + 0x1f5f]
005C7ACF  88 15 0D 40 85 00         MOV byte ptr [0x0085400d],DL
005C7AD5  8A 83 58 1F 00 00         MOV AL,byte ptr [EBX + 0x1f58]
005C7ADB  A2 FC 3F 85 00            MOV [0x00853ffc],AL
LAB_005c7ae0:
005C7AE0  8B 0D F4 C0 79 00         MOV ECX,dword ptr [0x0079c0f4]
005C7AE6  8B 15 E8 C0 79 00         MOV EDX,dword ptr [0x0079c0e8]
005C7AEC  51                        PUSH ECX
005C7AED  52                        PUSH EDX
005C7AEE  68 80 76 80 00            PUSH 0x807680
005C7AF3  68 DC 6E 7C 00            PUSH 0x7c6edc
005C7AF8  68 E4 3D 85 00            PUSH 0x853de4
005C7AFD  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C7B03  8B 8B 7C 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f7c]
005C7B09  A1 FC 3F 85 00            MOV EAX,[0x00853ffc]
005C7B0E  25 FF 00 00 00            AND EAX,0xff
005C7B13  83 C4 14                  ADD ESP,0x14
005C7B16  3B 41 0C                  CMP EAX,dword ptr [ECX + 0xc]
005C7B19  73 0B                     JNC 0x005c7b26
005C7B1B  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
005C7B1E  0F AF F8                  IMUL EDI,EAX
005C7B21  03 79 1C                  ADD EDI,dword ptr [ECX + 0x1c]
005C7B24  EB 02                     JMP 0x005c7b28
LAB_005c7b26:
005C7B26  33 FF                     XOR EDI,EDI
LAB_005c7b28:
005C7B28  83 C9 FF                  OR ECX,0xffffffff
005C7B2B  33 C0                     XOR EAX,EAX
005C7B2D  F2 AE                     SCASB.REPNE ES:EDI
005C7B2F  F7 D1                     NOT ECX
005C7B31  2B F9                     SUB EDI,ECX
005C7B33  68 E8 3E 85 00            PUSH 0x853ee8
005C7B38  8B C1                     MOV EAX,ECX
005C7B3A  8B F7                     MOV ESI,EDI
005C7B3C  BF E8 3E 85 00            MOV EDI,0x853ee8
005C7B41  C1 E9 02                  SHR ECX,0x2
005C7B44  F3 A5                     MOVSD.REP ES:EDI,ESI
005C7B46  8B C8                     MOV ECX,EAX
005C7B48  83 E1 03                  AND ECX,0x3
005C7B4B  F3 A4                     MOVSB.REP ES:EDI,ESI
005C7B4D  8B 0D EC C0 79 00         MOV ECX,dword ptr [0x0079c0ec]
005C7B53  C7 05 0E 40 85 00 64 4C 40 00  MOV dword ptr [0x0085400e],0x404c64
005C7B5D  51                        PUSH ECX
005C7B5E  68 80 76 80 00            PUSH 0x807680
005C7B63  68 DC 6E 7C 00            PUSH 0x7c6edc
005C7B68  68 3A F3 80 00            PUSH 0x80f33a
005C7B6D  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C7B73  6A 00                     PUSH 0x0
005C7B75  6A 00                     PUSH 0x0
005C7B77  6A 00                     PUSH 0x0
005C7B79  68 3A F3 80 00            PUSH 0x80f33a
005C7B7E  68 45 03 00 00            PUSH 0x345
005C7B83  E8 38 93 12 00            CALL 0x006f0ec0
005C7B88  83 C4 28                  ADD ESP,0x28
005C7B8B  A3 F8 3F 85 00            MOV [0x00853ff8],EAX
005C7B90  85 C0                     TEST EAX,EAX
005C7B92  A3 FD 3F 85 00            MOV [0x00853ffd],EAX
005C7B97  0F 84 AA 00 00 00         JZ 0x005c7c47
005C7B9D  8D 8D 84 A5 FF FF         LEA ECX,[EBP + 0xffffa584]
005C7BA3  E8 10 DC E3 FF            CALL 0x004057b8
005C7BA8  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005C7BAE  A3 54 17 81 00            MOV [0x00811754],EAX
005C7BB3  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005C7BB9  3C 06                     CMP AL,0x6
005C7BBB  74 4F                     JZ 0x005c7c0c
005C7BBD  3C 01                     CMP AL,0x1
005C7BBF  74 4B                     JZ 0x005c7c0c
005C7BC1  3C 02                     CMP AL,0x2
005C7BC3  74 47                     JZ 0x005c7c0c
005C7BC5  A0 7E 87 80 00            MOV AL,[0x0080877e]
005C7BCA  84 C0                     TEST AL,AL
005C7BCC  74 3E                     JZ 0x005c7c0c
005C7BCE  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005C7BD4  6A FF                     PUSH -0x1
005C7BD6  6A 01                     PUSH 0x1
005C7BD8  68 32 02 00 00            PUSH 0x232
005C7BDD  68 E0 3D 85 00            PUSH 0x853de0
005C7BE2  6A 1E                     PUSH 0x1e
005C7BE4  6A 00                     PUSH 0x0
005C7BE6  52                        PUSH EDX
005C7BE7  E8 74 D7 14 00            CALL 0x00715360
005C7BEC  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005C7BF2  6A FF                     PUSH -0x1
005C7BF4  6A 01                     PUSH 0x1
005C7BF6  8D 83 53 1F 00 00         LEA EAX,[EBX + 0x1f53]
005C7BFC  6A 0D                     PUSH 0xd
005C7BFE  50                        PUSH EAX
005C7BFF  6A 20                     PUSH 0x20
005C7C01  6A 00                     PUSH 0x0
005C7C03  51                        PUSH ECX
005C7C04  E8 57 D7 14 00            CALL 0x00715360
005C7C09  83 C4 38                  ADD ESP,0x38
LAB_005c7c0c:
005C7C0C  8D 93 53 1F 00 00         LEA EDX,[EBX + 0x1f53]
005C7C12  8D 8D 84 A5 FF FF         LEA ECX,[EBP + 0xffffa584]
005C7C18  52                        PUSH EDX
005C7C19  68 E0 3D 85 00            PUSH 0x853de0
005C7C1E  E8 62 D7 E3 FF            CALL 0x00405385
005C7C23  8D 8D 84 A5 FF FF         LEA ECX,[EBP + 0xffffa584]
005C7C29  E8 0D 95 E3 FF            CALL 0x0040113b
005C7C2E  A1 F8 3F 85 00            MOV EAX,[0x00853ff8]
005C7C33  50                        PUSH EAX
005C7C34  E8 37 95 12 00            CALL 0x006f1170
005C7C39  83 C4 04                  ADD ESP,0x4
005C7C3C  8D 8D 84 A5 FF FF         LEA ECX,[EBP + 0xffffa584]
005C7C42  E8 9C E2 E3 FF            CALL 0x00405ee3
LAB_005c7c47:
005C7C47  6A 00                     PUSH 0x0
005C7C49  6A 00                     PUSH 0x0
005C7C4B  6A 00                     PUSH 0x0
005C7C4D  68 E4 3D 85 00            PUSH 0x853de4
005C7C52  68 45 03 00 00            PUSH 0x345
005C7C57  E8 64 92 12 00            CALL 0x006f0ec0
005C7C5C  89 83 3F 1F 00 00         MOV dword ptr [EBX + 0x1f3f],EAX
005C7C62  C7 05 B6 87 80 00 00 00 00 00  MOV dword ptr [0x008087b6],0x0
005C7C6C  8B 83 3F 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f3f]
005C7C72  83 C4 14                  ADD ESP,0x14
005C7C75  85 C0                     TEST EAX,EAX
005C7C77  0F 84 B1 02 00 00         JZ 0x005c7f2e
005C7C7D  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C7C83  8D 81 F4 02 00 00         LEA EAX,[ECX + 0x2f4]
005C7C89  8B 89 F4 02 00 00         MOV ECX,dword ptr [ECX + 0x2f4]
005C7C8F  85 C9                     TEST ECX,ECX
005C7C91  74 06                     JZ 0x005c7c99
005C7C93  50                        PUSH EAX
005C7C94  E8 C7 33 0E 00            CALL 0x006ab060
LAB_005c7c99:
005C7C99  8B 15 14 C1 79 00         MOV EDX,dword ptr [0x0079c114]
005C7C9F  8B 83 3F 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f3f]
005C7CA5  6A 00                     PUSH 0x0
005C7CA7  6A 02                     PUSH 0x2
005C7CA9  52                        PUSH EDX
005C7CAA  6A 0C                     PUSH 0xc
005C7CAC  50                        PUSH EAX
005C7CAD  E8 EE 28 14 00            CALL 0x0070a5a0
005C7CB2  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C7CB8  83 C4 14                  ADD ESP,0x14
005C7CBB  89 81 F4 02 00 00         MOV dword ptr [ECX + 0x2f4],EAX
005C7CC1  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C7CC7  8B 82 F4 02 00 00         MOV EAX,dword ptr [EDX + 0x2f4]
005C7CCD  85 C0                     TEST EAX,EAX
005C7CCF  74 17                     JZ 0x005c7ce8
005C7CD1  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005C7CD7  6A 00                     PUSH 0x0
005C7CD9  8B 91 B4 04 00 00         MOV EDX,dword ptr [ECX + 0x4b4]
005C7CDF  52                        PUSH EDX
005C7CE0  6A 00                     PUSH 0x0
005C7CE2  50                        PUSH EAX
005C7CE3  E8 A8 02 10 00            CALL 0x006c7f90
LAB_005c7ce8:
005C7CE8  A1 5C 99 80 00            MOV EAX,[0x0080995c]
005C7CED  8B 15 10 C1 79 00         MOV EDX,dword ptr [0x0079c110]
005C7CF3  B9 08 00 00 00            MOV ECX,0x8
005C7CF8  BE 60 99 80 00            MOV ESI,0x809960
005C7CFD  8D BD 2C FF FF FF         LEA EDI,[EBP + 0xffffff2c]
005C7D03  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
005C7D09  F3 A5                     MOVSD.REP ES:EDI,ESI
005C7D0B  33 F6                     XOR ESI,ESI
005C7D0D  8D 4D FC                  LEA ECX,[EBP + -0x4]
005C7D10  56                        PUSH ESI
005C7D11  51                        PUSH ECX
005C7D12  8B 8B 3F 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f3f]
005C7D18  52                        PUSH EDX
005C7D19  56                        PUSH ESI
005C7D1A  C7 45 FC B6 87 80 00      MOV dword ptr [EBP + -0x4],0x8087b6
005C7D21  E8 BA 9F 12 00            CALL 0x006f1ce0
005C7D26  A0 7E 87 80 00            MOV AL,[0x0080877e]
005C7D2B  84 C0                     TEST AL,AL
005C7D2D  74 18                     JZ 0x005c7d47
005C7D2F  89 B3 21 21 00 00         MOV dword ptr [EBX + 0x2121],ESI
005C7D35  A0 4B 73 80 00            MOV AL,[0x0080734b]
005C7D3A  89 35 AB 8A 80 00         MOV dword ptr [0x00808aab],ESI
005C7D40  A2 A8 8A 80 00            MOV [0x00808aa8],AL
005C7D45  EB 0E                     JMP 0x005c7d55
LAB_005c7d47:
005C7D47  83 C8 FF                  OR EAX,0xffffffff
005C7D4A  89 83 21 21 00 00         MOV dword ptr [EBX + 0x2121],EAX
005C7D50  A3 AB 8A 80 00            MOV [0x00808aab],EAX
LAB_005c7d55:
005C7D55  8B 0D BE 87 80 00         MOV ECX,dword ptr [0x008087be]
005C7D5B  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
005C7D61  89 0D 58 99 80 00         MOV dword ptr [0x00809958],ECX
005C7D67  B9 08 00 00 00            MOV ECX,0x8
005C7D6C  8D B5 2C FF FF FF         LEA ESI,[EBP + 0xffffff2c]
005C7D72  BF 60 99 80 00            MOV EDI,0x809960
005C7D77  89 15 5C 99 80 00         MOV dword ptr [0x0080995c],EDX
005C7D7D  F3 A5                     MOVSD.REP ES:EDI,ESI
005C7D7F  A1 C7 C4 80 00            MOV EAX,[0x0080c4c7]
005C7D84  85 C0                     TEST EAX,EAX
005C7D86  74 06                     JZ 0x005c7d8e
005C7D88  50                        PUSH EAX
005C7D89  E8 E2 D7 0E 00            CALL 0x006b5570
LAB_005c7d8e:
005C7D8E  A1 08 C1 79 00            MOV EAX,[0x0079c108]
005C7D93  8B 8B 3F 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f3f]
005C7D99  6A 00                     PUSH 0x0
005C7D9B  50                        PUSH EAX
005C7D9C  51                        PUSH ECX
005C7D9D  E8 6E 2C 15 00            CALL 0x0071aa10
005C7DA2  83 C4 0C                  ADD ESP,0xc
005C7DA5  A3 C7 C4 80 00            MOV [0x0080c4c7],EAX
005C7DAA  85 C0                     TEST EAX,EAX
005C7DAC  75 0F                     JNZ 0x005c7dbd
005C7DAE  6A 0A                     PUSH 0xa
005C7DB0  6A 0A                     PUSH 0xa
005C7DB2  50                        PUSH EAX
005C7DB3  E8 38 D7 0E 00            CALL 0x006b54f0
005C7DB8  A3 C7 C4 80 00            MOV [0x0080c4c7],EAX
LAB_005c7dbd:
005C7DBD  A1 CB C4 80 00            MOV EAX,[0x0080c4cb]
005C7DC2  85 C0                     TEST EAX,EAX
005C7DC4  74 06                     JZ 0x005c7dcc
005C7DC6  50                        PUSH EAX
005C7DC7  E8 A4 D7 0E 00            CALL 0x006b5570
LAB_005c7dcc:
005C7DCC  8B 15 0C C1 79 00         MOV EDX,dword ptr [0x0079c10c]
005C7DD2  8B 83 3F 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f3f]
005C7DD8  6A 00                     PUSH 0x0
005C7DDA  52                        PUSH EDX
005C7DDB  50                        PUSH EAX
005C7DDC  E8 2F 2C 15 00            CALL 0x0071aa10
005C7DE1  83 C4 0C                  ADD ESP,0xc
005C7DE4  A3 CB C4 80 00            MOV [0x0080c4cb],EAX
005C7DE9  85 C0                     TEST EAX,EAX
005C7DEB  75 0F                     JNZ 0x005c7dfc
005C7DED  6A 0A                     PUSH 0xa
005C7DEF  6A 0A                     PUSH 0xa
005C7DF1  50                        PUSH EAX
005C7DF2  E8 F9 D6 0E 00            CALL 0x006b54f0
005C7DF7  A3 CB C4 80 00            MOV [0x0080c4cb],EAX
LAB_005c7dfc:
005C7DFC  8B 15 04 C1 79 00         MOV EDX,dword ptr [0x0079c104]
005C7E02  B9 41 00 00 00            MOV ECX,0x41
005C7E07  33 C0                     XOR EAX,EAX
005C7E09  BF C3 C3 80 00            MOV EDI,0x80c3c3
005C7E0E  F3 AB                     STOSD.REP ES:EDI
005C7E10  8D 4D FC                  LEA ECX,[EBP + -0x4]
005C7E13  50                        PUSH EAX
005C7E14  51                        PUSH ECX
005C7E15  8B 8B 3F 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f3f]
005C7E1B  52                        PUSH EDX
005C7E1C  6A 0C                     PUSH 0xc
005C7E1E  C7 45 FC C3 C3 80 00      MOV dword ptr [EBP + -0x4],0x80c3c3
005C7E25  E8 B6 9E 12 00            CALL 0x006f1ce0
005C7E2A  85 C0                     TEST EAX,EAX
005C7E2C  74 09                     JZ 0x005c7e37
005C7E2E  A0 C3 C3 80 00            MOV AL,[0x0080c3c3]
005C7E33  84 C0                     TEST AL,AL
005C7E35  75 40                     JNZ 0x005c7e77
LAB_005c7e37:
005C7E37  8D 85 DC FD FF FF         LEA EAX,[EBP + 0xfffffddc]
005C7E3D  6A 00                     PUSH 0x0
005C7E3F  50                        PUSH EAX
005C7E40  6A 00                     PUSH 0x0
005C7E42  6A 00                     PUSH 0x0
005C7E44  68 E4 3D 85 00            PUSH 0x853de4
005C7E49  E8 E2 68 16 00            CALL 0x0072e730
005C7E4E  8D BD DC FD FF FF         LEA EDI,[EBP + 0xfffffddc]
005C7E54  83 C9 FF                  OR ECX,0xffffffff
005C7E57  33 C0                     XOR EAX,EAX
005C7E59  83 C4 14                  ADD ESP,0x14
005C7E5C  F2 AE                     SCASB.REPNE ES:EDI
005C7E5E  F7 D1                     NOT ECX
005C7E60  2B F9                     SUB EDI,ECX
005C7E62  8B D1                     MOV EDX,ECX
005C7E64  8B F7                     MOV ESI,EDI
005C7E66  BF C3 C3 80 00            MOV EDI,0x80c3c3
005C7E6B  C1 E9 02                  SHR ECX,0x2
005C7E6E  F3 A5                     MOVSD.REP ES:EDI,ESI
005C7E70  8B CA                     MOV ECX,EDX
005C7E72  83 E1 03                  AND ECX,0x3
005C7E75  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_005c7e77:
005C7E77  C7 83 47 1F 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1f47],0x1
005C7E81  A0 7E 87 80 00            MOV AL,[0x0080877e]
005C7E86  84 C0                     TEST AL,AL
005C7E88  0F 84 A0 00 00 00         JZ 0x005c7f2e
005C7E8E  A0 A0 67 80 00            MOV AL,[0x008067a0]
005C7E93  84 C0                     TEST AL,AL
005C7E95  0F 84 93 00 00 00         JZ 0x005c7f2e
005C7E9B  A1 64 17 81 00            MOV EAX,[0x00811764]
005C7EA0  85 C0                     TEST EAX,EAX
005C7EA2  0F 84 86 00 00 00         JZ 0x005c7f2e
005C7EA8  83 C0 18                  ADD EAX,0x18
005C7EAB  8D B3 5F 1A 00 00         LEA ESI,[EBX + 0x1a5f]
005C7EB1  50                        PUSH EAX
005C7EB2  56                        PUSH ESI
005C7EB3  E8 A8 E2 0E 00            CALL 0x006b6160
005C7EB8  C6 83 7F 1A 00 00 01      MOV byte ptr [EBX + 0x1a7f],0x1
005C7EBF  A0 C6 87 80 00            MOV AL,[0x008087c6]
005C7EC4  88 83 80 1A 00 00         MOV byte ptr [EBX + 0x1a80],AL
005C7ECA  66 8B 0D C2 87 80 00      MOV CX,word ptr [0x008087c2]
005C7ED1  D1 E9                     SHR ECX,0x1
005C7ED3  88 8B 81 1A 00 00         MOV byte ptr [EBX + 0x1a81],CL
005C7ED9  8B 15 5C 99 80 00         MOV EDX,dword ptr [0x0080995c]
005C7EDF  52                        PUSH EDX
005C7EE0  8D 45 EC                  LEA EAX,[EBP + -0x14]
005C7EE3  68 84 C5 7C 00            PUSH 0x7cc584
005C7EE8  50                        PUSH EAX
005C7EE9  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005C7EEF  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005C7EF2  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005C7EF5  8D 8B 82 1A 00 00         LEA ECX,[EBX + 0x1a82]
005C7EFB  68 D5 01 00 00            PUSH 0x1d5
005C7F00  68 C3 C3 80 00            PUSH 0x80c3c3
005C7F05  89 11                     MOV dword ptr [ECX],EDX
005C7F07  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
005C7F0A  8D 8B 8A 1A 00 00         LEA ECX,[EBX + 0x1a8a]
005C7F10  51                        PUSH ECX
005C7F11  E8 2A 64 16 00            CALL 0x0072e340
005C7F16  83 C4 18                  ADD ESP,0x18
005C7F19  B9 90 2A 80 00            MOV ECX,0x802a90
005C7F1E  C6 83 5E 1C 00 00 00      MOV byte ptr [EBX + 0x1c5e],0x0
005C7F25  56                        PUSH ESI
005C7F26  6A 04                     PUSH 0x4
005C7F28  FF 15 70 C0 85 00         CALL dword ptr [0x0085c070]
LAB_005c7f2e:
005C7F2E  8B 13                     MOV EDX,dword ptr [EBX]
005C7F30  8B CB                     MOV ECX,EBX
005C7F32  FF 52 28                  CALL dword ptr [EDX + 0x28]
005C7F35  A1 58 17 81 00            MOV EAX,[0x00811758]
005C7F3A  85 C0                     TEST EAX,EAX
005C7F3C  74 0A                     JZ 0x005c7f48
005C7F3E  68 58 17 81 00            PUSH 0x811758
005C7F43  E8 18 31 0E 00            CALL 0x006ab060
LAB_005c7f48:
005C7F48  6A 00                     PUSH 0x0
005C7F4A  8B CB                     MOV ECX,EBX
005C7F4C  E8 84 CA E3 FF            CALL 0x004049d5
005C7F51  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005C7F56  85 C0                     TEST EAX,EAX
005C7F58  74 45                     JZ 0x005c7f9f
005C7F5A  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
005C7F60  85 C9                     TEST ECX,ECX
005C7F62  74 2F                     JZ 0x005c7f93
005C7F64  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005C7F67  83 F9 FF                  CMP ECX,-0x1
005C7F6A  74 33                     JZ 0x005c7f9f
005C7F6C  8B 50 38                  MOV EDX,dword ptr [EAX + 0x38]
005C7F6F  52                        PUSH EDX
005C7F70  8B 50 34                  MOV EDX,dword ptr [EAX + 0x34]
005C7F73  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005C7F76  52                        PUSH EDX
005C7F77  6A FE                     PUSH -0x2
005C7F79  51                        PUSH ECX
005C7F7A  50                        PUSH EAX
005C7F7B  E8 50 B5 0E 00            CALL 0x006b34d0
005C7F80  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
005C7F86  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005C7F8C  5F                        POP EDI
005C7F8D  5E                        POP ESI
005C7F8E  5B                        POP EBX
005C7F8F  8B E5                     MOV ESP,EBP
005C7F91  5D                        POP EBP
005C7F92  C3                        RET
LAB_005c7f93:
005C7F93  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005C7F99  51                        PUSH ECX
005C7F9A  E8 C1 0A 0F 00            CALL 0x006b8a60
LAB_005c7f9f:
005C7F9F  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
005C7FA5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005C7FAB  5F                        POP EDI
005C7FAC  5E                        POP ESI
005C7FAD  5B                        POP EBX
005C7FAE  8B E5                     MOV ESP,EBP
005C7FB0  5D                        POP EBP
005C7FB1  C3                        RET
LAB_005c7fb2:
005C7FB2  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
005C7FB8  B9 08 00 00 00            MOV ECX,0x8
005C7FBD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005C7FC2  33 C0                     XOR EAX,EAX
005C7FC4  8D 7D CC                  LEA EDI,[EBP + -0x34]
005C7FC7  F3 AB                     STOSD.REP ES:EDI
005C7FC9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005C7FCC  C7 45 D8 02 00 00 00      MOV dword ptr [EBP + -0x28],0x2
005C7FD3  8A 81 26 1E 00 00         MOV AL,byte ptr [ECX + 0x1e26]
005C7FD9  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
005C7FDC  2C 0E                     SUB AL,0xe
005C7FDE  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
005C7FE1  F6 D8                     NEG AL
005C7FE3  1B C0                     SBB EAX,EAX
005C7FE5  8B 11                     MOV EDX,dword ptr [ECX]
005C7FE7  24 FA                     AND AL,0xfa
005C7FE9  05 4D 69 00 00            ADD EAX,0x694d
005C7FEE  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
005C7FF1  8D 45 CC                  LEA EAX,[EBP + -0x34]
005C7FF4  50                        PUSH EAX
005C7FF5  FF 12                     CALL dword ptr [EDX]
005C7FF7  5F                        POP EDI
005C7FF8  5E                        POP ESI
005C7FF9  5B                        POP EBX
005C7FFA  8B E5                     MOV ESP,EBP
005C7FFC  5D                        POP EBP
005C7FFD  C3                        RET
