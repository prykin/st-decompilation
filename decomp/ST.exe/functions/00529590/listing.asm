FUN_00529590:
00529590  55                        PUSH EBP
00529591  8B EC                     MOV EBP,ESP
00529593  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00529596  25 FF 00 00 00            AND EAX,0xff
0052959B  48                        DEC EAX
0052959C  83 F8 51                  CMP EAX,0x51
0052959F  0F 87 27 04 00 00         JA 0x005299cc
switchD_005295a5::switchD:
005295A5  FF 24 85 D4 99 52 00      JMP dword ptr [EAX*0x4 + 0x5299d4]
switchD_005295a5::caseD_1:
005295AC  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
005295B3  75 07                     JNZ 0x005295bc
005295B5  B8 00 52 7C 00            MOV EAX,0x7c5200
005295BA  5D                        POP EBP
005295BB  C3                        RET
LAB_005295bc:
005295BC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005295BF  8D 41 F7                  LEA EAX,[ECX + -0x9]
005295C2  83 F8 48                  CMP EAX,0x48
005295C5  77 24                     JA 0x005295eb
005295C7  33 D2                     XOR EDX,EDX
005295C9  8A 90 2C 9B 52 00         MOV DL,byte ptr [EAX + 0x529b2c]
switchD_005295cf::switchD:
005295CF  FF 24 95 1C 9B 52 00      JMP dword ptr [EDX*0x4 + 0x529b1c]
switchD_005295cf::caseD_9:
005295D6  B8 F0 51 7C 00            MOV EAX,0x7c51f0
005295DB  5D                        POP EBP
005295DC  C3                        RET
switchD_005295cf::caseD_15:
005295DD  B8 E0 51 7C 00            MOV EAX,0x7c51e0
005295E2  5D                        POP EBP
005295E3  C3                        RET
switchD_005295cf::caseD_36:
005295E4  B8 CC 51 7C 00            MOV EAX,0x7c51cc
005295E9  5D                        POP EBP
005295EA  C3                        RET
switchD_005295cf::caseD_a:
005295EB  B8 BC 51 7C 00            MOV EAX,0x7c51bc
005295F0  5D                        POP EBP
005295F1  C3                        RET
switchD_005295a5::caseD_2:
005295F2  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
005295F9  75 07                     JNZ 0x00529602
005295FB  B8 AC 51 7C 00            MOV EAX,0x7c51ac
00529600  5D                        POP EBP
00529601  C3                        RET
LAB_00529602:
00529602  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00529605  83 C0 F7                  ADD EAX,-0x9
00529608  83 F8 48                  CMP EAX,0x48
0052960B  0F 87 BB 03 00 00         JA 0x005299cc
00529611  33 C9                     XOR ECX,ECX
00529613  8A 88 88 9B 52 00         MOV CL,byte ptr [EAX + 0x529b88]
switchD_00529619::switchD:
00529619  FF 24 8D 78 9B 52 00      JMP dword ptr [ECX*0x4 + 0x529b78]
switchD_00529619::caseD_9:
00529620  B8 9C 51 7C 00            MOV EAX,0x7c519c
00529625  5D                        POP EBP
00529626  C3                        RET
switchD_00529619::caseD_15:
00529627  B8 8C 51 7C 00            MOV EAX,0x7c518c
0052962C  5D                        POP EBP
0052962D  C3                        RET
switchD_00529619::caseD_36:
0052962E  B8 78 51 7C 00            MOV EAX,0x7c5178
00529633  5D                        POP EBP
00529634  C3                        RET
switchD_005295a5::caseD_3:
00529635  80 3D 4E 87 80 00 03      CMP byte ptr [0x0080874e],0x3
0052963C  75 07                     JNZ 0x00529645
0052963E  B8 68 51 7C 00            MOV EAX,0x7c5168
00529643  5D                        POP EBP
00529644  C3                        RET
LAB_00529645:
00529645  83 7D 0C 09               CMP dword ptr [EBP + 0xc],0x9
00529649  74 07                     JZ 0x00529652
0052964B  B8 58 51 7C 00            MOV EAX,0x7c5158
00529650  5D                        POP EBP
00529651  C3                        RET
LAB_00529652:
00529652  B8 44 51 7C 00            MOV EAX,0x7c5144
00529657  5D                        POP EBP
00529658  C3                        RET
switchD_005295a5::caseD_4:
00529659  B8 34 51 7C 00            MOV EAX,0x7c5134
0052965E  5D                        POP EBP
0052965F  C3                        RET
switchD_005295a5::caseD_5:
00529660  A0 4E 87 80 00            MOV AL,[0x0080874e]
00529665  3C 03                     CMP AL,0x3
00529667  B8 24 51 7C 00            MOV EAX,0x7c5124
0052966C  0F 84 5F 03 00 00         JZ 0x005299d1
00529672  B8 18 51 7C 00            MOV EAX,0x7c5118
00529677  5D                        POP EBP
00529678  C3                        RET
switchD_005295a5::caseD_6:
00529679  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052967E  3C 03                     CMP AL,0x3
00529680  B8 08 51 7C 00            MOV EAX,0x7c5108
00529685  0F 84 46 03 00 00         JZ 0x005299d1
0052968B  B8 F8 50 7C 00            MOV EAX,0x7c50f8
00529690  5D                        POP EBP
00529691  C3                        RET
switchD_005295a5::caseD_7:
00529692  A0 4E 87 80 00            MOV AL,[0x0080874e]
00529697  3C 03                     CMP AL,0x3
00529699  B8 E8 50 7C 00            MOV EAX,0x7c50e8
0052969E  0F 84 2D 03 00 00         JZ 0x005299d1
005296A4  B8 D8 50 7C 00            MOV EAX,0x7c50d8
005296A9  5D                        POP EBP
005296AA  C3                        RET
switchD_005295a5::caseD_9:
005296AB  B8 C8 50 7C 00            MOV EAX,0x7c50c8
005296B0  5D                        POP EBP
005296B1  C3                        RET
switchD_005295a5::caseD_8:
005296B2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005296B5  83 F8 05                  CMP EAX,0x5
005296B8  74 1F                     JZ 0x005296d9
005296BA  83 F8 0B                  CMP EAX,0xb
005296BD  74 13                     JZ 0x005296d2
005296BF  83 F8 11                  CMP EAX,0x11
005296C2  74 07                     JZ 0x005296cb
005296C4  B8 B8 50 7C 00            MOV EAX,0x7c50b8
005296C9  5D                        POP EBP
005296CA  C3                        RET
LAB_005296cb:
005296CB  B8 A8 50 7C 00            MOV EAX,0x7c50a8
005296D0  5D                        POP EBP
005296D1  C3                        RET
LAB_005296d2:
005296D2  B8 98 50 7C 00            MOV EAX,0x7c5098
005296D7  5D                        POP EBP
005296D8  C3                        RET
LAB_005296d9:
005296D9  B8 88 50 7C 00            MOV EAX,0x7c5088
005296DE  5D                        POP EBP
005296DF  C3                        RET
switchD_005295a5::caseD_a:
005296E0  A0 4E 87 80 00            MOV AL,[0x0080874e]
005296E5  3C 03                     CMP AL,0x3
005296E7  B8 74 50 7C 00            MOV EAX,0x7c5074
005296EC  0F 84 DF 02 00 00         JZ 0x005299d1
005296F2  B8 60 50 7C 00            MOV EAX,0x7c5060
005296F7  5D                        POP EBP
005296F8  C3                        RET
switchD_005295a5::caseD_b:
005296F9  B8 50 50 7C 00            MOV EAX,0x7c5050
005296FE  5D                        POP EBP
005296FF  C3                        RET
switchD_005295a5::caseD_c:
00529700  B8 3C 50 7C 00            MOV EAX,0x7c503c
00529705  5D                        POP EBP
00529706  C3                        RET
switchD_005295a5::caseD_d:
00529707  B8 2C 50 7C 00            MOV EAX,0x7c502c
0052970C  5D                        POP EBP
0052970D  C3                        RET
switchD_005295a5::caseD_e:
0052970E  A0 4E 87 80 00            MOV AL,[0x0080874e]
00529713  3C 03                     CMP AL,0x3
00529715  B8 1C 50 7C 00            MOV EAX,0x7c501c
0052971A  0F 84 B1 02 00 00         JZ 0x005299d1
00529720  B8 10 50 7C 00            MOV EAX,0x7c5010
00529725  5D                        POP EBP
00529726  C3                        RET
switchD_005295a5::caseD_f:
00529727  B8 F8 4F 7C 00            MOV EAX,0x7c4ff8
0052972C  5D                        POP EBP
0052972D  C3                        RET
switchD_005295a5::caseD_10:
0052972E  B8 E4 4F 7C 00            MOV EAX,0x7c4fe4
00529733  5D                        POP EBP
00529734  C3                        RET
switchD_005295a5::caseD_11:
00529735  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052973A  3C 03                     CMP AL,0x3
0052973C  B8 D4 4F 7C 00            MOV EAX,0x7c4fd4
00529741  0F 84 8A 02 00 00         JZ 0x005299d1
00529747  B8 C4 4F 7C 00            MOV EAX,0x7c4fc4
0052974C  5D                        POP EBP
0052974D  C3                        RET
switchD_005295a5::caseD_12:
0052974E  A0 4E 87 80 00            MOV AL,[0x0080874e]
00529753  3C 03                     CMP AL,0x3
00529755  B8 B0 4F 7C 00            MOV EAX,0x7c4fb0
0052975A  0F 84 71 02 00 00         JZ 0x005299d1
00529760  B8 A0 4F 7C 00            MOV EAX,0x7c4fa0
00529765  5D                        POP EBP
00529766  C3                        RET
switchD_005295a5::caseD_13:
00529767  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052976C  3C 03                     CMP AL,0x3
0052976E  B8 90 4F 7C 00            MOV EAX,0x7c4f90
00529773  0F 84 58 02 00 00         JZ 0x005299d1
00529779  B8 80 4F 7C 00            MOV EAX,0x7c4f80
0052977E  5D                        POP EBP
0052977F  C3                        RET
switchD_005295a5::caseD_14:
00529780  A0 4E 87 80 00            MOV AL,[0x0080874e]
00529785  3C 03                     CMP AL,0x3
00529787  B8 6C 4F 7C 00            MOV EAX,0x7c4f6c
0052978C  0F 84 3F 02 00 00         JZ 0x005299d1
00529792  B8 5C 4F 7C 00            MOV EAX,0x7c4f5c
00529797  5D                        POP EBP
00529798  C3                        RET
switchD_005295a5::caseD_15:
00529799  B8 50 4F 7C 00            MOV EAX,0x7c4f50
0052979E  5D                        POP EBP
0052979F  C3                        RET
switchD_005295a5::caseD_16:
005297A0  B8 44 4F 7C 00            MOV EAX,0x7c4f44
005297A5  5D                        POP EBP
005297A6  C3                        RET
switchD_005295a5::caseD_17:
005297A7  B8 34 4F 7C 00            MOV EAX,0x7c4f34
005297AC  5D                        POP EBP
005297AD  C3                        RET
switchD_005295a5::caseD_18:
005297AE  A0 4E 87 80 00            MOV AL,[0x0080874e]
005297B3  3C 03                     CMP AL,0x3
005297B5  B8 20 4F 7C 00            MOV EAX,0x7c4f20
005297BA  0F 84 11 02 00 00         JZ 0x005299d1
switchD_005295a5::caseD_4d:
005297C0  B8 10 4F 7C 00            MOV EAX,0x7c4f10
005297C5  5D                        POP EBP
005297C6  C3                        RET
switchD_005295a5::caseD_19:
005297C7  B8 FC 4E 7C 00            MOV EAX,0x7c4efc
005297CC  5D                        POP EBP
005297CD  C3                        RET
switchD_005295a5::caseD_1a:
005297CE  B8 EC 4E 7C 00            MOV EAX,0x7c4eec
005297D3  5D                        POP EBP
005297D4  C3                        RET
switchD_005295a5::caseD_1b:
005297D5  B8 D8 4E 7C 00            MOV EAX,0x7c4ed8
005297DA  5D                        POP EBP
005297DB  C3                        RET
switchD_005295a5::caseD_1c:
005297DC  B8 C4 4E 7C 00            MOV EAX,0x7c4ec4
005297E1  5D                        POP EBP
005297E2  C3                        RET
switchD_005295a5::caseD_1d:
005297E3  B8 B4 4E 7C 00            MOV EAX,0x7c4eb4
005297E8  5D                        POP EBP
005297E9  C3                        RET
switchD_005295a5::caseD_1e:
005297EA  B8 A4 4E 7C 00            MOV EAX,0x7c4ea4
005297EF  5D                        POP EBP
005297F0  C3                        RET
switchD_005295a5::caseD_1f:
005297F1  B8 94 4E 7C 00            MOV EAX,0x7c4e94
005297F6  5D                        POP EBP
005297F7  C3                        RET
switchD_005295a5::caseD_20:
005297F8  B8 84 4E 7C 00            MOV EAX,0x7c4e84
005297FD  5D                        POP EBP
005297FE  C3                        RET
switchD_005295a5::caseD_21:
005297FF  B8 74 4E 7C 00            MOV EAX,0x7c4e74
00529804  5D                        POP EBP
00529805  C3                        RET
switchD_005295a5::caseD_22:
00529806  B8 64 4E 7C 00            MOV EAX,0x7c4e64
0052980B  5D                        POP EBP
0052980C  C3                        RET
switchD_005295a5::caseD_23:
0052980D  B8 54 4E 7C 00            MOV EAX,0x7c4e54
00529812  5D                        POP EBP
00529813  C3                        RET
switchD_005295a5::caseD_24:
00529814  B8 44 4E 7C 00            MOV EAX,0x7c4e44
00529819  5D                        POP EBP
0052981A  C3                        RET
switchD_005295a5::caseD_25:
0052981B  B8 34 4E 7C 00            MOV EAX,0x7c4e34
00529820  5D                        POP EBP
00529821  C3                        RET
switchD_005295a5::caseD_26:
00529822  B8 1C 4E 7C 00            MOV EAX,0x7c4e1c
00529827  5D                        POP EBP
00529828  C3                        RET
switchD_005295a5::caseD_27:
00529829  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052982E  3C 03                     CMP AL,0x3
00529830  B8 04 4E 7C 00            MOV EAX,0x7c4e04
00529835  0F 84 96 01 00 00         JZ 0x005299d1
0052983B  B8 F0 4D 7C 00            MOV EAX,0x7c4df0
00529840  5D                        POP EBP
00529841  C3                        RET
switchD_005295a5::caseD_28:
00529842  B8 E0 4D 7C 00            MOV EAX,0x7c4de0
00529847  5D                        POP EBP
00529848  C3                        RET
switchD_005295a5::caseD_29:
00529849  B8 D0 4D 7C 00            MOV EAX,0x7c4dd0
0052984E  5D                        POP EBP
0052984F  C3                        RET
switchD_005295a5::caseD_2a:
00529850  B8 C0 4D 7C 00            MOV EAX,0x7c4dc0
00529855  5D                        POP EBP
00529856  C3                        RET
switchD_005295a5::caseD_2b:
00529857  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052985C  3C 03                     CMP AL,0x3
0052985E  B8 AC 4D 7C 00            MOV EAX,0x7c4dac
00529863  0F 84 68 01 00 00         JZ 0x005299d1
00529869  B8 98 4D 7C 00            MOV EAX,0x7c4d98
0052986E  5D                        POP EBP
0052986F  C3                        RET
switchD_005295a5::caseD_2c:
00529870  A0 4E 87 80 00            MOV AL,[0x0080874e]
00529875  3C 03                     CMP AL,0x3
00529877  B8 84 4D 7C 00            MOV EAX,0x7c4d84
0052987C  0F 84 4F 01 00 00         JZ 0x005299d1
00529882  B8 74 4D 7C 00            MOV EAX,0x7c4d74
00529887  5D                        POP EBP
00529888  C3                        RET
switchD_005295a5::caseD_2d:
00529889  A0 4E 87 80 00            MOV AL,[0x0080874e]
0052988E  3C 03                     CMP AL,0x3
00529890  B8 64 4D 7C 00            MOV EAX,0x7c4d64
00529895  0F 84 36 01 00 00         JZ 0x005299d1
0052989B  B8 58 4D 7C 00            MOV EAX,0x7c4d58
005298A0  5D                        POP EBP
005298A1  C3                        RET
switchD_005295a5::caseD_2e:
005298A2  B8 48 4D 7C 00            MOV EAX,0x7c4d48
005298A7  5D                        POP EBP
005298A8  C3                        RET
switchD_005295a5::caseD_2f:
005298A9  A0 4E 87 80 00            MOV AL,[0x0080874e]
005298AE  3C 03                     CMP AL,0x3
005298B0  B8 3C 4D 7C 00            MOV EAX,0x7c4d3c
005298B5  0F 84 16 01 00 00         JZ 0x005299d1
005298BB  B8 2C 4D 7C 00            MOV EAX,0x7c4d2c
005298C0  5D                        POP EBP
005298C1  C3                        RET
switchD_005295a5::caseD_30:
005298C2  B8 20 4D 7C 00            MOV EAX,0x7c4d20
005298C7  5D                        POP EBP
005298C8  C3                        RET
switchD_005295a5::caseD_31:
005298C9  B8 10 4D 7C 00            MOV EAX,0x7c4d10
005298CE  5D                        POP EBP
005298CF  C3                        RET
switchD_005295a5::caseD_33:
005298D0  B8 00 4D 7C 00            MOV EAX,0x7c4d00
005298D5  5D                        POP EBP
005298D6  C3                        RET
switchD_005295a5::caseD_34:
005298D7  B8 F0 4C 7C 00            MOV EAX,0x7c4cf0
005298DC  5D                        POP EBP
005298DD  C3                        RET
switchD_005295a5::caseD_35:
005298DE  B8 D8 4C 7C 00            MOV EAX,0x7c4cd8
005298E3  5D                        POP EBP
005298E4  C3                        RET
switchD_005295a5::caseD_36:
005298E5  B8 C8 4C 7C 00            MOV EAX,0x7c4cc8
005298EA  5D                        POP EBP
005298EB  C3                        RET
switchD_005295a5::caseD_37:
005298EC  B8 B0 4C 7C 00            MOV EAX,0x7c4cb0
005298F1  5D                        POP EBP
005298F2  C3                        RET
switchD_005295a5::caseD_38:
005298F3  B8 9C 4C 7C 00            MOV EAX,0x7c4c9c
005298F8  5D                        POP EBP
005298F9  C3                        RET
switchD_005295a5::caseD_39:
005298FA  B8 88 4C 7C 00            MOV EAX,0x7c4c88
005298FF  5D                        POP EBP
00529900  C3                        RET
switchD_005295a5::caseD_3a:
00529901  B8 74 4C 7C 00            MOV EAX,0x7c4c74
00529906  5D                        POP EBP
00529907  C3                        RET
switchD_005295a5::caseD_3b:
00529908  B8 60 4C 7C 00            MOV EAX,0x7c4c60
0052990D  5D                        POP EBP
0052990E  C3                        RET
switchD_005295a5::caseD_3c:
0052990F  B8 48 4C 7C 00            MOV EAX,0x7c4c48
00529914  5D                        POP EBP
00529915  C3                        RET
switchD_005295a5::caseD_3d:
00529916  B8 34 4C 7C 00            MOV EAX,0x7c4c34
0052991B  5D                        POP EBP
0052991C  C3                        RET
switchD_005295a5::caseD_3e:
0052991D  B8 20 4C 7C 00            MOV EAX,0x7c4c20
00529922  5D                        POP EBP
00529923  C3                        RET
switchD_005295a5::caseD_3f:
00529924  B8 0C 4C 7C 00            MOV EAX,0x7c4c0c
00529929  5D                        POP EBP
0052992A  C3                        RET
switchD_005295a5::caseD_40:
0052992B  B8 FC 4B 7C 00            MOV EAX,0x7c4bfc
00529930  5D                        POP EBP
00529931  C3                        RET
switchD_005295a5::caseD_41:
00529932  B8 E8 4B 7C 00            MOV EAX,0x7c4be8
00529937  5D                        POP EBP
00529938  C3                        RET
switchD_005295a5::caseD_42:
00529939  B8 D8 4B 7C 00            MOV EAX,0x7c4bd8
0052993E  5D                        POP EBP
0052993F  C3                        RET
switchD_005295a5::caseD_43:
00529940  B8 C4 4B 7C 00            MOV EAX,0x7c4bc4
00529945  5D                        POP EBP
00529946  C3                        RET
switchD_005295a5::caseD_44:
00529947  B8 B4 4B 7C 00            MOV EAX,0x7c4bb4
0052994C  5D                        POP EBP
0052994D  C3                        RET
switchD_005295a5::caseD_45:
0052994E  B8 A0 4B 7C 00            MOV EAX,0x7c4ba0
00529953  5D                        POP EBP
00529954  C3                        RET
switchD_005295a5::caseD_46:
00529955  B8 90 4B 7C 00            MOV EAX,0x7c4b90
0052995A  5D                        POP EBP
0052995B  C3                        RET
switchD_005295a5::caseD_47:
0052995C  B8 78 4B 7C 00            MOV EAX,0x7c4b78
00529961  5D                        POP EBP
00529962  C3                        RET
switchD_005295a5::caseD_48:
00529963  B8 64 4B 7C 00            MOV EAX,0x7c4b64
00529968  5D                        POP EBP
00529969  C3                        RET
switchD_005295a5::caseD_49:
0052996A  B8 50 4B 7C 00            MOV EAX,0x7c4b50
0052996F  5D                        POP EBP
00529970  C3                        RET
switchD_005295a5::caseD_4a:
00529971  B8 3C 4B 7C 00            MOV EAX,0x7c4b3c
00529976  5D                        POP EBP
00529977  C3                        RET
switchD_005295a5::caseD_4b:
00529978  B8 2C 4B 7C 00            MOV EAX,0x7c4b2c
0052997D  5D                        POP EBP
0052997E  C3                        RET
switchD_005295a5::caseD_4c:
0052997F  B8 20 4B 7C 00            MOV EAX,0x7c4b20
00529984  5D                        POP EBP
00529985  C3                        RET
switchD_005295a5::caseD_4f:
00529986  B8 14 4B 7C 00            MOV EAX,0x7c4b14
0052998B  5D                        POP EBP
0052998C  C3                        RET
switchD_005295a5::caseD_50:
0052998D  A0 4E 87 80 00            MOV AL,[0x0080874e]
00529992  3C 03                     CMP AL,0x3
00529994  B8 04 4B 7C 00            MOV EAX,0x7c4b04
00529999  74 36                     JZ 0x005299d1
0052999B  B8 F4 4A 7C 00            MOV EAX,0x7c4af4
005299A0  5D                        POP EBP
005299A1  C3                        RET
switchD_005295a5::caseD_51:
005299A2  A0 4E 87 80 00            MOV AL,[0x0080874e]
005299A7  3C 03                     CMP AL,0x3
005299A9  B8 E4 4A 7C 00            MOV EAX,0x7c4ae4
005299AE  74 21                     JZ 0x005299d1
005299B0  B8 D0 4A 7C 00            MOV EAX,0x7c4ad0
005299B5  5D                        POP EBP
005299B6  C3                        RET
switchD_005295a5::caseD_52:
005299B7  A0 4E 87 80 00            MOV AL,[0x0080874e]
005299BC  3C 03                     CMP AL,0x3
005299BE  B8 C0 4A 7C 00            MOV EAX,0x7c4ac0
005299C3  74 0C                     JZ 0x005299d1
switchD_005295a5::caseD_32:
005299C5  B8 B4 4A 7C 00            MOV EAX,0x7c4ab4
005299CA  5D                        POP EBP
005299CB  C3                        RET
switchD_005295a5::caseD_4e:
005299CC  B8 A4 4A 7C 00            MOV EAX,0x7c4aa4
LAB_005299d1:
005299D1  5D                        POP EBP
005299D2  C3                        RET
