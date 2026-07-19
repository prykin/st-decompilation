ChooseMapTy::GetMessage:
005B0BA0  55                        PUSH EBP
005B0BA1  8B EC                     MOV EBP,ESP
005B0BA3  81 EC DC 06 00 00         SUB ESP,0x6dc
005B0BA9  53                        PUSH EBX
005B0BAA  56                        PUSH ESI
005B0BAB  8B F1                     MOV ESI,ECX
005B0BAD  57                        PUSH EDI
005B0BAE  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
005B0BB1  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005B0BB4  E8 F7 45 13 00            CALL 0x006e51b0
005B0BB9  33 FF                     XOR EDI,EDI
005B0BBB  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
005B0BBE  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B0BC3  8D 55 84                  LEA EDX,[EBP + -0x7c]
005B0BC6  8D 4D 80                  LEA ECX,[EBP + -0x80]
005B0BC9  57                        PUSH EDI
005B0BCA  52                        PUSH EDX
005B0BCB  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
005B0BCE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B0BD4  E8 17 CC 17 00            CALL 0x0072d7f0
005B0BD9  8B F0                     MOV ESI,EAX
005B0BDB  83 C4 08                  ADD ESP,0x8
005B0BDE  3B F7                     CMP ESI,EDI
005B0BE0  0F 85 8A 14 00 00         JNZ 0x005b2070
005B0BE6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005B0BE9  8B 5D C4                  MOV EBX,dword ptr [EBP + -0x3c]
005B0BEC  56                        PUSH ESI
005B0BED  8B CB                     MOV ECX,EBX
005B0BEF  E8 6F 19 E5 FF            CALL 0x00402563
005B0BF4  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B0BFA  56                        PUSH ESI
005B0BFB  E8 37 1D E5 FF            CALL 0x00402937
005B0C00  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005B0C03  3D 42 69 00 00            CMP EAX,0x6942
005B0C08  0F 87 F1 03 00 00         JA 0x005b0fff
005B0C0E  0F 84 C8 03 00 00         JZ 0x005b0fdc
005B0C14  3D 27 63 00 00            CMP EAX,0x6327
005B0C19  0F 87 99 02 00 00         JA 0x005b0eb8
005B0C1F  0F 84 BB 01 00 00         JZ 0x005b0de0
005B0C25  3D 05 61 00 00            CMP EAX,0x6105
005B0C2A  77 70                     JA 0x005b0c9c
005B0C2C  74 4C                     JZ 0x005b0c7a
005B0C2E  83 F8 05                  CMP EAX,0x5
005B0C31  0F 87 1C 14 00 00         JA 0x005b2053
switchD_005b0c37::switchD:
005B0C37  FF 24 85 BC 20 5B 00      JMP dword ptr [EAX*0x4 + 0x5b20bc]
switchD_005b0c37::caseD_2:
005B0C3E  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
005B0C41  8A 46 18                  MOV AL,byte ptr [ESI + 0x18]
005B0C44  8A 4E 14                  MOV CL,byte ptr [ESI + 0x14]
005B0C47  50                        PUSH EAX
005B0C48  51                        PUSH ECX
005B0C49  8B CB                     MOV ECX,EBX
005B0C4B  E8 84 20 E5 FF            CALL 0x00402cd4
005B0C50  E9 FE 13 00 00            JMP 0x005b2053
switchD_005b0c37::caseD_3:
005B0C55  8B CB                     MOV ECX,EBX
005B0C57  E8 22 35 E5 FF            CALL 0x0040417e
005B0C5C  E9 F2 13 00 00            JMP 0x005b2053
switchD_005b0c37::caseD_5:
005B0C61  57                        PUSH EDI
005B0C62  8B CB                     MOV ECX,EBX
005B0C64  E8 BC 1A E5 FF            CALL 0x00402725
005B0C69  E9 E5 13 00 00            JMP 0x005b2053
switchD_005b0c37::caseD_0:
005B0C6E  8B CB                     MOV ECX,EBX
005B0C70  E8 30 1D E5 FF            CALL 0x004029a5
005B0C75  E9 D9 13 00 00            JMP 0x005b2053
LAB_005b0c7a:
005B0C7A  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005B0C81  89 7B 49                  MOV dword ptr [EBX + 0x49],EDI
005B0C84  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
005B0C87  8B CB                     MOV ECX,EBX
005B0C89  89 53 4D                  MOV dword ptr [EBX + 0x4d],EDX
005B0C8C  89 7B 51                  MOV dword ptr [EBX + 0x51],EDI
005B0C8F  89 7B 55                  MOV dword ptr [EBX + 0x55],EDI
005B0C92  E8 21 41 E5 FF            CALL 0x00404db8
005B0C97  E9 B7 13 00 00            JMP 0x005b2053
LAB_005b0c9c:
005B0C9C  3D 21 61 00 00            CMP EAX,0x6121
005B0CA1  77 5A                     JA 0x005b0cfd
005B0CA3  3D 20 61 00 00            CMP EAX,0x6120
005B0CA8  73 2B                     JNC 0x005b0cd5
005B0CAA  3D 0A 61 00 00            CMP EAX,0x610a
005B0CAF  0F 85 9E 13 00 00         JNZ 0x005b2053
005B0CB5  8B CB                     MOV ECX,EBX
005B0CB7  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005B0CBE  89 7B 49                  MOV dword ptr [EBX + 0x49],EDI
005B0CC1  89 43 4D                  MOV dword ptr [EBX + 0x4d],EAX
005B0CC4  C7 43 51 07 00 00 00      MOV dword ptr [EBX + 0x51],0x7
005B0CCB  E8 E8 40 E5 FF            CALL 0x00404db8
005B0CD0  E9 7E 13 00 00            JMP 0x005b2053
LAB_005b0cd5:
005B0CD5  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005B0CDC  89 7B 49                  MOV dword ptr [EBX + 0x49],EDI
005B0CDF  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005B0CE2  89 43 4D                  MOV dword ptr [EBX + 0x4d],EAX
005B0CE5  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005B0CE8  89 4B 51                  MOV dword ptr [EBX + 0x51],ECX
005B0CEB  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005B0CEE  8B CB                     MOV ECX,EBX
005B0CF0  89 53 55                  MOV dword ptr [EBX + 0x55],EDX
005B0CF3  E8 C0 40 E5 FF            CALL 0x00404db8
005B0CF8  E9 56 13 00 00            JMP 0x005b2053
LAB_005b0cfd:
005B0CFD  3D 26 63 00 00            CMP EAX,0x6326
005B0D02  0F 85 4B 13 00 00         JNZ 0x005b2053
005B0D08  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
005B0D0B  33 C0                     XOR EAX,EAX
005B0D0D  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B0D13  48                        DEC EAX
005B0D14  83 F8 0A                  CMP EAX,0xa
005B0D17  0F 87 B1 00 00 00         JA 0x005b0dce
005B0D1D  33 C9                     XOR ECX,ECX
005B0D1F  8A 88 E4 20 5B 00         MOV CL,byte ptr [EAX + 0x5b20e4]
switchD_005b0d25::switchD:
005B0D25  FF 24 8D D4 20 5B 00      JMP dword ptr [ECX*0x4 + 0x5b20d4]
switchD_005b0d25::caseD_9:
005B0D2C  8B 06                     MOV EAX,dword ptr [ESI]
005B0D2E  48                        DEC EAX
005B0D2F  74 15                     JZ 0x005b0d46
005B0D31  48                        DEC EAX
005B0D32  74 09                     JZ 0x005b0d3d
005B0D34  C6 83 5F 1A 00 00 0B      MOV byte ptr [EBX + 0x1a5f],0xb
005B0D3B  EB 10                     JMP 0x005b0d4d
LAB_005b0d3d:
005B0D3D  C6 83 5F 1A 00 00 0A      MOV byte ptr [EBX + 0x1a5f],0xa
005B0D44  EB 07                     JMP 0x005b0d4d
LAB_005b0d46:
005B0D46  C6 83 5F 1A 00 00 09      MOV byte ptr [EBX + 0x1a5f],0x9
LAB_005b0d4d:
005B0D4D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B0D52  8A 16                     MOV DL,byte ptr [ESI]
005B0D54  88 90 EA 02 00 00         MOV byte ptr [EAX + 0x2ea],DL
005B0D5A  8B 83 60 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a60]
005B0D60  3B C7                     CMP EAX,EDI
005B0D62  74 6A                     JZ 0x005b0dce
005B0D64  EB 5A                     JMP 0x005b0dc0
switchD_005b0d25::caseD_1:
005B0D66  8B 06                     MOV EAX,dword ptr [ESI]
005B0D68  48                        DEC EAX
005B0D69  74 09                     JZ 0x005b0d74
005B0D6B  C6 83 5F 1A 00 00 02      MOV byte ptr [EBX + 0x1a5f],0x2
005B0D72  EB 07                     JMP 0x005b0d7b
LAB_005b0d74:
005B0D74  C6 83 5F 1A 00 00 01      MOV byte ptr [EBX + 0x1a5f],0x1
LAB_005b0d7b:
005B0D7B  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B0D80  8A 16                     MOV DL,byte ptr [ESI]
005B0D82  88 90 EB 02 00 00         MOV byte ptr [EAX + 0x2eb],DL
005B0D88  8B 83 60 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a60]
005B0D8E  3B C7                     CMP EAX,EDI
005B0D90  74 3C                     JZ 0x005b0dce
005B0D92  EB 2C                     JMP 0x005b0dc0
switchD_005b0d25::caseD_4:
005B0D94  8B 06                     MOV EAX,dword ptr [ESI]
005B0D96  48                        DEC EAX
005B0D97  74 09                     JZ 0x005b0da2
005B0D99  C6 83 5F 1A 00 00 05      MOV byte ptr [EBX + 0x1a5f],0x5
005B0DA0  EB 07                     JMP 0x005b0da9
LAB_005b0da2:
005B0DA2  C6 83 5F 1A 00 00 04      MOV byte ptr [EBX + 0x1a5f],0x4
LAB_005b0da9:
005B0DA9  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B0DAE  8A 16                     MOV DL,byte ptr [ESI]
005B0DB0  88 90 EB 02 00 00         MOV byte ptr [EAX + 0x2eb],DL
005B0DB6  8B 83 60 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a60]
005B0DBC  3B C7                     CMP EAX,EDI
005B0DBE  74 0E                     JZ 0x005b0dce
LAB_005b0dc0:
005B0DC0  8B 8B 93 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c93]
005B0DC6  51                        PUSH ECX
005B0DC7  8B CB                     MOV ECX,EBX
005B0DC9  E8 3E 2D E5 FF            CALL 0x00403b0c
ChooseMapTy::GetMessage::cf_common_exit_005B0DCE:
005B0DCE  6A FF                     PUSH -0x1
005B0DD0  6A 01                     PUSH 0x1
005B0DD2  6A 0A                     PUSH 0xa
005B0DD4  8B CB                     MOV ECX,EBX
005B0DD6  E8 16 3E E5 FF            CALL 0x00404bf1
005B0DDB  E9 73 12 00 00            JMP 0x005b2053
LAB_005b0de0:
005B0DE0  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
005B0DE3  8B 93 8B 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c8b]
005B0DE9  56                        PUSH ESI
005B0DEA  52                        PUSH EDX
005B0DEB  8B CB                     MOV ECX,EBX
005B0DED  BF 42 23 00 00            MOV EDI,0x2342
005B0DF2  E8 18 3E E5 FF            CALL 0x00404c0f
005B0DF7  33 C0                     XOR EAX,EAX
005B0DF9  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B0DFF  48                        DEC EAX
005B0E00  83 F8 0A                  CMP EAX,0xa
005B0E03  77 3B                     JA 0x005b0e40
005B0E05  33 C9                     XOR ECX,ECX
005B0E07  8A 88 FC 20 5B 00         MOV CL,byte ptr [EAX + 0x5b20fc]
switchD_005b0e0d::switchD:
005B0E0D  FF 24 8D F0 20 5B 00      JMP dword ptr [ECX*0x4 + 0x5b20f0]
switchD_005b0e0d::caseD_9:
005B0E14  8B 06                     MOV EAX,dword ptr [ESI]
005B0E16  48                        DEC EAX
005B0E17  74 11                     JZ 0x005b0e2a
005B0E19  48                        DEC EAX
005B0E1A  74 07                     JZ 0x005b0e23
005B0E1C  BF 3F 23 00 00            MOV EDI,0x233f
005B0E21  EB 1D                     JMP 0x005b0e40
LAB_005b0e23:
005B0E23  BF 3D 23 00 00            MOV EDI,0x233d
005B0E28  EB 16                     JMP 0x005b0e40
LAB_005b0e2a:
005B0E2A  BF 3C 23 00 00            MOV EDI,0x233c
005B0E2F  EB 0F                     JMP 0x005b0e40
switchD_005b0e0d::caseD_1:
005B0E31  8B 06                     MOV EAX,dword ptr [ESI]
005B0E33  BF 42 23 00 00            MOV EDI,0x2342
005B0E38  48                        DEC EAX
005B0E39  75 05                     JNZ 0x005b0e40
005B0E3B  BF 41 23 00 00            MOV EDI,0x2341
switchD_005b0e0d::caseD_3:
005B0E40  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
005B0E43  8B 83 8B 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c8b]
005B0E49  4A                        DEC EDX
005B0E4A  8B 36                     MOV ESI,dword ptr [ESI]
005B0E4C  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005B0E4F  F7 DA                     NEG EDX
005B0E51  1B D2                     SBB EDX,EDX
005B0E53  83 E2 FD                  AND EDX,0xfffffffd
005B0E56  83 C2 03                  ADD EDX,0x3
005B0E59  2B CA                     SUB ECX,EDX
005B0E5B  8B D6                     MOV EDX,ESI
005B0E5D  C1 E2 05                  SHL EDX,0x5
005B0E60  2B D6                     SUB EDX,ESI
005B0E62  51                        PUSH ECX
005B0E63  6A 7A                     PUSH 0x7a
005B0E65  6A 00                     PUSH 0x0
005B0E67  8D 0C 95 84 FF FF FF      LEA ECX,[EDX*0x4 + 0xffffff84]
005B0E6E  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B0E74  51                        PUSH ECX
005B0E75  6A 00                     PUSH 0x0
005B0E77  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005B0E7A  50                        PUSH EAX
005B0E7B  E8 10 FC 15 00            CALL 0x00710a90
005B0E80  A1 18 76 80 00            MOV EAX,[0x00807618]
005B0E85  6A 02                     PUSH 0x2
005B0E87  6A FF                     PUSH -0x1
005B0E89  6A FF                     PUSH -0x1
005B0E8B  50                        PUSH EAX
005B0E8C  57                        PUSH EDI
005B0E8D  E8 AE F2 0F 00            CALL 0x006b0140
005B0E92  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B0E98  50                        PUSH EAX
005B0E99  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005B0E9C  E8 1F 0B 16 00            CALL 0x007119c0
005B0EA1  8B 93 87 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c87]
005B0EA7  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005B0EAC  52                        PUSH EDX
005B0EAD  50                        PUSH EAX
005B0EAE  E8 1D 27 10 00            CALL 0x006b35d0
005B0EB3  E9 9B 11 00 00            JMP 0x005b2053
LAB_005b0eb8:
005B0EB8  3D 40 63 00 00            CMP EAX,0x6340
005B0EBD  0F 87 D1 00 00 00         JA 0x005b0f94
005B0EC3  0F 84 B0 00 00 00         JZ 0x005b0f79
005B0EC9  05 CE 9C FF FF            ADD EAX,0xffff9cce
005B0ECE  83 F8 03                  CMP EAX,0x3
005B0ED1  0F 87 7C 11 00 00         JA 0x005b2053
switchD_005b0ed7::switchD:
005B0ED7  FF 24 85 08 21 5B 00      JMP dword ptr [EAX*0x4 + 0x5b2108]
switchD_005b0ed7::caseD_6332:
005B0EDE  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B0EE4  56                        PUSH ESI
005B0EE5  E8 88 3E E5 FF            CALL 0x00404d72
005B0EEA  E9 64 11 00 00            JMP 0x005b2053
switchD_005b0ed7::caseD_6333:
005B0EEF  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005B0EF5  57                        PUSH EDI
005B0EF6  81 C1 8D 03 00 00         ADD ECX,0x38d
005B0EFC  56                        PUSH ESI
005B0EFD  51                        PUSH ECX
005B0EFE  8B CB                     MOV ECX,EBX
005B0F00  E8 CF 22 E5 FF            CALL 0x004031d4
005B0F05  E9 49 11 00 00            JMP 0x005b2053
switchD_005b0ed7::caseD_6334:
005B0F0A  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B0F10  57                        PUSH EDI
005B0F11  81 C2 1E 04 00 00         ADD EDX,0x41e
005B0F17  56                        PUSH ESI
005B0F18  52                        PUSH EDX
005B0F19  8B CB                     MOV ECX,EBX
005B0F1B  E8 B4 22 E5 FF            CALL 0x004031d4
005B0F20  E9 2E 11 00 00            JMP 0x005b2053
switchD_005b0ed7::caseD_6335:
005B0F25  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005B0F28  33 C9                     XOR ECX,ECX
005B0F2A  66 8B 4E 16               MOV CX,word ptr [ESI + 0x16]
005B0F2E  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005B0F31  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B0F36  03 D1                     ADD EDX,ECX
005B0F38  89 90 CF 04 00 00         MOV dword ptr [EAX + 0x4cf],EDX
005B0F3E  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B0F43  8B 88 B3 04 00 00         MOV ECX,dword ptr [EAX + 0x4b3]
005B0F49  83 F9 FF                  CMP ECX,-0x1
005B0F4C  0F 84 01 11 00 00         JZ 0x005b2053
005B0F52  8B 90 CF 04 00 00         MOV EDX,dword ptr [EAX + 0x4cf]
005B0F58  52                        PUSH EDX
005B0F59  8B 90 CB 04 00 00         MOV EDX,dword ptr [EAX + 0x4cb]
005B0F5F  52                        PUSH EDX
005B0F60  8B 90 B7 04 00 00         MOV EDX,dword ptr [EAX + 0x4b7]
005B0F66  8B 80 F7 04 00 00         MOV EAX,dword ptr [EAX + 0x4f7]
005B0F6C  52                        PUSH EDX
005B0F6D  51                        PUSH ECX
005B0F6E  50                        PUSH EAX
005B0F6F  E8 BC 27 10 00            CALL 0x006b3730
005B0F74  E9 DA 10 00 00            JMP 0x005b2053
LAB_005b0f79:
005B0F79  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005B0F7F  57                        PUSH EDI
005B0F80  81 C1 5C 05 00 00         ADD ECX,0x55c
005B0F86  56                        PUSH ESI
005B0F87  51                        PUSH ECX
005B0F88  8B CB                     MOV ECX,EBX
005B0F8A  E8 45 22 E5 FF            CALL 0x004031d4
005B0F8F  E9 BF 10 00 00            JMP 0x005b2053
LAB_005b0f94:
005B0F94  2D 41 63 00 00            SUB EAX,0x6341
005B0F99  74 26                     JZ 0x005b0fc1
005B0F9B  2D FE 05 00 00            SUB EAX,0x5fe
005B0FA0  74 13                     JZ 0x005b0fb5
005B0FA2  48                        DEC EAX
005B0FA3  0F 85 AA 10 00 00         JNZ 0x005b2053
005B0FA9  8B CB                     MOV ECX,EBX
005B0FAB  E8 D4 30 E5 FF            CALL 0x00404084
005B0FB0  E9 9E 10 00 00            JMP 0x005b2053
LAB_005b0fb5:
005B0FB5  8B CB                     MOV ECX,EBX
005B0FB7  E8 89 3D E5 FF            CALL 0x00404d45
005B0FBC  E9 92 10 00 00            JMP 0x005b2053
LAB_005b0fc1:
005B0FC1  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005B0FC7  57                        PUSH EDI
005B0FC8  81 C2 ED 05 00 00         ADD EDX,0x5ed
005B0FCE  56                        PUSH ESI
005B0FCF  52                        PUSH EDX
005B0FD0  8B CB                     MOV ECX,EBX
005B0FD2  E8 FD 21 E5 FF            CALL 0x004031d4
005B0FD7  E9 77 10 00 00            JMP 0x005b2053
LAB_005b0fdc:
005B0FDC  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005B0FE3  89 7B 49                  MOV dword ptr [EBX + 0x49],EDI
005B0FE6  C7 43 4D 02 61 00 00      MOV dword ptr [EBX + 0x4d],0x6102
005B0FED  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005B0FF0  8B CB                     MOV ECX,EBX
005B0FF2  89 43 51                  MOV dword ptr [EBX + 0x51],EAX
005B0FF5  E8 BE 3D E5 FF            CALL 0x00404db8
005B0FFA  E9 54 10 00 00            JMP 0x005b2053
LAB_005b0fff:
005B0FFF  3D 56 69 00 00            CMP EAX,0x6956
005B1004  0F 87 D7 0A 00 00         JA 0x005b1ae1
005B100A  0F 84 97 08 00 00         JZ 0x005b18a7
005B1010  05 BD 96 FF FF            ADD EAX,0xffff96bd
005B1015  83 F8 0E                  CMP EAX,0xe
005B1018  0F 87 35 10 00 00         JA 0x005b2053
005B101E  33 C9                     XOR ECX,ECX
005B1020  8A 88 3C 21 5B 00         MOV CL,byte ptr [EAX + 0x5b213c]
switchD_005b1026::switchD:
005B1026  FF 24 8D 18 21 5B 00      JMP dword ptr [ECX*0x4 + 0x5b2118]
switchD_005b1026::caseD_6943:
005B102D  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005B1030  57                        PUSH EDI
005B1031  52                        PUSH EDX
005B1032  68 42 69 00 00            PUSH 0x6942
005B1037  8B CB                     MOV ECX,EBX
005B1039  E8 82 26 E5 FF            CALL 0x004036c0
005B103E  80 3D 68 17 81 00 01      CMP byte ptr [0x00811768],0x1
005B1045  75 07                     JNZ 0x005b104e
005B1047  C6 05 68 17 81 00 02      MOV byte ptr [0x00811768],0x2
LAB_005b104e:
005B104E  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B1054  C6 83 B6 20 00 00 01      MOV byte ptr [EBX + 0x20b6],0x1
005B105B  3C 0C                     CMP AL,0xc
005B105D  C6 83 B5 20 00 00 01      MOV byte ptr [EBX + 0x20b5],0x1
005B1064  C6 83 B3 20 00 00 01      MOV byte ptr [EBX + 0x20b3],0x1
005B106B  C6 83 B4 20 00 00 01      MOV byte ptr [EBX + 0x20b4],0x1
005B1072  74 10                     JZ 0x005b1084
005B1074  3C 04                     CMP AL,0x4
005B1076  74 0C                     JZ 0x005b1084
005B1078  3C 05                     CMP AL,0x5
005B107A  74 08                     JZ 0x005b1084
005B107C  3C 13                     CMP AL,0x13
005B107E  74 04                     JZ 0x005b1084
005B1080  33 C0                     XOR EAX,EAX
005B1082  EB 05                     JMP 0x005b1089
LAB_005b1084:
005B1084  B8 01 00 00 00            MOV EAX,0x1
LAB_005b1089:
005B1089  88 83 B7 20 00 00         MOV byte ptr [EBX + 0x20b7],AL
005B108F  8B 03                     MOV EAX,dword ptr [EBX]
005B1091  8B CB                     MOV ECX,EBX
005B1093  FF 50 08                  CALL dword ptr [EAX + 0x8]
005B1096  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005B109C  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005B10A2  3B CF                     CMP ECX,EDI
005B10A4  0F 84 A9 0F 00 00         JZ 0x005b2053
005B10AA  6A 01                     PUSH 0x1
005B10AC  57                        PUSH EDI
005B10AD  6A 01                     PUSH 0x1
005B10AF  E8 F1 0E E5 FF            CALL 0x00401fa5
005B10B4  E9 9A 0F 00 00            JMP 0x005b2053
switchD_005b1026::caseD_694d:
005B10B9  57                        PUSH EDI
005B10BA  57                        PUSH EDI
005B10BB  68 05 61 00 00            PUSH 0x6105
005B10C0  8B CB                     MOV ECX,EBX
005B10C2  E8 F9 25 E5 FF            CALL 0x004036c0
005B10C7  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B10CD  C6 83 B6 20 00 00 01      MOV byte ptr [EBX + 0x20b6],0x1
005B10D4  3C 0C                     CMP AL,0xc
005B10D6  C6 83 B5 20 00 00 01      MOV byte ptr [EBX + 0x20b5],0x1
005B10DD  C6 83 B3 20 00 00 01      MOV byte ptr [EBX + 0x20b3],0x1
005B10E4  C6 83 B4 20 00 00 01      MOV byte ptr [EBX + 0x20b4],0x1
005B10EB  74 10                     JZ 0x005b10fd
005B10ED  3C 04                     CMP AL,0x4
005B10EF  74 0C                     JZ 0x005b10fd
005B10F1  3C 05                     CMP AL,0x5
005B10F3  74 08                     JZ 0x005b10fd
005B10F5  3C 13                     CMP AL,0x13
005B10F7  74 04                     JZ 0x005b10fd
005B10F9  33 C0                     XOR EAX,EAX
005B10FB  EB 05                     JMP 0x005b1102
LAB_005b10fd:
005B10FD  B8 01 00 00 00            MOV EAX,0x1
LAB_005b1102:
005B1102  88 83 B7 20 00 00         MOV byte ptr [EBX + 0x20b7],AL
LAB_005b1108:
005B1108  8B 13                     MOV EDX,dword ptr [EBX]
005B110A  8B CB                     MOV ECX,EBX
005B110C  FF 52 08                  CALL dword ptr [EDX + 0x8]
005B110F  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005B1115  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005B111B  3B CF                     CMP ECX,EDI
005B111D  0F 84 30 0F 00 00         JZ 0x005b2053
005B1123  6A 01                     PUSH 0x1
005B1125  57                        PUSH EDI
005B1126  6A 01                     PUSH 0x1
005B1128  E8 78 0E E5 FF            CALL 0x00401fa5
005B112D  E9 21 0F 00 00            JMP 0x005b2053
switchD_005b1026::caseD_6951:
005B1132  57                        PUSH EDI
005B1133  57                        PUSH EDI
005B1134  68 0A 61 00 00            PUSH 0x610a
005B1139  8B CB                     MOV ECX,EBX
005B113B  E8 80 25 E5 FF            CALL 0x004036c0
005B1140  B9 90 2A 80 00            MOV ECX,0x802a90
005B1145  FF 15 74 C0 85 00         CALL dword ptr [0x0085c074]
005B114B  C6 83 B7 20 00 00 01      MOV byte ptr [EBX + 0x20b7],0x1
005B1152  C6 83 B6 20 00 00 01      MOV byte ptr [EBX + 0x20b6],0x1
005B1159  C6 83 B5 20 00 00 01      MOV byte ptr [EBX + 0x20b5],0x1
005B1160  C6 83 B3 20 00 00 01      MOV byte ptr [EBX + 0x20b3],0x1
005B1167  C6 83 B4 20 00 00 01      MOV byte ptr [EBX + 0x20b4],0x1
005B116E  EB 98                     JMP 0x005b1108
switchD_005b1026::caseD_6948:
005B1170  8A 8B 5F 1A 00 00         MOV CL,byte ptr [EBX + 0x1a5f]
005B1176  33 C0                     XOR EAX,EAX
005B1178  88 0D A0 87 80 00         MOV byte ptr [0x008087a0],CL
005B117E  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B1184  48                        DEC EAX
005B1185  83 F8 12                  CMP EAX,0x12
005B1188  77 28                     JA 0x005b11b2
005B118A  33 D2                     XOR EDX,EDX
005B118C  8A 90 5C 21 5B 00         MOV DL,byte ptr [EAX + 0x5b215c]
switchD_005b1192::switchD:
005B1192  FF 24 95 4C 21 5B 00      JMP dword ptr [EDX*0x4 + 0x5b214c]
switchD_005b1192::caseD_3:
005B1199  C6 05 83 87 80 00 01      MOV byte ptr [0x00808783],0x1
005B11A0  EB 10                     JMP 0x005b11b2
switchD_005b1192::caseD_1:
005B11A2  C6 05 83 87 80 00 02      MOV byte ptr [0x00808783],0x2
005B11A9  EB 07                     JMP 0x005b11b2
switchD_005b1192::caseD_4:
005B11AB  C6 05 83 87 80 00 03      MOV byte ptr [0x00808783],0x3
switchD_005b1192::caseD_8:
005B11B2  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B11B8  C7 43 49 01 00 00 00      MOV dword ptr [EBX + 0x49],0x1
005B11BF  3C 03                     CMP AL,0x3
005B11C1  75 1D                     JNZ 0x005b11e0
005B11C3  8B CB                     MOV ECX,EBX
005B11C5  C7 43 4D 01 71 00 00      MOV dword ptr [EBX + 0x4d],0x7101
005B11CC  C7 43 51 03 00 00 00      MOV dword ptr [EBX + 0x51],0x3
005B11D3  89 7B 55                  MOV dword ptr [EBX + 0x55],EDI
005B11D6  E8 DD 3B E5 FF            CALL 0x00404db8
005B11DB  E9 73 0E 00 00            JMP 0x005b2053
LAB_005b11e0:
005B11E0  8B CB                     MOV ECX,EBX
005B11E2  C7 43 4D FF 60 00 00      MOV dword ptr [EBX + 0x4d],0x60ff
005B11E9  E8 CA 3B E5 FF            CALL 0x00404db8
005B11EE  E9 60 0E 00 00            JMP 0x005b2053
switchD_005b1026::caseD_694e:
005B11F3  8B 8B 6C 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a6c]
005B11F9  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005B11FC  50                        PUSH EAX
005B11FD  51                        PUSH ECX
005B11FE  6A 02                     PUSH 0x2
005B1200  8B CB                     MOV ECX,EBX
005B1202  C7 43 2D 26 00 00 00      MOV dword ptr [EBX + 0x2d],0x26
005B1209  E8 72 4E 13 00            CALL 0x006e6080
005B120E  8B 93 9F 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c9f]
005B1214  8B 43 31                  MOV EAX,dword ptr [EBX + 0x31]
005B1217  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
005B121A  3B C1                     CMP EAX,ECX
005B121C  0F 82 31 0E 00 00         JC 0x005b2053
005B1222  2B C1                     SUB EAX,ECX
005B1224  8B D0                     MOV EDX,EAX
005B1226  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005B1229  0F 88 24 0E 00 00         JS 0x005b2053
005B122F  8B 83 97 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c97]
005B1235  3B 50 08                  CMP EDX,dword ptr [EAX + 0x8]
005B1238  0F 8D 15 0E 00 00         JGE 0x005b2053
005B123E  8D BB A7 1D 00 00         LEA EDI,[EBX + 0x1da7]
005B1244  83 C9 FF                  OR ECX,0xffffffff
005B1247  33 C0                     XOR EAX,EAX
005B1249  F2 AE                     SCASB.REPNE ES:EDI
005B124B  F7 D1                     NOT ECX
005B124D  2B F9                     SUB EDI,ECX
005B124F  8B C1                     MOV EAX,ECX
005B1251  8B F7                     MOV ESI,EDI
005B1253  BF 16 ED 80 00            MOV EDI,0x80ed16
005B1258  C1 E9 02                  SHR ECX,0x2
005B125B  F3 A5                     MOVSD.REP ES:EDI,ESI
005B125D  8B C8                     MOV ECX,EAX
005B125F  83 E1 03                  AND ECX,0x3
005B1262  F3 A4                     MOVSB.REP ES:EDI,ESI
005B1264  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B126A  3C 0C                     CMP AL,0xc
005B126C  74 0D                     JZ 0x005b127b
005B126E  3C 13                     CMP AL,0x13
005B1270  75 44                     JNZ 0x005b12b6
005B1272  80 3D 00 34 80 00 0C      CMP byte ptr [0x00803400],0xc
005B1279  75 3B                     JNZ 0x005b12b6
LAB_005b127b:
005B127B  8B 3D 6C C0 79 00         MOV EDI,dword ptr [0x0079c06c]
005B1281  83 C9 FF                  OR ECX,0xffffffff
005B1284  33 C0                     XOR EAX,EAX
005B1286  F2 AE                     SCASB.REPNE ES:EDI
005B1288  F7 D1                     NOT ECX
005B128A  2B F9                     SUB EDI,ECX
005B128C  8B F7                     MOV ESI,EDI
005B128E  8B D1                     MOV EDX,ECX
005B1290  BF 16 ED 80 00            MOV EDI,0x80ed16
005B1295  83 C9 FF                  OR ECX,0xffffffff
005B1298  F2 AE                     SCASB.REPNE ES:EDI
005B129A  8B CA                     MOV ECX,EDX
005B129C  4F                        DEC EDI
005B129D  C1 E9 02                  SHR ECX,0x2
005B12A0  F3 A5                     MOVSD.REP ES:EDI,ESI
005B12A2  8B CA                     MOV ECX,EDX
005B12A4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005B12A7  83 E1 03                  AND ECX,0x3
005B12AA  F3 A4                     MOVSB.REP ES:EDI,ESI
005B12AC  C7 05 2E F3 80 00 01 00 00 00  MOV dword ptr [0x0080f32e],0x1
LAB_005b12b6:
005B12B6  8B 83 97 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c97]
005B12BC  3B 50 08                  CMP EDX,dword ptr [EAX + 0x8]
005B12BF  7D 08                     JGE 0x005b12c9
005B12C1  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005B12C4  8B 3C 90                  MOV EDI,dword ptr [EAX + EDX*0x4]
005B12C7  EB 02                     JMP 0x005b12cb
LAB_005b12c9:
005B12C9  33 FF                     XOR EDI,EDI
LAB_005b12cb:
005B12CB  83 C9 FF                  OR ECX,0xffffffff
005B12CE  33 C0                     XOR EAX,EAX
005B12D0  F2 AE                     SCASB.REPNE ES:EDI
005B12D2  F7 D1                     NOT ECX
005B12D4  2B F9                     SUB EDI,ECX
005B12D6  8B F7                     MOV ESI,EDI
005B12D8  8B D1                     MOV EDX,ECX
005B12DA  BF 16 ED 80 00            MOV EDI,0x80ed16
005B12DF  83 C9 FF                  OR ECX,0xffffffff
005B12E2  F2 AE                     SCASB.REPNE ES:EDI
005B12E4  8B CA                     MOV ECX,EDX
005B12E6  4F                        DEC EDI
005B12E7  C1 E9 02                  SHR ECX,0x2
005B12EA  F3 A5                     MOVSD.REP ES:EDI,ESI
005B12EC  8B CA                     MOV ECX,EDX
005B12EE  83 E1 03                  AND ECX,0x3
005B12F1  F3 A4                     MOVSB.REP ES:EDI,ESI
005B12F3  BF 16 ED 80 00            MOV EDI,0x80ed16
005B12F8  83 C9 FF                  OR ECX,0xffffffff
005B12FB  F2 AE                     SCASB.REPNE ES:EDI
005B12FD  F7 D1                     NOT ECX
005B12FF  2B F9                     SUB EDI,ECX
005B1301  8B C1                     MOV EAX,ECX
005B1303  8B F7                     MOV ESI,EDI
005B1305  BF 1A EE 80 00            MOV EDI,0x80ee1a
005B130A  C1 E9 02                  SHR ECX,0x2
005B130D  F3 A5                     MOVSD.REP ES:EDI,ESI
005B130F  8B C8                     MOV ECX,EAX
005B1311  83 E1 03                  AND ECX,0x3
005B1314  F3 A4                     MOVSB.REP ES:EDI,ESI
005B1316  8B 83 64 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a64]
005B131C  85 C0                     TEST EAX,EAX
005B131E  74 18                     JZ 0x005b1338
005B1320  8B 8B 93 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c93]
005B1326  51                        PUSH ECX
005B1327  8B CB                     MOV ECX,EBX
005B1329  E8 86 2F E5 FF            CALL 0x004042b4
005B132E  C7 83 64 1A 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1a64],0x0
LAB_005b1338:
005B1338  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B133E  3C 13                     CMP AL,0x13
005B1340  74 09                     JZ 0x005b134b
005B1342  25 FF 00 00 00            AND EAX,0xff
005B1347  50                        PUSH EAX
005B1348  50                        PUSH EAX
005B1349  EB 34                     JMP 0x005b137f
LAB_005b134b:
005B134B  33 C0                     XOR EAX,EAX
005B134D  A0 00 34 80 00            MOV AL,[0x00803400]
005B1352  83 C0 FC                  ADD EAX,-0x4
005B1355  83 F8 11                  CMP EAX,0x11
005B1358  77 31                     JA 0x005b138b
005B135A  33 D2                     XOR EDX,EDX
005B135C  8A 90 84 21 5B 00         MOV DL,byte ptr [EAX + 0x5b2184]
switchD_005b1362::switchD:
005B1362  FF 24 95 70 21 5B 00      JMP dword ptr [EDX*0x4 + 0x5b2170]
switchD_005b1362::caseD_4:
005B1369  6A 13                     PUSH 0x13
005B136B  6A 04                     PUSH 0x4
005B136D  EB 10                     JMP 0x005b137f
switchD_005b1362::caseD_5:
005B136F  6A 13                     PUSH 0x13
005B1371  6A 05                     PUSH 0x5
005B1373  EB 0A                     JMP 0x005b137f
switchD_005b1362::caseD_14:
005B1375  6A 13                     PUSH 0x13
005B1377  6A 13                     PUSH 0x13
005B1379  EB 04                     JMP 0x005b137f
switchD_005b1362::caseD_c:
005B137B  6A 13                     PUSH 0x13
005B137D  6A 0C                     PUSH 0xc
LAB_005b137f:
005B137F  68 21 61 00 00            PUSH 0x6121
005B1384  8B CB                     MOV ECX,EBX
005B1386  E8 35 23 E5 FF            CALL 0x004036c0
switchD_005b1362::caseD_6:
005B138B  8B 03                     MOV EAX,dword ptr [EBX]
005B138D  8B CB                     MOV ECX,EBX
005B138F  C6 83 B3 20 00 00 01      MOV byte ptr [EBX + 0x20b3],0x1
005B1396  C6 83 B4 20 00 00 00      MOV byte ptr [EBX + 0x20b4],0x0
005B139D  C6 83 B6 20 00 00 00      MOV byte ptr [EBX + 0x20b6],0x0
005B13A4  C6 83 B5 20 00 00 00      MOV byte ptr [EBX + 0x20b5],0x0
005B13AB  C6 83 B7 20 00 00 00      MOV byte ptr [EBX + 0x20b7],0x0
005B13B2  FF 50 08                  CALL dword ptr [EAX + 0x8]
005B13B5  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005B13BB  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005B13C1  85 C9                     TEST ECX,ECX
005B13C3  0F 84 8A 0C 00 00         JZ 0x005b2053
005B13C9  33 C9                     XOR ECX,ECX
005B13CB  8D 55 D8                  LEA EDX,[EBP + -0x28]
005B13CE  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
005B13D1  C6 45 DA 01               MOV byte ptr [EBP + -0x26],0x1
005B13D5  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
005B13D8  C6 45 D9 01               MOV byte ptr [EBP + -0x27],0x1
005B13DC  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
005B13DF  C6 45 D8 01               MOV byte ptr [EBP + -0x28],0x1
005B13E3  88 4D E4                  MOV byte ptr [EBP + -0x1c],CL
005B13E6  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005B13EC  52                        PUSH EDX
005B13ED  E8 A9 06 E5 FF            CALL 0x00401a9b
005B13F2  E9 5C 0C 00 00            JMP 0x005b2053
switchD_005b1026::caseD_6949:
005B13F7  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005B13FB  0F 85 52 0C 00 00         JNZ 0x005b2053
005B1401  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B1407  3C 0C                     CMP AL,0xc
005B1409  0F 84 44 0C 00 00         JZ 0x005b2053
005B140F  3C 04                     CMP AL,0x4
005B1411  0F 84 3C 0C 00 00         JZ 0x005b2053
005B1417  3C 05                     CMP AL,0x5
005B1419  0F 84 34 0C 00 00         JZ 0x005b2053
005B141F  3C 13                     CMP AL,0x13
005B1421  0F 84 2C 0C 00 00         JZ 0x005b2053
005B1427  8B 8B 6C 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a6c]
005B142D  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005B1430  50                        PUSH EAX
005B1431  51                        PUSH ECX
005B1432  6A 02                     PUSH 0x2
005B1434  8B CB                     MOV ECX,EBX
005B1436  C7 43 2D 26 00 00 00      MOV dword ptr [EBX + 0x2d],0x26
005B143D  E8 3E 4C 13 00            CALL 0x006e6080
005B1442  8B 93 9F 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c9f]
005B1448  8B 43 31                  MOV EAX,dword ptr [EBX + 0x31]
005B144B  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
005B144E  3B C1                     CMP EAX,ECX
005B1450  0F 82 FD 0B 00 00         JC 0x005b2053
005B1456  2B C1                     SUB EAX,ECX
005B1458  8B D0                     MOV EDX,EAX
005B145A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005B145D  0F 88 F0 0B 00 00         JS 0x005b2053
005B1463  8B 83 97 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c97]
005B1469  3B 50 08                  CMP EDX,dword ptr [EAX + 0x8]
005B146C  0F 8D E1 0B 00 00         JGE 0x005b2053
005B1472  8D BB A7 1D 00 00         LEA EDI,[EBX + 0x1da7]
005B1478  83 C9 FF                  OR ECX,0xffffffff
005B147B  33 C0                     XOR EAX,EAX
005B147D  F2 AE                     SCASB.REPNE ES:EDI
005B147F  F7 D1                     NOT ECX
005B1481  2B F9                     SUB EDI,ECX
005B1483  8B C1                     MOV EAX,ECX
005B1485  8B F7                     MOV ESI,EDI
005B1487  BF 16 ED 80 00            MOV EDI,0x80ed16
005B148C  C1 E9 02                  SHR ECX,0x2
005B148F  F3 A5                     MOVSD.REP ES:EDI,ESI
005B1491  8B C8                     MOV ECX,EAX
005B1493  83 E1 03                  AND ECX,0x3
005B1496  F3 A4                     MOVSB.REP ES:EDI,ESI
005B1498  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B149E  3C 09                     CMP AL,0x9
005B14A0  72 44                     JC 0x005b14e6
005B14A2  3C 0B                     CMP AL,0xb
005B14A4  77 40                     JA 0x005b14e6
005B14A6  8B 3D 6C C0 79 00         MOV EDI,dword ptr [0x0079c06c]
005B14AC  83 C9 FF                  OR ECX,0xffffffff
005B14AF  33 C0                     XOR EAX,EAX
005B14B1  F2 AE                     SCASB.REPNE ES:EDI
005B14B3  F7 D1                     NOT ECX
005B14B5  2B F9                     SUB EDI,ECX
005B14B7  8B F7                     MOV ESI,EDI
005B14B9  8B D1                     MOV EDX,ECX
005B14BB  BF 16 ED 80 00            MOV EDI,0x80ed16
005B14C0  83 C9 FF                  OR ECX,0xffffffff
005B14C3  F2 AE                     SCASB.REPNE ES:EDI
005B14C5  8B CA                     MOV ECX,EDX
005B14C7  4F                        DEC EDI
005B14C8  C1 E9 02                  SHR ECX,0x2
005B14CB  F3 A5                     MOVSD.REP ES:EDI,ESI
005B14CD  8B CA                     MOV ECX,EDX
005B14CF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005B14D2  83 E1 03                  AND ECX,0x3
005B14D5  B8 01 00 00 00            MOV EAX,0x1
005B14DA  F3 A4                     MOVSB.REP ES:EDI,ESI
005B14DC  A3 2E F3 80 00            MOV [0x0080f32e],EAX
005B14E1  A3 9C 87 80 00            MOV [0x0080879c],EAX
LAB_005b14e6:
005B14E6  8B 83 97 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c97]
005B14EC  3B 50 08                  CMP EDX,dword ptr [EAX + 0x8]
005B14EF  7D 08                     JGE 0x005b14f9
005B14F1  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005B14F4  8B 3C 90                  MOV EDI,dword ptr [EAX + EDX*0x4]
005B14F7  EB 02                     JMP 0x005b14fb
LAB_005b14f9:
005B14F9  33 FF                     XOR EDI,EDI
LAB_005b14fb:
005B14FB  83 C9 FF                  OR ECX,0xffffffff
005B14FE  33 C0                     XOR EAX,EAX
005B1500  F2 AE                     SCASB.REPNE ES:EDI
005B1502  F7 D1                     NOT ECX
005B1504  2B F9                     SUB EDI,ECX
005B1506  8B D1                     MOV EDX,ECX
005B1508  8B F7                     MOV ESI,EDI
005B150A  83 C9 FF                  OR ECX,0xffffffff
005B150D  BF 16 ED 80 00            MOV EDI,0x80ed16
005B1512  F2 AE                     SCASB.REPNE ES:EDI
005B1514  8B CA                     MOV ECX,EDX
005B1516  4F                        DEC EDI
005B1517  C1 E9 02                  SHR ECX,0x2
005B151A  F3 A5                     MOVSD.REP ES:EDI,ESI
005B151C  8B CA                     MOV ECX,EDX
005B151E  83 E1 03                  AND ECX,0x3
005B1521  F3 A4                     MOVSB.REP ES:EDI,ESI
005B1523  BF 16 ED 80 00            MOV EDI,0x80ed16
005B1528  83 C9 FF                  OR ECX,0xffffffff
005B152B  F2 AE                     SCASB.REPNE ES:EDI
005B152D  F7 D1                     NOT ECX
005B152F  2B F9                     SUB EDI,ECX
005B1531  8B C1                     MOV EAX,ECX
005B1533  8B F7                     MOV ESI,EDI
005B1535  BF 1A EE 80 00            MOV EDI,0x80ee1a
005B153A  C1 E9 02                  SHR ECX,0x2
005B153D  F3 A5                     MOVSD.REP ES:EDI,ESI
005B153F  8B C8                     MOV ECX,EAX
005B1541  33 C0                     XOR EAX,EAX
005B1543  83 E1 03                  AND ECX,0x3
005B1546  F3 A4                     MOVSB.REP ES:EDI,ESI
005B1548  BF 80 76 80 00            MOV EDI,0x807680
005B154D  83 C9 FF                  OR ECX,0xffffffff
005B1550  F2 AE                     SCASB.REPNE ES:EDI
005B1552  F7 D1                     NOT ECX
005B1554  49                        DEC ECX
005B1555  8B F9                     MOV EDI,ECX
005B1557  83 C9 FF                  OR ECX,0xffffffff
005B155A  81 C7 16 ED 80 00         ADD EDI,0x80ed16
005B1560  F2 AE                     SCASB.REPNE ES:EDI
005B1562  F7 D1                     NOT ECX
005B1564  2B F9                     SUB EDI,ECX
005B1566  8B D1                     MOV EDX,ECX
005B1568  8B F7                     MOV ESI,EDI
005B156A  BF 1E EF 80 00            MOV EDI,0x80ef1e
005B156F  C1 E9 02                  SHR ECX,0x2
005B1572  F3 A5                     MOVSD.REP ES:EDI,ESI
005B1574  8B CA                     MOV ECX,EDX
005B1576  83 E1 03                  AND ECX,0x3
005B1579  F3 A4                     MOVSB.REP ES:EDI,ESI
005B157B  8B 83 64 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a64]
005B1581  85 C0                     TEST EAX,EAX
005B1583  74 18                     JZ 0x005b159d
005B1585  8B 83 93 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c93]
005B158B  8B CB                     MOV ECX,EBX
005B158D  50                        PUSH EAX
005B158E  E8 21 2D E5 FF            CALL 0x004042b4
005B1593  C7 83 64 1A 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1a64],0x0
LAB_005b159d:
005B159D  8A 8B 5F 1A 00 00         MOV CL,byte ptr [EBX + 0x1a5f]
005B15A3  88 0D A0 87 80 00         MOV byte ptr [0x008087a0],CL
005B15A9  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B15AF  84 C0                     TEST AL,AL
005B15B1  76 18                     JBE 0x005b15cb
005B15B3  3C 02                     CMP AL,0x2
005B15B5  77 14                     JA 0x005b15cb
005B15B7  B9 20 76 80 00            MOV ECX,0x807620
005B15BC  E8 F2 0F E5 FF            CALL 0x004025b3
005B15C1  B9 20 76 80 00            MOV ECX,0x807620
005B15C6  E8 E3 23 E5 FF            CALL 0x004039ae
LAB_005b15cb:
005B15CB  33 C0                     XOR EAX,EAX
005B15CD  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B15D3  48                        DEC EAX
005B15D4  75 0A                     JNZ 0x005b15e0
005B15D6  B9 20 76 80 00            MOV ECX,0x807620
005B15DB  E8 D8 0F E5 FF            CALL 0x004025b8
LAB_005b15e0:
005B15E0  6A 00                     PUSH 0x0
005B15E2  6A 00                     PUSH 0x0
005B15E4  68 48 69 00 00            PUSH 0x6948
005B15E9  8B CB                     MOV ECX,EBX
005B15EB  E8 D0 20 E5 FF            CALL 0x004036c0
005B15F0  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B15F6  C6 83 B6 20 00 00 01      MOV byte ptr [EBX + 0x20b6],0x1
005B15FD  3C 0C                     CMP AL,0xc
005B15FF  C6 83 B5 20 00 00 01      MOV byte ptr [EBX + 0x20b5],0x1
005B1606  C6 83 B3 20 00 00 01      MOV byte ptr [EBX + 0x20b3],0x1
005B160D  C6 83 B4 20 00 00 01      MOV byte ptr [EBX + 0x20b4],0x1
005B1614  74 10                     JZ 0x005b1626
005B1616  3C 04                     CMP AL,0x4
005B1618  74 0C                     JZ 0x005b1626
005B161A  3C 05                     CMP AL,0x5
005B161C  74 08                     JZ 0x005b1626
005B161E  3C 13                     CMP AL,0x13
005B1620  74 04                     JZ 0x005b1626
005B1622  33 C0                     XOR EAX,EAX
005B1624  EB 05                     JMP 0x005b162b
LAB_005b1626:
005B1626  B8 01 00 00 00            MOV EAX,0x1
LAB_005b162b:
005B162B  8B 13                     MOV EDX,dword ptr [EBX]
005B162D  8B CB                     MOV ECX,EBX
005B162F  88 83 B7 20 00 00         MOV byte ptr [EBX + 0x20b7],AL
005B1635  FF 52 08                  CALL dword ptr [EDX + 0x8]
005B1638  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005B163E  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
LAB_005b1644:
005B1644  85 C9                     TEST ECX,ECX
005B1646  0F 84 07 0A 00 00         JZ 0x005b2053
005B164C  6A 01                     PUSH 0x1
005B164E  6A 00                     PUSH 0x0
005B1650  6A 01                     PUSH 0x1
005B1652  E8 4E 09 E5 FF            CALL 0x00401fa5
005B1657  E9 F7 09 00 00            JMP 0x005b2053
switchD_005b1026::caseD_694b:
005B165C  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B1662  3C 0C                     CMP AL,0xc
005B1664  0F 84 E9 09 00 00         JZ 0x005b2053
005B166A  3C 04                     CMP AL,0x4
005B166C  0F 84 E1 09 00 00         JZ 0x005b2053
005B1672  3C 05                     CMP AL,0x5
005B1674  0F 84 D9 09 00 00         JZ 0x005b2053
005B167A  3C 13                     CMP AL,0x13
005B167C  0F 84 D1 09 00 00         JZ 0x005b2053
005B1682  8B 93 6C 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a6c]
005B1688  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005B168B  51                        PUSH ECX
005B168C  52                        PUSH EDX
005B168D  6A 02                     PUSH 0x2
005B168F  8B CB                     MOV ECX,EBX
005B1691  C7 43 2D 26 00 00 00      MOV dword ptr [EBX + 0x2d],0x26
005B1698  E8 E3 49 13 00            CALL 0x006e6080
005B169D  8B 8B 9F 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c9f]
005B16A3  8B 43 31                  MOV EAX,dword ptr [EBX + 0x31]
005B16A6  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
005B16A9  3B C1                     CMP EAX,ECX
005B16AB  0F 82 A2 09 00 00         JC 0x005b2053
005B16B1  2B C1                     SUB EAX,ECX
005B16B3  8B D0                     MOV EDX,EAX
005B16B5  0F 88 98 09 00 00         JS 0x005b2053
005B16BB  8B 83 97 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c97]
005B16C1  3B 50 08                  CMP EDX,dword ptr [EAX + 0x8]
005B16C4  0F 8D 89 09 00 00         JGE 0x005b2053
005B16CA  8D BB A7 1D 00 00         LEA EDI,[EBX + 0x1da7]
005B16D0  83 C9 FF                  OR ECX,0xffffffff
005B16D3  33 C0                     XOR EAX,EAX
005B16D5  F2 AE                     SCASB.REPNE ES:EDI
005B16D7  F7 D1                     NOT ECX
005B16D9  2B F9                     SUB EDI,ECX
005B16DB  8B C1                     MOV EAX,ECX
005B16DD  8B F7                     MOV ESI,EDI
005B16DF  BF 16 ED 80 00            MOV EDI,0x80ed16
005B16E4  C1 E9 02                  SHR ECX,0x2
005B16E7  F3 A5                     MOVSD.REP ES:EDI,ESI
005B16E9  8B C8                     MOV ECX,EAX
005B16EB  83 E1 03                  AND ECX,0x3
005B16EE  F3 A4                     MOVSB.REP ES:EDI,ESI
005B16F0  8B 83 97 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c97]
005B16F6  3B 50 08                  CMP EDX,dword ptr [EAX + 0x8]
005B16F9  7D 08                     JGE 0x005b1703
005B16FB  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005B16FE  8B 14 91                  MOV EDX,dword ptr [ECX + EDX*0x4]
005B1701  EB 02                     JMP 0x005b1705
LAB_005b1703:
005B1703  33 D2                     XOR EDX,EDX
LAB_005b1705:
005B1705  8B FA                     MOV EDI,EDX
005B1707  83 C9 FF                  OR ECX,0xffffffff
005B170A  33 C0                     XOR EAX,EAX
005B170C  F2 AE                     SCASB.REPNE ES:EDI
005B170E  F7 D1                     NOT ECX
005B1710  2B F9                     SUB EDI,ECX
005B1712  8B F7                     MOV ESI,EDI
005B1714  8B D1                     MOV EDX,ECX
005B1716  BF 16 ED 80 00            MOV EDI,0x80ed16
005B171B  83 C9 FF                  OR ECX,0xffffffff
005B171E  F2 AE                     SCASB.REPNE ES:EDI
005B1720  8B CA                     MOV ECX,EDX
005B1722  4F                        DEC EDI
005B1723  C1 E9 02                  SHR ECX,0x2
005B1726  F3 A5                     MOVSD.REP ES:EDI,ESI
005B1728  8B CA                     MOV ECX,EDX
005B172A  83 E1 03                  AND ECX,0x3
005B172D  F3 A4                     MOVSB.REP ES:EDI,ESI
005B172F  BF 16 ED 80 00            MOV EDI,0x80ed16
005B1734  83 C9 FF                  OR ECX,0xffffffff
005B1737  F2 AE                     SCASB.REPNE ES:EDI
005B1739  F7 D1                     NOT ECX
005B173B  2B F9                     SUB EDI,ECX
005B173D  8B C1                     MOV EAX,ECX
005B173F  8B F7                     MOV ESI,EDI
005B1741  BF 1A EE 80 00            MOV EDI,0x80ee1a
005B1746  C1 E9 02                  SHR ECX,0x2
005B1749  F3 A5                     MOVSD.REP ES:EDI,ESI
005B174B  8B C8                     MOV ECX,EAX
005B174D  83 E1 03                  AND ECX,0x3
005B1750  F3 A4                     MOVSB.REP ES:EDI,ESI
005B1752  8B 83 64 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a64]
005B1758  85 C0                     TEST EAX,EAX
005B175A  74 18                     JZ 0x005b1774
005B175C  8B 8B 93 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c93]
005B1762  51                        PUSH ECX
005B1763  8B CB                     MOV ECX,EBX
005B1765  E8 4A 2B E5 FF            CALL 0x004042b4
005B176A  C7 83 64 1A 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1a64],0x0
LAB_005b1774:
005B1774  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B177A  84 C0                     TEST AL,AL
005B177C  0F 86 D1 08 00 00         JBE 0x005b2053
005B1782  3C 02                     CMP AL,0x2
005B1784  0F 87 C9 08 00 00         JA 0x005b2053
005B178A  25 FF 00 00 00            AND EAX,0xff
005B178F  8B CB                     MOV ECX,EBX
005B1791  50                        PUSH EAX
005B1792  50                        PUSH EAX
005B1793  68 20 61 00 00            PUSH 0x6120
005B1798  E8 23 1F E5 FF            CALL 0x004036c0
005B179D  8B 13                     MOV EDX,dword ptr [EBX]
005B179F  8B CB                     MOV ECX,EBX
005B17A1  C6 83 B3 20 00 00 01      MOV byte ptr [EBX + 0x20b3],0x1
005B17A8  C6 83 B7 20 00 00 00      MOV byte ptr [EBX + 0x20b7],0x0
005B17AF  C6 83 B6 20 00 00 00      MOV byte ptr [EBX + 0x20b6],0x0
005B17B6  C6 83 B5 20 00 00 00      MOV byte ptr [EBX + 0x20b5],0x0
005B17BD  C6 83 B4 20 00 00 00      MOV byte ptr [EBX + 0x20b4],0x0
005B17C4  FF 52 08                  CALL dword ptr [EDX + 0x8]
005B17C7  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005B17CD  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005B17D3  85 C9                     TEST ECX,ECX
005B17D5  0F 84 78 08 00 00         JZ 0x005b2053
005B17DB  33 C9                     XOR ECX,ECX
005B17DD  8D 55 C8                  LEA EDX,[EBP + -0x38]
005B17E0  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
005B17E3  C6 45 CA 01               MOV byte ptr [EBP + -0x36],0x1
005B17E7  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
005B17EA  C6 45 C8 01               MOV byte ptr [EBP + -0x38],0x1
005B17EE  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
005B17F1  52                        PUSH EDX
005B17F2  88 4D D4                  MOV byte ptr [EBP + -0x2c],CL
005B17F5  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005B17FB  E8 9B 02 E5 FF            CALL 0x00401a9b
005B1800  E9 4E 08 00 00            JMP 0x005b2053
switchD_005b1026::caseD_694c:
005B1805  33 C0                     XOR EAX,EAX
005B1807  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B180D  8D 70 FC                  LEA ESI,[EAX + -0x4]
005B1810  83 FE 0F                  CMP ESI,0xf
005B1813  77 19                     JA 0x005b182e
005B1815  33 C9                     XOR ECX,ECX
005B1817  8A 8E A0 21 5B 00         MOV CL,byte ptr [ESI + 0x5b21a0]
switchD_005b181d::switchD:
005B181D  FF 24 8D 98 21 5B 00      JMP dword ptr [ECX*0x4 + 0x5b2198]
switchD_005b181d::caseD_4:
005B1824  50                        PUSH EAX
005B1825  6A 07                     PUSH 0x7
005B1827  68 21 61 00 00            PUSH 0x6121
005B182C  EB 08                     JMP 0x005b1836
switchD_005b181d::caseD_6:
005B182E  50                        PUSH EAX
005B182F  6A 06                     PUSH 0x6
005B1831  68 20 61 00 00            PUSH 0x6120
LAB_005b1836:
005B1836  8B CB                     MOV ECX,EBX
005B1838  E8 83 1E E5 FF            CALL 0x004036c0
005B183D  8B 13                     MOV EDX,dword ptr [EBX]
005B183F  8B CB                     MOV ECX,EBX
005B1841  C6 83 B4 20 00 00 01      MOV byte ptr [EBX + 0x20b4],0x1
005B1848  C6 83 B3 20 00 00 01      MOV byte ptr [EBX + 0x20b3],0x1
005B184F  C6 83 B7 20 00 00 00      MOV byte ptr [EBX + 0x20b7],0x0
005B1856  C6 83 B6 20 00 00 00      MOV byte ptr [EBX + 0x20b6],0x0
005B185D  C6 83 B5 20 00 00 00      MOV byte ptr [EBX + 0x20b5],0x0
005B1864  FF 52 08                  CALL dword ptr [EDX + 0x8]
005B1867  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005B186D  39 B8 E6 02 00 00         CMP dword ptr [EAX + 0x2e6],EDI
005B1873  0F 84 DA 07 00 00         JZ 0x005b2053
005B1879  33 C9                     XOR ECX,ECX
005B187B  8D 55 E8                  LEA EDX,[EBP + -0x18]
005B187E  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005B1881  C6 45 EA 01               MOV byte ptr [EBP + -0x16],0x1
005B1885  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005B1888  C6 45 E9 01               MOV byte ptr [EBP + -0x17],0x1
005B188C  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005B188F  C6 45 E8 01               MOV byte ptr [EBP + -0x18],0x1
005B1893  88 4D F4                  MOV byte ptr [EBP + -0xc],CL
005B1896  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005B189C  52                        PUSH EDX
005B189D  E8 F9 01 E5 FF            CALL 0x00401a9b
005B18A2  E9 AC 07 00 00            JMP 0x005b2053
LAB_005b18a7:
005B18A7  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005B18AB  0F 85 A2 07 00 00         JNZ 0x005b2053
005B18B1  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B18B7  3C 0C                     CMP AL,0xc
005B18B9  0F 84 94 07 00 00         JZ 0x005b2053
005B18BF  3C 04                     CMP AL,0x4
005B18C1  0F 84 8C 07 00 00         JZ 0x005b2053
005B18C7  3C 05                     CMP AL,0x5
005B18C9  0F 84 84 07 00 00         JZ 0x005b2053
005B18CF  3C 13                     CMP AL,0x13
005B18D1  0F 84 7C 07 00 00         JZ 0x005b2053
005B18D7  8B 8B 6C 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a6c]
005B18DD  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005B18E0  50                        PUSH EAX
005B18E1  51                        PUSH ECX
005B18E2  6A 02                     PUSH 0x2
005B18E4  8B CB                     MOV ECX,EBX
005B18E6  C7 43 2D 26 00 00 00      MOV dword ptr [EBX + 0x2d],0x26
005B18ED  E8 8E 47 13 00            CALL 0x006e6080
005B18F2  8B 93 9F 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c9f]
005B18F8  8B 43 31                  MOV EAX,dword ptr [EBX + 0x31]
005B18FB  3B 42 08                  CMP EAX,dword ptr [EDX + 0x8]
005B18FE  0F 83 4F 07 00 00         JNC 0x005b2053
005B1904  39 BB 64 1A 00 00         CMP dword ptr [EBX + 0x1a64],EDI
005B190A  74 14                     JZ 0x005b1920
005B190C  8B 8B 93 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c93]
005B1912  51                        PUSH ECX
005B1913  8B CB                     MOV ECX,EBX
005B1915  E8 9A 29 E5 FF            CALL 0x004042b4
005B191A  89 BB 64 1A 00 00         MOV dword ptr [EBX + 0x1a64],EDI
LAB_005b1920:
005B1920  8A 93 5F 1A 00 00         MOV DL,byte ptr [EBX + 0x1a5f]
005B1926  BF 16 ED 80 00            MOV EDI,0x80ed16
005B192B  83 C9 FF                  OR ECX,0xffffffff
005B192E  33 C0                     XOR EAX,EAX
005B1930  88 15 A0 87 80 00         MOV byte ptr [0x008087a0],DL
005B1936  F2 AE                     SCASB.REPNE ES:EDI
005B1938  F7 D1                     NOT ECX
005B193A  2B F9                     SUB EDI,ECX
005B193C  8B C1                     MOV EAX,ECX
005B193E  8B F7                     MOV ESI,EDI
005B1940  BF 3A F3 80 00            MOV EDI,0x80f33a
005B1945  C1 E9 02                  SHR ECX,0x2
005B1948  F3 A5                     MOVSD.REP ES:EDI,ESI
005B194A  8B C8                     MOV ECX,EAX
005B194C  83 E1 03                  AND ECX,0x3
005B194F  F3 A4                     MOVSB.REP ES:EDI,ESI
005B1951  8B 83 9F 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c9f]
005B1957  8B 4B 31                  MOV ECX,dword ptr [EBX + 0x31]
005B195A  3B 48 08                  CMP ECX,dword ptr [EAX + 0x8]
005B195D  7D 08                     JGE 0x005b1967
005B195F  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
005B1962  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
005B1965  EB 02                     JMP 0x005b1969
LAB_005b1967:
005B1967  33 C9                     XOR ECX,ECX
LAB_005b1969:
005B1969  A1 54 C0 79 00            MOV EAX,[0x0079c054]
005B196E  8B 35 E8 BD 85 00         MOV ESI,dword ptr [0x0085bde8]
005B1974  68 16 ED 80 00            PUSH 0x80ed16
005B1979  51                        PUSH ECX
005B197A  50                        PUSH EAX
005B197B  68 DC C8 7C 00            PUSH 0x7cc8dc
005B1980  68 1E EF 80 00            PUSH 0x80ef1e
005B1985  FF D6                     CALL ESI
005B1987  8B 83 9F 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c9f]
005B198D  8B 4B 31                  MOV ECX,dword ptr [EBX + 0x31]
005B1990  83 C4 14                  ADD ESP,0x14
005B1993  3B 48 08                  CMP ECX,dword ptr [EAX + 0x8]
005B1996  7D 08                     JGE 0x005b19a0
005B1998  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
005B199B  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
005B199E  EB 02                     JMP 0x005b19a2
LAB_005b19a0:
005B19A0  33 C9                     XOR ECX,ECX
LAB_005b19a2:
005B19A2  68 3A F3 80 00            PUSH 0x80f33a
005B19A7  8D 83 A7 1D 00 00         LEA EAX,[EBX + 0x1da7]
005B19AD  51                        PUSH ECX
005B19AE  50                        PUSH EAX
005B19AF  68 DC C8 7C 00            PUSH 0x7cc8dc
005B19B4  68 16 ED 80 00            PUSH 0x80ed16
005B19B9  FF D6                     CALL ESI
005B19BB  83 C4 14                  ADD ESP,0x14
005B19BE  B9 20 76 80 00            MOV ECX,0x807620
005B19C3  C6 05 A0 87 80 00 03      MOV byte ptr [0x008087a0],0x3
005B19CA  6A 01                     PUSH 0x1
005B19CC  E8 7B 31 E5 FF            CALL 0x00404b4c
005B19D1  85 C0                     TEST EAX,EAX
005B19D3  0F 84 7A 06 00 00         JZ 0x005b2053
005B19D9  BF 84 77 80 00            MOV EDI,0x807784
005B19DE  83 C9 FF                  OR ECX,0xffffffff
005B19E1  33 C0                     XOR EAX,EAX
005B19E3  68 2A F2 80 00            PUSH 0x80f22a
005B19E8  F2 AE                     SCASB.REPNE ES:EDI
005B19EA  F7 D1                     NOT ECX
005B19EC  2B F9                     SUB EDI,ECX
005B19EE  68 2A F2 80 00            PUSH 0x80f22a
005B19F3  8B D1                     MOV EDX,ECX
005B19F5  8B F7                     MOV ESI,EDI
005B19F7  BF 2A F2 80 00            MOV EDI,0x80f22a
005B19FC  C1 E9 02                  SHR ECX,0x2
005B19FF  F3 A5                     MOVSD.REP ES:EDI,ESI
005B1A01  8B CA                     MOV ECX,EDX
005B1A03  83 E1 03                  AND ECX,0x3
005B1A06  F3 A4                     MOVSB.REP ES:EDI,ESI
005B1A08  E8 73 68 10 00            CALL 0x006b8280
005B1A0D  8B 83 9F 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c9f]
005B1A13  8B 4B 31                  MOV ECX,dword ptr [EBX + 0x31]
005B1A16  3B 48 08                  CMP ECX,dword ptr [EAX + 0x8]
005B1A19  7D 08                     JGE 0x005b1a23
005B1A1B  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005B1A1E  8B 0C 88                  MOV ECX,dword ptr [EAX + ECX*0x4]
005B1A21  EB 02                     JMP 0x005b1a25
LAB_005b1a23:
005B1A23  33 C9                     XOR ECX,ECX
LAB_005b1a25:
005B1A25  8B F9                     MOV EDI,ECX
005B1A27  83 C9 FF                  OR ECX,0xffffffff
005B1A2A  33 C0                     XOR EAX,EAX
005B1A2C  68 2A F2 80 00            PUSH 0x80f22a
005B1A31  F2 AE                     SCASB.REPNE ES:EDI
005B1A33  F7 D1                     NOT ECX
005B1A35  2B F9                     SUB EDI,ECX
005B1A37  68 2A F2 80 00            PUSH 0x80f22a
005B1A3C  8B F7                     MOV ESI,EDI
005B1A3E  8B D1                     MOV EDX,ECX
005B1A40  BF 2A F2 80 00            MOV EDI,0x80f22a
005B1A45  83 C9 FF                  OR ECX,0xffffffff
005B1A48  F2 AE                     SCASB.REPNE ES:EDI
005B1A4A  8B CA                     MOV ECX,EDX
005B1A4C  4F                        DEC EDI
005B1A4D  C1 E9 02                  SHR ECX,0x2
005B1A50  F3 A5                     MOVSD.REP ES:EDI,ESI
005B1A52  8B CA                     MOV ECX,EDX
005B1A54  83 E1 03                  AND ECX,0x3
005B1A57  F3 A4                     MOVSB.REP ES:EDI,ESI
005B1A59  E8 22 68 10 00            CALL 0x006b8280
005B1A5E  8B 3D 5C C0 79 00         MOV EDI,dword ptr [0x0079c05c]
005B1A64  83 C9 FF                  OR ECX,0xffffffff
005B1A67  33 C0                     XOR EAX,EAX
005B1A69  F2 AE                     SCASB.REPNE ES:EDI
005B1A6B  F7 D1                     NOT ECX
005B1A6D  2B F9                     SUB EDI,ECX
005B1A6F  50                        PUSH EAX
005B1A70  8B F7                     MOV ESI,EDI
005B1A72  8B D1                     MOV EDX,ECX
005B1A74  BF 2A F2 80 00            MOV EDI,0x80f22a
005B1A79  83 C9 FF                  OR ECX,0xffffffff
005B1A7C  F2 AE                     SCASB.REPNE ES:EDI
005B1A7E  8B CA                     MOV ECX,EDX
005B1A80  4F                        DEC EDI
005B1A81  C1 E9 02                  SHR ECX,0x2
005B1A84  F3 A5                     MOVSD.REP ES:EDI,ESI
005B1A86  8B CA                     MOV ECX,EDX
005B1A88  50                        PUSH EAX
005B1A89  83 E1 03                  AND ECX,0x3
005B1A8C  68 48 69 00 00            PUSH 0x6948
005B1A91  F3 A4                     MOVSB.REP ES:EDI,ESI
005B1A93  B9 FC 09 00 00            MOV ECX,0x9fc
005B1A98  BF 22 C5 80 00            MOV EDI,0x80c522
005B1A9D  F3 AB                     STOSD.REP ES:EDI
005B1A9F  8B CB                     MOV ECX,EBX
005B1AA1  E8 1A 1C E5 FF            CALL 0x004036c0
005B1AA6  8B 03                     MOV EAX,dword ptr [EBX]
005B1AA8  8B CB                     MOV ECX,EBX
005B1AAA  C6 83 B6 20 00 00 01      MOV byte ptr [EBX + 0x20b6],0x1
005B1AB1  C6 83 B5 20 00 00 01      MOV byte ptr [EBX + 0x20b5],0x1
005B1AB8  C6 83 B3 20 00 00 01      MOV byte ptr [EBX + 0x20b3],0x1
005B1ABF  C6 83 B4 20 00 00 01      MOV byte ptr [EBX + 0x20b4],0x1
005B1AC6  C6 83 B7 20 00 00 00      MOV byte ptr [EBX + 0x20b7],0x0
005B1ACD  FF 50 08                  CALL dword ptr [EAX + 0x8]
005B1AD0  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005B1AD6  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005B1ADC  E9 63 FB FF FF            JMP 0x005b1644
LAB_005b1ae1:
005B1AE1  3D A2 C0 00 00            CMP EAX,0xc0a2
005B1AE6  0F 87 67 05 00 00         JA 0x005b2053
005B1AEC  0F 84 F3 03 00 00         JZ 0x005b1ee5
005B1AF2  05 A0 7E FF FF            ADD EAX,0xffff7ea0
005B1AF7  83 F8 06                  CMP EAX,0x6
005B1AFA  0F 87 53 05 00 00         JA 0x005b2053
switchD_005b1b00::switchD:
005B1B00  FF 24 85 B0 21 5B 00      JMP dword ptr [EAX*0x4 + 0x5b21b0]
switchD_005b1b00::caseD_8162:
005B1B07  8B 93 9F 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c9f]
005B1B0D  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005B1B10  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
005B1B13  3B C1                     CMP EAX,ECX
005B1B15  0F 83 3A 01 00 00         JNC 0x005b1c55
005B1B1B  80 BB 5F 1A 00 00 03      CMP byte ptr [EBX + 0x1a5f],0x3
005B1B22  0F 84 17 01 00 00         JZ 0x005b1c3f
005B1B28  33 C0                     XOR EAX,EAX
005B1B2A  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
005B1B2E  3B C1                     CMP EAX,ECX
005B1B30  7D 08                     JGE 0x005b1b3a
005B1B32  8B 52 14                  MOV EDX,dword ptr [EDX + 0x14]
005B1B35  8B 0C 82                  MOV ECX,dword ptr [EDX + EAX*0x4]
005B1B38  EB 02                     JMP 0x005b1b3c
LAB_005b1b3a:
005B1B3A  33 C9                     XOR ECX,ECX
LAB_005b1b3c:
005B1B3C  BF B4 C8 7C 00            MOV EDI,0x7cc8b4
005B1B41  8B F1                     MOV ESI,ECX
LAB_005b1b43:
005B1B43  8A 16                     MOV DL,byte ptr [ESI]
005B1B45  8A C2                     MOV AL,DL
005B1B47  3A 17                     CMP DL,byte ptr [EDI]
005B1B49  75 1C                     JNZ 0x005b1b67
005B1B4B  84 C0                     TEST AL,AL
005B1B4D  74 14                     JZ 0x005b1b63
005B1B4F  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005B1B52  8A C2                     MOV AL,DL
005B1B54  3A 57 01                  CMP DL,byte ptr [EDI + 0x1]
005B1B57  75 0E                     JNZ 0x005b1b67
005B1B59  83 C6 02                  ADD ESI,0x2
005B1B5C  83 C7 02                  ADD EDI,0x2
005B1B5F  84 C0                     TEST AL,AL
005B1B61  75 E0                     JNZ 0x005b1b43
LAB_005b1b63:
005B1B63  33 C0                     XOR EAX,EAX
005B1B65  EB 05                     JMP 0x005b1b6c
LAB_005b1b67:
005B1B67  1B C0                     SBB EAX,EAX
005B1B69  83 D8 FF                  SBB EAX,-0x1
LAB_005b1b6c:
005B1B6C  85 C0                     TEST EAX,EAX
005B1B6E  74 37                     JZ 0x005b1ba7
005B1B70  8B F9                     MOV EDI,ECX
005B1B72  83 C9 FF                  OR ECX,0xffffffff
005B1B75  33 C0                     XOR EAX,EAX
005B1B77  8D 93 A7 1D 00 00         LEA EDX,[EBX + 0x1da7]
005B1B7D  F2 AE                     SCASB.REPNE ES:EDI
005B1B7F  F7 D1                     NOT ECX
005B1B81  2B F9                     SUB EDI,ECX
005B1B83  8B C1                     MOV EAX,ECX
005B1B85  8B F7                     MOV ESI,EDI
005B1B87  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005B1B8A  8B FA                     MOV EDI,EDX
005B1B8C  83 C9 FF                  OR ECX,0xffffffff
005B1B8F  33 C0                     XOR EAX,EAX
005B1B91  F2 AE                     SCASB.REPNE ES:EDI
005B1B93  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B1B96  4F                        DEC EDI
005B1B97  8B C8                     MOV ECX,EAX
005B1B99  C1 E9 02                  SHR ECX,0x2
005B1B9C  F3 A5                     MOVSD.REP ES:EDI,ESI
005B1B9E  8B C8                     MOV ECX,EAX
005B1BA0  83 E1 03                  AND ECX,0x3
005B1BA3  F3 A4                     MOVSB.REP ES:EDI,ESI
005B1BA5  EB 40                     JMP 0x005b1be7
LAB_005b1ba7:
005B1BA7  8D B3 A7 1D 00 00         LEA ESI,[EBX + 0x1da7]
005B1BAD  56                        PUSH ESI
005B1BAE  56                        PUSH ESI
005B1BAF  E8 0C 5D 10 00            CALL 0x006b78c0
005B1BB4  6A 00                     PUSH 0x0
005B1BB6  8D 8D 78 FD FF FF         LEA ECX,[EBP + 0xfffffd78]
005B1BBC  6A 00                     PUSH 0x0
005B1BBE  8D 95 7C FE FF FF         LEA EDX,[EBP + 0xfffffe7c]
005B1BC4  51                        PUSH ECX
005B1BC5  52                        PUSH EDX
005B1BC6  56                        PUSH ESI
005B1BC7  E8 64 CB 17 00            CALL 0x0072e730
005B1BCC  6A 00                     PUSH 0x0
005B1BCE  8D 85 78 FD FF FF         LEA EAX,[EBP + 0xfffffd78]
005B1BD4  6A 00                     PUSH 0x0
005B1BD6  8D 8D 7C FE FF FF         LEA ECX,[EBP + 0xfffffe7c]
005B1BDC  50                        PUSH EAX
005B1BDD  51                        PUSH ECX
005B1BDE  56                        PUSH ESI
005B1BDF  E8 2C D5 17 00            CALL 0x0072f110
005B1BE4  83 C4 28                  ADD ESP,0x28
LAB_005b1be7:
005B1BE7  8D B3 A7 1D 00 00         LEA ESI,[EBX + 0x1da7]
005B1BED  56                        PUSH ESI
005B1BEE  56                        PUSH ESI
005B1BEF  E8 CC 5C 10 00            CALL 0x006b78c0
005B1BF4  8B 83 8F 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c8f]
005B1BFA  85 C0                     TEST EAX,EAX
005B1BFC  74 07                     JZ 0x005b1c05
005B1BFE  50                        PUSH EAX
005B1BFF  FF 15 AC BC 85 00         CALL dword ptr [0x0085bcac]
LAB_005b1c05:
005B1C05  6A 01                     PUSH 0x1
005B1C07  6A 00                     PUSH 0x0
005B1C09  56                        PUSH ESI
005B1C0A  FF 15 FC BC 85 00         CALL dword ptr [0x0085bcfc]
005B1C10  83 F8 FF                  CMP EAX,-0x1
005B1C13  89 83 8F 1C 00 00         MOV dword ptr [EBX + 0x1c8f],EAX
005B1C19  75 0A                     JNZ 0x005b1c25
005B1C1B  C7 83 8F 1C 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1c8f],0x0
LAB_005b1c25:
005B1C25  56                        PUSH ESI
005B1C26  56                        PUSH ESI
005B1C27  E8 54 66 10 00            CALL 0x006b8280
005B1C2C  8B 93 93 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c93]
005B1C32  8B CB                     MOV ECX,EBX
005B1C34  52                        PUSH EDX
005B1C35  E8 D2 1E E5 FF            CALL 0x00403b0c
005B1C3A  E9 14 04 00 00            JMP 0x005b2053
LAB_005b1c3f:
005B1C3F  8B 03                     MOV EAX,dword ptr [EBX]
005B1C41  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005B1C44  51                        PUSH ECX
005B1C45  8B CB                     MOV ECX,EBX
005B1C47  C7 43 2D 56 69 00 00      MOV dword ptr [EBX + 0x2d],0x6956
005B1C4E  FF 10                     CALL dword ptr [EAX]
005B1C50  E9 FE 03 00 00            JMP 0x005b2053
LAB_005b1c55:
005B1C55  33 C0                     XOR EAX,EAX
005B1C57  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005B1C5D  48                        DEC EAX
005B1C5E  83 F8 12                  CMP EAX,0x12
005B1C61  0F 87 EC 03 00 00         JA 0x005b2053
005B1C67  33 D2                     XOR EDX,EDX
005B1C69  8A 90 DC 21 5B 00         MOV DL,byte ptr [EAX + 0x5b21dc]
switchD_005b1c6f::switchD:
005B1C6F  FF 24 95 CC 21 5B 00      JMP dword ptr [EDX*0x4 + 0x5b21cc]
switchD_005b1c6f::caseD_9:
005B1C76  8B 03                     MOV EAX,dword ptr [EBX]
005B1C78  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005B1C7B  51                        PUSH ECX
005B1C7C  8B CB                     MOV ECX,EBX
005B1C7E  C7 43 2D 49 69 00 00      MOV dword ptr [EBX + 0x2d],0x6949
005B1C85  FF 10                     CALL dword ptr [EAX]
005B1C87  E9 C7 03 00 00            JMP 0x005b2053
switchD_005b1c6f::caseD_1:
005B1C8C  8B 13                     MOV EDX,dword ptr [EBX]
005B1C8E  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005B1C91  50                        PUSH EAX
005B1C92  8B CB                     MOV ECX,EBX
005B1C94  C7 43 2D 4A 69 00 00      MOV dword ptr [EBX + 0x2d],0x694a
005B1C9B  FF 12                     CALL dword ptr [EDX]
005B1C9D  E9 B1 03 00 00            JMP 0x005b2053
switchD_005b1c6f::caseD_4:
005B1CA2  8B 13                     MOV EDX,dword ptr [EBX]
005B1CA4  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005B1CA7  50                        PUSH EAX
005B1CA8  8B CB                     MOV ECX,EBX
005B1CAA  C7 43 2D 4E 69 00 00      MOV dword ptr [EBX + 0x2d],0x694e
005B1CB1  FF 12                     CALL dword ptr [EDX]
005B1CB3  E9 9B 03 00 00            JMP 0x005b2053
switchD_005b1b00::caseD_8163:
005B1CB8  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005B1CBB  8B 53 61                  MOV EDX,dword ptr [EBX + 0x61]
005B1CBE  89 8B 93 1C 00 00         MOV dword ptr [EBX + 0x1c93],ECX
005B1CC4  C7 83 64 1A 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1a64],0x1
005B1CCE  89 93 68 1A 00 00         MOV dword ptr [EBX + 0x1a68],EDX
005B1CD4  E9 7A 03 00 00            JMP 0x005b2053
switchD_005b1b00::caseD_8160:
005B1CD9  C7 46 18 13 00 00 00      MOV dword ptr [ESI + 0x18],0x13
005B1CE0  E9 6E 03 00 00            JMP 0x005b2053
switchD_005b1b00::caseD_8161:
005B1CE5  8B 93 9F 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c9f]
005B1CEB  33 C0                     XOR EAX,EAX
005B1CED  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
005B1CF1  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
005B1CF4  3B C1                     CMP EAX,ECX
005B1CF6  7D 0B                     JGE 0x005b1d03
005B1CF8  8B 4A 14                  MOV ECX,dword ptr [EDX + 0x14]
005B1CFB  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
005B1CFE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005B1D01  EB 1B                     JMP 0x005b1d1e
LAB_005b1d03:
005B1D03  2B C1                     SUB EAX,ECX
005B1D05  8B 8B 97 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c97]
005B1D0B  3B 41 08                  CMP EAX,dword ptr [ECX + 0x8]
005B1D0E  7D 0B                     JGE 0x005b1d1b
005B1D10  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
005B1D13  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
005B1D16  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005B1D19  EB 03                     JMP 0x005b1d1e
LAB_005b1d1b:
005B1D1B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005b1d1e:
005B1D1E  8B 83 7B 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c7b]
005B1D24  33 D2                     XOR EDX,EDX
005B1D26  66 8B 56 1A               MOV DX,word ptr [ESI + 0x1a]
005B1D2A  57                        PUSH EDI
005B1D2B  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005B1D2E  6A 13                     PUSH 0x13
005B1D30  51                        PUSH ECX
005B1D31  52                        PUSH EDX
005B1D32  57                        PUSH EDI
005B1D33  57                        PUSH EDI
005B1D34  50                        PUSH EAX
005B1D35  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005B1D38  E8 33 24 10 00            CALL 0x006b4170
005B1D3D  8B 83 9F 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c9f]
005B1D43  33 C9                     XOR ECX,ECX
005B1D45  66 8B 4E 14               MOV CX,word ptr [ESI + 0x14]
005B1D49  3B 48 08                  CMP ECX,dword ptr [EAX + 0x8]
005B1D4C  7D 45                     JGE 0x005b1d93
005B1D4E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005B1D51  B8 B4 C8 7C 00            MOV EAX,0x7cc8b4
LAB_005b1d56:
005B1D56  8A 17                     MOV DL,byte ptr [EDI]
005B1D58  8A CA                     MOV CL,DL
005B1D5A  3A 10                     CMP DL,byte ptr [EAX]
005B1D5C  75 25                     JNZ 0x005b1d83
005B1D5E  84 C9                     TEST CL,CL
005B1D60  74 14                     JZ 0x005b1d76
005B1D62  8A 57 01                  MOV DL,byte ptr [EDI + 0x1]
005B1D65  8A CA                     MOV CL,DL
005B1D67  3A 50 01                  CMP DL,byte ptr [EAX + 0x1]
005B1D6A  75 17                     JNZ 0x005b1d83
005B1D6C  83 C7 02                  ADD EDI,0x2
005B1D6F  83 C0 02                  ADD EAX,0x2
005B1D72  84 C9                     TEST CL,CL
005B1D74  75 E0                     JNZ 0x005b1d56
LAB_005b1d76:
005B1D76  33 C0                     XOR EAX,EAX
005B1D78  33 C9                     XOR ECX,ECX
005B1D7A  85 C0                     TEST EAX,EAX
005B1D7C  0F 94 C1                  SETZ CL
005B1D7F  8B C1                     MOV EAX,ECX
005B1D81  EB 21                     JMP 0x005b1da4
LAB_005b1d83:
005B1D83  1B C0                     SBB EAX,EAX
005B1D85  83 D8 FF                  SBB EAX,-0x1
005B1D88  33 C9                     XOR ECX,ECX
005B1D8A  85 C0                     TEST EAX,EAX
005B1D8C  0F 94 C1                  SETZ CL
005B1D8F  8B C1                     MOV EAX,ECX
005B1D91  EB 11                     JMP 0x005b1da4
LAB_005b1d93:
005B1D93  8B 93 97 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c97]
005B1D99  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005B1D9C  F7 D8                     NEG EAX
005B1D9E  1B C0                     SBB EAX,EAX
005B1DA0  83 E0 03                  AND EAX,0x3
005B1DA3  48                        DEC EAX
LAB_005b1da4:
005B1DA4  85 C0                     TEST EAX,EAX
005B1DA6  7C 40                     JL 0x005b1de8
005B1DA8  50                        PUSH EAX
005B1DA9  8B 83 7F 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c7f]
005B1DAF  50                        PUSH EAX
005B1DB0  E8 EB 95 15 00            CALL 0x0070b3a0
005B1DB5  8B C8                     MOV ECX,EAX
005B1DB7  B8 13 00 00 00            MOV EAX,0x13
005B1DBC  51                        PUSH ECX
005B1DBD  6A 06                     PUSH 0x6
005B1DBF  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
005B1DC2  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
005B1DC5  2B C2                     SUB EAX,EDX
005B1DC7  33 C9                     XOR ECX,ECX
005B1DC9  66 8B 4E 1A               MOV CX,word ptr [ESI + 0x1a]
005B1DCD  99                        CDQ
005B1DCE  2B C2                     SUB EAX,EDX
005B1DD0  8B 93 7B 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c7b]
005B1DD6  D1 F8                     SAR EAX,0x1
005B1DD8  03 C1                     ADD EAX,ECX
005B1DDA  50                        PUSH EAX
005B1DDB  6A 02                     PUSH 0x2
005B1DDD  52                        PUSH EDX
005B1DDE  E8 46 14 E5 FF            CALL 0x00403229
005B1DE3  83 C4 1C                  ADD ESP,0x1c
005B1DE6  EB 03                     JMP 0x005b1deb
LAB_005b1de8:
005B1DE8  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_005b1deb:
005B1DEB  8B 83 7B 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c7b]
005B1DF1  33 D2                     XOR EDX,EDX
005B1DF3  66 8B 56 1A               MOV DX,word ptr [ESI + 0x1a]
005B1DF7  6A 13                     PUSH 0x13
005B1DF9  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005B1DFC  2B CF                     SUB ECX,EDI
005B1DFE  83 C7 04                  ADD EDI,0x4
005B1E01  83 E9 04                  SUB ECX,0x4
005B1E04  51                        PUSH ECX
005B1E05  52                        PUSH EDX
005B1E06  57                        PUSH EDI
005B1E07  6A 00                     PUSH 0x0
005B1E09  50                        PUSH EAX
005B1E0A  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B1E0F  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005B1E12  E8 79 EC 15 00            CALL 0x00710a90
005B1E17  66 8B 4E 16               MOV CX,word ptr [ESI + 0x16]
005B1E1B  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B1E20  66 F7 D9                  NEG CX
005B1E23  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005B1E26  1B C9                     SBB ECX,ECX
005B1E28  83 E1 02                  AND ECX,0x2
005B1E2B  41                        INC ECX
005B1E2C  51                        PUSH ECX
005B1E2D  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005B1E30  6A FF                     PUSH -0x1
005B1E32  6A 02                     PUSH 0x2
005B1E34  52                        PUSH EDX
005B1E35  E8 86 FB 15 00            CALL 0x007119c0
005B1E3A  33 C9                     XOR ECX,ECX
005B1E3C  B8 F3 1A CA 6B            MOV EAX,0x6bca1af3
005B1E41  66 8B 4E 1A               MOV CX,word ptr [ESI + 0x1a]
005B1E45  8D 51 3F                  LEA EDX,[ECX + 0x3f]
005B1E48  52                        PUSH EDX
005B1E49  F7 E9                     IMUL ECX
005B1E4B  C1 FA 03                  SAR EDX,0x3
005B1E4E  8B C2                     MOV EAX,EDX
005B1E50  68 14 01 00 00            PUSH 0x114
005B1E55  C1 E8 1F                  SHR EAX,0x1f
005B1E58  03 D0                     ADD EDX,EAX
005B1E5A  6A FE                     PUSH -0x2
005B1E5C  8B 8C 93 23 1C 00 00      MOV ECX,dword ptr [EBX + EDX*0x4 + 0x1c23]
005B1E63  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005B1E69  51                        PUSH ECX
005B1E6A  52                        PUSH EDX
005B1E6B  E8 D0 17 10 00            CALL 0x006b3640
005B1E70  E9 DE 01 00 00            JMP 0x005b2053
switchD_005b1b00::caseD_8164:
005B1E75  57                        PUSH EDI
005B1E76  8D 83 70 1A 00 00         LEA EAX,[EBX + 0x1a70]
005B1E7C  56                        PUSH ESI
005B1E7D  50                        PUSH EAX
005B1E7E  8B CB                     MOV ECX,EBX
005B1E80  E8 4F 13 E5 FF            CALL 0x004031d4
005B1E85  E9 C9 01 00 00            JMP 0x005b2053
switchD_005b1b00::caseD_8165:
005B1E8A  57                        PUSH EDI
005B1E8B  8D 8B 01 1B 00 00         LEA ECX,[EBX + 0x1b01]
005B1E91  56                        PUSH ESI
005B1E92  51                        PUSH ECX
005B1E93  8B CB                     MOV ECX,EBX
005B1E95  E8 3A 13 E5 FF            CALL 0x004031d4
005B1E9A  E9 B4 01 00 00            JMP 0x005b2053
switchD_005b1b00::caseD_8166:
005B1E9F  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005B1EA2  33 C0                     XOR EAX,EAX
005B1EA4  66 8B 46 16               MOV AX,word ptr [ESI + 0x16]
005B1EA8  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
005B1EAB  03 C8                     ADD ECX,EAX
005B1EAD  89 8B B2 1B 00 00         MOV dword ptr [EBX + 0x1bb2],ECX
005B1EB3  8B 83 96 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b96]
005B1EB9  83 F8 FF                  CMP EAX,-0x1
005B1EBC  0F 84 91 01 00 00         JZ 0x005b2053
005B1EC2  8B D1                     MOV EDX,ECX
005B1EC4  8B 8B AE 1B 00 00         MOV ECX,dword ptr [EBX + 0x1bae]
005B1ECA  52                        PUSH EDX
005B1ECB  8B 93 9A 1B 00 00         MOV EDX,dword ptr [EBX + 0x1b9a]
005B1ED1  51                        PUSH ECX
005B1ED2  52                        PUSH EDX
005B1ED3  50                        PUSH EAX
005B1ED4  8B 83 DA 1B 00 00         MOV EAX,dword ptr [EBX + 0x1bda]
005B1EDA  50                        PUSH EAX
005B1EDB  E8 50 18 10 00            CALL 0x006b3730
005B1EE0  E9 6E 01 00 00            JMP 0x005b2053
LAB_005b1ee5:
005B1EE5  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005B1EEB  E8 04 07 E5 FF            CALL 0x004025f4
005B1EF0  85 C0                     TEST EAX,EAX
005B1EF2  0F 85 19 01 00 00         JNZ 0x005b2011
005B1EF8  A0 A0 67 80 00            MOV AL,[0x008067a0]
005B1EFD  84 C0                     TEST AL,AL
005B1EFF  74 63                     JZ 0x005b1f64
005B1F01  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005B1F07  8B 81 86 06 00 00         MOV EAX,dword ptr [ECX + 0x686]
005B1F0D  39 78 08                  CMP dword ptr [EAX + 0x8],EDI
005B1F10  7E 07                     JLE 0x005b1f19
005B1F12  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
005B1F15  8B 02                     MOV EAX,dword ptr [EDX]
005B1F17  EB 02                     JMP 0x005b1f1b
LAB_005b1f19:
005B1F19  33 C0                     XOR EAX,EAX
LAB_005b1f1b:
005B1F1B  50                        PUSH EAX
005B1F1C  B9 20 76 80 00            MOV ECX,0x807620
005B1F21  E8 F7 FB E4 FF            CALL 0x00401b1d
005B1F26  85 C0                     TEST EAX,EAX
005B1F28  74 3A                     JZ 0x005b1f64
005B1F2A  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005B1F30  8B 80 86 06 00 00         MOV EAX,dword ptr [EAX + 0x686]
005B1F36  39 78 08                  CMP dword ptr [EAX + 0x8],EDI
005B1F39  7E 16                     JLE 0x005b1f51
005B1F3B  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005B1F3E  8B 01                     MOV EAX,dword ptr [ECX]
005B1F40  B9 90 2A 80 00            MOV ECX,0x802a90
005B1F45  50                        PUSH EAX
005B1F46  FF 15 64 C0 85 00         CALL dword ptr [0x0085c064]
005B1F4C  E9 C0 00 00 00            JMP 0x005b2011
LAB_005b1f51:
005B1F51  33 C0                     XOR EAX,EAX
005B1F53  B9 90 2A 80 00            MOV ECX,0x802a90
005B1F58  50                        PUSH EAX
005B1F59  FF 15 64 C0 85 00         CALL dword ptr [0x0085c064]
005B1F5F  E9 AD 00 00 00            JMP 0x005b2011
LAB_005b1f64:
005B1F64  B9 14 01 00 00            MOV ECX,0x114
005B1F69  33 C0                     XOR EAX,EAX
005B1F6B  8D BD 24 F9 FF FF         LEA EDI,[EBP + 0xfffff924]
005B1F71  8D 95 24 F9 FF FF         LEA EDX,[EBP + 0xfffff924]
005B1F77  F3 AB                     STOSD.REP ES:EDI
005B1F79  AA                        STOSB ES:EDI
005B1F7A  BF DD 7D 80 00            MOV EDI,0x807ddd
005B1F7F  83 C9 FF                  OR ECX,0xffffffff
005B1F82  33 C0                     XOR EAX,EAX
005B1F84  F2 AE                     SCASB.REPNE ES:EDI
005B1F86  F7 D1                     NOT ECX
005B1F88  2B F9                     SUB EDI,ECX
005B1F8A  8B C1                     MOV EAX,ECX
005B1F8C  8B F7                     MOV ESI,EDI
005B1F8E  8B FA                     MOV EDI,EDX
005B1F90  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005B1F96  C1 E9 02                  SHR ECX,0x2
005B1F99  F3 A5                     MOVSD.REP ES:EDI,ESI
005B1F9B  8B C8                     MOV ECX,EAX
005B1F9D  83 E1 03                  AND ECX,0x3
005B1FA0  F3 A4                     MOVSB.REP ES:EDI,ESI
005B1FA2  8B 82 86 06 00 00         MOV EAX,dword ptr [EDX + 0x686]
005B1FA8  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005B1FAB  85 C9                     TEST ECX,ECX
005B1FAD  7E 07                     JLE 0x005b1fb6
005B1FAF  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005B1FB2  8B 39                     MOV EDI,dword ptr [ECX]
005B1FB4  EB 02                     JMP 0x005b1fb8
LAB_005b1fb6:
005B1FB6  33 FF                     XOR EDI,EDI
LAB_005b1fb8:
005B1FB8  83 C9 FF                  OR ECX,0xffffffff
005B1FBB  33 C0                     XOR EAX,EAX
005B1FBD  F2 AE                     SCASB.REPNE ES:EDI
005B1FBF  F7 D1                     NOT ECX
005B1FC1  8D B5 64 F9 FF FF         LEA ESI,[EBP + 0xfffff964]
005B1FC7  2B F9                     SUB EDI,ECX
005B1FC9  8B C1                     MOV EAX,ECX
005B1FCB  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005B1FCE  8B F7                     MOV ESI,EDI
005B1FD0  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005B1FD3  C1 E9 02                  SHR ECX,0x2
005B1FD6  F3 A5                     MOVSD.REP ES:EDI,ESI
005B1FD8  8B C8                     MOV ECX,EAX
005B1FDA  83 E1 03                  AND ECX,0x3
005B1FDD  F3 A4                     MOVSB.REP ES:EDI,ESI
005B1FDF  8D 8D 24 F9 FF FF         LEA ECX,[EBP + 0xfffff924]
005B1FE5  51                        PUSH ECX
005B1FE6  8B CA                     MOV ECX,EDX
005B1FE8  E8 CF 0B E5 FF            CALL 0x00402bbc
005B1FED  A1 64 17 81 00            MOV EAX,[0x00811764]
005B1FF2  6A FF                     PUSH -0x1
005B1FF4  6A 01                     PUSH 0x1
005B1FF6  8D 95 24 F9 FF FF         LEA EDX,[EBP + 0xfffff924]
005B1FFC  68 51 04 00 00            PUSH 0x451
005B2001  52                        PUSH EDX
005B2002  6A 1B                     PUSH 0x1b
005B2004  6A 00                     PUSH 0x0
005B2006  50                        PUSH EAX
005B2007  E8 54 33 16 00            CALL 0x00715360
005B200C  83 C4 1C                  ADD ESP,0x1c
005B200F  33 FF                     XOR EDI,EDI
LAB_005b2011:
005B2011  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005B2017  68 A0 16 80 00            PUSH 0x8016a0
005B201C  57                        PUSH EDI
005B201D  8B 91 86 06 00 00         MOV EDX,dword ptr [ECX + 0x686]
005B2023  52                        PUSH EDX
005B2024  E8 F7 3F 10 00            CALL 0x006b6020
005B2029  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005B202F  C7 43 2D 33 00 00 00      MOV dword ptr [EBX + 0x2d],0x33
005B2036  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005B2039  8B 88 86 06 00 00         MOV ECX,dword ptr [EAX + 0x686]
005B203F  52                        PUSH EDX
005B2040  89 4B 31                  MOV dword ptr [EBX + 0x31],ECX
005B2043  8B 80 4C 05 00 00         MOV EAX,dword ptr [EAX + 0x54c]
005B2049  50                        PUSH EAX
005B204A  6A 02                     PUSH 0x2
005B204C  8B CB                     MOV ECX,EBX
005B204E  E8 2D 40 13 00            CALL 0x006e6080
ChooseMapTy::GetMessage::cf_common_exit_005B2053:
005B2053  8B 4D 80                  MOV ECX,dword ptr [EBP + -0x80]
005B2056  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005B2059  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B205F  52                        PUSH EDX
005B2060  8B CB                     MOV ECX,EBX
005B2062  E8 19 F2 E4 FF            CALL 0x00401280
005B2067  5F                        POP EDI
005B2068  5E                        POP ESI
005B2069  5B                        POP EBX
005B206A  8B E5                     MOV ESP,EBP
005B206C  5D                        POP EBP
005B206D  C2 04 00                  RET 0x4
LAB_005b2070:
005B2070  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
005B2073  68 C0 C8 7C 00            PUSH 0x7cc8c0
005B2078  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B207D  56                        PUSH ESI
005B207E  57                        PUSH EDI
005B207F  68 F7 06 00 00            PUSH 0x6f7
005B2084  68 28 C7 7C 00            PUSH 0x7cc728
005B2089  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B208E  E8 3D B4 0F 00            CALL 0x006ad4d0
005B2093  83 C4 18                  ADD ESP,0x18
005B2096  85 C0                     TEST EAX,EAX
005B2098  74 01                     JZ 0x005b209b
005B209A  CC                        INT3
LAB_005b209b:
005B209B  68 F7 06 00 00            PUSH 0x6f7
005B20A0  68 28 C7 7C 00            PUSH 0x7cc728
005B20A5  57                        PUSH EDI
005B20A6  56                        PUSH ESI
005B20A7  E8 94 3D 0F 00            CALL 0x006a5e40
005B20AC  5F                        POP EDI
005B20AD  5E                        POP ESI
005B20AE  B8 FF FF 00 00            MOV EAX,0xffff
005B20B3  5B                        POP EBX
005B20B4  8B E5                     MOV ESP,EBP
005B20B6  5D                        POP EBP
005B20B7  C2 04 00                  RET 0x4
