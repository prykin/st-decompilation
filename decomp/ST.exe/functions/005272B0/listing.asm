FUN_005272b0:
005272B0  55                        PUSH EBP
005272B1  8B EC                     MOV EBP,ESP
005272B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005272B6  25 FF 00 00 00            AND EAX,0xff
005272BB  48                        DEC EAX
005272BC  83 F8 51                  CMP EAX,0x51
005272BF  0F 87 E7 01 00 00         JA 0x005274ac
switchD_005272c5::switchD:
005272C5  FF 24 85 B4 74 52 00      JMP dword ptr [EAX*0x4 + 0x5274b4]
switchD_005272c5::caseD_1:
005272CC  B8 02 00 00 00            MOV EAX,0x2
005272D1  5D                        POP EBP
005272D2  C3                        RET
switchD_005272c5::caseD_2:
005272D3  33 C0                     XOR EAX,EAX
005272D5  5D                        POP EBP
005272D6  C3                        RET
switchD_005272c5::caseD_3:
005272D7  B8 01 00 00 00            MOV EAX,0x1
005272DC  5D                        POP EBP
005272DD  C3                        RET
switchD_005272c5::caseD_4:
005272DE  B8 03 00 00 00            MOV EAX,0x3
005272E3  5D                        POP EBP
005272E4  C3                        RET
switchD_005272c5::caseD_5:
005272E5  B8 05 00 00 00            MOV EAX,0x5
005272EA  5D                        POP EBP
005272EB  C3                        RET
switchD_005272c5::caseD_6:
005272EC  B8 06 00 00 00            MOV EAX,0x6
005272F1  5D                        POP EBP
005272F2  C3                        RET
switchD_005272c5::caseD_7:
005272F3  B8 0A 00 00 00            MOV EAX,0xa
005272F8  5D                        POP EBP
005272F9  C3                        RET
switchD_005272c5::caseD_9:
005272FA  B8 0C 00 00 00            MOV EAX,0xc
005272FF  5D                        POP EBP
00527300  C3                        RET
switchD_005272c5::caseD_8:
00527301  B8 0B 00 00 00            MOV EAX,0xb
00527306  5D                        POP EBP
00527307  C3                        RET
switchD_005272c5::caseD_a:
00527308  B8 0D 00 00 00            MOV EAX,0xd
0052730D  5D                        POP EBP
0052730E  C3                        RET
switchD_005272c5::caseD_b:
0052730F  B8 0E 00 00 00            MOV EAX,0xe
00527314  5D                        POP EBP
00527315  C3                        RET
switchD_005272c5::caseD_d:
00527316  B8 13 00 00 00            MOV EAX,0x13
0052731B  5D                        POP EBP
0052731C  C3                        RET
switchD_005272c5::caseD_e:
0052731D  B8 0F 00 00 00            MOV EAX,0xf
00527322  5D                        POP EBP
00527323  C3                        RET
switchD_005272c5::caseD_10:
00527324  B8 10 00 00 00            MOV EAX,0x10
00527329  5D                        POP EBP
0052732A  C3                        RET
switchD_005272c5::caseD_11:
0052732B  B8 11 00 00 00            MOV EAX,0x11
00527330  5D                        POP EBP
00527331  C3                        RET
switchD_005272c5::caseD_12:
00527332  B8 12 00 00 00            MOV EAX,0x12
00527337  5D                        POP EBP
00527338  C3                        RET
switchD_005272c5::caseD_13:
00527339  B8 14 00 00 00            MOV EAX,0x14
0052733E  5D                        POP EBP
0052733F  C3                        RET
switchD_005272c5::caseD_2b:
00527340  B8 07 00 00 00            MOV EAX,0x7
00527345  5D                        POP EBP
00527346  C3                        RET
switchD_005272c5::caseD_2c:
00527347  B8 08 00 00 00            MOV EAX,0x8
0052734C  5D                        POP EBP
0052734D  C3                        RET
switchD_005272c5::caseD_2d:
0052734E  B8 09 00 00 00            MOV EAX,0x9
00527353  5D                        POP EBP
00527354  C3                        RET
switchD_005272c5::caseD_2f:
00527355  B8 04 00 00 00            MOV EAX,0x4
0052735A  5D                        POP EBP
0052735B  C3                        RET
switchD_005272c5::caseD_15:
0052735C  B8 1D 00 00 00            MOV EAX,0x1d
00527361  5D                        POP EBP
00527362  C3                        RET
switchD_005272c5::caseD_16:
00527363  B8 1E 00 00 00            MOV EAX,0x1e
00527368  5D                        POP EBP
00527369  C3                        RET
switchD_005272c5::caseD_17:
0052736A  B8 1F 00 00 00            MOV EAX,0x1f
0052736F  5D                        POP EBP
00527370  C3                        RET
switchD_005272c5::caseD_18:
00527371  B8 20 00 00 00            MOV EAX,0x20
00527376  5D                        POP EBP
00527377  C3                        RET
switchD_005272c5::caseD_19:
00527378  B8 1C 00 00 00            MOV EAX,0x1c
0052737D  5D                        POP EBP
0052737E  C3                        RET
switchD_005272c5::caseD_1a:
0052737F  B8 1B 00 00 00            MOV EAX,0x1b
00527384  5D                        POP EBP
00527385  C3                        RET
switchD_005272c5::caseD_1b:
00527386  B8 19 00 00 00            MOV EAX,0x19
0052738B  5D                        POP EBP
0052738C  C3                        RET
switchD_005272c5::caseD_1c:
0052738D  B8 1A 00 00 00            MOV EAX,0x1a
00527392  5D                        POP EBP
00527393  C3                        RET
switchD_005272c5::caseD_1d:
00527394  B8 16 00 00 00            MOV EAX,0x16
00527399  5D                        POP EBP
0052739A  C3                        RET
switchD_005272c5::caseD_1e:
0052739B  B8 17 00 00 00            MOV EAX,0x17
005273A0  5D                        POP EBP
005273A1  C3                        RET
switchD_005272c5::caseD_1f:
005273A2  B8 18 00 00 00            MOV EAX,0x18
005273A7  5D                        POP EBP
005273A8  C3                        RET
switchD_005272c5::caseD_20:
005273A9  B8 15 00 00 00            MOV EAX,0x15
005273AE  5D                        POP EBP
005273AF  C3                        RET
switchD_005272c5::caseD_21:
005273B0  B8 21 00 00 00            MOV EAX,0x21
005273B5  5D                        POP EBP
005273B6  C3                        RET
switchD_005272c5::caseD_22:
005273B7  B8 22 00 00 00            MOV EAX,0x22
005273BC  5D                        POP EBP
005273BD  C3                        RET
switchD_005272c5::caseD_23:
005273BE  B8 23 00 00 00            MOV EAX,0x23
005273C3  5D                        POP EBP
005273C4  C3                        RET
switchD_005272c5::caseD_24:
005273C5  B8 24 00 00 00            MOV EAX,0x24
005273CA  5D                        POP EBP
005273CB  C3                        RET
switchD_005272c5::caseD_25:
005273CC  B8 25 00 00 00            MOV EAX,0x25
005273D1  5D                        POP EBP
005273D2  C3                        RET
switchD_005272c5::caseD_26:
005273D3  B8 26 00 00 00            MOV EAX,0x26
005273D8  5D                        POP EBP
005273D9  C3                        RET
switchD_005272c5::caseD_27:
005273DA  B8 27 00 00 00            MOV EAX,0x27
005273DF  5D                        POP EBP
005273E0  C3                        RET
switchD_005272c5::caseD_28:
005273E1  B8 28 00 00 00            MOV EAX,0x28
005273E6  5D                        POP EBP
005273E7  C3                        RET
switchD_005272c5::caseD_29:
005273E8  B8 29 00 00 00            MOV EAX,0x29
005273ED  5D                        POP EBP
005273EE  C3                        RET
switchD_005272c5::caseD_2a:
005273EF  B8 2A 00 00 00            MOV EAX,0x2a
005273F4  5D                        POP EBP
005273F5  C3                        RET
switchD_005272c5::caseD_30:
005273F6  B8 2B 00 00 00            MOV EAX,0x2b
005273FB  5D                        POP EBP
005273FC  C3                        RET
switchD_005272c5::caseD_31:
005273FD  B8 2C 00 00 00            MOV EAX,0x2c
00527402  5D                        POP EBP
00527403  C3                        RET
switchD_005272c5::caseD_32:
00527404  B8 2D 00 00 00            MOV EAX,0x2d
00527409  5D                        POP EBP
0052740A  C3                        RET
switchD_005272c5::caseD_33:
0052740B  B8 2E 00 00 00            MOV EAX,0x2e
00527410  5D                        POP EBP
00527411  C3                        RET
switchD_005272c5::caseD_34:
00527412  B8 2F 00 00 00            MOV EAX,0x2f
00527417  5D                        POP EBP
00527418  C3                        RET
switchD_005272c5::caseD_35:
00527419  B8 30 00 00 00            MOV EAX,0x30
0052741E  5D                        POP EBP
0052741F  C3                        RET
switchD_005272c5::caseD_36:
00527420  B8 31 00 00 00            MOV EAX,0x31
00527425  5D                        POP EBP
00527426  C3                        RET
switchD_005272c5::caseD_38:
00527427  B8 32 00 00 00            MOV EAX,0x32
0052742C  5D                        POP EBP
0052742D  C3                        RET
switchD_005272c5::caseD_3a:
0052742E  B8 33 00 00 00            MOV EAX,0x33
00527433  5D                        POP EBP
00527434  C3                        RET
switchD_005272c5::caseD_3b:
00527435  B8 34 00 00 00            MOV EAX,0x34
0052743A  5D                        POP EBP
0052743B  C3                        RET
switchD_005272c5::caseD_3c:
0052743C  B8 35 00 00 00            MOV EAX,0x35
00527441  5D                        POP EBP
00527442  C3                        RET
switchD_005272c5::caseD_3e:
00527443  B8 36 00 00 00            MOV EAX,0x36
00527448  5D                        POP EBP
00527449  C3                        RET
switchD_005272c5::caseD_3f:
0052744A  B8 37 00 00 00            MOV EAX,0x37
0052744F  5D                        POP EBP
00527450  C3                        RET
switchD_005272c5::caseD_40:
00527451  B8 38 00 00 00            MOV EAX,0x38
00527456  5D                        POP EBP
00527457  C3                        RET
switchD_005272c5::caseD_42:
00527458  B8 39 00 00 00            MOV EAX,0x39
0052745D  5D                        POP EBP
0052745E  C3                        RET
switchD_005272c5::caseD_44:
0052745F  B8 3A 00 00 00            MOV EAX,0x3a
00527464  5D                        POP EBP
00527465  C3                        RET
switchD_005272c5::caseD_45:
00527466  B8 3B 00 00 00            MOV EAX,0x3b
0052746B  5D                        POP EBP
0052746C  C3                        RET
switchD_005272c5::caseD_47:
0052746D  B8 3C 00 00 00            MOV EAX,0x3c
00527472  5D                        POP EBP
00527473  C3                        RET
switchD_005272c5::caseD_49:
00527474  B8 3D 00 00 00            MOV EAX,0x3d
00527479  5D                        POP EBP
0052747A  C3                        RET
switchD_005272c5::caseD_4a:
0052747B  B8 3E 00 00 00            MOV EAX,0x3e
00527480  5D                        POP EBP
00527481  C3                        RET
switchD_005272c5::caseD_4b:
00527482  B8 3F 00 00 00            MOV EAX,0x3f
00527487  5D                        POP EBP
00527488  C3                        RET
switchD_005272c5::caseD_4c:
00527489  B8 40 00 00 00            MOV EAX,0x40
0052748E  5D                        POP EBP
0052748F  C3                        RET
switchD_005272c5::caseD_4f:
00527490  B8 41 00 00 00            MOV EAX,0x41
00527495  5D                        POP EBP
00527496  C3                        RET
switchD_005272c5::caseD_50:
00527497  B8 42 00 00 00            MOV EAX,0x42
0052749C  5D                        POP EBP
0052749D  C3                        RET
switchD_005272c5::caseD_51:
0052749E  B8 43 00 00 00            MOV EAX,0x43
005274A3  5D                        POP EBP
005274A4  C3                        RET
switchD_005272c5::caseD_52:
005274A5  B8 44 00 00 00            MOV EAX,0x44
005274AA  5D                        POP EBP
005274AB  C3                        RET
switchD_005272c5::caseD_f:
005274AC  83 C8 FF                  OR EAX,0xffffffff
005274AF  5D                        POP EBP
005274B0  C3                        RET
