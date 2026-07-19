FUN_006686f0:
006686F0  55                        PUSH EBP
006686F1  8B EC                     MOV EBP,ESP
006686F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006686F6  3D F1 07 00 00            CMP EAX,0x7f1
006686FB  0F 8F 95 00 00 00         JG 0x00668796
00668701  0F 84 A8 00 00 00         JZ 0x006687af
00668707  3D D5 07 00 00            CMP EAX,0x7d5
0066870C  7F 6C                     JG 0x0066877a
0066870E  74 44                     JZ 0x00668754
00668710  3D 8B 03 00 00            CMP EAX,0x38b
00668715  7F 1F                     JG 0x00668736
00668717  74 3B                     JZ 0x00668754
00668719  05 E0 FC FF FF            ADD EAX,0xfffffce0
0066871E  83 F8 6A                  CMP EAX,0x6a
00668721  0F 87 C0 00 00 00         JA 0x006687e7
00668727  33 C9                     XOR ECX,ECX
00668729  8A 88 F8 87 66 00         MOV CL,byte ptr [EAX + 0x6687f8]
switchD_0066872f::switchD:
0066872F  FF 24 8D EC 87 66 00      JMP dword ptr [ECX*0x4 + 0x6687ec]
LAB_00668736:
00668736  3D D0 07 00 00            CMP EAX,0x7d0
0066873B  7F 25                     JG 0x00668762
0066873D  74 34                     JZ 0x00668773
0066873F  05 74 FC FF FF            ADD EAX,0xfffffc74
00668744  83 F8 03                  CMP EAX,0x3
00668747  0F 87 9A 00 00 00         JA 0x006687e7
switchD_0066874d::switchD:
0066874D  FF 24 85 64 88 66 00      JMP dword ptr [EAX*0x4 + 0x668864]
FUN_006686f0::cf_common_exit_00668754:
00668754  B8 01 00 00 00            MOV EAX,0x1
00668759  5D                        POP EBP
0066875A  C3                        RET
switchD_0066874d::caseD_38e:
0066875B  B8 09 00 00 00            MOV EAX,0x9
00668760  5D                        POP EBP
00668761  C3                        RET
LAB_00668762:
00668762  05 2F F8 FF FF            ADD EAX,0xfffff82f
00668767  83 F8 03                  CMP EAX,0x3
0066876A  77 7B                     JA 0x006687e7
switchD_0066876c::switchD:
0066876C  FF 24 85 74 88 66 00      JMP dword ptr [EAX*0x4 + 0x668874]
FUN_006686f0::cf_common_exit_00668773:
00668773  B8 02 00 00 00            MOV EAX,0x2
00668778  5D                        POP EBP
00668779  C3                        RET
LAB_0066877a:
0066877A  05 2A F8 FF FF            ADD EAX,0xfffff82a
0066877F  83 F8 1A                  CMP EAX,0x1a
00668782  77 63                     JA 0x006687e7
switchD_00668784::switchD:
00668784  FF 24 85 84 88 66 00      JMP dword ptr [EAX*0x4 + 0x668884]
switchD_00668784::caseD_7d7:
0066878B  33 C0                     XOR EAX,EAX
0066878D  5D                        POP EBP
0066878E  C3                        RET
switchD_00668784::caseD_7ee:
0066878F  B8 0A 00 00 00            MOV EAX,0xa
00668794  5D                        POP EBP
00668795  C3                        RET
LAB_00668796:
00668796  05 0E F8 FF FF            ADD EAX,0xfffff80e
0066879B  83 F8 5B                  CMP EAX,0x5b
0066879E  77 47                     JA 0x006687e7
006687A0  33 D2                     XOR EDX,EDX
006687A2  8A 90 24 89 66 00         MOV DL,byte ptr [EAX + 0x668924]
switchD_006687a8::switchD:
006687A8  FF 24 95 F0 88 66 00      JMP dword ptr [EDX*0x4 + 0x6688f0]
switchD_006687a8::caseD_7f2:
006687AF  B8 03 00 00 00            MOV EAX,0x3
006687B4  5D                        POP EBP
006687B5  C3                        RET
switchD_006687a8::caseD_7f5:
006687B6  B8 07 00 00 00            MOV EAX,0x7
006687BB  5D                        POP EBP
006687BC  C3                        RET
switchD_006687a8::caseD_7fa:
006687BD  B8 0B 00 00 00            MOV EAX,0xb
006687C2  5D                        POP EBP
006687C3  C3                        RET
switchD_0066874d::caseD_38f:
006687C4  B8 06 00 00 00            MOV EAX,0x6
006687C9  5D                        POP EBP
006687CA  C3                        RET
switchD_006687a8::caseD_80e:
006687CB  B8 05 00 00 00            MOV EAX,0x5
006687D0  5D                        POP EBP
006687D1  C3                        RET
switchD_006687a8::caseD_82b:
006687D2  B8 04 00 00 00            MOV EAX,0x4
006687D7  5D                        POP EBP
006687D8  C3                        RET
switchD_006687a8::caseD_82e:
006687D9  B8 0C 00 00 00            MOV EAX,0xc
006687DE  5D                        POP EBP
006687DF  C3                        RET
switchD_006687a8::caseD_7f8:
006687E0  B8 08 00 00 00            MOV EAX,0x8
006687E5  5D                        POP EBP
006687E6  C3                        RET
FUN_006686f0::cf_common_exit_006687E7:
006687E7  83 C8 FF                  OR EAX,0xffffffff
006687EA  5D                        POP EBP
006687EB  C3                        RET
