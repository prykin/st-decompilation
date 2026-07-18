FUN_005276e0:
005276E0  55                        PUSH EBP
005276E1  8B EC                     MOV EBP,ESP
005276E3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005276E6  53                        PUSH EBX
005276E7  8A 1D 4E 87 80 00         MOV BL,byte ptr [0x0080874e]
005276ED  33 C0                     XOR EAX,EAX
005276EF  80 FB 03                  CMP BL,0x3
005276F2  0F 94 C0                  SETZ AL
005276F5  05 A9 00 00 00            ADD EAX,0xa9
005276FA  80 F9 FF                  CMP CL,0xff
005276FD  74 54                     JZ 0x00527753
005276FF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00527702  81 E2 FF 00 00 00         AND EDX,0xff
00527708  4A                        DEC EDX
00527709  81 FA 99 00 00 00         CMP EDX,0x99
0052770F  77 2E                     JA 0x0052773f
switchD_00527711::switchD:
00527711  FF 24 95 00 7C 52 00      JMP dword ptr [EDX*0x4 + 0x527c00]
switchD_00527711::caseD_1:
00527718  B8 14 00 00 00            MOV EAX,0x14
0052771D  5B                        POP EBX
0052771E  5D                        POP EBP
0052771F  C3                        RET
switchD_00527711::caseD_2:
00527720  B8 15 00 00 00            MOV EAX,0x15
00527725  5B                        POP EBX
00527726  5D                        POP EBP
00527727  C3                        RET
switchD_00527711::caseD_3:
00527728  B8 0A 00 00 00            MOV EAX,0xa
0052772D  5B                        POP EBX
0052772E  5D                        POP EBP
0052772F  C3                        RET
switchD_00527711::caseD_4:
00527730  84 C9                     TEST CL,CL
00527732  74 22                     JZ 0x00527756
00527734  81 E1 FF 00 00 00         AND ECX,0xff
0052773A  83 C1 02                  ADD ECX,0x2
LAB_0052773d:
0052773D  8B C1                     MOV EAX,ECX
switchD_00527711::default:
0052773F  3D A9 00 00 00            CMP EAX,0xa9
00527744  76 0D                     JBE 0x00527753
00527746  33 C0                     XOR EAX,EAX
00527748  80 FB 03                  CMP BL,0x3
0052774B  0F 94 C0                  SETZ AL
0052774E  05 A8 00 00 00            ADD EAX,0xa8
LAB_00527753:
00527753  5B                        POP EBX
00527754  5D                        POP EBP
00527755  C3                        RET
LAB_00527756:
00527756  B8 4E 00 00 00            MOV EAX,0x4e
0052775B  5B                        POP EBX
0052775C  5D                        POP EBP
0052775D  C3                        RET
switchD_00527711::caseD_5:
0052775E  84 C9                     TEST CL,CL
00527760  74 09                     JZ 0x0052776b
00527762  81 E1 FF 00 00 00         AND ECX,0xff
00527768  49                        DEC ECX
00527769  EB D2                     JMP 0x0052773d
LAB_0052776b:
0052776B  B8 4F 00 00 00            MOV EAX,0x4f
00527770  5B                        POP EBX
00527771  5D                        POP EBP
00527772  C3                        RET
switchD_00527711::caseD_6:
00527773  84 C9                     TEST CL,CL
00527775  74 0B                     JZ 0x00527782
00527777  81 E1 FF 00 00 00         AND ECX,0xff
0052777D  83 C1 05                  ADD ECX,0x5
00527780  EB BB                     JMP 0x0052773d
LAB_00527782:
00527782  B8 50 00 00 00            MOV EAX,0x50
00527787  5B                        POP EBX
00527788  5D                        POP EBP
00527789  C3                        RET
switchD_00527711::caseD_7:
0052778A  B8 16 00 00 00            MOV EAX,0x16
0052778F  5B                        POP EBX
00527790  5D                        POP EBP
00527791  C3                        RET
switchD_00527711::caseD_8:
00527792  B8 0D 00 00 00            MOV EAX,0xd
00527797  5B                        POP EBX
00527798  5D                        POP EBP
00527799  C3                        RET
switchD_00527711::caseD_9:
0052779A  B8 0B 00 00 00            MOV EAX,0xb
0052779F  5B                        POP EBX
005277A0  5D                        POP EBP
005277A1  C3                        RET
switchD_00527711::caseD_a:
005277A2  B8 0C 00 00 00            MOV EAX,0xc
005277A7  5B                        POP EBX
005277A8  5D                        POP EBP
005277A9  C3                        RET
switchD_00527711::caseD_b:
005277AA  B8 1F 00 00 00            MOV EAX,0x1f
005277AF  5B                        POP EBX
005277B0  5D                        POP EBP
005277B1  C3                        RET
switchD_00527711::caseD_c:
005277B2  B8 17 00 00 00            MOV EAX,0x17
005277B7  5B                        POP EBX
005277B8  5D                        POP EBP
005277B9  C3                        RET
switchD_00527711::caseD_d:
005277BA  B8 18 00 00 00            MOV EAX,0x18
005277BF  5B                        POP EBX
005277C0  5D                        POP EBP
005277C1  C3                        RET
switchD_00527711::caseD_e:
005277C2  B8 0E 00 00 00            MOV EAX,0xe
005277C7  5B                        POP EBX
005277C8  5D                        POP EBP
005277C9  C3                        RET
switchD_00527711::caseD_f:
005277CA  B8 19 00 00 00            MOV EAX,0x19
005277CF  5B                        POP EBX
005277D0  5D                        POP EBP
005277D1  C3                        RET
switchD_00527711::caseD_10:
005277D2  B8 1A 00 00 00            MOV EAX,0x1a
005277D7  5B                        POP EBX
005277D8  5D                        POP EBP
005277D9  C3                        RET
switchD_00527711::caseD_11:
005277DA  B8 1B 00 00 00            MOV EAX,0x1b
005277DF  5B                        POP EBX
005277E0  5D                        POP EBP
005277E1  C3                        RET
switchD_00527711::caseD_86:
005277E2  B8 3E 00 00 00            MOV EAX,0x3e
005277E7  5B                        POP EBX
005277E8  5D                        POP EBP
005277E9  C3                        RET
switchD_00527711::caseD_12:
005277EA  B8 0F 00 00 00            MOV EAX,0xf
005277EF  5B                        POP EBX
005277F0  5D                        POP EBP
005277F1  C3                        RET
switchD_00527711::caseD_13:
005277F2  B8 1C 00 00 00            MOV EAX,0x1c
005277F7  5B                        POP EBX
005277F8  5D                        POP EBP
005277F9  C3                        RET
switchD_00527711::caseD_14:
005277FA  B8 10 00 00 00            MOV EAX,0x10
005277FF  5B                        POP EBX
00527800  5D                        POP EBP
00527801  C3                        RET
switchD_00527711::caseD_15:
00527802  B8 1D 00 00 00            MOV EAX,0x1d
00527807  5B                        POP EBX
00527808  5D                        POP EBP
00527809  C3                        RET
switchD_00527711::caseD_16:
0052780A  B8 11 00 00 00            MOV EAX,0x11
0052780F  5B                        POP EBX
00527810  5D                        POP EBP
00527811  C3                        RET
switchD_00527711::caseD_17:
00527812  B8 1E 00 00 00            MOV EAX,0x1e
00527817  5B                        POP EBX
00527818  5D                        POP EBP
00527819  C3                        RET
switchD_00527711::caseD_18:
0052781A  B8 12 00 00 00            MOV EAX,0x12
0052781F  5B                        POP EBX
00527820  5D                        POP EBP
00527821  C3                        RET
switchD_00527711::caseD_19:
00527822  B8 23 00 00 00            MOV EAX,0x23
00527827  5B                        POP EBX
00527828  5D                        POP EBP
00527829  C3                        RET
switchD_00527711::caseD_1a:
0052782A  B8 24 00 00 00            MOV EAX,0x24
0052782F  5B                        POP EBX
00527830  5D                        POP EBP
00527831  C3                        RET
switchD_00527711::caseD_1b:
00527832  B8 13 00 00 00            MOV EAX,0x13
00527837  5B                        POP EBX
00527838  5D                        POP EBP
00527839  C3                        RET
switchD_00527711::caseD_1c:
0052783A  B8 22 00 00 00            MOV EAX,0x22
0052783F  5B                        POP EBX
00527840  5D                        POP EBP
00527841  C3                        RET
switchD_00527711::caseD_1d:
00527842  B8 21 00 00 00            MOV EAX,0x21
00527847  5B                        POP EBX
00527848  5D                        POP EBP
00527849  C3                        RET
switchD_00527711::caseD_7f:
0052784A  B8 3C 00 00 00            MOV EAX,0x3c
0052784F  5B                        POP EBX
00527850  5D                        POP EBP
00527851  C3                        RET
switchD_00527711::caseD_1e:
00527852  B8 25 00 00 00            MOV EAX,0x25
00527857  5B                        POP EBX
00527858  5D                        POP EBP
00527859  C3                        RET
switchD_00527711::caseD_1f:
0052785A  B8 20 00 00 00            MOV EAX,0x20
0052785F  5B                        POP EBX
00527860  5D                        POP EBP
00527861  C3                        RET
switchD_00527711::caseD_20:
00527862  B8 26 00 00 00            MOV EAX,0x26
00527867  5B                        POP EBX
00527868  5D                        POP EBP
00527869  C3                        RET
switchD_00527711::caseD_21:
0052786A  B8 27 00 00 00            MOV EAX,0x27
0052786F  5B                        POP EBX
00527870  5D                        POP EBP
00527871  C3                        RET
switchD_00527711::caseD_22:
00527872  B8 28 00 00 00            MOV EAX,0x28
00527877  5B                        POP EBX
00527878  5D                        POP EBP
00527879  C3                        RET
switchD_00527711::caseD_23:
0052787A  B8 29 00 00 00            MOV EAX,0x29
0052787F  5B                        POP EBX
00527880  5D                        POP EBP
00527881  C3                        RET
switchD_00527711::caseD_24:
00527882  B8 2C 00 00 00            MOV EAX,0x2c
00527887  5B                        POP EBX
00527888  5D                        POP EBP
00527889  C3                        RET
switchD_00527711::caseD_25:
0052788A  B8 2B 00 00 00            MOV EAX,0x2b
0052788F  5B                        POP EBX
00527890  5D                        POP EBP
00527891  C3                        RET
switchD_00527711::caseD_26:
00527892  B8 34 00 00 00            MOV EAX,0x34
00527897  5B                        POP EBX
00527898  5D                        POP EBP
00527899  C3                        RET
switchD_00527711::caseD_27:
0052789A  B8 2D 00 00 00            MOV EAX,0x2d
0052789F  5B                        POP EBX
005278A0  5D                        POP EBP
005278A1  C3                        RET
switchD_00527711::caseD_28:
005278A2  B8 2F 00 00 00            MOV EAX,0x2f
005278A7  5B                        POP EBX
005278A8  5D                        POP EBP
005278A9  C3                        RET
switchD_00527711::caseD_29:
005278AA  B8 35 00 00 00            MOV EAX,0x35
005278AF  5B                        POP EBX
005278B0  5D                        POP EBP
005278B1  C3                        RET
switchD_00527711::caseD_2a:
005278B2  B8 36 00 00 00            MOV EAX,0x36
005278B7  5B                        POP EBX
005278B8  5D                        POP EBP
005278B9  C3                        RET
switchD_00527711::caseD_2b:
005278BA  B8 37 00 00 00            MOV EAX,0x37
005278BF  5B                        POP EBX
005278C0  5D                        POP EBP
005278C1  C3                        RET
switchD_00527711::caseD_2c:
005278C2  B8 30 00 00 00            MOV EAX,0x30
005278C7  5B                        POP EBX
005278C8  5D                        POP EBP
005278C9  C3                        RET
switchD_00527711::caseD_2d:
005278CA  B8 31 00 00 00            MOV EAX,0x31
005278CF  5B                        POP EBX
005278D0  5D                        POP EBP
005278D1  C3                        RET
switchD_00527711::caseD_2e:
005278D2  B8 32 00 00 00            MOV EAX,0x32
005278D7  5B                        POP EBX
005278D8  5D                        POP EBP
005278D9  C3                        RET
switchD_00527711::caseD_2f:
005278DA  B8 38 00 00 00            MOV EAX,0x38
005278DF  5B                        POP EBX
005278E0  5D                        POP EBP
005278E1  C3                        RET
switchD_00527711::caseD_30:
005278E2  B8 39 00 00 00            MOV EAX,0x39
005278E7  5B                        POP EBX
005278E8  5D                        POP EBP
005278E9  C3                        RET
switchD_00527711::caseD_31:
005278EA  B8 3A 00 00 00            MOV EAX,0x3a
005278EF  5B                        POP EBX
005278F0  5D                        POP EBP
005278F1  C3                        RET
switchD_00527711::caseD_32:
005278F2  B8 3B 00 00 00            MOV EAX,0x3b
005278F7  5B                        POP EBX
005278F8  5D                        POP EBP
005278F9  C3                        RET
switchD_00527711::caseD_33:
005278FA  B8 33 00 00 00            MOV EAX,0x33
005278FF  5B                        POP EBX
00527900  5D                        POP EBP
00527901  C3                        RET
switchD_00527711::caseD_34:
00527902  B8 2A 00 00 00            MOV EAX,0x2a
00527907  5B                        POP EBX
00527908  5D                        POP EBP
00527909  C3                        RET
switchD_00527711::caseD_35:
0052790A  B8 2E 00 00 00            MOV EAX,0x2e
0052790F  5B                        POP EBX
00527910  5D                        POP EBP
00527911  C3                        RET
switchD_00527711::caseD_36:
00527912  B8 45 00 00 00            MOV EAX,0x45
00527917  5B                        POP EBX
00527918  5D                        POP EBP
00527919  C3                        RET
switchD_00527711::caseD_37:
0052791A  B8 46 00 00 00            MOV EAX,0x46
0052791F  5B                        POP EBX
00527920  5D                        POP EBP
00527921  C3                        RET
switchD_00527711::caseD_38:
00527922  B8 4A 00 00 00            MOV EAX,0x4a
00527927  5B                        POP EBX
00527928  5D                        POP EBP
00527929  C3                        RET
switchD_00527711::caseD_39:
0052792A  B8 4B 00 00 00            MOV EAX,0x4b
0052792F  5B                        POP EBX
00527930  5D                        POP EBP
00527931  C3                        RET
switchD_00527711::caseD_3a:
00527932  B8 43 00 00 00            MOV EAX,0x43
00527937  5B                        POP EBX
00527938  5D                        POP EBP
00527939  C3                        RET
switchD_00527711::caseD_3b:
0052793A  B8 44 00 00 00            MOV EAX,0x44
0052793F  5B                        POP EBX
00527940  5D                        POP EBP
00527941  C3                        RET
switchD_00527711::caseD_3c:
00527942  B8 47 00 00 00            MOV EAX,0x47
00527947  5B                        POP EBX
00527948  5D                        POP EBP
00527949  C3                        RET
switchD_00527711::caseD_3d:
0052794A  B8 41 00 00 00            MOV EAX,0x41
0052794F  5B                        POP EBX
00527950  5D                        POP EBP
00527951  C3                        RET
switchD_00527711::caseD_3e:
00527952  B8 3F 00 00 00            MOV EAX,0x3f
00527957  5B                        POP EBX
00527958  5D                        POP EBP
00527959  C3                        RET
switchD_00527711::caseD_3f:
0052795A  B8 42 00 00 00            MOV EAX,0x42
0052795F  5B                        POP EBX
00527960  5D                        POP EBP
00527961  C3                        RET
switchD_00527711::caseD_40:
00527962  B8 49 00 00 00            MOV EAX,0x49
00527967  5B                        POP EBX
00527968  5D                        POP EBP
00527969  C3                        RET
switchD_00527711::caseD_42:
0052796A  B8 4D 00 00 00            MOV EAX,0x4d
0052796F  5B                        POP EBX
00527970  5D                        POP EBP
00527971  C3                        RET
switchD_00527711::caseD_43:
00527972  B8 4C 00 00 00            MOV EAX,0x4c
00527977  5B                        POP EBX
00527978  5D                        POP EBP
00527979  C3                        RET
switchD_00527711::caseD_96:
0052797A  B8 58 00 00 00            MOV EAX,0x58
0052797F  5B                        POP EBX
00527980  5D                        POP EBP
00527981  C3                        RET
switchD_00527711::caseD_94:
00527982  B8 53 00 00 00            MOV EAX,0x53
00527987  5B                        POP EBX
00527988  5D                        POP EBP
00527989  C3                        RET
switchD_00527711::caseD_98:
0052798A  B8 54 00 00 00            MOV EAX,0x54
0052798F  5B                        POP EBX
00527990  5D                        POP EBP
00527991  C3                        RET
switchD_00527711::caseD_92:
00527992  B8 52 00 00 00            MOV EAX,0x52
00527997  5B                        POP EBX
00527998  5D                        POP EBP
00527999  C3                        RET
switchD_00527711::caseD_93:
0052799A  B8 56 00 00 00            MOV EAX,0x56
0052799F  5B                        POP EBX
005279A0  5D                        POP EBP
005279A1  C3                        RET
switchD_00527711::caseD_95:
005279A2  B8 57 00 00 00            MOV EAX,0x57
005279A7  5B                        POP EBX
005279A8  5D                        POP EBP
005279A9  C3                        RET
switchD_00527711::caseD_97:
005279AA  B8 55 00 00 00            MOV EAX,0x55
005279AF  5B                        POP EBX
005279B0  5D                        POP EBP
005279B1  C3                        RET
switchD_00527711::caseD_41:
005279B2  B8 48 00 00 00            MOV EAX,0x48
005279B7  5B                        POP EBX
005279B8  5D                        POP EBP
005279B9  C3                        RET
switchD_00527711::caseD_44:
005279BA  B8 59 00 00 00            MOV EAX,0x59
005279BF  5B                        POP EBX
005279C0  5D                        POP EBP
005279C1  C3                        RET
switchD_00527711::caseD_45:
005279C2  B8 5A 00 00 00            MOV EAX,0x5a
005279C7  5B                        POP EBX
005279C8  5D                        POP EBP
005279C9  C3                        RET
switchD_00527711::caseD_46:
005279CA  B8 5B 00 00 00            MOV EAX,0x5b
005279CF  5B                        POP EBX
005279D0  5D                        POP EBP
005279D1  C3                        RET
switchD_00527711::caseD_47:
005279D2  B8 5C 00 00 00            MOV EAX,0x5c
005279D7  5B                        POP EBX
005279D8  5D                        POP EBP
005279D9  C3                        RET
switchD_00527711::caseD_48:
005279DA  B8 5D 00 00 00            MOV EAX,0x5d
005279DF  5B                        POP EBX
005279E0  5D                        POP EBP
005279E1  C3                        RET
switchD_00527711::caseD_49:
005279E2  B8 5E 00 00 00            MOV EAX,0x5e
005279E7  5B                        POP EBX
005279E8  5D                        POP EBP
005279E9  C3                        RET
switchD_00527711::caseD_4a:
005279EA  B8 5F 00 00 00            MOV EAX,0x5f
005279EF  5B                        POP EBX
005279F0  5D                        POP EBP
005279F1  C3                        RET
switchD_00527711::caseD_4b:
005279F2  B8 60 00 00 00            MOV EAX,0x60
005279F7  5B                        POP EBX
005279F8  5D                        POP EBP
005279F9  C3                        RET
switchD_00527711::caseD_4c:
005279FA  B8 61 00 00 00            MOV EAX,0x61
005279FF  5B                        POP EBX
00527A00  5D                        POP EBP
00527A01  C3                        RET
switchD_00527711::caseD_4d:
00527A02  B8 62 00 00 00            MOV EAX,0x62
00527A07  5B                        POP EBX
00527A08  5D                        POP EBP
00527A09  C3                        RET
switchD_00527711::caseD_4e:
00527A0A  84 C9                     TEST CL,CL
00527A0C  74 11                     JZ 0x00527a1f
00527A0E  81 E1 FF 00 00 00         AND ECX,0xff
00527A14  83 C1 27                  ADD ECX,0x27
00527A17  8D 41 59                  LEA EAX,[ECX + 0x59]
00527A1A  E9 20 FD FF FF            JMP 0x0052773f
LAB_00527a1f:
00527A1F  B9 4D 00 00 00            MOV ECX,0x4d
00527A24  8D 41 59                  LEA EAX,[ECX + 0x59]
00527A27  E9 13 FD FF FF            JMP 0x0052773f
switchD_00527711::caseD_4f:
00527A2C  B8 84 00 00 00            MOV EAX,0x84
00527A31  5B                        POP EBX
00527A32  5D                        POP EBP
00527A33  C3                        RET
switchD_00527711::caseD_50:
00527A34  B8 85 00 00 00            MOV EAX,0x85
00527A39  5B                        POP EBX
00527A3A  5D                        POP EBP
00527A3B  C3                        RET
switchD_00527711::caseD_51:
00527A3C  B8 67 00 00 00            MOV EAX,0x67
00527A41  5B                        POP EBX
00527A42  5D                        POP EBP
00527A43  C3                        RET
switchD_00527711::caseD_52:
00527A44  B8 68 00 00 00            MOV EAX,0x68
00527A49  5B                        POP EBX
00527A4A  5D                        POP EBP
00527A4B  C3                        RET
switchD_00527711::caseD_53:
00527A4C  B8 69 00 00 00            MOV EAX,0x69
00527A51  5B                        POP EBX
00527A52  5D                        POP EBP
00527A53  C3                        RET
switchD_00527711::caseD_54:
00527A54  B8 6A 00 00 00            MOV EAX,0x6a
00527A59  5B                        POP EBX
00527A5A  5D                        POP EBP
00527A5B  C3                        RET
switchD_00527711::caseD_55:
00527A5C  B8 77 00 00 00            MOV EAX,0x77
00527A61  5B                        POP EBX
00527A62  5D                        POP EBP
00527A63  C3                        RET
switchD_00527711::caseD_56:
00527A64  B8 78 00 00 00            MOV EAX,0x78
00527A69  5B                        POP EBX
00527A6A  5D                        POP EBP
00527A6B  C3                        RET
switchD_00527711::caseD_57:
00527A6C  B8 79 00 00 00            MOV EAX,0x79
00527A71  5B                        POP EBX
00527A72  5D                        POP EBP
00527A73  C3                        RET
switchD_00527711::caseD_58:
00527A74  B8 7A 00 00 00            MOV EAX,0x7a
00527A79  5B                        POP EBX
00527A7A  5D                        POP EBP
00527A7B  C3                        RET
switchD_00527711::caseD_59:
00527A7C  B8 7B 00 00 00            MOV EAX,0x7b
00527A81  5B                        POP EBX
00527A82  5D                        POP EBP
00527A83  C3                        RET
switchD_00527711::caseD_5a:
00527A84  B8 7C 00 00 00            MOV EAX,0x7c
00527A89  5B                        POP EBX
00527A8A  5D                        POP EBP
00527A8B  C3                        RET
switchD_00527711::caseD_5b:
00527A8C  B8 7D 00 00 00            MOV EAX,0x7d
00527A91  5B                        POP EBX
00527A92  5D                        POP EBP
00527A93  C3                        RET
switchD_00527711::caseD_5c:
00527A94  B8 7E 00 00 00            MOV EAX,0x7e
00527A99  5B                        POP EBX
00527A9A  5D                        POP EBP
00527A9B  C3                        RET
switchD_00527711::caseD_5d:
00527A9C  B8 7F 00 00 00            MOV EAX,0x7f
00527AA1  5B                        POP EBX
00527AA2  5D                        POP EBP
00527AA3  C3                        RET
switchD_00527711::caseD_5e:
00527AA4  B8 80 00 00 00            MOV EAX,0x80
00527AA9  5B                        POP EBX
00527AAA  5D                        POP EBP
00527AAB  C3                        RET
switchD_00527711::caseD_5f:
00527AAC  B8 86 00 00 00            MOV EAX,0x86
00527AB1  5B                        POP EBX
00527AB2  5D                        POP EBP
00527AB3  C3                        RET
switchD_00527711::caseD_60:
00527AB4  B8 87 00 00 00            MOV EAX,0x87
00527AB9  5B                        POP EBX
00527ABA  5D                        POP EBP
00527ABB  C3                        RET
switchD_00527711::caseD_61:
00527ABC  B8 74 00 00 00            MOV EAX,0x74
00527AC1  5B                        POP EBX
00527AC2  5D                        POP EBP
00527AC3  C3                        RET
switchD_00527711::caseD_62:
00527AC4  B8 89 00 00 00            MOV EAX,0x89
00527AC9  5B                        POP EBX
00527ACA  5D                        POP EBP
00527ACB  C3                        RET
switchD_00527711::caseD_63:
00527ACC  B8 75 00 00 00            MOV EAX,0x75
00527AD1  5B                        POP EBX
00527AD2  5D                        POP EBP
00527AD3  C3                        RET
switchD_00527711::caseD_65:
00527AD4  84 C9                     TEST CL,CL
00527AD6  74 11                     JZ 0x00527ae9
00527AD8  81 E1 FF 00 00 00         AND ECX,0xff
00527ADE  83 C1 11                  ADD ECX,0x11
00527AE1  8D 41 59                  LEA EAX,[ECX + 0x59]
00527AE4  E9 56 FC FF FF            JMP 0x0052773f
LAB_00527ae9:
00527AE9  B9 4B 00 00 00            MOV ECX,0x4b
00527AEE  8D 41 59                  LEA EAX,[ECX + 0x59]
00527AF1  E9 49 FC FF FF            JMP 0x0052773f
switchD_00527711::caseD_66:
00527AF6  B8 71 00 00 00            MOV EAX,0x71
00527AFB  5B                        POP EBX
00527AFC  5D                        POP EBP
00527AFD  C3                        RET
switchD_00527711::caseD_67:
00527AFE  81 E1 FF 00 00 00         AND ECX,0xff
00527B04  83 C1 6D                  ADD ECX,0x6d
00527B07  E9 31 FC FF FF            JMP 0x0052773d
switchD_00527711::caseD_68:
00527B0C  B8 72 00 00 00            MOV EAX,0x72
00527B11  5B                        POP EBX
00527B12  5D                        POP EBP
00527B13  C3                        RET
switchD_00527711::caseD_69:
00527B14  B8 8C 00 00 00            MOV EAX,0x8c
00527B19  5B                        POP EBX
00527B1A  5D                        POP EBP
00527B1B  C3                        RET
switchD_00527711::caseD_6a:
00527B1C  B8 8D 00 00 00            MOV EAX,0x8d
00527B21  5B                        POP EBX
00527B22  5D                        POP EBP
00527B23  C3                        RET
switchD_00527711::caseD_6b:
00527B24  B8 8E 00 00 00            MOV EAX,0x8e
00527B29  5B                        POP EBX
00527B2A  5D                        POP EBP
00527B2B  C3                        RET
switchD_00527711::caseD_6c:
00527B2C  B8 8F 00 00 00            MOV EAX,0x8f
00527B31  5B                        POP EBX
00527B32  5D                        POP EBP
00527B33  C3                        RET
switchD_00527711::caseD_6d:
00527B34  84 C9                     TEST CL,CL
00527B36  74 11                     JZ 0x00527b49
00527B38  81 E1 FF 00 00 00         AND ECX,0xff
00527B3E  83 C1 09                  ADD ECX,0x9
00527B41  8D 41 59                  LEA EAX,[ECX + 0x59]
00527B44  E9 F6 FB FF FF            JMP 0x0052773f
LAB_00527b49:
00527B49  B9 4C 00 00 00            MOV ECX,0x4c
00527B4E  8D 41 59                  LEA EAX,[ECX + 0x59]
00527B51  E9 E9 FB FF FF            JMP 0x0052773f
switchD_00527711::caseD_6e:
00527B56  B8 66 00 00 00            MOV EAX,0x66
00527B5B  5B                        POP EBX
00527B5C  5D                        POP EBP
00527B5D  C3                        RET
switchD_00527711::caseD_6f:
00527B5E  B8 95 00 00 00            MOV EAX,0x95
00527B63  5B                        POP EBX
00527B64  5D                        POP EBP
00527B65  C3                        RET
switchD_00527711::caseD_70:
00527B66  B8 96 00 00 00            MOV EAX,0x96
00527B6B  5B                        POP EBX
00527B6C  5D                        POP EBP
00527B6D  C3                        RET
switchD_00527711::caseD_71:
00527B6E  B8 9A 00 00 00            MOV EAX,0x9a
00527B73  5B                        POP EBX
00527B74  5D                        POP EBP
00527B75  C3                        RET
switchD_00527711::caseD_72:
00527B76  B8 91 00 00 00            MOV EAX,0x91
00527B7B  5B                        POP EBX
00527B7C  5D                        POP EBP
00527B7D  C3                        RET
switchD_00527711::caseD_73:
00527B7E  B8 97 00 00 00            MOV EAX,0x97
00527B83  5B                        POP EBX
00527B84  5D                        POP EBP
00527B85  C3                        RET
switchD_00527711::caseD_74:
00527B86  B8 98 00 00 00            MOV EAX,0x98
00527B8B  5B                        POP EBX
00527B8C  5D                        POP EBP
00527B8D  C3                        RET
switchD_00527711::caseD_75:
00527B8E  B8 9B 00 00 00            MOV EAX,0x9b
00527B93  5B                        POP EBX
00527B94  5D                        POP EBP
00527B95  C3                        RET
switchD_00527711::caseD_76:
00527B96  B8 99 00 00 00            MOV EAX,0x99
00527B9B  5B                        POP EBX
00527B9C  5D                        POP EBP
00527B9D  C3                        RET
switchD_00527711::caseD_77:
00527B9E  B8 A2 00 00 00            MOV EAX,0xa2
00527BA3  5B                        POP EBX
00527BA4  5D                        POP EBP
00527BA5  C3                        RET
switchD_00527711::caseD_78:
00527BA6  B8 92 00 00 00            MOV EAX,0x92
00527BAB  5B                        POP EBX
00527BAC  5D                        POP EBP
00527BAD  C3                        RET
switchD_00527711::caseD_79:
00527BAE  B8 A3 00 00 00            MOV EAX,0xa3
00527BB3  5B                        POP EBX
00527BB4  5D                        POP EBP
00527BB5  C3                        RET
switchD_00527711::caseD_7a:
00527BB6  81 E1 FF 00 00 00         AND ECX,0xff
00527BBC  81 C1 9D 00 00 00         ADD ECX,0x9d
00527BC2  E9 76 FB FF FF            JMP 0x0052773d
switchD_00527711::caseD_7b:
00527BC7  B8 93 00 00 00            MOV EAX,0x93
00527BCC  5B                        POP EBX
00527BCD  5D                        POP EBP
00527BCE  C3                        RET
switchD_00527711::caseD_7c:
00527BCF  B8 A0 00 00 00            MOV EAX,0xa0
00527BD4  5B                        POP EBX
00527BD5  5D                        POP EBP
00527BD6  C3                        RET
switchD_00527711::caseD_7d:
00527BD7  81 E1 FF 00 00 00         AND ECX,0xff
00527BDD  81 C1 9B 00 00 00         ADD ECX,0x9b
00527BE3  E9 55 FB FF FF            JMP 0x0052773d
switchD_00527711::caseD_7e:
00527BE8  B8 A1 00 00 00            MOV EAX,0xa1
00527BED  5B                        POP EBX
00527BEE  5D                        POP EBP
00527BEF  C3                        RET
switchD_00527711::caseD_90:
00527BF0  B8 A7 00 00 00            MOV EAX,0xa7
00527BF5  5B                        POP EBX
00527BF6  5D                        POP EBP
00527BF7  C3                        RET
switchD_00527711::caseD_64:
00527BF8  B8 A8 00 00 00            MOV EAX,0xa8
00527BFD  5B                        POP EBX
00527BFE  5D                        POP EBP
00527BFF  C3                        RET
