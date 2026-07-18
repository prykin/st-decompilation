MMsgTy::InitMMsg:
005B6B20  55                        PUSH EBP
005B6B21  8B EC                     MOV EBP,ESP
005B6B23  83 EC 48                  SUB ESP,0x48
005B6B26  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B6B2B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005B6B2E  56                        PUSH ESI
005B6B2F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B6B32  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B6B35  6A 00                     PUSH 0x0
005B6B37  52                        PUSH EDX
005B6B38  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B6B3B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B6B41  E8 AA 6C 17 00            CALL 0x0072d7f0
005B6B46  8B F0                     MOV ESI,EAX
005B6B48  83 C4 08                  ADD ESP,0x8
005B6B4B  85 F6                     TEST ESI,ESI
005B6B4D  0F 85 A6 02 00 00         JNZ 0x005b6df9
005B6B53  6A FF                     PUSH -0x1
005B6B55  6A FF                     PUSH -0x1
005B6B57  6A 00                     PUSH 0x0
005B6B59  6A 00                     PUSH 0x0
005B6B5B  6A 00                     PUSH 0x0
005B6B5D  6A 00                     PUSH 0x0
005B6B5F  6A 00                     PUSH 0x0
005B6B61  6A 4B                     PUSH 0x4b
005B6B63  6A 00                     PUSH 0x0
005B6B65  6A 00                     PUSH 0x0
005B6B67  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005B6B6A  6A 00                     PUSH 0x0
005B6B6C  6A 00                     PUSH 0x0
005B6B6E  6A 00                     PUSH 0x0
005B6B70  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B6B75  6A 14                     PUSH 0x14
005B6B77  6A 31                     PUSH 0x31
005B6B79  68 A0 00 00 00            PUSH 0xa0
005B6B7E  6A 07                     PUSH 0x7
005B6B80  6A 12                     PUSH 0x12
005B6B82  6A 12                     PUSH 0x12
005B6B84  6A 24                     PUSH 0x24
005B6B86  68 13 02 00 00            PUSH 0x213
005B6B8B  68 94 01 00 00            PUSH 0x194
005B6B90  8D 8E 9B 00 00 00         LEA ECX,[ESI + 0x9b]
005B6B96  68 10 CC 7C 00            PUSH 0x7ccc10
005B6B9B  51                        PUSH ECX
005B6B9C  89 B0 E6 02 00 00         MOV dword ptr [EAX + 0x2e6],ESI
005B6BA2  8B CE                     MOV ECX,ESI
005B6BA4  C6 86 9A 00 00 00 08      MOV byte ptr [ESI + 0x9a],0x8
005B6BAB  E8 E2 AD E4 FF            CALL 0x00401992
005B6BB0  6A FF                     PUSH -0x1
005B6BB2  6A FF                     PUSH -0x1
005B6BB4  6A 00                     PUSH 0x0
005B6BB6  6A 00                     PUSH 0x0
005B6BB8  6A 00                     PUSH 0x0
005B6BBA  6A 00                     PUSH 0x0
005B6BBC  6A 00                     PUSH 0x0
005B6BBE  6A 4B                     PUSH 0x4b
005B6BC0  6A 00                     PUSH 0x0
005B6BC2  6A 00                     PUSH 0x0
005B6BC4  6A 00                     PUSH 0x0
005B6BC6  6A 00                     PUSH 0x0
005B6BC8  6A 00                     PUSH 0x0
005B6BCA  6A 14                     PUSH 0x14
005B6BCC  6A 34                     PUSH 0x34
005B6BCE  68 A0 00 00 00            PUSH 0xa0
005B6BD3  6A 08                     PUSH 0x8
005B6BD5  6A 02                     PUSH 0x2
005B6BD7  6A 14                     PUSH 0x14
005B6BD9  6A 0F                     PUSH 0xf
005B6BDB  68 13 02 00 00            PUSH 0x213
005B6BE0  68 5C 02 00 00            PUSH 0x25c
005B6BE5  8D 96 96 02 00 00         LEA EDX,[ESI + 0x296]
005B6BEB  68 04 CC 7C 00            PUSH 0x7ccc04
005B6BF0  52                        PUSH EDX
005B6BF1  8B CE                     MOV ECX,ESI
005B6BF3  E8 9A AD E4 FF            CALL 0x00401992
005B6BF8  6A FF                     PUSH -0x1
005B6BFA  6A FF                     PUSH -0x1
005B6BFC  6A 00                     PUSH 0x0
005B6BFE  6A 00                     PUSH 0x0
005B6C00  6A 00                     PUSH 0x0
005B6C02  6A 00                     PUSH 0x0
005B6C04  6A 00                     PUSH 0x0
005B6C06  6A 4B                     PUSH 0x4b
005B6C08  6A 00                     PUSH 0x0
005B6C0A  6A 00                     PUSH 0x0
005B6C0C  6A 00                     PUSH 0x0
005B6C0E  6A 00                     PUSH 0x0
005B6C10  6A 00                     PUSH 0x0
005B6C12  6A 0F                     PUSH 0xf
005B6C14  6A 34                     PUSH 0x34
005B6C16  68 A0 00 00 00            PUSH 0xa0
005B6C1B  6A 07                     PUSH 0x7
005B6C1D  6A 01                     PUSH 0x1
005B6C1F  6A 12                     PUSH 0x12
005B6C21  6A 10                     PUSH 0x10
005B6C23  68 DA 01 00 00            PUSH 0x1da
005B6C28  68 61 02 00 00            PUSH 0x261
005B6C2D  68 F8 CB 7C 00            PUSH 0x7ccbf8
005B6C32  8D 86 91 04 00 00         LEA EAX,[ESI + 0x491]
005B6C38  8B CE                     MOV ECX,ESI
005B6C3A  50                        PUSH EAX
005B6C3B  E8 52 AD E4 FF            CALL 0x00401992
005B6C40  6A FF                     PUSH -0x1
005B6C42  6A FF                     PUSH -0x1
005B6C44  6A 00                     PUSH 0x0
005B6C46  6A 00                     PUSH 0x0
005B6C48  6A 00                     PUSH 0x0
005B6C4A  6A 00                     PUSH 0x0
005B6C4C  6A 00                     PUSH 0x0
005B6C4E  6A 4B                     PUSH 0x4b
005B6C50  6A 00                     PUSH 0x0
005B6C52  6A 00                     PUSH 0x0
005B6C54  6A 00                     PUSH 0x0
005B6C56  6A 00                     PUSH 0x0
005B6C58  6A 00                     PUSH 0x0
005B6C5A  6A 0A                     PUSH 0xa
005B6C5C  6A 33                     PUSH 0x33
005B6C5E  68 9E 00 00 00            PUSH 0x9e
005B6C63  6A 06                     PUSH 0x6
005B6C65  6A 02                     PUSH 0x2
005B6C67  6A 10                     PUSH 0x10
005B6C69  6A 10                     PUSH 0x10
005B6C6B  68 A3 01 00 00            PUSH 0x1a3
005B6C70  68 64 02 00 00            PUSH 0x264
005B6C75  8D 8E 8C 06 00 00         LEA ECX,[ESI + 0x68c]
005B6C7B  68 EC CB 7C 00            PUSH 0x7ccbec
005B6C80  51                        PUSH ECX
005B6C81  8B CE                     MOV ECX,ESI
005B6C83  E8 0A AD E4 FF            CALL 0x00401992
005B6C88  6A FF                     PUSH -0x1
005B6C8A  6A FF                     PUSH -0x1
005B6C8C  6A 00                     PUSH 0x0
005B6C8E  6A 00                     PUSH 0x0
005B6C90  6A 00                     PUSH 0x0
005B6C92  6A 00                     PUSH 0x0
005B6C94  6A 00                     PUSH 0x0
005B6C96  6A 4B                     PUSH 0x4b
005B6C98  6A 00                     PUSH 0x0
005B6C9A  6A 00                     PUSH 0x0
005B6C9C  6A 00                     PUSH 0x0
005B6C9E  6A 00                     PUSH 0x0
005B6CA0  6A 00                     PUSH 0x0
005B6CA2  6A 0A                     PUSH 0xa
005B6CA4  6A 31                     PUSH 0x31
005B6CA6  68 9D 00 00 00            PUSH 0x9d
005B6CAB  6A 06                     PUSH 0x6
005B6CAD  6A 1C                     PUSH 0x1c
005B6CAF  6A 10                     PUSH 0x10
005B6CB1  6A 2F                     PUSH 0x2f
005B6CB3  68 A3 01 00 00            PUSH 0x1a3
005B6CB8  6A 00                     PUSH 0x0
005B6CBA  8D 96 87 08 00 00         LEA EDX,[ESI + 0x887]
005B6CC0  68 E0 CB 7C 00            PUSH 0x7ccbe0
005B6CC5  52                        PUSH EDX
005B6CC6  8B CE                     MOV ECX,ESI
005B6CC8  E8 C5 AC E4 FF            CALL 0x00401992
005B6CCD  6A FF                     PUSH -0x1
005B6CCF  6A FF                     PUSH -0x1
005B6CD1  6A 00                     PUSH 0x0
005B6CD3  6A 00                     PUSH 0x0
005B6CD5  6A 00                     PUSH 0x0
005B6CD7  6A 00                     PUSH 0x0
005B6CD9  6A 00                     PUSH 0x0
005B6CDB  6A 4B                     PUSH 0x4b
005B6CDD  6A 00                     PUSH 0x0
005B6CDF  6A 00                     PUSH 0x0
005B6CE1  6A 00                     PUSH 0x0
005B6CE3  6A 00                     PUSH 0x0
005B6CE5  6A 00                     PUSH 0x0
005B6CE7  6A 0F                     PUSH 0xf
005B6CE9  6A 32                     PUSH 0x32
005B6CEB  68 A0 00 00 00            PUSH 0xa0
005B6CF0  6A 07                     PUSH 0x7
005B6CF2  6A 1D                     PUSH 0x1d
005B6CF4  6A 12                     PUSH 0x12
005B6CF6  6A 32                     PUSH 0x32
005B6CF8  68 DA 01 00 00            PUSH 0x1da
005B6CFD  6A 00                     PUSH 0x0
005B6CFF  68 D4 CB 7C 00            PUSH 0x7ccbd4
005B6D04  8D 86 82 0A 00 00         LEA EAX,[ESI + 0xa82]
005B6D0A  8B CE                     MOV ECX,ESI
005B6D0C  50                        PUSH EAX
005B6D0D  E8 80 AC E4 FF            CALL 0x00401992
005B6D12  6A FF                     PUSH -0x1
005B6D14  6A FF                     PUSH -0x1
005B6D16  6A 00                     PUSH 0x0
005B6D18  6A 00                     PUSH 0x0
005B6D1A  6A 00                     PUSH 0x0
005B6D1C  6A 00                     PUSH 0x0
005B6D1E  6A 00                     PUSH 0x0
005B6D20  6A 4B                     PUSH 0x4b
005B6D22  6A 00                     PUSH 0x0
005B6D24  6A 00                     PUSH 0x0
005B6D26  6A 00                     PUSH 0x0
005B6D28  6A 00                     PUSH 0x0
005B6D2A  6A 00                     PUSH 0x0
005B6D2C  6A 14                     PUSH 0x14
005B6D2E  6A 33                     PUSH 0x33
005B6D30  68 A0 00 00 00            PUSH 0xa0
005B6D35  6A 09                     PUSH 0x9
005B6D37  6A 21                     PUSH 0x21
005B6D39  6A 13                     PUSH 0x13
005B6D3B  6A 34                     PUSH 0x34
005B6D3D  68 13 02 00 00            PUSH 0x213
005B6D42  6A 00                     PUSH 0x0
005B6D44  8D 8E 7D 0C 00 00         LEA ECX,[ESI + 0xc7d]
005B6D4A  68 C8 CB 7C 00            PUSH 0x7ccbc8
005B6D4F  51                        PUSH ECX
005B6D50  8B CE                     MOV ECX,ESI
005B6D52  E8 3B AC E4 FF            CALL 0x00401992
005B6D57  6A FF                     PUSH -0x1
005B6D59  6A FF                     PUSH -0x1
005B6D5B  6A 00                     PUSH 0x0
005B6D5D  6A 00                     PUSH 0x0
005B6D5F  6A 00                     PUSH 0x0
005B6D61  6A 00                     PUSH 0x0
005B6D63  6A 00                     PUSH 0x0
005B6D65  6A 4B                     PUSH 0x4b
005B6D67  6A 00                     PUSH 0x0
005B6D69  6A 00                     PUSH 0x0
005B6D6B  6A 00                     PUSH 0x0
005B6D6D  6A 00                     PUSH 0x0
005B6D6F  6A 00                     PUSH 0x0
005B6D71  6A 14                     PUSH 0x14
005B6D73  6A 30                     PUSH 0x30
005B6D75  68 A0 00 00 00            PUSH 0xa0
005B6D7A  6A 08                     PUSH 0x8
005B6D7C  6A 26                     PUSH 0x26
005B6D7E  6A 12                     PUSH 0x12
005B6D80  6A 37                     PUSH 0x37
005B6D82  68 13 02 00 00            PUSH 0x213
005B6D87  68 B4 00 00 00            PUSH 0xb4
005B6D8C  8D 96 78 0E 00 00         LEA EDX,[ESI + 0xe78]
005B6D92  68 BC CB 7C 00            PUSH 0x7ccbbc
005B6D97  52                        PUSH EDX
005B6D98  8B CE                     MOV ECX,ESI
005B6D9A  E8 F3 AB E4 FF            CALL 0x00401992
005B6D9F  6A FF                     PUSH -0x1
005B6DA1  6A FF                     PUSH -0x1
005B6DA3  6A 00                     PUSH 0x0
005B6DA5  6A 00                     PUSH 0x0
005B6DA7  6A 00                     PUSH 0x0
005B6DA9  6A 00                     PUSH 0x0
005B6DAB  6A 00                     PUSH 0x0
005B6DAD  6A 4B                     PUSH 0x4b
005B6DAF  6A 00                     PUSH 0x0
005B6DB1  6A 00                     PUSH 0x0
005B6DB3  6A 00                     PUSH 0x0
005B6DB5  6A 00                     PUSH 0x0
005B6DB7  6A 00                     PUSH 0x0
005B6DB9  6A 14                     PUSH 0x14
005B6DBB  6A 00                     PUSH 0x0
005B6DBD  6A 00                     PUSH 0x0
005B6DBF  6A 00                     PUSH 0x0
005B6DC1  6A 00                     PUSH 0x0
005B6DC3  6A 11                     PUSH 0x11
005B6DC5  68 B5 00 00 00            PUSH 0xb5
005B6DCA  68 03 02 00 00            PUSH 0x203
005B6DCF  6A 30                     PUSH 0x30
005B6DD1  68 B0 CB 7C 00            PUSH 0x7ccbb0
005B6DD6  8D 86 AF 1C 00 00         LEA EAX,[ESI + 0x1caf]
005B6DDC  8B CE                     MOV ECX,ESI
005B6DDE  50                        PUSH EAX
005B6DDF  E8 AE AB E4 FF            CALL 0x00401992
005B6DE4  8B CE                     MOV ECX,ESI
005B6DE6  E8 43 D8 E4 FF            CALL 0x0040462e
005B6DEB  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005B6DEE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B6DF4  5E                        POP ESI
005B6DF5  8B E5                     MOV ESP,EBP
005B6DF7  5D                        POP EBP
005B6DF8  C3                        RET
LAB_005b6df9:
005B6DF9  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005B6DFC  68 9C CB 7C 00            PUSH 0x7ccb9c
005B6E01  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B6E06  56                        PUSH ESI
005B6E07  6A 00                     PUSH 0x0
005B6E09  6A 22                     PUSH 0x22
005B6E0B  68 74 CB 7C 00            PUSH 0x7ccb74
005B6E10  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B6E16  E8 B5 66 0F 00            CALL 0x006ad4d0
005B6E1B  83 C4 18                  ADD ESP,0x18
005B6E1E  85 C0                     TEST EAX,EAX
005B6E20  74 01                     JZ 0x005b6e23
005B6E22  CC                        INT3
LAB_005b6e23:
005B6E23  6A 22                     PUSH 0x22
005B6E25  68 74 CB 7C 00            PUSH 0x7ccb74
005B6E2A  6A 00                     PUSH 0x0
005B6E2C  56                        PUSH ESI
005B6E2D  E8 0E F0 0E 00            CALL 0x006a5e40
005B6E32  5E                        POP ESI
005B6E33  8B E5                     MOV ESP,EBP
005B6E35  5D                        POP EBP
005B6E36  C3                        RET
