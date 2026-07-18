STAppC::DoneApp:
0056C750  55                        PUSH EBP
0056C751  8B EC                     MOV EBP,ESP
0056C753  81 EC 90 00 00 00         SUB ESP,0x90
0056C759  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056C75E  56                        PUSH ESI
0056C75F  57                        PUSH EDI
0056C760  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0056C763  33 FF                     XOR EDI,EDI
0056C765  8D 55 B8                  LEA EDX,[EBP + -0x48]
0056C768  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0056C76B  57                        PUSH EDI
0056C76C  52                        PUSH EDX
0056C76D  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0056C770  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056C776  E8 75 10 1C 00            CALL 0x0072d7f0
0056C77B  8B F0                     MOV ESI,EAX
0056C77D  83 C4 08                  ADD ESP,0x8
0056C780  3B F7                     CMP ESI,EDI
0056C782  0F 85 13 03 00 00         JNZ 0x0056ca9b
0056C788  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0056C78B  8B 8E 89 11 00 00         MOV ECX,dword ptr [ESI + 0x1189]
0056C791  8D 86 89 11 00 00         LEA EAX,[ESI + 0x1189]
0056C797  3B CF                     CMP ECX,EDI
0056C799  74 06                     JZ 0x0056c7a1
0056C79B  50                        PUSH EAX
0056C79C  E8 BF E8 13 00            CALL 0x006ab060
LAB_0056c7a1:
0056C7A1  89 BE 8D 11 00 00         MOV dword ptr [ESI + 0x118d],EDI
0056C7A7  A1 40 67 80 00            MOV EAX,[0x00806740]
0056C7AC  3B C7                     CMP EAX,EDI
0056C7AE  74 06                     JZ 0x0056c7b6
0056C7B0  50                        PUSH EAX
0056C7B1  E8 5A 19 14 00            CALL 0x006ae110
LAB_0056c7b6:
0056C7B6  68 3C 16 81 00            PUSH 0x81163c
0056C7BB  8B CE                     MOV ECX,ESI
0056C7BD  89 3D 40 67 80 00         MOV dword ptr [0x00806740],EDI
0056C7C3  E8 76 55 E9 FF            CALL 0x00401d3e
0056C7C8  68 6C 17 81 00            PUSH 0x81176c
0056C7CD  8B CE                     MOV ECX,ESI
0056C7CF  E8 6A 55 E9 FF            CALL 0x00401d3e
0056C7D4  8B CE                     MOV ECX,ESI
0056C7D6  E8 87 6D E9 FF            CALL 0x00403562
0056C7DB  E8 6E 7C E9 FF            CALL 0x0040444e
0056C7E0  8B 86 E2 4E 00 00         MOV EAX,dword ptr [ESI + 0x4ee2]
0056C7E6  3B C7                     CMP EAX,EDI
0056C7E8  74 06                     JZ 0x0056c7f0
0056C7EA  50                        PUSH EAX
0056C7EB  E8 20 19 14 00            CALL 0x006ae110
LAB_0056c7f0:
0056C7F0  8B 86 E6 4E 00 00         MOV EAX,dword ptr [ESI + 0x4ee6]
0056C7F6  89 BE E2 4E 00 00         MOV dword ptr [ESI + 0x4ee2],EDI
0056C7FC  3B C7                     CMP EAX,EDI
0056C7FE  74 06                     JZ 0x0056c806
0056C800  50                        PUSH EAX
0056C801  E8 0A 19 14 00            CALL 0x006ae110
LAB_0056c806:
0056C806  89 BE E6 4E 00 00         MOV dword ptr [ESI + 0x4ee6],EDI
0056C80C  A1 A0 75 80 00            MOV EAX,[0x008075a0]
0056C811  3B C7                     CMP EAX,EDI
0056C813  74 0C                     JZ 0x0056c821
0056C815  50                        PUSH EAX
0056C816  E8 85 72 15 00            CALL 0x006c3aa0
0056C81B  89 3D A0 75 80 00         MOV dword ptr [0x008075a0],EDI
LAB_0056c821:
0056C821  A1 A4 75 80 00            MOV EAX,[0x008075a4]
0056C826  3B C7                     CMP EAX,EDI
0056C828  74 0C                     JZ 0x0056c836
0056C82A  50                        PUSH EAX
0056C82B  E8 90 62 15 00            CALL 0x006c2ac0
0056C830  89 3D A4 75 80 00         MOV dword ptr [0x008075a4],EDI
LAB_0056c836:
0056C836  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0056C83B  3B C7                     CMP EAX,EDI
0056C83D  74 0C                     JZ 0x0056c84b
0056C83F  50                        PUSH EAX
0056C840  E8 7B 74 14 00            CALL 0x006b3cc0
0056C845  89 3D A8 75 80 00         MOV dword ptr [0x008075a8],EDI
LAB_0056c84b:
0056C84B  A1 9C 75 80 00            MOV EAX,[0x0080759c]
0056C850  3B C7                     CMP EAX,EDI
0056C852  74 0C                     JZ 0x0056c860
0056C854  50                        PUSH EAX
0056C855  E8 A6 DD 14 00            CALL 0x006ba600
0056C85A  89 3D 9C 75 80 00         MOV dword ptr [0x0080759c],EDI
LAB_0056c860:
0056C860  A1 60 67 80 00            MOV EAX,[0x00806760]
0056C865  50                        PUSH EAX
0056C866  E8 CE 77 E9 FF            CALL 0x00404039
0056C86B  A1 58 67 80 00            MOV EAX,[0x00806758]
0056C870  83 C4 04                  ADD ESP,0x4
0056C873  3B C7                     CMP EAX,EDI
0056C875  74 09                     JZ 0x0056c880
0056C877  50                        PUSH EAX
0056C878  E8 F3 48 18 00            CALL 0x006f1170
0056C87D  83 C4 04                  ADD ESP,0x4
LAB_0056c880:
0056C880  8B 0D 60 67 80 00         MOV ECX,dword ptr [0x00806760]
0056C886  89 3D 58 67 80 00         MOV dword ptr [0x00806758],EDI
0056C88C  3B CF                     CMP ECX,EDI
0056C88E  74 33                     JZ 0x0056c8c3
0056C890  68 9C 67 80 00            PUSH 0x80679c
0056C895  E8 46 58 18 00            CALL 0x006f20e0
0056C89A  39 3D 64 67 80 00         CMP dword ptr [0x00806764],EDI
0056C8A0  74 0D                     JZ 0x0056c8af
0056C8A2  68 64 67 80 00            PUSH 0x806764
0056C8A7  E8 54 DA 19 00            CALL 0x0070a300
0056C8AC  83 C4 04                  ADD ESP,0x4
LAB_0056c8af:
0056C8AF  A1 60 67 80 00            MOV EAX,[0x00806760]
0056C8B4  50                        PUSH EAX
0056C8B5  E8 B6 48 18 00            CALL 0x006f1170
0056C8BA  83 C4 04                  ADD ESP,0x4
0056C8BD  89 3D 60 67 80 00         MOV dword ptr [0x00806760],EDI
LAB_0056c8c3:
0056C8C3  39 3D 84 67 80 00         CMP dword ptr [0x00806784],EDI
0056C8C9  74 0D                     JZ 0x0056c8d8
0056C8CB  68 84 67 80 00            PUSH 0x806784
0056C8D0  E8 2B DA 19 00            CALL 0x0070a300
0056C8D5  83 C4 04                  ADD ESP,0x4
LAB_0056c8d8:
0056C8D8  A1 80 67 80 00            MOV EAX,[0x00806780]
0056C8DD  3B C7                     CMP EAX,EDI
0056C8DF  74 09                     JZ 0x0056c8ea
0056C8E1  50                        PUSH EAX
0056C8E2  E8 89 48 18 00            CALL 0x006f1170
0056C8E7  83 C4 04                  ADD ESP,0x4
LAB_0056c8ea:
0056C8EA  A1 98 67 80 00            MOV EAX,[0x00806798]
0056C8EF  89 3D 80 67 80 00         MOV dword ptr [0x00806780],EDI
0056C8F5  3B C7                     CMP EAX,EDI
0056C8F7  74 09                     JZ 0x0056c902
0056C8F9  50                        PUSH EAX
0056C8FA  E8 71 48 18 00            CALL 0x006f1170
0056C8FF  83 C4 04                  ADD ESP,0x4
LAB_0056c902:
0056C902  A1 5C 67 80 00            MOV EAX,[0x0080675c]
0056C907  89 3D 98 67 80 00         MOV dword ptr [0x00806798],EDI
0056C90D  3B C7                     CMP EAX,EDI
0056C90F  74 09                     JZ 0x0056c91a
0056C911  50                        PUSH EAX
0056C912  E8 59 48 18 00            CALL 0x006f1170
0056C917  83 C4 04                  ADD ESP,0x4
LAB_0056c91a:
0056C91A  89 3D 5C 67 80 00         MOV dword ptr [0x0080675c],EDI
0056C920  8B 86 DE 4E 00 00         MOV EAX,dword ptr [ESI + 0x4ede]
0056C926  3B C7                     CMP EAX,EDI
0056C928  74 06                     JZ 0x0056c930
0056C92A  50                        PUSH EAX
0056C92B  E8 E0 17 14 00            CALL 0x006ae110
LAB_0056c930:
0056C930  8B 86 A7 4E 00 00         MOV EAX,dword ptr [ESI + 0x4ea7]
0056C936  89 BE DE 4E 00 00         MOV dword ptr [ESI + 0x4ede],EDI
0056C93C  3B C7                     CMP EAX,EDI
0056C93E  74 06                     JZ 0x0056c946
0056C940  50                        PUSH EAX
0056C941  E8 2A 8C 14 00            CALL 0x006b5570
LAB_0056c946:
0056C946  8B 86 AB 4E 00 00         MOV EAX,dword ptr [ESI + 0x4eab]
0056C94C  89 BE A7 4E 00 00         MOV dword ptr [ESI + 0x4ea7],EDI
0056C952  3B C7                     CMP EAX,EDI
0056C954  74 06                     JZ 0x0056c95c
0056C956  50                        PUSH EAX
0056C957  E8 14 8C 14 00            CALL 0x006b5570
LAB_0056c95c:
0056C95C  8B 86 DA 4E 00 00         MOV EAX,dword ptr [ESI + 0x4eda]
0056C962  89 BE AB 4E 00 00         MOV dword ptr [ESI + 0x4eab],EDI
0056C968  3B C7                     CMP EAX,EDI
0056C96A  74 06                     JZ 0x0056c972
0056C96C  50                        PUSH EAX
0056C96D  E8 FE 8B 14 00            CALL 0x006b5570
LAB_0056c972:
0056C972  8B 8E 12 7D 00 00         MOV ECX,dword ptr [ESI + 0x7d12]
0056C978  8D 86 12 7D 00 00         LEA EAX,[ESI + 0x7d12]
0056C97E  3B CF                     CMP ECX,EDI
0056C980  89 BE DA 4E 00 00         MOV dword ptr [ESI + 0x4eda],EDI
0056C986  74 06                     JZ 0x0056c98e
0056C988  50                        PUSH EAX
0056C989  E8 D2 E6 13 00            CALL 0x006ab060
LAB_0056c98e:
0056C98E  8B 8E F2 76 00 00         MOV ECX,dword ptr [ESI + 0x76f2]
0056C994  8D 86 F2 76 00 00         LEA EAX,[ESI + 0x76f2]
0056C99A  3B CF                     CMP ECX,EDI
0056C99C  74 06                     JZ 0x0056c9a4
0056C99E  50                        PUSH EAX
0056C99F  E8 BC E6 13 00            CALL 0x006ab060
LAB_0056c9a4:
0056C9A4  8B CE                     MOV ECX,ESI
0056C9A6  E8 DB 74 E9 FF            CALL 0x00403e86
0056C9AB  83 C6 38                  ADD ESI,0x38
0056C9AE  6A 01                     PUSH 0x1
0056C9B0  8B CE                     MOV ECX,ESI
0056C9B2  E8 02 79 E9 FF            CALL 0x004042b9
0056C9B7  8B CE                     MOV ECX,ESI
0056C9B9  E8 06 69 E9 FF            CALL 0x004032c4
0056C9BE  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0056C9C4  8D 85 74 FF FF FF         LEA EAX,[EBP + 0xffffff74]
0056C9CA  8D 95 70 FF FF FF         LEA EDX,[EBP + 0xffffff70]
0056C9D0  57                        PUSH EDI
0056C9D1  50                        PUSH EAX
0056C9D2  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0056C9D5  89 8D 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ECX
0056C9DB  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056C9E1  E8 0A 0E 1C 00            CALL 0x0072d7f0
0056C9E6  83 C4 08                  ADD ESP,0x8
0056C9E9  3B C7                     CMP EAX,EDI
0056C9EB  75 21                     JNZ 0x0056ca0e
0056C9ED  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0056C9F0  39 3E                     CMP dword ptr [ESI],EDI
0056C9F2  74 0C                     JZ 0x0056ca00
0056C9F4  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0056C9F7  51                        PUSH ECX
0056C9F8  E8 D3 B7 14 00            CALL 0x006b81d0
0056C9FD  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
LAB_0056ca00:
0056CA00  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
0056CA06  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0056CA0C  EB 0B                     JMP 0x0056ca19
LAB_0056ca0e:
0056CA0E  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
0056CA14  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_0056ca19:
0056CA19  8B 0D 48 67 80 00         MOV ECX,dword ptr [0x00806748]
0056CA1F  51                        PUSH ECX
0056CA20  FF 15 20 BE 85 00         CALL dword ptr [0x0085be20]
0056CA26  8B 15 70 6D 85 00         MOV EDX,dword ptr [0x00856d70]
0056CA2C  89 3D 48 67 80 00         MOV dword ptr [0x00806748],EDI
0056CA32  52                        PUSH EDX
0056CA33  68 3C 9E 7C 00            PUSH 0x7c9e3c
0056CA38  FF 15 1C BE 85 00         CALL dword ptr [0x0085be1c]
0056CA3E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0056CA41  8B 8E 5A 11 00 00         MOV ECX,dword ptr [ESI + 0x115a]
0056CA47  8D 86 5A 11 00 00         LEA EAX,[ESI + 0x115a]
0056CA4D  3B CF                     CMP ECX,EDI
0056CA4F  74 06                     JZ 0x0056ca57
0056CA51  50                        PUSH EAX
0056CA52  E8 09 E6 13 00            CALL 0x006ab060
LAB_0056ca57:
0056CA57  8B CE                     MOV ECX,ESI
0056CA59  E8 82 6C 17 00            CALL 0x006e36e0
0056CA5E  39 3D D4 30 80 00         CMP dword ptr [0x008030d4],EDI
0056CA64  74 0A                     JZ 0x0056ca70
0056CA66  68 D4 30 80 00            PUSH 0x8030d4
0056CA6B  E8 F0 E5 13 00            CALL 0x006ab060
LAB_0056ca70:
0056CA70  39 3D D0 2A 80 00         CMP dword ptr [0x00802ad0],EDI
0056CA76  74 0A                     JZ 0x0056ca82
0056CA78  68 D0 2A 80 00            PUSH 0x802ad0
0056CA7D  E8 DE E5 13 00            CALL 0x006ab060
LAB_0056ca82:
0056CA82  68 00 E0 85 00            PUSH 0x85e000
0056CA87  FF 15 70 BC 85 00         CALL dword ptr [0x0085bc70]
0056CA8D  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0056CA90  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0056CA95  5F                        POP EDI
0056CA96  5E                        POP ESI
0056CA97  8B E5                     MOV ESP,EBP
0056CA99  5D                        POP EBP
0056CA9A  C3                        RET
LAB_0056ca9b:
0056CA9B  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0056CA9E  68 E4 A0 7C 00            PUSH 0x7ca0e4
0056CAA3  68 CC 4C 7A 00            PUSH 0x7a4ccc
0056CAA8  56                        PUSH ESI
0056CAA9  57                        PUSH EDI
0056CAAA  68 1C 03 00 00            PUSH 0x31c
0056CAAF  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056CAB4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056CABA  E8 11 0A 14 00            CALL 0x006ad4d0
0056CABF  83 C4 18                  ADD ESP,0x18
0056CAC2  85 C0                     TEST EAX,EAX
0056CAC4  74 01                     JZ 0x0056cac7
0056CAC6  CC                        INT3
LAB_0056cac7:
0056CAC7  68 1D 03 00 00            PUSH 0x31d
0056CACC  68 C8 A0 7C 00            PUSH 0x7ca0c8
0056CAD1  57                        PUSH EDI
0056CAD2  56                        PUSH ESI
0056CAD3  E8 68 93 13 00            CALL 0x006a5e40
0056CAD8  5F                        POP EDI
0056CAD9  5E                        POP ESI
0056CADA  8B E5                     MOV ESP,EBP
0056CADC  5D                        POP EBP
0056CADD  C3                        RET
