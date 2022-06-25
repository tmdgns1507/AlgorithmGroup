using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AlgorithmStudy05
{
    // 2022-05-20 ~ 2022-06-25
    // Week05
    // 없는 숫자 더하기
    // https://programmers.co.kr/learn/courses/30/lessons/42578

    class Disguise
    {
        public int solution(string[,] clothes)
        {
            int answer = 1;
            Dictionary<string, List<string>> clothesDic = new Dictionary<string, List<string>>();

            for (int i = 0; i < clothes.GetLength(0); i++)
            {
                if (clothesDic.ContainsKey(clothes[i, 1]) == false)
                    clothesDic[clothes[i, 1]] = new List<string>();

                clothesDic[clothes[i, 1]].Add(clothes[i, 0]);
            }

            foreach (KeyValuePair<string, List<string>> clothPair in clothesDic)
                answer *= clothPair.Value.Count() + 1;

            answer--;
            return answer;
        }
    }
}
