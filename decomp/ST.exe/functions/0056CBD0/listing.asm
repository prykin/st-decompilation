FUN_0056cbd0:
0056CBD0  55                        PUSH EBP
0056CBD1  8B EC                     MOV EBP,ESP
0056CBD3  81 EC C8 00 00 00         SUB ESP,0xc8
0056CBD9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056CBDE  53                        PUSH EBX
0056CBDF  56                        PUSH ESI
0056CBE0  57                        PUSH EDI
0056CBE1  8D 55 BC                  LEA EDX,[EBP + -0x44]
0056CBE4  8D 4D B8                  LEA ECX,[EBP + -0x48]
0056CBE7  6A 00                     PUSH 0x0
0056CBE9  52                        PUSH EDX
0056CBEA  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0056CBF1  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0056CBF4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056CBFA  E8 F1 0B 1C 00            CALL 0x0072d7f0
0056CBFF  83 C4 08                  ADD ESP,0x8
0056CC02  85 C0                     TEST EAX,EAX
0056CC04  0F 85 3B 04 00 00         JNZ 0x0056d045
0056CC0A  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0056CC0D  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0056CC10  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0056CC13  8B 0D 28 67 80 00         MOV ECX,dword ptr [0x00806728]
0056CC19  53                        PUSH EBX
0056CC1A  57                        PUSH EDI
0056CC1B  56                        PUSH ESI
0056CC1C  E8 4F 77 17 00            CALL 0x006e4370
0056CC21  85 C0                     TEST EAX,EAX
0056CC23  74 28                     JZ 0x0056cc4d
0056CC25  68 F8 A0 7C 00            PUSH 0x7ca0f8
0056CC2A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0056CC2F  68 08 00 FE AF            PUSH 0xaffe0008
0056CC34  6A 00                     PUSH 0x0
0056CC36  68 30 03 00 00            PUSH 0x330
0056CC3B  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056CC40  E8 8B 08 14 00            CALL 0x006ad4d0
0056CC45  83 C4 18                  ADD ESP,0x18
0056CC48  85 C0                     TEST EAX,EAX
0056CC4A  74 01                     JZ 0x0056cc4d
0056CC4C  CC                        INT3
LAB_0056cc4d:
0056CC4D  83 FE 20                  CMP ESI,0x20
0056CC50  0F 87 00 02 00 00         JA 0x0056ce56
0056CC56  0F 84 C9 01 00 00         JZ 0x0056ce25
0056CC5C  8D 46 FB                  LEA EAX,[ESI + -0x5]
0056CC5F  83 F8 17                  CMP EAX,0x17
0056CC62  0F 87 CE 02 00 00         JA 0x0056cf36
0056CC68  33 C9                     XOR ECX,ECX
0056CC6A  8A 88 94 D0 56 00         MOV CL,byte ptr [EAX + 0x56d094]
switchD_0056cc70::switchD:
0056CC70  FF 24 8D 80 D0 56 00      JMP dword ptr [ECX*0x4 + 0x56d080]
switchD_0056cc70::caseD_f:
0056CC77  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0056CC7A  8D 95 58 FF FF FF         LEA EDX,[EBP + 0xffffff58]
0056CC80  52                        PUSH EDX
0056CC81  56                        PUSH ESI
0056CC82  FF 15 38 BE 85 00         CALL dword ptr [0x0085be38]
0056CC88  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0056CC8D  85 C0                     TEST EAX,EAX
0056CC8F  74 18                     JZ 0x0056cca9
0056CC91  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
0056CC97  8B 15 30 67 80 00         MOV EDX,dword ptr [0x00806730]
0056CC9D  51                        PUSH ECX
0056CC9E  52                        PUSH EDX
0056CC9F  6A 00                     PUSH 0x0
0056CCA1  6A 00                     PUSH 0x0
0056CCA3  50                        PUSH EAX
0056CCA4  E8 D7 92 14 00            CALL 0x006b5f80
LAB_0056cca9:
0056CCA9  A1 3C 16 81 00            MOV EAX,[0x0081163c]
0056CCAE  85 C0                     TEST EAX,EAX
0056CCB0  74 1D                     JZ 0x0056cccf
0056CCB2  A1 98 75 80 00            MOV EAX,[0x00807598]
0056CCB7  85 C0                     TEST EAX,EAX
0056CCB9  74 14                     JZ 0x0056cccf
0056CCBB  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
0056CCC5  C7 05 5D 74 80 00 00 00 00 00  MOV dword ptr [0x0080745d],0x0
LAB_0056cccf:
0056CCCF  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
0056CCD5  85 C9                     TEST ECX,ECX
0056CCD7  74 05                     JZ 0x0056ccde
0056CCD9  E8 A7 54 E9 FF            CALL 0x00402185
LAB_0056ccde:
0056CCDE  8D 85 58 FF FF FF         LEA EAX,[EBP + 0xffffff58]
0056CCE4  50                        PUSH EAX
0056CCE5  56                        PUSH ESI
0056CCE6  FF 15 34 BE 85 00         CALL dword ptr [0x0085be34]
0056CCEC  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0056CCEF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056CCF4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056CCF7  5F                        POP EDI
0056CCF8  5E                        POP ESI
0056CCF9  5B                        POP EBX
0056CCFA  8B E5                     MOV ESP,EBP
0056CCFC  5D                        POP EBP
0056CCFD  C2 10 00                  RET 0x10
switchD_0056cc70::caseD_5:
0056CD00  B9 08 00 00 00            MOV ECX,0x8
0056CD05  33 C0                     XOR EAX,EAX
0056CD07  8D 7D 98                  LEA EDI,[EBP + -0x68]
0056CD0A  F3 AB                     STOSD.REP ES:EDI
0056CD0C  8D 4D 98                  LEA ECX,[EBP + -0x68]
0056CD0F  C7 45 A8 66 00 00 00      MOV dword ptr [EBP + -0x58],0x66
0056CD16  51                        PUSH ECX
0056CD17  8B 0D 28 67 80 00         MOV ECX,dword ptr [0x00806728]
0056CD1D  6A 01                     PUSH 0x1
0056CD1F  6A 03                     PUSH 0x3
0056CD21  E8 AA 70 17 00            CALL 0x006e3dd0
0056CD26  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0056CD29  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056CD2E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056CD31  5F                        POP EDI
0056CD32  5E                        POP ESI
0056CD33  5B                        POP EBX
0056CD34  8B E5                     MOV ESP,EBP
0056CD36  5D                        POP EBP
0056CD37  C2 10 00                  RET 0x10
switchD_0056cc70::caseD_1c:
0056CD3A  A1 9C 75 80 00            MOV EAX,[0x0080759c]
0056CD3F  85 FF                     TEST EDI,EDI
0056CD41  74 5A                     JZ 0x0056cd9d
0056CD43  85 C0                     TEST EAX,EAX
0056CD45  74 06                     JZ 0x0056cd4d
0056CD47  50                        PUSH EAX
0056CD48  E8 F3 D9 14 00            CALL 0x006ba740
LAB_0056cd4d:
0056CD4D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0056CD53  85 C9                     TEST ECX,ECX
0056CD55  74 05                     JZ 0x0056cd5c
0056CD57  E8 A4 F5 16 00            CALL 0x006dc300
LAB_0056cd5c:
0056CD5C  B9 58 76 80 00            MOV ECX,0x807658
0056CD61  E8 9A 6F E9 FF            CALL 0x00403d00
0056CD66  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0056CD69  B9 20 76 80 00            MOV ECX,0x807620
0056CD6E  52                        PUSH EDX
0056CD6F  E8 DE 77 E9 FF            CALL 0x00404552
0056CD74  A1 70 6D 85 00            MOV EAX,[0x00856d70]
0056CD79  6A 66                     PUSH 0x66
0056CD7B  50                        PUSH EAX
0056CD7C  FF 15 30 BE 85 00         CALL dword ptr [0x0085be30]
0056CD82  50                        PUSH EAX
0056CD83  FF 15 2C BE 85 00         CALL dword ptr [0x0085be2c]
0056CD89  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0056CD8C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056CD91  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056CD94  5F                        POP EDI
0056CD95  5E                        POP ESI
0056CD96  5B                        POP EBX
0056CD97  8B E5                     MOV ESP,EBP
0056CD99  5D                        POP EBP
0056CD9A  C2 10 00                  RET 0x10
LAB_0056cd9d:
0056CD9D  85 C0                     TEST EAX,EAX
0056CD9F  74 06                     JZ 0x0056cda7
0056CDA1  50                        PUSH EAX
0056CDA2  E8 B9 D9 14 00            CALL 0x006ba760
LAB_0056cda7:
0056CDA7  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0056CDAD  85 C9                     TEST ECX,ECX
0056CDAF  74 05                     JZ 0x0056cdb6
0056CDB1  E8 5A F5 16 00            CALL 0x006dc310
LAB_0056cdb6:
0056CDB6  B9 58 76 80 00            MOV ECX,0x807658
0056CDBB  E8 B5 45 E9 FF            CALL 0x00401375
0056CDC0  85 C0                     TEST EAX,EAX
0056CDC2  74 0A                     JZ 0x0056cdce
0056CDC4  B9 20 76 80 00            MOV ECX,0x807620
0056CDC9  E8 B8 70 E9 FF            CALL 0x00403e86
LAB_0056cdce:
0056CDCE  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0056CDD4  85 C9                     TEST ECX,ECX
0056CDD6  74 05                     JZ 0x0056cddd
0056CDD8  E8 7B 62 E9 FF            CALL 0x00403058
LAB_0056cddd:
0056CDDD  8B 0D 70 6D 85 00         MOV ECX,dword ptr [0x00856d70]
0056CDE3  68 00 7F 00 00            PUSH 0x7f00
0056CDE8  51                        PUSH ECX
0056CDE9  FF 15 30 BE 85 00         CALL dword ptr [0x0085be30]
0056CDEF  50                        PUSH EAX
0056CDF0  FF 15 2C BE 85 00         CALL dword ptr [0x0085be2c]
0056CDF6  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0056CDF9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056CDFE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056CE01  5F                        POP EDI
0056CE02  5E                        POP ESI
0056CE03  5B                        POP EBX
0056CE04  8B E5                     MOV ESP,EBP
0056CE06  5D                        POP EBP
0056CE07  C2 10 00                  RET 0x10
switchD_0056cc70::caseD_10:
0056CE0A  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0056CE0D  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0056CE14  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056CE19  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056CE1C  5F                        POP EDI
0056CE1D  5E                        POP ESI
0056CE1E  5B                        POP EBX
0056CE1F  8B E5                     MOV ESP,EBP
0056CE21  5D                        POP EBP
0056CE22  C2 10 00                  RET 0x10
LAB_0056ce25:
0056CE25  8B 15 70 6D 85 00         MOV EDX,dword ptr [0x00856d70]
0056CE2B  6A 66                     PUSH 0x66
0056CE2D  52                        PUSH EDX
0056CE2E  FF 15 30 BE 85 00         CALL dword ptr [0x0085be30]
0056CE34  50                        PUSH EAX
0056CE35  FF 15 2C BE 85 00         CALL dword ptr [0x0085be2c]
0056CE3B  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0056CE3E  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0056CE45  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056CE4A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056CE4D  5F                        POP EDI
0056CE4E  5E                        POP ESI
0056CE4F  5B                        POP EBX
0056CE50  8B E5                     MOV ESP,EBP
0056CE52  5D                        POP EBP
0056CE53  C2 10 00                  RET 0x10
LAB_0056ce56:
0056CE56  81 FE B9 03 00 00         CMP ESI,0x3b9
0056CE5C  0F 87 CC 00 00 00         JA 0x0056cf2e
0056CE62  74 72                     JZ 0x0056ced6
0056CE64  8B C6                     MOV EAX,ESI
0056CE66  2D 00 01 00 00            SUB EAX,0x100
0056CE6B  74 29                     JZ 0x0056ce96
0056CE6D  83 E8 12                  SUB EAX,0x12
0056CE70  0F 85 C0 00 00 00         JNZ 0x0056cf36
0056CE76  8B C7                     MOV EAX,EDI
0056CE78  25 F0 FF 00 00            AND EAX,0xfff0
0056CE7D  2D 40 F1 00 00            SUB EAX,0xf140
0056CE82  0F 84 A9 01 00 00         JZ 0x0056d031
0056CE88  83 E8 30                  SUB EAX,0x30
0056CE8B  0F 84 A0 01 00 00         JZ 0x0056d031
0056CE91  E9 A0 00 00 00            JMP 0x0056cf36
LAB_0056ce96:
0056CE96  83 FF 13                  CMP EDI,0x13
0056CE99  0F 85 97 00 00 00         JNZ 0x0056cf36
0056CE9F  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0056CEA5  85 C9                     TEST ECX,ECX
0056CEA7  0F 84 84 01 00 00         JZ 0x0056d031
0056CEAD  C7 85 48 FF FF FF 00 A1 00 00  MOV dword ptr [EBP + 0xffffff48],0xa100
0056CEB7  8B 01                     MOV EAX,dword ptr [ECX]
0056CEB9  8D 95 38 FF FF FF         LEA EDX,[EBP + 0xffffff38]
0056CEBF  52                        PUSH EDX
0056CEC0  FF 10                     CALL dword ptr [EAX]
0056CEC2  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0056CEC5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056CECA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056CECD  5F                        POP EDI
0056CECE  5E                        POP ESI
0056CECF  5B                        POP EBX
0056CED0  8B E5                     MOV ESP,EBP
0056CED2  5D                        POP EBP
0056CED3  C2 10 00                  RET 0x10
LAB_0056ced6:
0056CED6  83 FF 01                  CMP EDI,0x1
0056CED9  0F 85 52 01 00 00         JNZ 0x0056d031
0056CEDF  C1 EB 10                  SHR EBX,0x10
0056CEE2  81 FB 53 44 00 00         CMP EBX,0x4453
0056CEE8  75 22                     JNZ 0x0056cf0c
0056CEEA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0056CEED  B9 58 76 80 00            MOV ECX,0x807658
0056CEF2  50                        PUSH EAX
0056CEF3  E8 7D 76 E9 FF            CALL 0x00404575
0056CEF8  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0056CEFB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056CF00  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056CF03  5F                        POP EDI
0056CF04  5E                        POP ESI
0056CF05  5B                        POP EBX
0056CF06  8B E5                     MOV ESP,EBP
0056CF08  5D                        POP EBP
0056CF09  C2 10 00                  RET 0x10
LAB_0056cf0c:
0056CF0C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0056CF0F  51                        PUSH ECX
0056CF10  B9 58 76 80 00            MOV ECX,0x807658
0056CF15  E8 5B 76 E9 FF            CALL 0x00404575
0056CF1A  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0056CF1D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056CF22  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056CF25  5F                        POP EDI
0056CF26  5E                        POP ESI
0056CF27  5B                        POP EBX
0056CF28  8B E5                     MOV ESP,EBP
0056CF2A  5D                        POP EBP
0056CF2B  C2 10 00                  RET 0x10
LAB_0056cf2e:
0056CF2E  81 FE 60 26 00 00         CMP ESI,0x2660
0056CF34  74 24                     JZ 0x0056cf5a
switchD_0056cc70::caseD_6:
0056CF36  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0056CF39  53                        PUSH EBX
0056CF3A  57                        PUSH EDI
0056CF3B  56                        PUSH ESI
0056CF3C  52                        PUSH EDX
0056CF3D  FF 15 28 BE 85 00         CALL dword ptr [0x0085be28]
0056CF43  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0056CF46  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0056CF49  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056CF4E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056CF51  5F                        POP EDI
0056CF52  5E                        POP ESI
0056CF53  5B                        POP EBX
0056CF54  8B E5                     MOV ESP,EBP
0056CF56  5D                        POP EBP
0056CF57  C2 10 00                  RET 0x10
LAB_0056cf5a:
0056CF5A  A1 A0 75 80 00            MOV EAX,[0x008075a0]
0056CF5F  50                        PUSH EAX
0056CF60  E8 AB 71 15 00            CALL 0x006c4110
0056CF65  A1 A0 75 80 00            MOV EAX,[0x008075a0]
0056CF6A  F7 40 04 00 00 00 40      TEST dword ptr [EAX + 0x4],0x40000000
0056CF71  74 06                     JZ 0x0056cf79
0056CF73  50                        PUSH EAX
0056CF74  E8 87 6F 15 00            CALL 0x006c3f00
LAB_0056cf79:
0056CF79  A1 38 67 80 00            MOV EAX,[0x00806738]
0056CF7E  BA 08 00 00 00            MOV EDX,0x8
0056CF83  3B C2                     CMP EAX,EDX
0056CF85  74 39                     JZ 0x0056cfc0
0056CF87  A1 34 67 80 00            MOV EAX,[0x00806734]
0056CF8C  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
0056CF92  6A 00                     PUSH 0x0
0056CF94  6A 00                     PUSH 0x0
0056CF96  6A 00                     PUSH 0x0
0056CF98  50                        PUSH EAX
0056CF99  51                        PUSH ECX
0056CF9A  52                        PUSH EDX
0056CF9B  50                        PUSH EAX
0056CF9C  51                        PUSH ECX
0056CF9D  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
0056CFA3  68 01 00 00 10            PUSH 0x10000001
0056CFA8  51                        PUSH ECX
0056CFA9  89 15 38 67 80 00         MOV dword ptr [0x00806738],EDX
0056CFAF  E8 8C CB 14 00            CALL 0x006b9b40
0056CFB4  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0056CFBA  52                        PUSH EDX
0056CFBB  E8 B0 44 14 00            CALL 0x006b1470
LAB_0056cfc0:
0056CFC0  A1 34 67 80 00            MOV EAX,[0x00806734]
0056CFC5  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
0056CFCB  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0056CFD1  50                        PUSH EAX
0056CFD2  51                        PUSH ECX
0056CFD3  6A 00                     PUSH 0x0
0056CFD5  6A 00                     PUSH 0x0
0056CFD7  52                        PUSH EDX
0056CFD8  E8 A3 8F 14 00            CALL 0x006b5f80
0056CFDD  A1 9C 75 80 00            MOV EAX,[0x0080759c]
0056CFE2  68 00 00 00 01            PUSH 0x1000000
0056CFE7  50                        PUSH EAX
0056CFE8  E8 73 DB 14 00            CALL 0x006bab60
0056CFED  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
0056CFF3  6A 00                     PUSH 0x0
0056CFF5  6A 00                     PUSH 0x0
0056CFF7  51                        PUSH ECX
0056CFF8  E8 73 E3 14 00            CALL 0x006bb370
0056CFFD  8B 15 28 67 80 00         MOV EDX,dword ptr [0x00806728]
0056D003  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0056D006  50                        PUSH EAX
0056D007  C7 82 FA 4E 00 00 00 00 00 00  MOV dword ptr [EDX + 0x4efa],0x0
0056D011  8B 0D 28 67 80 00         MOV ECX,dword ptr [0x00806728]
0056D017  83 C1 38                  ADD ECX,0x38
0056D01A  E8 35 5F E9 FF            CALL 0x00402f54
0056D01F  8B 0D 28 67 80 00         MOV ECX,dword ptr [0x00806728]
0056D025  8D 91 3A 11 00 00         LEA EDX,[ECX + 0x113a]
0056D02B  52                        PUSH EDX
0056D02C  E8 7F 6D 17 00            CALL 0x006e3db0
LAB_0056d031:
0056D031  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0056D034  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056D039  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056D03C  5F                        POP EDI
0056D03D  5E                        POP ESI
0056D03E  5B                        POP EBX
0056D03F  8B E5                     MOV ESP,EBP
0056D041  5D                        POP EBP
0056D042  C2 10 00                  RET 0x10
LAB_0056d045:
0056D045  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0056D048  68 F8 A0 7C 00            PUSH 0x7ca0f8
0056D04D  68 CC 4C 7A 00            PUSH 0x7a4ccc
0056D052  50                        PUSH EAX
0056D053  6A 00                     PUSH 0x0
0056D055  68 AA 03 00 00            PUSH 0x3aa
0056D05A  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056D05F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056D065  E8 66 04 14 00            CALL 0x006ad4d0
0056D06A  83 C4 18                  ADD ESP,0x18
0056D06D  85 C0                     TEST EAX,EAX
0056D06F  74 01                     JZ 0x0056d072
0056D071  CC                        INT3
LAB_0056d072:
0056D072  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0056D075  5F                        POP EDI
0056D076  5E                        POP ESI
0056D077  5B                        POP EBX
0056D078  8B E5                     MOV ESP,EBP
0056D07A  5D                        POP EBP
0056D07B  C2 10 00                  RET 0x10
